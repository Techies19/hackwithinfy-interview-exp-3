#include <bits/stdc++.h>
using namespace std;
vector<int>all_colored_rings(string str){
    unordered_map<char,set<char>>color_freq;
    for(int i=0;i<str.length();i++){
        color_freq[str[i+1]].insert(str[i]); // insert colors in set
        i++;
    }
    vector<int>answer;
    for(auto element: color_freq){
        if((element.second).size()==3) // if set size is 3 it means this index has all colored rings
           answer.push_back(element.first-'0');
    }
    return answer;
}

int main() {
    string str="B0G0R0B6G6B6G2G5B7R6"; // index 0 and 6 contains all 3 rings
    vector<int>ans=all_colored_rings(str);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}

