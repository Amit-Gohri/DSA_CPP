#include<bits/stdc++.h>
using namespace std;

long long perimeter(long long neededApples){
    long long sides = 1;
    long long apples(0);
    while (apples<neededApples)
    {
        if (sides == 1)
        {
            sides++;
        }
        
        else sides += 2;
        int sum = (sides * (sides + 1)) / 2;
        apples = 4 * sum;
        // long long t = sides;
        // for (long long i = t; i>=1; i--)
        // {
        //     apples += 4 * i;
        // }
        
    }

    return 4 * sides;
}