//Question link- https://codeforces.com/contest/1772/problem/C
//time complexity: O(1)
//Space complexity: O(1)

#include<bits/stdc++.h>
using namespace std;
void strict(int k, int n) {
    int a=1,i=0,t=k-1;
    while(t>=0) {
        if(k==n) {
            cout<<a+i<<" ";
            i++;
        } else if((a+i)<=(n-t)){
            a=a+i;
            cout<<a<<" ";
            i++;
        } else {
            if(a+1<=n) {
            a=a+1;
            cout<<a<<" ";
            }
        }
        t--;
    }
}
int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++) {
        int k,n;
        cin>>k>>n;
        strict(k,n);
        cout<<"\n";
    }
    return 0;
}
