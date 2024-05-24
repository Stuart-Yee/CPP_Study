#include <iostream>

int main() {
    auto result = (10 <=> 20) > 0;
    std::cout << result << std::endl;
    std::cout << "Success!" << std::endl;
    return 0; 
}