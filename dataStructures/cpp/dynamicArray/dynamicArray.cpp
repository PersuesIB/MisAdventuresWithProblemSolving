#include "dynamicArray.h"
using namespace darray;
Array::Array(int s=1){
    capacity = s;
    a = new int[capacity];
    size = 0;

}
int Array::resize(int nsize= -1){
    if(nsize == -1){
        nsize = capacity *2;
    }  
    if(nsize > capacity){
        int *temp = new int[nsize];
        for(int i = 0; i< size; i++){
            temp[i] = a[i];
        }
        *a = *temp;
        capacity =nsize;
    }
    else{
        std::cerr<<"Value should be greater than the capacity";
        return 0;
    }
    }

int Array::append(int &elem){
    if(size<capacity){
        a[size] = elem;
        size++;
        return 1;
    }
    else{
        resize();
        append(elem);
        return 1;
    }

}
int Array::getItem(int &index){
    if(index <size){
        return a[index];
    }
    else{
        std::cerr<<"Index out of bound";
        return 0;
    }
}
int Array::getSize(){
    return size;
}