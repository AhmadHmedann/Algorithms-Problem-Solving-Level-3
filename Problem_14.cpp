// Write a program to read a string then make a function to split each word in vector
// Write a program to join a vector of string into one string with separators
//Write a program to join array of string into a one string with separator
#include <iostream>
#include <string>
#include <vector>

std::string readString()
{
    std::string s;
    std::cout << "Please enter your string\n";
    getline(std::cin, s);
    return s;
}
std::vector<std::string> Vsplit(std::string s, std::string delimiter)
{
    int pos = 0;
    std::string word = "";
    std::vector<std::string> vString;
    while ((pos = s.find(delimiter)) != std::string::npos)
    {
        word = s.substr(0, pos);
        if (word != "")
        {

            vString.push_back(word);
        }
        s.erase(0, pos + delimiter.length());
    }
    if (s != "")
    {
        vString.push_back(s);
    }
    return vString;
}
std::string joinString(std::vector<std::string> vString, std::string separator)
{
    std::string s = "";
    for (std::string &st :vString)
    {
        s+=st+separator;
    }
    return s.substr(0,s.length()-separator.length());
}
std::string joinString(std::string stringArr[] ,int length,  std::string separator)
{
    std::string s = "";
    for(int i=0;i<length;i++)
    {
        s+=stringArr[i]+separator;
    }
    return s.substr(0, s.length() - separator.length());
}
int main()
{
    std::string stringArr[] = {"ahmad", "Ali", "keke"};
     std::vector<std::string> vString;
    std::string s = readString();
    vString = Vsplit(s, " ");
    for (std::string &st : vString)
    {
        std::cout << st << std::endl;
    }
    std::cout<<joinString(vString,"#/#")<<"\n";

    std::cout << joinString(stringArr,3, "#/#");

    return 0;
}