#include <iostream>

int main(void)
{
    int val1, val2;
    std::cout<< "First Number: ";
    std::cin>>val1;

    std::cout<< "Second Number: ";
    std::cin>>val2;

    int result=val1+val2;
    std::cout<< "Addition result: "<<result<<std::endl;
    return 0;
}
