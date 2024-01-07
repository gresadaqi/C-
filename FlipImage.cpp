class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
       int n = image.size();
        for (int i = 0; i < n; ++i) {
            reverse(image[i].begin(), image[i].end());
        }
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                image[i][j] = 1 - image[i][j];
            }
        }
 return image; 
    }
    
};

int main() {
    vector<vector<int>> image = {{1, 0, 1}, {0, 1, 0}, {1, 1, 1}};
    
    Solution sol;
    vector<vector<int>> result = sol.flipAndInvertImage(image);

    for (const auto& row : result) {
        for (int pixel : row) {
            cout << pixel << " ";
        }
        cout << endl;
    }
    
    return 0;
}