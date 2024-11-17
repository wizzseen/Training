#include <bits/stdc++.h>
using namespace std;

int calculate(vector <int> num,int m){
   
   sort(num.begin(),num.end());
   return num[m-1] - num[0];
  
}






int main(){
  vector <int> input= {7, 3, 2, 4, 9, 12, 56};
  int m =3;
  
  int result=calculate(input,m);
  cout<<result<<endl;

  return 0;
}
