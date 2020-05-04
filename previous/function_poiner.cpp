#include<iostream>
void sq(int a)
{
    std::cout << a * a;
}
int main()
{
    void (*fun_ptr)(int) = sq;
    (*fun_ptr)(4);
            
}