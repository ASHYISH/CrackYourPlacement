class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
        
        int n = arr.size();
        int i = 0, j  = 0;
        
        while(i < n)
        {
            while(i < n-1 && arr[i] == arr[i+1]) i++;
            arr[j] = arr[i];
            i++, j++;
        }

        return j;
        
    }
};
