#ifndef __container_atd__
#define __container_atd__
#include "langtype_atd.h"
namespace simple_langtype {
	class container
	{
	public:
		class List
		{
		public:
			class  Node
			{
			public:
				langtype* l;
				Node* Next;
				Node* Prev;
			};
			Node* Head;
			Node* Tail;
			int size;
			List();
			~List();
		} list;
		void In(ifstream& ifst);
		void Out(ofstream& ofst);
		void Clear(List& list);
		container();
		~container() { Clear(list); }
	};
}
#endif