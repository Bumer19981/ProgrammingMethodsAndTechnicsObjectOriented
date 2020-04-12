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
			void OutProcedure(ofstream& ofst);
			procedure() {}
		} p;
		class objectoriented {
			short int year;
			enum inheritance { once, multiple, interface } inheritance;
		public:
			void InData(ifstream& ifst);
			void Out(ofstream& ofst);
			void OutProcedure(ofstream& ofst);
			objectoriented() {}
		} o;
	public:
		static langtype* In(ifstream& ifst);
		void Out(ofstream& ofst);
		void OutProcedure(ofstream& ofst);
	};
}
#endif