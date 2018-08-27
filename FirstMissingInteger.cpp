/*Given an unsorted integer array, find the first missing positive integer.

Example:

Given [1,2,0] return 3,

[3,4,-1,1] return 2,

[-8, -7, -6] returns 1

Your algorithm should run in O(n) time and use constant space.
*/

int findMissing(vector<int> & A)
{
    for(int i=0;i<A.size();i++)
    {
        if((abs(A[i]) -1) < A.size())
            A[abs(A[i])-1] = -A[abs(A[i])-1];
    }

    for(int i=0;i<A.size();i++)
    {
        if(A[i] > 0 )
            return i+1;

    }
    return A.size() + 1;
}
int Solution::firstMissingPositive(vector<int> &A) {
        int j = 0;
    for(int i=0;i<A.size();i++)
    {
        if(A[i] <= 0)
        {
            int temp = A[j];
            A[j] = A[i];
            A[i] = temp;
            j++;
        }
    }
    A.erase(A.begin(), A.begin() + j);
    return findMissing(A);
}
