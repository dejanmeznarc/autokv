//
// Created by Dejan on 14. 05. 2020.
//
#include <iostream>

#ifndef AUTOKV_KVDRAWER_H
#define AUTOKV_KVDRAWER_H


class KVdrawer {

private:
    void drawKVTwo();

    void drawKVThree();

    void drawKVFour();


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
