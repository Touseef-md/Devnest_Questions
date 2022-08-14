// Flood Fill
// Matrix
// Easy
// Score: 10
// An image is represented by an m x n integer grid image where image[i][j] represents the pixel value of the image.

// You are also given three integers sr, sc, and color. You should perform a flood fill on the image starting from the pixel image[sr][sc].

// To perform a flood fill, consider the starting pixel, plus any pixels connected 4-directionally to the starting pixel of the same color as the starting pixel, plus any pixels connected 4-directionally to those pixels (also with the same color), and so on. Replace the color of all of the aforementioned pixels with color.

// Return the modified image after performing the flood fill.

// Input Format
// First Parameter - matrix image of size m x n

// Second Parameter - number sr

// Third Parameter - number sc

// Fourth Parameter - number newColor

// Output Format
// Return the modified matrix.
#include<bits/stdc++.h>
using namespace std;
void dfs(vector<vector<int>> &image,vector<vector<int>>& flag,int i,int j,int val,int &color){
    // cout<<i<<"  "<<j<<endl;
    if(flag[i][j]!=-1)
        return;
    flag[i][j]=1;
    if(image[i][j]!=val)
        return;
    if(image[i][j]==val)
    image[i][j]=color;
    if(i-1>=0)
        dfs(image,flag,i-1,j,val,color);
    if(i+1<image.size())
        dfs(image,flag,i+1,j,val,color);
    if(j-1>=0)
        dfs(image,flag,i,j-1,val,color);
    if(j+1<image[0].size())
        dfs(image,flag,i,j+1,val,color);
    return;
}

vector<vector<int>> solve(vector<vector<int>> image, int sr, int sc, int color){
//CODE HERE 
vector<vector<int>> flag(image.size(),vector<int>(image[0].size(),-1));
dfs(image,flag,sr,sc,image[sr][sc],color);
return image;
}