#include <iostream>
#include<map>
#include<cmath>
using namespace std;
int Mod(int A, int B, int C) {
    int x = 0;
    if(B>=2){
        x = ((abs(A)%C)*(abs(A)%C))%C;
        int i = B-2;
        while(i--){
            x=((x%C)*(A%C))%C;
        }
    }
    else {
       
        x = (int)pow(abs(A), B) % C;
    }
    if(A<0 && B%2!=0) return C-x;
    return x;
}


int main()
{
	cout << Mod(79161127, 99046373, 57263970);
}








int Solution::Mod(int A, int B, int C) {
    int x = 0;
    if(B>=2){
        x = ((abs(A)%C)*(abs(A)%C))%C;
        int i = B-2;
        while(i--){
            x=((x%C)*(A%C))%C;
        }
    }
    else {
       
        x = (int)pow(abs(A), B) % C;
    }
    if(A<0 && B%2!=0) return C-x;
    return x;
}


int Mod(int A, int B, int C){
	int y = 0;
	if(B % 2 == 0){
		y = Mod(A, B/2, C);
        y = (y * y) % C;
	}
	else{
		if(A>=0){
			y = Mod(A, B-1, C);
			y = (A % C * y) % C;
		}
		else{
			y = Mod(A, B-1, C);
			y = ((A % C * y) % C) + A ;
		}
		
	}
}
