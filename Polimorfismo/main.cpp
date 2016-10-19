#include <iostream>
#include <string>
#include <stdlib.h>
#include "passaro.h"
#include "arara.h"

using namespace std;

int main() {
    Passaro *p = new Passaro ();
    cout << "Passaro " << p->getCorPredominante() << " em extincao? R: " << p->getEmExtincao() << endl;
    p->canta();
    Arara *a = new Arara ();
    cout << "Arara " << a->getCorPredominante() << " em extincao? R: " << a->getEmExtincao() << endl;
    a->canta();
    delete p;
    delete a;
    return 0;
}
