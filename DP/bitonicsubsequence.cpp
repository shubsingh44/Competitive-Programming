#include<bits/stdc++.h>
using namespace std;
int longestBitonicSubarray(int *input, int n) {
        int aarr[n];
        int darr[n];
        aarr[0]=1;
        darr[n-1]=1;
        int i,j;
        for(i=1;i<n;i++){
            aarr[i]=1;
        for(j=i-1;j>=0;j--){
            if(input[j]>=input[i])
            continue;
            int possibleAns = aarr[j] + 1;
			if (possibleAns > aarr[i]) {
				aarr[i] = possibleAns;
            }
         }
      }

      for(i=n-2;i>=0;i--){
            darr[i]=1;
        for(j=i+1;j<n;j++){
            if(input[j]>=input[i])
            continue;
            int possibleAns = darr[j] + 1;
			if (possibleAns > darr[i]) {
				darr[i] = possibleAns;
            }
         }
      }
      int maxelement=0;
      for(int i=0;i<n;i++){
          int rmax=aarr[i]+darr[i];
          if(maxelement<rmax)
            maxelement=rmax;
      }
       maxelement--;
      int check=0;
      for(int i=0;i<n;i++){
         if(check<aarr[i])
            check=aarr[i];
      }
      for(int i=0;i<n;i++){
         if(check<darr[i])
            check=darr[i];
      }
      if(maxelement<check)
        maxelement=check;
      return maxelement;
      //cout<<endl;


}

int main() {
	int n;
	cin >> n;
	int * input = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> input[i];
	}
	int ans = longestBitonicSubarray(input, n);
	cout << ans << endl;
	delete [] input;
}


