#include<iostream>
#include<vector>
#include<algorithm>
int main(){
    std::vector<int> res;
    int test_case = 0;
    std::cin >> test_case;
    while(test_case--){   
        int result = 0;              
        int N = 0;
        std::cin >> N;
        if(N==0)
            return 0;
        std::vector<int> A;
        std::vector<int> B;
        for (int i = 0; i < N; i++){
            int value = 0;
            std::cin >> value;
            A.push_back(value);
        }
        for (int i = 0; i < N; i++){
            int value = 0;
            std::cin >> value;
            B.push_back(value);
        }
        sort(A.begin(), A.end());
        sort(B.begin(), B.end());
        for (int i = 0; i < N; i++)
        {
            if (A[i]>=B[i])
                result += B[i];
            else 
                result += A[i];
        }
        res.push_back(result);
    
    }

    for (int i = 0; i < res.size(); i++)
    {
        //std::cout << 1;
        std::cout << res[i] << '\n';
    }
}
