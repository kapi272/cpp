#include <iostream>
#include <limits>

int main()
{
    int minInt = std::numeric_limits<int>::min();
    std::cout << "Minimum value of int: " << minInt << std::endl;
    return 0;
}
