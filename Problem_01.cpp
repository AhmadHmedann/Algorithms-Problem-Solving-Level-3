// write a program to fill a 3*3 matrix with random numbers

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int randomNumberBetween(short from, short to)
{
    if (from > to)
        std::swap(from, to);
    return (rand() % (to - from + 1)) + from;
}
void FillMatrixWithRandomNumbers(int arr[3][3],short rows, short cols)
{
    
    for (int i = 0; i <rows; i++)
    {
        for (int j = 0; j <cols; j++)
        {
            arr[i][j] = randomNumberBetween(1, 99);
        }
    }
   
}
void printMatrix(int arr[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<setw(3)<<arr[i][j]<<"  ";
        }
        cout<<endl;
    }
}

int main() 
{
    srand(time(nullptr));
    int arr[3][3];
    FillMatrixWithRandomNumbers(arr,3,3);
    printMatrix(arr);
    
    return 0;
}