//Question link-https://codeforces.com/contest/1772/problem/A
//time complexity: 
//space complexity: 


//method-1
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++) {
       int num1, num2;
       string s;
       cin>>s;
       num1 = s[0]-'0';
       num2 = s[2]-'0';
       cout<<(num1+num2)<<endl;
    }
	return 0;
}


//method-2
#include <bits/stdc++.h>
using namespace std;
// int sum(string str) {
//     int t,ans,a1=0,a2=0;
//     for(int i=0;i<str.size();i++) {
//         if(str[i]=='+') {
//             t=i;
//             break;
//         }
//     }
//     for(int i=t-1;i>=0;i--) {
//         a1=a1+str[i]*pow(10,(t-1)-i);
//     }
//     for(int i=t+1;i<str.size();i++) {
//         a2=a2+str[i]*pow(10,(str.size()-1)-i);
//     }
//     ans=a1+a2;
//     return ans;
// }

int main()
{
    int t;
    cin>>t;
//     string str;
//     //cout<<"*****";
// 	getline(cin, str);
    for(int i=0;i<t;i++) {
       string s;
       cin>>s;
       int num1, num2, t=1;
       string s1="", s2="";
       for(int j = 0; j < s.size(); j++){
           if(s[j] == '+'){
               num1 = stoi(s1);
               t=-1;
           }
           else if(t==1) s1+=s[j];
           else s2+=s[j];
       }
       num2=stoi(s2);
       cout<<"numbers"<<num1<<" "<<num2<<endl;
    }
	return 0;
}
