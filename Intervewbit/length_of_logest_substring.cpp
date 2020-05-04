#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;
int lengthOfLongestSubstring(string s) {
	unordered_map<char, int> umap;
	unordered_map<char, int>::iterator it;
	int j(0), i(0);
	int max_len(0), crt_len(0);
	if (s.length() == 1) return 1;
	while (i < s.length() && j < s.length())
	{
		it = umap.find(s[j]);
		if (j == 0 || it == umap.end() /*check if not already present*/)
		{
			umap.insert(make_pair(s[j], 1));
			crt_len++;		//increase len of sub string
			if (j == s.length() - 1) {
				if (max_len < crt_len) max_len = crt_len;
			}
			j++;
		}
		else
		{
			if (max_len < crt_len) max_len = crt_len; //update max len of sub string
			//1 adjust the crt_len variable
			//2 find pre occuring and set i to next of that character

			crt_len--;
			//del hash map
			umap.erase(s[i]);
			i++;
		}
	}
	return max_len;

}
int main() {

	cout<<lengthOfLongestSubstring("abc");


}