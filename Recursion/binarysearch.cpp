#include <iostream>
using namespace std;
int binarySearch1(int input[],int si,int ei,int element);
int binarySearch(int input[], int size, int element) {
    return  binarySearch1(input,0,size-1,element);
}

int binarySearch1(int input[],int si,int ei,int element){

     if(si>ei)
       return -1;

     int mid=(si+ei)/2;

      if(input[mid]==element)
            return mid;
      else if(input[mid]>element)
          return   binarySearch1(input,si,mid-1,element);
      else
          return  binarySearch1(input,mid+1,ei,element);


}

int main() {
    int input[100000],length,element, ans;
    cin >> length;
    for(int i =0;i<length;i++)
    {
        cin >> input[i];;
    }

    cin>>element;
    ans = binarySearch(input, length, element);
    cout<< ans << endl;
}
