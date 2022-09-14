#include <iostream>
#include <string>

int main()
{
    std::string str;

    std::cin >> str;
    int         i = (int)str.length() - 1;
    while(i >= 0)
    {
        if (str[i] == 'a')
            std::cout << 0;
        else if (str[i] == 'e')
            std::cout << 1;
        else if (str[i] == 'i')
            std::cout << 2;
        else if (str[i] == 'o')
            std::cout << 3;
        else if (str[i] == 'u')
            std::cout << 4;
        else
            std::cout << str[i];
        i--;
    }
    std::cout << "aca" << "\n";
}