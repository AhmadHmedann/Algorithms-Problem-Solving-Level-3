// write a program to fill a 3*3 matrix with random numbers

#include <iostream>
using namespace std;
int randomNumberBetween(short from, short to)
{
    if (from > to)
        std::swap(from, to);
    return (rand() % (to - from + 1)) + from;
}
void generateRandomMatrix(int arr[3][3])
{
    
    for (int i = 0; i <3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            arr[i][j] = randomNumberBetween(200, 100);
        }
    }
   
}
void printArray(int arr[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<arr[i][j]<<"  ";
        }
        cout<<endl;
    }
}

int main() 
{
    srand(time(nullptr));
    int arr[3][3];
    generateRandomMatrix(arr);
    printArray(arr);
    
    return 0;
}