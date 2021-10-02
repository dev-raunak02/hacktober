#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
        int i=0,temp=1,sign=1;long long num=0;
        while(i<s.length() ){
            if(temp==1 && (s[i]=='-' || s[i]=='+')){
                temp=0;
                if(s[i]=='-')
                    sign=0;
            }
                
            else if(s[i]>='0' && s[i]<='9'){
                num=num*10+s[i]-48;
                if(num>pow(2,31)){
                    num=pow(2,31);
                    break;
                }
                    
                temp=0;
            }else if(temp==0 && !(s[i]>='1' && s[i]<='9'))
                    break;
            else if(s[i]!=' ' )
                break;
            i++;
        }
        if(sign==0)
            num=-num;
        if(num>=pow(2,31))
            num=pow(2,31)-1;
        else if(num<pow(-2,31))
            num=pow(-2,31);
        cout<<num;
        return 0;
    }