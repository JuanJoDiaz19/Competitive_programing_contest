#include <bits/stdc++.h>
using namespace std;

void dfs(vector<vector<int>> &image, int sr, int sc, int intialColor, int newColor){
    if(sr>=0 && sr<image.size() && sc>=0 && sc<image[0].size() && image[sr][sc]== intialColor) {
        image[sr][sc]= newColor;
        dfs(image, sr+1, sc, intialColor, newColor);
        dfs(image, sr, sc+1, intialColor, newColor);
        dfs(image, sr-1, sc, intialColor, newColor);
        dfs(image, sr, sc-1, intialColor, newColor);
    } else {
        return;
    }
}

vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) { 
    dfs(image, sr, sc, image[sr][sc], newColor);       
    return image;
}

int main(int argc, char const *argv[]) {
    vector<vector<int>> image = {{0,0,0},{0,0,0}};
    floodFill(image, 1, 1, 0);
    for(int i = 0; i<image.size(); i++) {
        for (int j = 0; j < image.size(); j++) {
            cout << image[i][j] << " ";
        } 
        cout << endl;
    }
    return 0;
}
