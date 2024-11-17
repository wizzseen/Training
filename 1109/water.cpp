#include <bits/stdc++.h>
using namespace std;


int maxiwa(vector <int> nums){
  int l=0;
  int r=nums.size()-1;
  int maxi=0;
  while (l<r) {
    int area = min(nums[l],nums[r]) * (r - l);
    if(maxi<area){
      maxi=area;
    }if(nums[l]<nums[r]){
      l+=1;
    }else{
      r-=1;
    }

    
  }return maxi;
} 








int main(){
  
  vector <int> input={3,1,2,4,5};
  int output = maxiwa(input);
  cout<<output<<endl;



  return 0;
}
