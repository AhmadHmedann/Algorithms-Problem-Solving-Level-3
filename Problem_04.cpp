//write a program to fill a 3*3 matrix with random numbers, then sum each col in another array and print them:
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

void fillMatrixWithRandomNumbers(int arr[3][3], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            arr[i][j] = randomNumberBetween(1, 99);
        }
    }
}
void printMatrix(int arr[3][3], int rows,int cols)
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
int colsSum(int arr[3][3], int rows, int colNumber)
{
    int sum = 0;
    for (int i=0; i < rows; i++)
    {
        sum += arr[i][colNumber];
    }
    return sum;
}
void sumColsInMatrix(int arr[3][3], int colsSumArray[3], int rows, int cols)
{
    for (int j = 0; j < cols; j++)
    {
        colsSumArray[j] = colsSum(arr, rows, j);
    }
}
void printSumColsArray(int arr[3][3],int colsSumArray[3],int rows,int cols)
{
    for(int j=0;j<cols;j++)
    {
        std::cout<<"Cols "<<j+1<<" Sum = "<< colsSumArray[j]<<std::endl;
    }
}
int main(){
    srand((unsigned)time(NULL));
    int arr[3][3];
    int colsSumArray[3];
    fillMatrixWithRandomNumbers(arr,3,3);
    printMatrix(arr,3,3);
    sumColsInMatrix(arr,colsSumArray,3,3);
    printSumColsArray(arr,colsSumArray,3,3);
    return 0;
}