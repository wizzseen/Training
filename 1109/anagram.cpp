#include <bits/stdc++.h>
using namespace std;


string ana(string n,string m){
  sort(n.begin(),n.end());
  sort(m.begin(),m.end());
  if(n==m){
    return "true";
  }else{
    return "false";
  }
}



int main (){
 string input="allergy";
 string input2="allergic";
 cout<<ana(input,input2)<<"";
}
