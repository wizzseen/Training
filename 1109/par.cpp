#include <bits/stdc++.h>

using namespace std;


string st(string input){
  stack <char> stac;
  for (int i=0;i<input.size();i++){
    if(input[i]=='('){
      stac.push(input[i]);

    }else{
      if(stac.empty()){
        return "NOT BALANCED";
      }stac.pop();
    }
  }return "BALANCED";
}





int main(){

   string input ="())((())";
   cout<<st(input)<<"";


}
