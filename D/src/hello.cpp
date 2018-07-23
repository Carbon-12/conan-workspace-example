#include <iostream>
#include "helloD.h"
#include "helloB.h"

void helloD(){
    helloB();
    #ifdef NDEBUG
    std::cout << "Hello World D Release!" <<std::endl;
    #else
    std::cout << "Hello World D Debug!" <<std::endl;
    #endif
}
