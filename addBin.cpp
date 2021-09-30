#include <iostream>
#include <string>
using namespace std;
int pow(int n,int exp){
    if(exp==0) return 1;
    else return pow(n,exp-1)*n;
}
int binToint(string a){
    int res=0;
    int size = a.length()-1;
    for(int i = size;i>=0;i--){
        if(a[i]=='1'){
            res+=pow(2,size-i);
        }
    }
    return res;
}
string intToBin(int n){
    string res="";
    int a = n;
    while(a!=0){
        int rem = a%2;
        res = (char)(rem+48)+res;
        a /=2;
    }
    return (n==0)?"0":res;
}
string binAdd(string a,string b){
    // int res = binToint(a)+binToint(b);
    // string resS = intToBin(res);
    // return resS;
    string res="";
    int i=a.length()-1,
        j = b.length()-1,
        s = 0;
    while(i>=0||j>=0||s==1){
        s+=((i>=0)?a[i]-'0':0);
        s+=((j>=0)?b[j]-'0':0);
        res = char(s%2+'0')+res;
        s/=2;
        i--;j--;
    }
    return res;

   
}
int main(){

    string bin1,bin2;
    cin>>bin1>>bin2;
    cout<<binAdd(bin1,bin2)<<endl;
    return 0;

}
