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

/*
void squareNeighbour(bool sqValue){
    cout << " _______" << endl;
    cout << "|   "               "    |" << endl;
    cout << "|   " << sqValue << "   |" << endl;
    cout << "|   "               "    |" << endl;
    cout << "|_______|";
}

void square(bool sqValue){
    cout << " _______" << endl;
    cout << "|   "               "    |" << endl;
    cout << "|   " << sqValue << "   |" << endl;
    cout << "|   "               "    |" << endl;
    cout << "|_______|" << endl;
}
*/




void drawKVThree(char *sqValue) {

    cout << " ========A========_________________" << endl;
    cout << "||  "               "    |" << "|   "               "    |" << "|   "               "    |"
         << "|   "               "    |" << endl;
    cout << "B|  " << sqValue[6] << "   |" << "|   " << sqValue[7] << "   |" << "|   " << sqValue[3] << "   |" << "|   "
         << sqValue[2] << "   |" << endl;
    cout << "||  "               "    |" << "|   "               "    |" << "|   "               "    |"
         << "|   "               "    |" << endl;
    cout << "||_________________________________|" << endl;
    cout << " __________________________________" << endl;
    cout << "|   "               "    |" << "|   "               "    |" << "|   "               "    |"
         << "|   "               "    |" << endl;
    cout << "|   " << sqValue[4] << "   |" << "|   " << sqValue[5] << "   |" << "|   " << sqValue[3] << "   |" << "|   "
         << sqValue[0] << "   |" << endl;
    cout << "|   "               "    |" << "|   "               "    |" << "|   "               "    |"
         << "|   "               "    |" << endl;
    cout << "|________========C=========________|" << endl;
}

void drawKVTwo(char *sqValue) {

    cout << " ====A====_______" << endl;
    cout << "|   "               "    |" << "|   "               "    |" << endl;
    cout << "|   " << sqValue[2] << "   |" << "|   " << sqValue[0] << "   |" << endl;
    cout << "|   "               "    |" << "|   "               "    |" << endl;
    cout << "|________________|" << endl;
    cout << " _______________" << endl;
    cout << "|   "               "    |" << "|   "               "   ||" << endl;
    cout << "|   " << sqValue[3] << "   |" << "|   " << sqValue[1] << "  |B" << endl;
    cout << "|   "               "    |" << "|   "               "   ||" << endl;
    cout << "|_______________||" << endl;
}

void checkNumInputs(char *outputs) {
    if (num_of_inputs == 3)
        drawKVThree(outputs);
    else if (num_of_inputs == 2)
        drawKVTwo(outputs);
}


int main() {


    askForInputs();

    char outputs[num_outputs];

    askForOutputs(outputs);

    checkNumInputs(outputs);




    return 0;
}
