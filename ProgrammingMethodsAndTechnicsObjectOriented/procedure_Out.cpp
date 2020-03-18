#include "langtype_atd.h"
using namespace std;
namespace simple_langtype {
    void langtype::procedure::Out(ofstream& ofst) {
        ofst << "It is a procedure language: is abstract = " << isAbstract
            << ", year = " << year << endl;
    }
}