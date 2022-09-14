#include <iostream>
#include <string>

void strrev(std::string &str)
{
    int len = str.length();
    int j = len;
    std::string tmp;

    for (int i = 0;i < len;i++)
    {
        tmp += str[j - 1];
        j--;
    }
    str = tmp;
}

int main()
{
    std::string str;

    std::cin >> str;
    strrev(str);
    for (int i = 0;i < str.length();i++)
    {
        if (str[i] == 'a')
            str[i] = '0';
        else if (str[i] == 'e')
            str[i] = '1';
        else if (str[i] == 'i')
            str[i] = '2';
        else if (str[i] == 'o')
            str[i] = '3';
        else if (str[i] == 'u')
            str[i] = '4';
    }
    std::cout << str + "aca" << "\n";
}