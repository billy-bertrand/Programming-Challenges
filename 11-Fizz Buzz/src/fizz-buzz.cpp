#include <iostream>
#include <string>

void fizzBuzz_iterative(unsigned int n);
void fizzBuzz_recursive(unsigned int n, unsigned int m);

int main()
{
    std::cout <<  "Fizz Buzz - Iterative" << std::endl;
    fizzBuzz_iterative(5);

    std::cout << std::endl << "Fizz Buzz - Recursive" << std::endl;
    fizzBuzz_recursive(1, 5);
    return 0;
}

void fizzBuzz_iterative(unsigned int n){
    for(unsigned int i = 1; i <= n; i++){
        if(i % 3 == 0){
            std::cout << "Fizz" << std::endl;
        }
        else if(i % 5 == 0){ 
            std::cout << "Buzz" << std::endl;
        }
        else if((i % 3 == 0) && (i % 5) == 0){
            std::cout << "Fizz Buzz" << std::endl;
        }
        else{
            std::cout << i << std::endl;
        }
    }
    std::cout << "Done!" << std::endl;
}

void fizzBuzz_recursive(unsigned int n, unsigned int m){
    //"Ceil" case ~ My base case
    if(n > m){
        std::cout << "Done!" << std::endl;
        return;
    }
    else if (n % 3 == 0){
        std::cout << "Fizz" << std::endl;
    }
    else if(n % 5 == 0){
        std::cout << "Buzz" << std::endl;
    }
    else if((n % 3 == 0) && (n % 5 == 0)){
        std::cout << "Fizz Buzz" << std::endl;
    }
    else{
        std::cout << n << std::endl;
    }
    fizzBuzz_recursive(n + 1, m);
}
