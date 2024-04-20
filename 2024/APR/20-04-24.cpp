class Solution
{
    public:
    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays. 
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        vector<int>vec;
        int p1=0, p2=0;
        while (p1<n && p2<m)
        {
            if (arr1[p1]<arr2[p2])
            {
                if (vec.empty() || vec.back()!=arr1[p1])
                    vec.push_back(arr1[p1]);
                p1++;
            }
            else if (arr1[p1]>arr2[p2])
            {
                if (vec.empty() || vec.back()!=arr2[p2])
                    vec.push_back(arr2[p2]);
                p2++;
            }
            else
            {
                if (vec.empty() || vec.back()!=arr1[p1])
                    vec.push_back(arr1[p1]);
                p1++;
                p2++;
            }
        }
        while (p1 < n)
        {
            if (vec.empty() || vec.back()!=arr1[p1])
                vec.push_back(arr1[p1]);
            p1++;
        }
        while (p2 < m)
        {
            if (vec.empty() || vec.back()!=arr2[p2])
                vec.push_back(arr2[p2]);
            p2++;
        }
        return vec;
    }
};
