    #include<iostream>
    #include<string>
    #include<unordered_map>
    using namespace std;

    int main(){
        int t;
        cin >> t;
        
        while (t--)
        {
            int N,Q;
            unordered_map<char, int> umap;
            cin >> N >> Q;
            for (int i = 0; i < N; i++)
            {
                char s;
                cin >> s;
                auto it = umap.find(s);
                if(it == umap.end()){
                    umap.insert({s, 1});
                }
                else
                {
                    // if(it->second>c)
                    it->second++;
                }
            }

            while (Q--)
            {
                int min(0);
                int c;
                cin >> c;
                for (auto it = umap.begin(); it != umap.end(); it++)
                {
                    if(it->second>c)
                        min += it->second - c;

            }
            cout << min << endl;
            }
                

            
            
        }
        
    }