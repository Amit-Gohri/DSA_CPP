#include<iostream>
using namespace std;
class LL
{
public:
    int data;
    LL *nxtNodePtr;
};

int main(){
    LL *start;
    start = NULL;
    LL *temp = new LL();
    temp->data = 2;
    temp->nxtNodePtr = NULL;
    start = temp;
    cout << start;
}