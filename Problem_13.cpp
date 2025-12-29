// Write a program to read a string then make a function to split each word in vector
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
    short pos=0;
    std::string word="";
    std::vector<std::string> Vstring;
    while((pos=s.find(delimiter))!=std::string::npos)
    {
        word=s.substr(0,pos);
        if(word!="")
        {
           
            Vstring.push_back(word);
        }
        s.erase(0,pos+delimiter.length());
    }
        if(s!="")
        {
            Vstring.push_back(s);
        }
        return Vstring;
}
int main()
{
    std::vector<std::string>Vstring;
    std::string s=readString();
    Vstring=Vsplit(s," ");
    for(std::string & st : Vstring)
    {
        std::cout<<st<<std::endl;
    }
    return 0;
}