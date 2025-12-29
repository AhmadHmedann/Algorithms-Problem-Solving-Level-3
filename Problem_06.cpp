// Write a program to fill two 3*3 matrix with random numbers and then multiply them into third matrix and print them.
#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
#include <cstdlib>
#include <ctime>
int randomNumberBetween(int from, int to)
{
    if (from > to)
    {
        std::swap(from, to);
    }

    return rand() % (to - from + 1) + from;
}

void fillMatrixWithRandomNumbers( int arr[3][3], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            arr[i][j] = randomNumberBetween(1, 10);
        }
    }
}

void printMatrix(const int arr[3][3], int rows, int cols)
{

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
           printf("%0*d   ",2,arr[i][j]);
        }
        std::cout << "\n";
    }
}
void multiplyTwoMatrixes(const int arr1[3][3], const int arr2[3][3],  int resultMatrix[3][3], short rows, short cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            resultMatrix[i][j] = arr1[i][j] * arr2[i][j];
        }
    }
}
int main()
{
    srand((unsigned)time(NULL));
    int arr1[3][3], arr2[3][3],resultMatrix[3][3];
    fillMatrixWithRandomNumbers(arr1,3,3);
    fillMatrixWithRandomNumbers(arr2, 3, 3);
    multiplyTwoMatrixes(arr1,arr2,resultMatrix,3,3);
    std::cout<<"Matrix1:\n";
    printMatrix(arr1,3,3);
    std::cout << "Matrix2:\n";
    printMatrix(arr2, 3, 3);
    std::cout << "Result:\n";
    printMatrix(resultMatrix, 3, 3);
    return 0;
}