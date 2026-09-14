#include <iostream>
#include <vector>

// run: g++ -o hello helloworld.cpp

int main(void)
{
    std::vector<std::string> words = {
        "hello",
        "world!",
        "This",
        "is",
        "my",
        "first",
        "CPP",
        "program."
    };
    
    for(int i = 0; i < words.size(); i++)
    {
        std::cout << words[i] << " ";
    }
    std::cout << "\n";

    return 0;
}