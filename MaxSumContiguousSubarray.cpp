/*Find the contiguous subarray within an array (containing at least one number) which has the largest sum.

For example:

Given the array [-2,1,-3,4,-1,2,1,-5,4],

the contiguous subarray [4,-1,2,1] has the largest sum = 6.

For this problem, return the maximum sum.*/

int Solution::maxSubArray(const vector<int> &A) {
    if(A.size() == 0)
        return 0;
    int cur_sum;
    int sum;
    sum = A[0];
    cur_sum = A[0];

    for(int i=1;i<A.size();i++)
    {
        cur_sum = max(cur_sum+A[i],A[i]);
        sum = max(cur_sum,sum);
    }
    return sum;
}
