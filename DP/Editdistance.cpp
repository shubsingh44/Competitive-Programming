#include<bits/stdc++.h>
using namespace std;
int editDistance1(string s1,string s2,int m, int n, int dp[][21]){
      int k=s1.length();
      int l=s2.length();
      if(k==0)
      return l;
      if(l==0)
      return k;
      if (dp[m][n] > -1) {
		return dp[m][n];
	}
   int min1;
   if(s1[0]==s2[0]){
       min1= editDistance1(s1.substr(1,k-1),s2.substr(1,l-1),k-1,l-1,dp);
    }

    else{
       int option1= 1+editDistance1(s1.substr(1,k-1),s2,k-1,l,dp);
       int option2= 1+editDistance1(s1.substr(1,k-1),s2.substr(1,l-1),k-1,l-1,dp);
       int option3= 1+editDistance1(s1,s2.substr(1,l-1),k,l-1,dp);
        min1 = min(option1,min(option2,option3));
     }
    dp[m][n]=min1;
    return min1;
}

int editDistance(string s1, string s2){
    int dp[21][21];
    for(int i=0;i<21;i++){
        for(int j=0;j<21;j++)
            dp[i][j]=-1;
    }
    return editDistance1(s1,s2,s1.length(),s2.length(),dp);
 }
int main(){
  string s1;
  string s2;
  cin >> s1;
  cin >> s2;
  cout << editDistance(s1,s2) << endl;

}




