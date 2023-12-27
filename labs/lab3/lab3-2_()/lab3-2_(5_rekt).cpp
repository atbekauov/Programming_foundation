#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int max_rectangle(vector<vector<char>> matrix) 
{
    if (matrix.empty())
    {
        return 0;
    }

    int maxArea = 0;
    int x = matrix.size();
    int y = matrix[0].size();
    std::vector<int> heights(y, 0);

    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) 
        {
            if (matrix[i][j] == '1') 
            {
                heights[j] += 1;
            }
            else 
            {
                heights[j] = 0;
            }
        }
        stack<int> s;
        int k = 0;
        while (k < y) 
        {
            if (s.empty() || heights[s.top()] <= heights[k]) 
            {
                s.push(k++);
            }
            else 
            {
                int tp = s.top();
                s.pop();
                int area = heights[tp] * (s.empty() ? k : k - s.top() - 1);
                maxArea = std::max(maxArea, area);
            }
        }
        while (!s.empty()) 
        {
            int tp = s.top();
            s.pop();
            int area = heights[tp] * (s.empty() ? k : k - s.top() - 1);
            maxArea = std::max(maxArea, area);
        }
    }

    return maxArea;
}

int main() 
{
    std::vector<std::vector<char>> matrix = 
    {
            {'1', '1', '1', '1', '1'},
            {'0', '1', '1', '1', '1'},
            {'1', '1', '1', '1', '1'}
    };
    std::cout << "Max size: " << max_rectangle(matrix) << std::endl;

    return 0;
}