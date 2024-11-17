#include <bits/stdc++.h>
using namespace std;

long long int fact(int n){
     
  if((n==1) or (n==0)){
    return 1;
  }else{
     long long int out=1;
      for( long long int  i=2 ;i<=n;i++){
        out*=i;

      }
    return out;

  }


}



int main(){
  int input=4;
  long long int output= fact(input);
  cout<<output<<endl;
return 0;
}
