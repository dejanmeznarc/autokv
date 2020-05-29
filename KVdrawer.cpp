//
// Created by Dejan on 14. 05. 2020.
//

#include "KVdrawer.h"

void KVdrawer::drawKVThree() {

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

void KVdrawer::drawKVTwo() {


    std::cout << "                A " << std::endl;
    std::cout << "       -----------------" << std::endl;
    std::cout << "     |-------------------------------------------|" << std::endl;
    std::cout << "   | |          |          |          |          |" << std::endl;
    std::cout << " B | |     " << outputs[6] << "     |     " << outputs[7] << "     |      " << outputs[3] << "    |      " << outputs[2] << "    |" << std::endl;
    std::cout << "   | |          |          |          |          |" << std::endl;
    std::cout << "     |==========|==========|==========|==========|" << std::endl;
    std::cout << "     |          |          |          |          |" << std::endl;
    std::cout << "     |     " << outputs[4] << "     |     " << outputs[5] << "     |      " << outputs[1] << "    |      " << outputs[0] << "    |" << std::endl;
    std::cout << "     |          |          |          |          |" << std::endl;
    std::cout << "     |-------------------------------------------|" << std::endl;
    std::cout << "                  ------------------" << std::endl;
    std::cout << "                           C " << std::endl;
}

void KVdrawer::drawKVFour() {

    std::cout << " ========A========_________________" << std::endl;
    std::cout << "||  "               "    |" << "|   "               "    |" << "|   "               "    |"
              << "|   "               "    |" << std::endl;
    std::cout << "||  " << outputs[13] << "   |" << "|   " << outputs[15] << "   |" << "|   " << outputs[7]
              << "   |"
              << "|   " << outputs[4] << "   |" << std::endl;
    std::cout << "||  "               "    |" << "|   "               "    |" << "|   "               "    |"
              << "|   "               "    |" << std::endl;
    std::cout << "||_________________________________|" << std::endl;
    std::cout << "|B_________________________________" << std::endl;
    std::cout << "||  "               "    |" << "|   "               "    |" << "|   "               "    |"
              << "|   "               "   ||" << std::endl;
    std::cout << "||  " << outputs[14] << "   |" << "|   " << outputs[16] << "   |" << "|   " << outputs[8]
              << "   |"
              << "|   " << outputs[5] << "  ||" << std::endl;
    std::cout << "||  "               "    |" << "|   "               "    |" << "|   "               "    |"
              << "|   "               "   ||" << std::endl;
    std::cout << "||________________________________||" << std::endl;
    std::cout << " _________________________________D|" << std::endl;
    std::cout << "|   "               "    |" << "|   "               "    |" << "|   "               "    |"
              << "|   "               "   ||" << std::endl;
    std::cout << "|   " << outputs[10] << "   |" << "|   " << outputs[12] << "   |" << "|   " << outputs[3]
              << "   |"
              << "|   " << outputs[1] << "  ||" << std::endl;
    std::cout << "|   "               "    |" << "|   "               "    |" << "|   "               "    |"
              << "|   "               "   ||" << std::endl;
    std::cout << "|_________________________________||" << std::endl;
    std::cout << " __________________________________" << std::endl;
    std::cout << "|   "               "    |" << "|   "               "    |" << "|   "               "    |"
              << "|   "               "    |" << std::endl;
    std::cout << "|   " << outputs[9] << "   |" << "|   " << outputs[11] << "   |" << "|   " << outputs[2] << "   |"
              << "|   " << outputs[0] << "   |" << std::endl;
    std::cout << "|   "               "    |" << "|   "               "    |" << "|   "               "    |"
              << "|   "               "    |" << std::endl;
    std::cout << "|________========C=========________|" << std::endl;
}
