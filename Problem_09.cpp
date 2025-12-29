// Write a program to print Fibonacci Series 0f 10
#include <iostream>

void PrintFebonacciSeries(short num1, short num2, short length)
{
    short result = 0;
    std::cout << num1 << "  " << num2 << "  ";
    for (int i = 0; i < length - 2; i++)
    {
        result = num1 + num2;
        num1 = num2;
        num2 = result;
        std::cout << result << "    ";
    }
}
void PrintFebonacciSeriesWithRecursion(short num1, short num2, int length)
{
    if (length > 0)
    {
        short result = 0;
        std::cout << num1 << "  " ;
        PrintFebonacciSeriesWithRecursion(num2, num1 + num2, length - 1);
    }
}
int main()
{
     PrintFebonacciSeries(1, 1, 10);
     std::cout<<"Fevonacci Series with recursion\n";
    PrintFebonacciSeriesWithRecursion(1, 1, 10);
    return 0;
}