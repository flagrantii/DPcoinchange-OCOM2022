#include <bits/stdc++.h>
using namespace std;
int m;

int check(int n, int o[]){
    int ans[n];
    ans[0] = 0;
    for (int i=1;i<=n;i++){
        ans[i]=INT_MAX;   
        for(int j=0;j<m;j++){
            int num=o[j];
            if(i-num>=0){
            	ans[i]=min(ans[i],1+ans[i-num]);
            }
        }
    }
    return ans[n];
}
int main() {
    int n;
    cin>>n>>m;
    int o[m];
    for(int i=0;i<m;i++) 
		cin>>o[i];
    cout<<check(n,o);
}
