#include<iostream>



//going to make a template function for the first time 
template<typename T1, typename T2>
void tfunc(T1 x, T2 y){
    std::cout<<sizeof (x * y);

}
template<class X>
class array{
public:
    int m_array[];
};

int main(){
    tfunc<double, double>(2.0, 4);
   

}