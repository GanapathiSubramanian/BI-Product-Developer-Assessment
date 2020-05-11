//using DFS traversal algorithm 

#include<iostream>
#include <bits/stdc++.h>

using namespace std;

//to check whether the position is safe or not
int isSafe(int mat[][4], int row, int col, bool visited[][4]) 
{ 
    return (row >= 0) && (row < 4) && (col >= 0) && (col < 4) && (mat[row][col] && !visited[row][col]); 
} 

//DFS function
void DFS(int mat[][4], int row, int col, bool visited[][4]) 
{ 
    static int rowctr[] = { -1, -1, -1, 0, 0, 1, 1, 1 }; 
    static int colctr[] = { -1, 0, 1, -1, 1, -1, 0, 1 }; 
  
    visited[row][col] = true; 
  
    for (int k = 0; k < 8; ++k) {
        if (isSafe(mat, row + rowctr[k], col + colctr[k], visited)){
            DFS(mat, row + rowctr[k], col + colctr[k], visited); 
    	}
	}
} 

//wrapper function
int connectedOnes(int mat[][4]){
	bool visited[4][4];
	memset(visited, 0, sizeof(visited)); 
	
	int count = 0;
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			if(mat[i][j] && !visited[i][j]){
				DFS(mat, i, j, visited); 
                ++count; 
			}
		}
	}
	return count;
}

//main function
int main(){
	int mat[][4]= { { 1, 1, 1, 1 }, 
                     { 0, 0, 1, 1 },  
                     { 1, 0, 1, 1 }, 
                     { 1, 1, 0, 1 } }; 
                    
    cout<<connectedOnes(mat);
}
