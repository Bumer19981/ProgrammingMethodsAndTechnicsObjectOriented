#include "langtype_atd.h"
using namespace std;
namespace simple_langtype {    bool langtype::Compare(langtype& other) {
        return AmountOfYears(false) < other.AmountOfYears(false);
    }}