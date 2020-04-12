#include "langtype_atd.h"
using namespace std;
namespace simple_langtype {
    void langtype::Out(ofstream& ofst) {
        int k = this->k;
        switch (k) {
        case 1:
            this->p.Out(ofst);
            break;
        case 2:
            this->o.Out(ofst);
            break;
        default:
            ofst << "Incorrect language!" << endl;
        }
    }
}
