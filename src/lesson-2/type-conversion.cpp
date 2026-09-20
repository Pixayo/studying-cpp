#include <iostream>

void print(double x)
{
    std::cout << x << "\n";
}

int main(void)
{
    print(static_cast<int>(5.5));

    return 0;
}