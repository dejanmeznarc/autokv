#include <iostream>
#include <stdio.h>      /* printf */
#include <math.h>       /* pow */
#include <windows.h>


#define MAX_SIZE 256


using namespace std;


int num_of_inputs = 3;
int num_outputs = 8;


void askForVars() {

    //ask for num of inputs
    cout << "Number of inputs: ";
    cin >> num_of_inputs;


    //calculate number of possible combinations
    num_outputs = pow(2, num_outputs);


    cout << endl << "All possible outputs";
}


void doMath() {

    char outputs[num_outputs];

    cout << "A | B | C | out " << endl;

    //scroll through every output
    for (int i = 0; i < num_outputs; i++) {
        //TODO: Print all possible combinations


        cin >> outputs[i]; //TODO: check valid type
        //cout << " " << (izhodi[i] ? 1 : 0) << "";

    }


}


int main() {
    askForVars();
    //  doMath();


    int n = 4;

    int arr[n];

    // Print all binary strings


    return 0;
}
