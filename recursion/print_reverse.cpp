#include<iostream>
#include<string>
using namespace std;
void printrev(string a,int i){
    if(i != a.size()-1){
        printrev(a, i + 1);
    }
    
    cout << a[i];
}
void printrec(string a, int i){
    

}
int main(){
    string A = "abcdefghijklmnopqrstuvwxyz";
    printrev(A, 0);
    printrev(A, A.size() - 1);
}