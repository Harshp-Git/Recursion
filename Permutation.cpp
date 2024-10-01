#include <iostream>
#include <vector>

using namespace std;

void output(vector<int>& nums, vector<vector<int>>& ans, int i)
{
    if (i == nums.size() - 1) 
    {
        ans.push_back(nums);
        return;
    }
    for (int j = i; j < nums.size(); j++)
    {
        swap(nums[i], nums[j]);
        output(nums, ans, i + 1);
        swap(nums[i], nums[j]);
    }
}

void printPermutations(vector<vector<int>>& ans)
{
    for (auto& perm : ans)
    {
        for (auto& num : perm)
        {
            cout << num << " ";
        }
        cout << endl;
    }
}

int main()
{
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> ans;
    output(nums, ans, 0);
    printPermutations(ans);
    return 0;
}