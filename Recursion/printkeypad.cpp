#include<bits/stdc++.h>
using namespace std;
string mp[10];
void keypad(int num, string output){
     if(num==0){

      cout<<output<<endl;
      return;
     }

    int r=num%10;
    for(int i=0;i<mp[r].length();i++)
    keypad(num/10,mp[r][i]+output);
   // keypad(num/10,output);
}

int main(){
    mp[2]="abc";
    mp[3]="def";
    mp[4]="ghi";
    mp[5]="jkl";
    mp[6]="mno";
    mp[7]="pqrs";
    mp[8]="tuv";
    mp[9]="wxyz";
    int n;
    cin>>n;
    string output="";
    keypad(n,output);
}

