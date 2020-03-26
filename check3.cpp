#include <iostream>
using namespace std;
class akash{
    public:
        int x,y;
        akash *ptr;
};
int main(){
    akash a1;
    akash a2;
    a1.ptr = &a2;
}