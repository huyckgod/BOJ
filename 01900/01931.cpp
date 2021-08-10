#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct time {
    int start;
    int finish;
    
};

bool cmp(time f, time s){
    if(f.finish == s.finish)
        return f.start < s.start;
    else
        return f.finish < s.finish;
}

int main(){
    int N;
    cin >> N;
    
    vector<time> t(N);
    for(int i =0;i<N;i++){
        cin >> t[i].start>>t[i].finish;
    }
    
    sort(t.begin(),t.end(),cmp);
    int cnt = 0;
    int n = 0;
    
    for(int i = 0;i<t.size();i++){
        if
    }
}