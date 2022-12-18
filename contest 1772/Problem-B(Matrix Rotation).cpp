//Question Link-https://codeforces.com/contest/1772/problem/B
//time complexity: O(n^2)
//space complexity: O(1)


#include <bits/stdc++.h>
using namespace std;

bool mat(int arr[2][2]) {
    int m=INT_MAX,t1=0,t2=0;
    for(int i=0;i<2;i++) {
        for(int j=0;j<2;j++) {
            if(m>arr[i][j]) {
                m=arr[i][j];
                t1=i;
                t2=j;
            }
        }
    }
    int d;
    if(t1==0 && t2==0) d = 0;
    if(t1==0 && t2==1) d = 3;
    if(t1==1 && t2==0) d = 1;
    if(t1==1 && t2==1) d = 2;
    int p = 1;
    while (p <= d) {
        int last = arr[0][0];
        arr[0][0]=arr[1][0];
        arr[1][0]=arr[1][1];
        arr[1][1]=arr[0][1];
        arr[0][1]=last;
        p++;
    }
    if(arr[0][0]==m && arr[0][0]<arr[0][1] && arr[0][0]<arr[1][0] && arr[0][1]<arr[1][1] && arr[1][0]<arr[1][1]) return true;
    else return false;
}
int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++) {
        int a[2][2];
        for(int j=0;j<2;j++)
            for(int k=0;k<2;k++) cin>>a[j][k];
            mat(a);
            for(int j=0;j<2;j++) {
            for(int k=0;k<2;k++) cout<<a[j][k]<<" ";
            cout<<"\n";
            }
        if(mat(a)) cout<<"yes\n";
        else cout<<"no\n";
    }
    return 0;
}
