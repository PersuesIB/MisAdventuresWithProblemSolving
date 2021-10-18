#include "dynamicArray.h"

void main(){
    int size;
    std::cout<<"Enter the size of the array \n";
    std::cin>>size;
    darray::Array arr(size);
    while(1){
        int ch;
        std::cout<<"1.Append \n 2.Display \n 3.Exit\n";
        std::cin>>ch;
        switch(ch){
            case 1: std::cout<<"Enter the element to append: ";
                    std::cin>>ch;
                    arr.append(ch);
                    break;
            case 2:
            std::cout<<"---------\n"<<arr.getSize()<<"\n";
            for(int i = 0; i<arr.getSize();i++){
                    std::cout<<arr.getItem(i)<<" ";
            }
            std::cout<<"----------\n";
                    break;
            case 3:
                    exit(0);
        }
    }

}
