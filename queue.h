#ifndef QUEUE
#define QUEUE

#include <iostream>
using namespace std;

template <class T>
class queue{
    private:
        int size;
        int current = -1;
        int max = size - 1;
        T* arr;
    public:
    // to avoid linker errors I will be implemeting the functions here
        queue(int a){
            size = a;
            arr = new T[size];
        }
        void push(T e){
            if((1 + current) <= max){
                arr[++current] = e;
            }else{
                cout<<"The queue is full!"<<endl;
            };
        }
        T pop(){
            if((current) >= 0){
                current = current - 1;
                return arr[current + 1];
            }else{
                cout<<"Cannot pop an Empty array"<<endl;
                return arr[0];
           }

        }
};

#endif