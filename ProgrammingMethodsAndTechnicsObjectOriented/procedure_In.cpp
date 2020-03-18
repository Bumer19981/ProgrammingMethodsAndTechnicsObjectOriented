#include "langtype_atd.h"
using namespace std;
namespace simple_langtype {
    void langtype::procedure::InData(ifstream& ifst) {
        ifst >> isAbstract >> year;
    }
}