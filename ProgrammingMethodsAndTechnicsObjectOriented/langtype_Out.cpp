#include "langtype_atd.h"
using namespace std;
namespace simple_langtype {
    void langtype::Out(langtype l, ofstream& ofst) {
        int k = l.k;
        switch (k) {
        case 1:
            l.p.Out(ofst);
            break;
        case 2:
            l.o.Out(ofst);
            break;
        default:
            ofst << "Incorrect language!" << endl;
        }
    }
}