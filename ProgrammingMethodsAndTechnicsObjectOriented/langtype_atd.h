#ifndef __langtype_atd__
#define __langtype_atd__
#include <fstream>
using namespace std;
namespace simple_langtype {
	class langtype {
		int k;
		int mentions;
		class procedure {
			bool isAbstract;
			short int year;
		public:
			void InData(ifstream& ifst);
			void Out(ofstream& ofst);
			void OutProcedure(ofstream& ofst);
			procedure() {}
			int AmountOfYears();
		} p;
		class objectoriented {
			short int year;
			enum inheritance { once, multiple, interface } inheritance;
		public:
			void InData(ifstream& ifst);
			void Out(ofstream& ofst);
			void OutProcedure(ofstream& ofst);
			objectoriented() {}
			int AmountOfYears();
		} o;
		class functional {
			short int year;
			enum typification { strict, dynamic } typification;
			bool isLazyCalculations;
		public:
			void InData(ifstream& ifst);
			void Out(ofstream& ofst);
			void OutProcedure(ofstream& ofst);
			functional() {}
			int AmountOfYears();
		} f;
	public:
		static langtype* In(ifstream& ifst);
		void Out(ofstream& ofst);
		int AmountOfYears(bool IsOutProcedure);
		void OutProcedure(ofstream& ofst);
		bool Compare(langtype& other);

	};
}
#endif