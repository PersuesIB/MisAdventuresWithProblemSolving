#include<iostream>
namespace darray
{
    class Array{
        private:
                int *a;
                int size;
                int capacity;
        public:
                Array(int size);
                int append(int& item);
                int getItem(int& index);
                int resize(int nsize);
                int getSize();
        
        
    };
}