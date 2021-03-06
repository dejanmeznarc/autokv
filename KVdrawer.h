//
// Created by Dejan on 14. 05. 2020.
//
#include <iostream>

#ifndef AUTOKV_KVDRAWER_H
#define AUTOKV_KVDRAWER_H


class KVdrawer {

private:


    void drawKVThree() {

        std::cout << " ========A========_________________" << std::endl;
        std::cout << "||  "               "    |" << "|   "               "    |" << "|   "               "    |"
                  << "|   "               "    |" << std::endl;
        std::cout << "B|  " << outputs[6] << "   |" << "|   " << outputs[7] << "   |" << "|   " << outputs[3] << "   |"
                  << "|   "
                  << outputs[2] << "   |" << std::endl;
        std::cout << "||  "               "    |" << "|   "               "    |" << "|   "               "    |"
                  << "|   "               "    |" << std::endl;
        std::cout << "||_________________________________|" << std::endl;
        std::cout << " __________________________________" << std::endl;
        std::cout << "|   "               "    |" << "|   "               "    |" << "|   "               "    |"
                  << "|   "               "    |" << std::endl;
        std::cout << "|   " << outputs[4] << "   |" << "|   " << outputs[5] << "   |" << "|   " << outputs[3] << "   |"
                  << "|   "
                  << outputs[0] << "   |" << std::endl;
        std::cout << "|   "               "    |" << "|   "               "    |" << "|   "               "    |"
                  << "|   "               "    |" << std::endl;
        std::cout << "|________========C=========________|" << std::endl;
    }

    void drawKVTwo() {

        std::cout << " ====A====_______" << std::endl;
        std::cout << "|   "               "    |" << "|   "               "    |" << std::endl;
        std::cout << "|   " << outputs[2] << "   |" << "|   " << outputs[0] << "   |" << std::endl;
        std::cout << "|   "               "    |" << "|   "               "    |" << std::endl;
        std::cout << "|________________|" << std::endl;
        std::cout << " _______________" << std::endl;
        std::cout << "|   "               "    |" << "|   "               "   ||" << std::endl;
        std::cout << "|   " << outputs[3] << "   |" << "|   " << outputs[1] << "  |B" << std::endl;
        std::cout << "|   "               "    |" << "|   "               "   ||" << std::endl;
        std::cout << "|_______________||" << std::endl;
    }

    void drawKVFour(char *sqValue) { //TODO bugg at sqValue[16]

        std::cout << " ========A========_________________" << std::endl;
        std::cout << "||  "               "    |" << "|   "               "    |" << "|   "               "    |"
                  << "|   "               "    |" << std::endl;
        std::cout << "||  " << sqValue[13] << "   |" << "|   " << sqValue[15] << "   |" << "|   " << sqValue[7]
                  << "   |"
                  << "|   " << sqValue[4] << "   |" << std::endl;
        std::cout << "||  "               "    |" << "|   "               "    |" << "|   "               "    |"
                  << "|   "               "    |" << std::endl;
        std::cout << "||_________________________________|" << std::endl;
        std::cout << "|B_________________________________" << std::endl;
        std::cout << "||  "               "    |" << "|   "               "    |" << "|   "               "    |"
                  << "|   "               "   ||" << std::endl;
        std::cout << "||  " << sqValue[14] << "   |" << "|   " << sqValue[16] << "   |" << "|   " << sqValue[8]
                  << "   |"
                  << "|   " << sqValue[5] << "  ||" << std::endl;
        std::cout << "||  "               "    |" << "|   "               "    |" << "|   "               "    |"
                  << "|   "               "   ||" << std::endl;
        std::cout << "||________________________________||" << std::endl;
        std::cout << " _________________________________D|" << std::endl;
        std::cout << "|   "               "    |" << "|   "               "    |" << "|   "               "    |"
                  << "|   "               "   ||" << std::endl;
        std::cout << "|   " << sqValue[10] << "   |" << "|   " << sqValue[12] << "   |" << "|   " << sqValue[3]
                  << "   |"
                  << "|   " << sqValue[1] << "  ||" << std::endl;
        std::cout << "|   "               "    |" << "|   "               "    |" << "|   "               "    |"
                  << "|   "               "   ||" << std::endl;
        std::cout << "|_________________________________||" << std::endl;
        std::cout << " __________________________________" << std::endl;
        std::cout << "|   "               "    |" << "|   "               "    |" << "|   "               "    |"
                  << "|   "               "    |" << std::endl;
        std::cout << "|   " << sqValue[9] << "   |" << "|   " << sqValue[11] << "   |" << "|   " << sqValue[2] << "   |"
                  << "|   " << sqValue[0] << "   |" << std::endl;
        std::cout << "|   "               "    |" << "|   "               "    |" << "|   "               "    |"
                  << "|   "               "    |" << std::endl;
        std::cout << "|________========C=========________|" << std::endl;
    }

public:

    char *outputs;
    int outputs_cont;

    void draw() {
        switch (outputs_cont) {
            case 2:
                drawKVTwo();
                break;
            case 3:
                drawKVThree();
                break;
            default:
                std::cout << "KV diagram of that size is not supported yet" << std::endl;
        }
    }


    KVdrawer(char *_outputs, int num) {
        outputs = _outputs;
        outputs_cont = num;
    }


};


#endif //AUTOKV_KVDRAWER_H
