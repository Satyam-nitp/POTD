#include <bits/stdc++.h>
using namespace std;

void f(int num, int n, vector<int>& ans){
    if(num>n) return;
    ans.push_back(num);
    if(num<=n){
        for(int i=0;i<=9;i++){
            int c=num*10+i;
            f(c, n, ans);
        }
    }
}
vector<int> lexicalOrder(int n) {
    vector<int> ans;
    for(int i=1;i<10;i++){
        f(i, n, ans);
    }
    return ans;
}
void display(vector<int> v){
    for(auto i:v) cout<<i<<" ";
    cout<<endl;
}

int main(){
    int n;
    cin>>n;
    vector<int> ans;
    ans=lexicalOrder(n);
    display(ans);
}