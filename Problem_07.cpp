// Write a program to count given number in matrix.
//Write a program to check if a given number exists in matrix or not.

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
            arr[i][j] = randomNumberBetween(1, 10);
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
int readNumber()
{
    int num;
    std::cout << "Enter the number to count in matrix \n";
    std::cin >> num;
    return num;
}
int countGivenNumberInMatrix(int arr[3][3], short rows, short cols, short givenNumber)
{
    int counter = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] == givenNumber)
                counter++;
        }
    }
    return counter;
}
bool numberExistsInMatrix(int arr[3][3], short number, short rows, short cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (number==arr[i][j])
            return true;
        }
    }
    return false;
}
int main()
{
    srand((unsigned)time(NULL));
    int arr[3][3];
    int number = readNumber();
    fillMatrixWithRandomNumbers(arr, 3, 3);
    printMatrix(arr, 3, 3);
    std::cout << "Number " << number << " count in matrix is :" << countGivenNumberInMatrix(arr, 3, 3, number)<<std::endl;
    if(numberExistsInMatrix(arr,number,3,3))
    {
       std:: cout<<"Yes, it is exists\n";
    }
    else{
        std::cout<<"No, it ids not exists\n";
    }
    return 0;
}
