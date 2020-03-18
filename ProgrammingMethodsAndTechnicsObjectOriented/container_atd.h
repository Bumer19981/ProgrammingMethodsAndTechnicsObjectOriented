#ifndef __container_atd__
#define __container_atd__
#include "langtype_atd.h"
namespace simple_langtype {
            class container
            {
            public:class List
                {
                    public:class  Node
                    {
                        public:langtype* l;
                        public: Node* Next;
                        public: Node* Prev;
                    };
                    public:Node* Head;
                    public:Node* Tail;
                    public:int size;
                public:
                    List();
                    ~List();               
                } list;

            public:void In(ifstream& ifst);
            public:void Out(ofstream& ofst);
            public:void Clear(List &list);
            public:container();
                ~container() { Clear(list); }
            };
}
#endif