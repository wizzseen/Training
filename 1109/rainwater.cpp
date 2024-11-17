#include <bits/stdc++.h>
using namespace std;




int calculate(vector <int> arr){
  int result=0;
  vector <int> maxi;
  int maaaa=0;
  vector <int> mini;
  maxi.push_back(0);
  for(int i = 1;i<arr.size();i++){
        if(maaaa<arr[i-1]){
          maaaa=arr[i-1];
        }maxi.push_back(maaaa);
  }

  mini.push_back(0);
  int temp=arr[arr.size()-1];
  for(int i=arr.size()-2;i!=-1;i--){
    if(temp<arr[i+1]){
      temp=arr[i+1];

    }mini.push_back(temp);
  }reverse(mini.begin(),mini.end());

  //for(int i=0;i<arr.size();i++){
   // cout<<mini[i]<<"";
    
   // cout<<maxi[i]<<"";
  //}


    int res=0;
  for(int i=0;i<mini.size()-1;i++){
    res=(min(mini[i],maxi[i]))-(arr[i]);
    //cout<<res<<endl;
    if(res>=0){
      result+=res;
    }
      
            
  }return result;





}


int main (){
   
  vector <int> input={10,9,0,5};
  int result=calculate(input);
  cout << result<<endl;
  return 0;

}

