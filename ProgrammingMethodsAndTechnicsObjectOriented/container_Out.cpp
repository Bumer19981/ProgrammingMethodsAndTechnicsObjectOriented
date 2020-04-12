#include "container_atd.h"
using namespace std;
namespace simple_langtype {
    void container::Out(ofstream& ofst) {
        ofst << "Container contents " << list.size
            << " elements." << endl;
        List::Node* tempHead = list.Head;

        int temp = list.size;
        while (temp != 0) {
            langtype* l = tempHead->l;
            l->Out(ofst);
            tempHead = tempHead->Next;
            temp--;
        }
    }
}