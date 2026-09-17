class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> triangle;

        for (int i = 0; i < numRows; i++) {
            // Step 1: Create a row of size (i + 1) initialized with 1s.
            // (This automatically handles the first and last element being 1)
            vector<int> row(i + 1, 1);

            // Step 2: Calculate the middle elements (if any exist for this row)
            for (int j = 1; j < i; j++) {
                // The current element is the sum of two elements from the previous row:
                row[j] = triangle[i - 1][j-1]+ triangle[i - 1][j];
            }

            // Step 3: Add the completed row to the triangle
            triangle.push_back(row);
        }

        return triangle;
    }
};