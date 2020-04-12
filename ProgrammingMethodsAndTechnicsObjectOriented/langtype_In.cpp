#include "langtype_atd.h"
using namespace std;
namespace simple_langtype {
    langtype* langtype::In(ifstream& ifst) {
        langtype* l = new langtype;
        int k;
        ifst >> k;
        switch (k) {
        case 1:
            l->k = 1;
            l->p.InData(ifst);
            break;
        case 2:
            l->k = 2;
            l->o.InData(ifst);
            break;
        case 3:
            l->k = 3;
            l->f.InData(ifst);
            break;
        default:
            return 0;
        }
        return l;
    }
}