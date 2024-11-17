#include <bits/stdc++.h>
using namespace std;

int search(vector<int>arr,int tar){
  int l=0;
  int r=arr.size()-1;
  while(l<=r){
  int mid=l+(r-l)/2;
   if(arr[mid]==tar){
      return mid;
    }
  if(arr[mid]>arr[l]){
   
    if(arr[l]<tar<arr[mid]){
      l =mid-1;
    }else{
      r=mid+1;
    }
  }else{
    if(arr[mid]==tar){
      return mid;
    }
    if(arr[mid]<tar<arr[l]){
      r=mid+1;
    }else{
      l=mid-1;
    }
  }

  }return -1;

}

int main(){

  vector <int > array=  {50,10,20,30,40};
  int target=10;
  int output = search(array,target);
  cout<<output<<endl;
  return 0;
}
