#include <iostream>
#include <stdio.h>      /* printf */
#include <math.h>       /* pow */
#include <windows.h>





using namespace std;



int num_of_inputs = 3;
int num_combos = 8;



void askForVars(){

    //ask for num of inputs
    cout << "Number of inputs: ";
    cin >> num_of_inputs;


    //calculate number of possible combinations
    num_combos = pow(2, num_combos);




}






int main() {







    std::cout << "Hello, World!" << std::endl;
    return 0;
}
