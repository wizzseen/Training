#include <bits/stdc++.h>
using namespace std;

int maximumi(vector<int> array) {
   int result=array[0];
   int maximum=array[0];
   int minimum=array[0];
   for(int i=1;i<array.size();i++){
     if(array[i]<0){
         int temp;
         temp=maximum;
         maximum=minimum;
         minimum=temp;
     }

     minimum=min(array[i]*minimum,array[i]);
     
     maximum=max(array[i]*maximum,array[i]);
     result=max(result,maximum);
   }return result;
}

int main() {
    vector<int> array = {-1, -3, -10, 0, 60};
    int out = maximumi(array);
    cout << out << endl;  
 return 0;
}

