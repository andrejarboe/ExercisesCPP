#include <iostream>

int main (){

    int factorial = 1;
    int num = 6;


    for(int i = num; i > 1; i--){
        factorial *= i;
    }

    std::cout << "\n" << num << " factorial is: " << factorial;
}