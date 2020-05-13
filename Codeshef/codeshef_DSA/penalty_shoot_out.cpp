#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        //vector<int> AB;
        string AB;

        int a;
        cin >> AB;

        //bool A;
        int goalA(0), goalB(0);
        //bool B;
        int iterate(1);

        for (int i = 1; i <= N; i++)
        {

            if (AB[iterate - 1] == '1') goalA++;
            //check for A and B
            if (goalA > N - i + 1 + goalB || goalB > goalA + N - i) {       // +1 B has not played this round
                cout << iterate << endl;
                break;
            }

            iterate++;


            if (AB[iterate - 1] == '1') goalB++;
            if (goalA > N - i + goalB || goalB > goalA + N - i) {       // +1 B has not played this round
                cout << iterate << endl;

                break;
            }
            if (iterate == 2 * N) cout << iterate << endl;
            iterate++;
            //check
        }

    }

}
//  
//18