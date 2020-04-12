#ifndef __langtype_atd__
#define __langtype_atd__
#include <fstream>
using namespace std;
namespace simple_langtype {
	class langtype {
		int k;
		class procedure {
			bool isAbstract;
			short int year;
		public:
			void InData(ifstream& ifst);
			void Out(ofstream& ofst);
			procedure() {}
		} p;
		class objectoriented {
			short int year;
			enum inheritance { once, multiple, interface } inheritance;
		public:
			void InData(ifstream& ifst);
			void Out(ofstream& ofst);
			objectoriented() {}
		} o;
		class functional {
			short int year;
			enum typification { strict, dynamic } typification;
			bool isLazyCalculations;
		public:
			void InData(ifstream& ifst);
			void Out(ofstream& ofst);
			functional() {}
		} f;
	public:
		static langtype* In(ifstream& ifst);
		static void Out(langtype l, ofstream& ofst);
	};
}
#endif
