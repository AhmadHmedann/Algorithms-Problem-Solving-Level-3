// Write a program to read a string then print each word in that string.
#include <iostream>
#include <string>

std::string readString()
{
    std::string s;
    std::cout << "Please enter your string\n";
     getline(std::cin, s);
    return s;
}
void printEachWordInString(std::string s, std::string delim = " ")
{
    short pos = 0;
    std::string word = "";
    while ((pos = s.find(delim)) != std::string::npos)
    {
        word = s.substr(0, pos);
        if (word != "")
        {
            std::cout << word << "\n";
        }
        s.erase(0, pos + delim.length());
    }
    if (s != "")
        std::cout << s;
}
short countWords(std::string s, std::string delim)
{
    short pos = 0;
    short counter=0;
    std::string word = "";
    while ((pos = s.find(delim)) != std::string::npos)
    {
        word = s.substr(0, pos);
        if (word != "")
        {
            counter++;
        }
        s.erase(0, pos + delim.length());
    }
    if (s != "")
        counter++;

        return counter;
}
int main()
{
    std::string s = readString();
    printEachWordInString(s, " ");
    std::cout<<"\n"<<countWords(s," ");
}