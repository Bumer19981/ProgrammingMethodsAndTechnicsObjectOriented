#include "container_atd.h"
using namespace std;
namespace simple_langtype {
	void container::OutProcedure(ofstream& ofst) {
		ofst << "Only procedure." << endl;
		List::Node* node = list.Head;
		for (int i = 0; i < list.size; i++) {
			ofst << i << ": ";
			node->l->OutProcedure(ofst);
			node = node->Next;
		}
	}
}