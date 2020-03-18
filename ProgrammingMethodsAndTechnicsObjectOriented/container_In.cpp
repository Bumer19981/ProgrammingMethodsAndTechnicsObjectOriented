#include "container_atd.h"
using namespace std;
namespace simple_langtype {
    void container::In(ifstream& ifst) {
        while (!ifst.eof()) {
            langtype* l;
            if ((l = langtype::In(ifst)) != 0) {
                list.size++;
                container::List::Node* temp = new container::List::Node;
                temp->Next = list.Head;
                temp->Prev = list.Tail;
                temp->l = l;
                if (list.Head != NULL)
                {
                    list.Tail->Next = temp;
                    list.Tail = temp;
                    list.Head->Prev = list.Tail;
                }
                else list.Head = list.Tail = temp;
            }
        }
    }
}