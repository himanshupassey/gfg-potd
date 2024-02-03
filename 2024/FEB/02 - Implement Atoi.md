## Date- 02-Feb-2024😊

## POTD- Implement Atoi : [Problem Link](https://www.geeksforgeeks.org/problems/implement-atoi/1)

### Today's Task:

Given a string, s, the objective is to convert it into integer format without utilizing any built-in functions. If the conversion is not feasible, the function should return -1.

Note: Conversion is feasible only if all characters in the string are numeric or if its first character is '-' and rest are numeric.


### Time and Auxiliary Space Complexity:

Time Complexity: O(N), where N is the length of the input string. We iterate through the string once.
Auxiliary Space Complexity: O(1), as we use a constant amount of space for variables.


### Here's the solution to today's problem:
```cpp 		 
class Solution 
{
	public:
    	int atoi(string s) 
	{
        	int n = 0; 
        	for (int i = 0; i < s.length(); i++) 
		{
            	if (i == 0 && s[i] == '-') 
                	continue;
            	if (s[i] >= '0' && s[i] <= '9')
                	n = n * 10 + s[i] - '0';
            	else 
                	return -1; 
       		}
   	    return (s[0] == '-') ? -n : n;
    	}
};
```

### Contribution and Support:

Follow and aim for a collaborative learning environment, please visit our [discussion section](https://github.com/himanshupassey/gfg-potd/discussions)

If you find this solution beneficial, please show your support by giving a '⭐ star' to the [getlost01/gfg-potd](https://github.com/himanshupassey/gfg-potd) repository.
