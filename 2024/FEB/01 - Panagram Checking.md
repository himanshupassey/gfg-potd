### Date- 01-Feb-2024😊

## POTD- Panagram Checking (https://www.geeksforgeeks.org/problems/pangram-checking-1587115620/1)

## Easy          Accuracy: 61.34%        Submissions: 58K+               Points: 2

### Today's Task:

The function checkPangram() that takes a string as a parameter 

Returns true if the string is a Panagram, 
  or 
else it returns false.

### Time and Auxiliary Space Complexity:

Time Complexity: O(|s|), where |s| denotes the length of the input string.
Expected Auxiliary Space: O(1)

### Constraints:
1 ≤ |s| ≤ 104
Both Uppercase & Lowercase are considerable


### Here's the solution of today's problem:
   
    class Solution
    {
     
      public:
      //Function to check if a string is Pangram or not.
      bool checkPangram (string s) 
     
     {
        vector<int> f(26, 0);      
        
        for(auto i : s)
        {
            char n = tolower(i);         
            if(n >= 'a' and n <= 'z')
            {
                f[n - 'a'] = 1;
            }
        }
        
        return accumulate(f.begin(), f.end(), 0) == 26; 
      }
    
    };

### Contribution and Support:

Follow and aim for collaborative learning environment.

If you find this solution helpful, consider supporting us by giving a ⭐ star to the himanshupassey/gfg-potd repository.
