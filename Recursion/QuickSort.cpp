#include<bits/stdc++.h>
using namespace std;
void quikSort(int input[],int si,int ei);
int  partition(int input[],int si,int ei);

void quickSort(int input[], int size) {

   quikSort(input,0,size-1);

}
int main(){
    int n;
    cin >> n;

    int *input = new int[n];

    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }

    quickSort(input, n);
    for(int i = 0; i < n; i++) {
        cout << input[i] << " ";
    }

    delete [] input;

}


void quikSort(int input[],int si,int ei){
        if(si>=ei)
            return ;
         int x = partition(input,si,ei);

                 quikSort(input,si,x-1);
                 quikSort(input,x+1,ei);

}

int partition(int input[],int si,int ei)
{
        int count=0;
        for(int i=si+1;i<=ei;i++){
          if(input[i]<=input[si])
            count++;
        }
     //cout<<"the count is"<<count<<endl;
     int temp=si+count;
     int temp1=input[temp];
         input[temp]=input[si];
         input[si]=temp1;

     int i=si;
     int j=ei;
    /* cout<<"after swap"<<endl;
     for(int i=si;i<=ei;i++){
        cout<<input[i]<<" ";
     }
      cout<<endl;*/
    while((i<temp)&&(j>temp))
     {

          if(input[i]<=input[temp]&&input[j]>input[temp])
           {
            i++;
            j--;
           }

          else if(input[i]<=input[temp]&&input[j]<input[temp])
             i++;

          else if(input[i]>input[temp]&&input[j]>input[temp])
             j--;
          else if(input[i]<=input[temp]&&input[j]==input[temp])
             i++;

          else
          {
            int flag=input[i];
            input[i]=input[j];
            input[j]=flag;
            i++;
            j--;
          }
     }

    /* for(int i=si;i<=ei;i++)
        cout<<input[i]<<" ";
        cout<<endl;*/

     return temp;

}
