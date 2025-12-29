// Write a program ti read a string and reveres its words?
// function to read a string
// function to store this string into array or vector )(spilt )
// function to join the array_vector element into a string  *start from the end * move backward
#include <iostream>
#include <string>
#include <vector>

std::string readString(std::string message)
{
    std::string s;
    std::cout << message << std::endl;
    getline(std::cin, s);
    return s;
}

std::vector<std::string> vSplit(std::string s, std::string delimiter = " ")
{
    std::vector<std::string> vString;
    size_t pos = 0;
    std::string word = "";
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

std::string reverseWordsInString(const std::string &s)
{
    std::vector<std::string> vString = vSplit(s, " ");
    std::string s2 = "";
    std::vector<std::string>::iterator iter = vString.end();
    while (iter != vString.begin())  
    {
        --iter;
        s2 += *iter + " ";
    }
    return s2.substr(0,s2.length()-1);
}

int main()
{
    std::string s, s2;
    s = readString("Please Enter your string");
    std::vector<std::string> vString;
    vString = vSplit(s);
    s2=reverseWordsInString(s);
    std::cout<<s2;
    return 0;
}