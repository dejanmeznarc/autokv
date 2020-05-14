#include <iostream>
#include <cstdio>      /* printf */
#include <cmath>       /* pow */
#include <windows.h>
#include <bitset>
#include <vector>
#include <algorithm>


#define MAX_SIZE 256


using namespace std;


int num_of_inputs = 3;
int num_outputs = 8;


void askForVars() {

    //ask for num of inputs
    cout << "Number of inputs: ";
    cin >> num_of_inputs;


    //calculate number of possible combinations
    num_outputs = pow(2, num_of_inputs);


    cout << endl << "All possible outputs:" << num_outputs;
}

//covert n to binary.
string toBinary(int n, int chars) {

    string prefix(chars, '0');


    std::string r;
    while (n != 0) {
        r = (n % 2 == 0 ? "0" : "1") + r;
        n /= 2;
    }

    prefix.replace(prefix.end() - r.size(), prefix.end(), r);

    return prefix;
}


void doMath() {

    char out_vals[num_outputs];

    cout << "A | B | C | out " << endl;

    //scroll through every output
    for (int i = 0; i < num_outputs; i++) {
        const char *chars = toBinary(i, num_of_inputs).c_str();

        for (int j = 0; j < num_of_inputs; ++j) {

            cout << chars[j] << " | ";


        }

        cout << " " << endl;





        //    cin >> outputs[i]; //TODO: check valid type

    }


}


int main() {

    askForVars();
    doMath();


    int n = 4;

    int arr[n];

    // Print all binary strings


    return 0;
}
