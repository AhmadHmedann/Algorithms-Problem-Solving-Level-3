//Write a program to print the intersected numbers in two given matrices
#include <iostream>
#include <iomanip>

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

bool numberExistsInMatrix(int arr[3][3], short number, short rows, short cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (number == arr[i][j])
                return true;
        }
    }
    return false;
}
void printIntersectedNumbersInTwoMatrices(int arr1[3][3],int arr2[3][3],short rows, short cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if(numberExistsInMatrix(arr2,arr1[i][j],3,3))
            {
                std::cout<<arr1[i][j]<<"        ";
            }
        }
    }
}
int main()
{
    srand((unsigned)time(NULL));
    int arr[3][3], arr2[3][3];
    fillMatrixWithRandomNumbers(arr, 3, 3);
    std::cout<<"Matrix1 :\n";
    printMatrix(arr, 3, 3);
    fillMatrixWithRandomNumbers(arr2, 3, 3);
    std::cout << "Matrix2 :\n";
    printMatrix(arr2, 3, 3);
    std::cout<<"Intersected Numbers are: \n";
    printIntersectedNumbersInTwoMatrices(arr,arr2,3,3);
    return 0;

}