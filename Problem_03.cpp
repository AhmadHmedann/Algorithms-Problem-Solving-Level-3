// Write a program to fill a 3*3 matrix with random numbers, then sum each row in separate array and print the result

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

void fillMatrixWithRandomNumbers(int arr[3][3], short rows, short cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            arr[i][j] = randomNumberBetween(1, 99);
        }
    }
}
void printMatrix(int arr[3][3], short rows, short cols)
{

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            std::cout << std::setw(3) << arr[i][j] << "  ";
        }
        std::cout << "\n";
    }
}
int rowSum(int arr[3][3], short rownumber, short cols)
{
    int sum = 0;
    for (int j = 0; j < cols; j++)
    {
        sum += arr[rownumber][j];
    }
    return sum;
}
void sumMatrixInArray(int arr[3][3], int sumArray[3], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        sumArray[i] = rowSum(arr, i,cols);
    }
}
void PrintRowsSumArray(int sumArray[3],int rows)
{
    for(int i=0 ;i<rows;i++)
    {
        std::cout<<"Row "<<i+1<<" Sum = "<<sumArray[i]<<std::endl;
    }
}
int main()
{
    srand((unsigned)time(NULL));
    int arr[3][3];
    int sumArray[3];
    fillMatrixWithRandomNumbers(arr, 3, 3);
    printMatrix(arr, 3, 3);
    sumMatrixInArray(arr,sumArray,3,3);
    PrintRowsSumArray(sumArray,3);
    return 0;
}