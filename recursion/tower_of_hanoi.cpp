#include <bits/stdc++.h>
using namespace std;

void tower_of_hanoi(int n, char src, char dst, char hlp)
{
    if (n == 1)
    {
        cout << "1 moved to " << dst << endl;

        return;
    }

    tower_of_hanoi(n - 1, src, hlp, dst);
    cout << n << " moved to " << dst << endl;
    tower_of_hanoi(n - 1, hlp, dst, src);
}

int main(int argc, char const *argv[])
{
    tower_of_hanoi(4, 'A', 'C', 'B');
    return 0;
}
