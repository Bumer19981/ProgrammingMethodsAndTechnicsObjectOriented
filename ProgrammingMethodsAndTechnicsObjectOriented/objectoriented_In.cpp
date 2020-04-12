#include "langtype_atd.h"
using namespace std;
namespace simple_langtype {
    void langtype::objectoriented::InData(ifstream& ifst) {
		string inheritance;
		ifst >> inheritance >> year;
		if (inheritance == "once") {
			this->inheritance = once;
		}
		else if (inheritance == "multiple")
		{
			this->inheritance = multiple;
		}
		else
		{
			this->inheritance = interface;
		}
    }
}