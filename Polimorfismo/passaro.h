#ifndef _passaro_h_
#define _passaro_h_
#include <string>
#include <stdlib.h>
#include <iostream>
#include <string>
using namespace std;

class Passaro {
protected:
    bool emExtincao;
    string corPredominante;
public:
    Passaro();
    ~Passaro();
    void canta();
    bool getEmExtincao();
    string getCorPredominante();
};

#endif
