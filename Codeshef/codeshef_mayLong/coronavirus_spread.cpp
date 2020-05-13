#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int checkleft(int i, vector<bool>& infected, int N, vector<int>& pos) {
    int left(1);
    for (int j = i - 1; j >= 0; j--) {
        if (infected[j] == 1)
            left++;
        else
        {
            break;
        }
    }
    return left;
}
int checkRight(int i, vector<bool>& infected, int N, vector<int>& pos) {
    int right(0);
    for (int j = i + 1; j < N; j++) {
        if (pos[j] - pos[i] <= 2) {
            //infected.push_back(1);
            right++;
        }
        else
        {

            break;
        }
        i++;
    }
    return right;
}


int main() {
    int t(0);
    cin >> t;
    while (t--)
    {
        int N, mn(1), mx(1), left, right, infect;
        cin >> N;   //no of persons
        vector<int> pos;
              //0 bach gya, 1 ho gya virus
        for (int i = 0; i < N; i++)
        {
            
            int position;
            cin >> position;
            pos.push_back(position);
        }
        for (int if_this_is_infected = 0; if_this_is_infected < N; if_this_is_infected++)
        {
            vector<bool> infected;

            for (int i = 0; i < if_this_is_infected; i++)
            {
                infected.push_back(0);
            }
            infected.push_back(1);

            right = checkRight(if_this_is_infected, infected, N, pos);
            left = checkleft(if_this_is_infected, infected, N, pos);
            infect = left + right;
            mx = max(mx, infect);
            if (if_this_is_infected == 0)
                mn = infect;
            else mn = min(mn, infect);
        }
        cout << mn << " " << mx << endl;

    }

}