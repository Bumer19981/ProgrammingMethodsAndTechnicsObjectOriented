#include "container_atd.h"
using namespace std;
namespace simple_langtype {
	void container::OutProcedure(ofstream& ofst) {
		ofst << "Only procedure." << endl;
		List::Node* node = list.Head;
		for (int i = 0; i < list.size; i++) {
			ofst << i << ": ";
			node->l->OutProcedure(ofst);
			int AmountOfYears = node->l->AmountOfYears(true);
			if (AmountOfYears != -1) {
				ofst << "amount of years = "
					<< AmountOfYears << endl;
			}
			node = node->Next;
		}
	}
}