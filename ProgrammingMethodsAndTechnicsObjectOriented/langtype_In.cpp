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
            ifst >> l->mentions;
            break;
        case 2:
            l->k = 2;
            l->o.InData(ifst);
            ifst >> l->mentions;
            break;
        case 3:
            l->k = 3;
            l->f.InData(ifst);
            ifst >> l->mentions;
            break;
        default:
            return 0;
        }
        return l;
    }
}