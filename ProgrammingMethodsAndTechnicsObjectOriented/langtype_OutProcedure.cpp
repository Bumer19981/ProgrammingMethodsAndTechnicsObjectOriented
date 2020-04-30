#include "langtype_atd.h"
using namespace std;
namespace simple_langtype {
    void langtype::OutProcedure(ofstream& ofst) {
        int k = this->k;
        switch (k) {
        case 1:
            this->p.OutProcedure(ofst);
            break;
        case 2:
            this->o.OutProcedure(ofst);
            break;
        default:
            ofst << "Incorrect language!" << endl;
        }
    }
}
