// Write a program to fill 3*3 matrix with ordered numbers, and print it, then transpose matrix and print it
#include <iostream>
#include <iomanip>
void fillMatrixWithOrderedNumbers(int arr[3][3], int rows, int cols)
{
    int counter = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            arr[i][j] = ++counter;
        }
    }
}
void transposeMatrix(int arr1[3][3], int arr2[3][3], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            arr2[i][j]=arr1[j][i];
        }
    }
}
void printMatrix(int arr[3][3], int rows, int cols)
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
int main()
{
    int arr[3][3];
    int transposeArr[3][3];
    fillMatrixWithOrderedNumbers(arr, 3, 3);
    printMatrix(arr, 3, 3);
    std::cout<<"the following is the transpose matrix \n";
    transposeMatrix(arr,transposeArr,3,3);
    printMatrix(transposeArr,3,3);
    return 0;
}