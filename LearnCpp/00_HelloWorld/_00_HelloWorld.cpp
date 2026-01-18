#include <iostream>

void foo(int) {
    
}

int main(int argc, char* argv[])
{
    std::cout << "Hello world!\n";

    // generates warning because of signed/unsigned conversion.
    unsigned int x {5};
    foo(x);
    
    return 0;
}