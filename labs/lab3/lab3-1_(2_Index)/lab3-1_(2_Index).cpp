#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

bool check(int nums[], int n, int indexDiff, int valueDiff) 
{
    int ans;
    for (int i = 0; i <= n-1; i++)
    {
        for (int j = 0; j <= n-1; j++)
        {
            if (abs(i - j) <= indexDiff && abs(nums[i] - nums[j]) <= valueDiff && i != j)
            {
                return true;
            }
            else
            {
                
            }

        }
    }
    return false;
}

int main() 
{
    int indexDiff;
    int valueDiff;
    int n;
    cout << "Введите кол-во элементов nums:";
    cin >> n;
    int nums[n];
    cout << "Введите массив nums(По 1 элементу);";
    for (int i = 0; i <= n-1; i++)
    {
        cin >> nums[i];
    }
    cout << "Введите indexDiff:";
    cin >> indexDiff;
    cout << "Введите valueDiff:";
    cin >> valueDiff;
    bool ans = check(nums, n, indexDiff, valueDiff);
    if (ans) 
    {
        cout << "Exists pair";
    }
    else 
    {
        cout << "Pair doesnt exist";
    }
}
