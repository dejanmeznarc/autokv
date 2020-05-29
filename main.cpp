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

void getFormula(char *outputs) {

    std::string out;
    char label = 'A';
    std::string result;
    int numOfOnes = 0;

    for (int k = 0; k < num_outputs; k++) {
        if (outputs[k] == '1')
            numOfOnes++;
    }

    for (int i = 0; i < num_outputs; i++) {
        label = 'A';
        if (outputs[i] == '1') { // checks if output = 1

            out = toBinary(i, num_of_inputs);

            for (int j = 0; j < num_of_inputs; j++) {// reads through every input and adds to string accordingly

                if (out[j] == '1')
                    result += label;
                else if (out[j] == '0') {
                    result += "!";
                    result += label;
                } else {
                }

                if (j < num_of_inputs - 1) // makes sure + ist added at the end
                    result += " + ";

                label++;
            }
            if (i < numOfOnes - 1) // makes sure * isnt added at the end
                result += " * ";
        }
    }
    cout << result << std::endl;
}


int main() {

    askForInputs();

    char outputs[num_outputs];

    askForOutputs(outputs);

    KVdrawer drawer(outputs, num_of_inputs);

    drawer.draw();

    getFormula(outputs);


    return 0;
}
