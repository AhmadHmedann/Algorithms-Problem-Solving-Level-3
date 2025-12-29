// Write a program to replace words in string:
// read a string function
// split the string into words function
// replace words function
// join string function
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

std::string joinString( const std::vector<std::string> &vString, std::string separator)
{
    if (vString.empty()) return"";
    std::string s = "";
    for (const std::string& st : vString)
    {
        s += st + separator;
    }
    return s.substr(0, s.length() - separator.length());
}

std::string replaceWordsInString(const std::string &s, std::string replaceFrom, std::string replaceTO)
{
    std::vector<std::string> vString = vSplit(s);
    for (std::string &st : vString)
    {
        if (st == replaceFrom)
        {
            st = replaceTO;
        }
    }
    return joinString(vString," ");
}
//use build in function
//The key deferent here is we look at the string at one that mean every (repaceFrom) even if not a separate word will replaced
std::string replaceWordsInStringUsingBuildInFunction(std::string s, std::string replaceFrom,std::string replaceTO)
{
    size_t pos=0;
    while((pos=s.find(replaceFrom))!=std::string::npos)
    {
        s=s.replace(pos,replaceFrom.length(),replaceTO);
    }
    return s;
}

int main()
{
    std:: string s,s2;
    s=readString("Original String");
    s2=replaceWordsInString(s,"CFY","CYF");
    std::cout<<s2<<"\n"<<replaceWordsInStringUsingBuildInFunction(s,"CFY","CYF");
    
   return 0;
}