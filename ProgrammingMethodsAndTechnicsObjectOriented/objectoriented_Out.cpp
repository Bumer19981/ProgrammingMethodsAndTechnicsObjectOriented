#include "langtype_atd.h"
using namespace std;
namespace simple_langtype {
        void langtype::objectoriented::Out(ofstream & ofst) {
            string inheritance;
            if (this->inheritance == once) {
                inheritance = "once";
            }
            else if (this->inheritance == multiple) {
                inheritance = "multiple";
            }
            else {
                inheritance = "interface";
            }
            ofst << "It is an object-oriented language: inheritance = " << inheritance << ", year = " << year << endl;
    }
}