#include <fstream>
#include "langtype_atd.h"
#include <string.h>
#include <ctime>
using namespace std;
namespace simple_langtype {
	int langtype::AmountOfYears()
	{
		if (this->k == 1) {
			return this->p.AmountOfYears();
		}
		else if (this->k == 2) {
			return this->o.AmountOfYears();
		}
		else {
			return -1;
		}
	}
}