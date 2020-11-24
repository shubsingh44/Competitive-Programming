#include<bits/stdc++.h>
using namespace std;
void call(string &s)
{
    cin>>s;
#include<bits/stdc++.h>
using namespace std;

int longestBitonicSubarray(int *input, int n) {

	/* Don't write main().
     	* the input is already passed as function argument.
     	* Taking input and printing output is handled automatically.
     	*/
     	int ac[n],dc[n];

        for(int i=0;i<n;i++){
            ac[i]=1;
            for(int j=i-1;j>=0;j--){
                if(input[j]<input[i])
                {
                    int temp=ac[j]+1;
                    if(temp>ac[i]){
                        ac[i]=temp;
                    }
                }
            }
        }
        for(int i=n-1;i>=0;i--){
            dc[i]=1;
            for(int j=i+1;j<n;j++){
                if(input[j]<input[i])
                {
                    int temp=dc[j]+1;
                    if(temp>dc[i]){
                        dc[i]=temp;
                    }
                }
            }

        }

        cout<<"AC  " ;
        for(int i=0;i<n;i++){
            cout<<ac[i]<<" ";
        }
        cout<<endl<<"DC  " ;
        for(int i=0;i<n;i++){
            cout<<dc[i]<<" ";
        }
    cout<<endl;

        int maxac=0,maxdc=0,maxud=0;
        for(int i=0;i<n;i++){
            if(ac[i]>maxac){
                maxac=ac[i];
            }
            if(dc[i]>maxdc){
                maxdc=dc[i];
            }
            int temp=ac[i]+dc[i]-1;
            if(temp>maxud)
                maxud=temp;
        }
        if(maxdc==1)
            return maxac;
        else if(maxac==1)
            return maxdc;
        else
            return maxud;
 	}
}

int main(){
string s="shubham";
 call(s);
 cout<<s<<endl;
}
