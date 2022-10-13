// Write a function to calculate the factorial value of any integer as an argument.
#include <iostream>

int factorial(int a){
    int fact = 1;

    for(int i = a; i > 1; i--){
        fact *= i;
    }

    return fact;
}

int main (){

    // int factorial = 1;
    int num;

    std::cout << "Enter number to calculate the factorial of. ";
    std::cin >> num;

    // for(int i = num; i > 1; i--){
    //     factorial *= i;
    // }

    

    std::cout << "\n" << num << " factorial is: " << factorial(num);
    std::cout << "\n";
}