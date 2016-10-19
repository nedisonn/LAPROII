#ifndef _arara_h_
#define _arara_h_
#include <string>
#include <stdlib.h>
#include <iostream>
#include "passaro.h"


using namespace std;

class Arara: public Passaro{
public:
    Arara();
    ~Arara();
    void canta ();
};
#endif
