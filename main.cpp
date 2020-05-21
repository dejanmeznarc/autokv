#include <iostream>
#include <cmath>
#include <bitset>
#include "KVdrawer.h"


using namespace std;


int num_of_inputs = 3;
int num_outputs = 8;


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


void askForInputs() {

    //ask for num of inputs
    cout << "Number of inputs: ";
    cin >> num_of_inputs;


    //calculate number of possible combinations
    num_outputs = pow(2, num_of_inputs);


    cout << endl << "All possible outputs:" << num_outputs << endl;
}


void askForOutputs(char *outVals) {

    //print letters (top row)
    char c = 'A';
    for (int k = 0; k < num_of_inputs; ++k) {
        cout << c++ << " | ";
    }
    cout << "out" << endl;

    //scroll through every output
    for (int i = 0; i < num_outputs; i++) {

        //print input values
        const char *chars = toBinary(i, num_of_inputs).c_str();
        for (int j = 0; j < num_of_inputs; ++j) {
            cout << chars[j] << " | ";
        }


        //ask user for output
        cin >> outVals[i];
        cout << " ";

    }
    cout << endl;
}


int main() {


    askForInputs();

    char outputs[num_outputs];

    askForOutputs(outputs);

    KVdrawer drawer(outputs, num_of_inputs);

    drawer.draw();

    system("PAUSE");

    return 0;
}
