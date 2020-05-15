#include<iostream>
// using namespace std;

template<typename T, int size>
class array{
    public:
        T array[size];
        int size(){
            return size;
        };
};
// int array::size(){           cannot use because class is defined in a template 



int main(){
    array<int, 4> mySTLarray;
   

}