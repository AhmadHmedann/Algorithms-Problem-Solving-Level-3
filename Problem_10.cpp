// Write a program to read a string  then print the first letter of each word in that string.
#include <iostream>
#include <string>

std::string readString()
{
    std::string myString;
    std::cout << "Please Enter your string\n";
   getline(std::cin,myString);
    return myString;
}
void PrintFirstLetter(std::string s)
{
    bool isFirstLetter = true;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != ' ' && isFirstLetter)
        {
            std::cout << s[i] << std::endl;
            isFirstLetter=false;
        }
        if(s[i]==' ')
        { isFirstLetter=true;
        }
    }
}
int main(){
    std::string S=readString();
    PrintFirstLetter(S);
}