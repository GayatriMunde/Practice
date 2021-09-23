# Kadane's Algorithm
- Can be considered as a simple example of dynamic programming
- Popular for "Maximum subarray sum" problem

_Maximum Subarray problem:_  
_Find out the maximum sum of continous subarray in the given array_  
_Example: arr = [2, -1, 5, 9, 1, -7, 8] then maxSum = 16_  



## **Algorithm**  
Initialize:  
    maxSum = INT_MIN  
    sum = 0  

Loop for each element of the array  
  1. sum += arr[i]
  2. maxSum = max(sum, maxSum)
  3. if(sum < 0) -> sum = 0
return max_so_far  



## **Implementation**
```cpp
int kadanesAlgo(vector<int> nums){
  int maxSum = INTMIN, sum = 0;
  
  for (int i = 0; i < nums.size(); i++){
    sum += nums[i];
    maxSum = max(sum, maxSum);
    if (sum < 0)
      sum = 0;
  }
  
  return maxSum;
}
```

## **Applications**
1. Used for image processing.
2. Solving problems like "maximum subarray sum", "Station Travel in Order" and "Hostels Along the Coast". 
