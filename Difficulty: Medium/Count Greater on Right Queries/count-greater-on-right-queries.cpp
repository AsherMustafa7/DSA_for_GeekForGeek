class Solution {
  public:
    vector<int> countGreater(vector<int> &arr, vector<int> &indices) {
        // code here
        
        vector<int> ans;

        for(int idx : indices)
        {
            int cnt = 0;

            for(int j = idx + 1; j < arr.size(); j++)
            {
                if(arr[j] > arr[idx])
                {
                    cnt++;
                }
            }

            ans.push_back(cnt);
        }

        return ans;
    }
};