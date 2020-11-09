/*
The FiizBuzz algorithm
2020 Cipher Visor at https://github.com/Cipher-Visor
*/
//include libs
#include <iostream>

//begin main program
int main() {
    //initiate for loop to start counting
    for (int x = 1; x < 16; x++) {
        std::cout << x << " ";
        if (x % 3 == 0 && x % 5 == 0) {
        std::cout << "FIZZBUZZ!" << std::endl;
        return 0; //terminate program
        }
        else if (x % 3 == 0) { //this and the following are modulus checks for to either "FIZZ", "BUZZ", "FIZZBUZZ", or move on 
            std::cout << "FIZZ" << std::endl;
        }
        else if (x % 5 == 0) {
           std::cout << "BUZZ" << std::endl;
        }
        else {
            std::cout << std::endl;
        }
    }

}