#include <bits/stdc++.h>


using namespace std;

void modifyMatrix(vector<vector<int>>& mat) {
    int M = mat.size();
    
    int N = mat[0].size();

 


    bool rowFlag = false, colFlag = false;
    for (int j = 0; j < N; j++) {
        if (mat[0][j] == 1) {
            rowFlag = true;
            break;
            }
    } 

    for (int i = 0; i < M; i++) {
        if (mat[i][0] == 1) {
            colFlag = true;
            break;
             }
    } 

    for (int i = 1; i < M; i++) {
        for (int j = 1; j < N; j++) {
            if (mat[i][j] == 1) {
                mat[i][0] = 1;
                mat[0][j] = 1;
             }
              }
    }

for (int i = 1; i < M; i++) {
       for (int j = 1; j < N; j++) {
                if (mat[i][0] == 1 || mat[0][j] == 1) {
                 mat[i][j] = 1;
             }
        }
    }

if (rowFlag) {
         for (int j = 0; j < N; j++) {
               mat[0][j] = 1;
         }
    }

    if (colFlag) {
        for (int i = 0; i < M; i++) {
            mat[i][0] = 1;
        }
    }
}

void printMatrix(const vector<vector<int>>& mat) {
      for (const auto& row : mat) {
         for (int val : row) {
                 cout << val << " ";
        }
    cout << endl;
    }
}

int main() {
    vector<vector<int>> mat1 = {{1,0,0,1}, {0, 0,1,0},{0,0,0,0}};
    modifyMatrix(mat1);
    printMatrix(mat1);
  

    return 0;
}

