#include<iostream>
#include<vector>
#include<string> 

int main()
{
    std::vector<std::string> i{"adsqdqwdq"};
    std::cout << "hello" << std::endl;
    
    // Print vector elements
    for(const auto& str : i) {
        std::cout << str << std::endl;
    }
    
    return 0;
}