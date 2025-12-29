// Write a program to read a string then uppercase the first letter of each word in that string

#include <iostream>
#include <string>

std::string readString()
{
    std::string myString;
    std::cout << "Please Enter your string\n";
    getline(std::cin, myString);
    return myString;
}
std::string UpperFirstLetterOfEachWord(std::string s)
{
    bool isFirstLetter = true;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != ' ' && isFirstLetter)
        {
            s[i] = toupper(s[i]);
        }
        isFirstLetter = s[i] == ' ' ? true : false;
    }
    return s;
}
int main()
{
    std::string s = readString();
    s = UpperFirstLetterOfEachWord(s);
    std::cout << s;
    return 0;
}