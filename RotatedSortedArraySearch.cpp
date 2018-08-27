/*Suppose a sorted array is rotated at some pivot unknown to you beforehand.

(i.e., 0 1 2 4 5 6 7  might become 4 5 6 7 0 1 2 ).

You are given a target value to search. If found in the array, return its index, otherwise return -1.

You may assume no duplicate exists in the array.*/

int BS(const vector<int> &A, int B, int low,int high)
{
    if(low <= high)
    {
        int mid = (low+high)/2;
        if(A[mid] == B)
            return mid;

        if(A[low]<=A[mid])
        {
            if(B>=A[low] && B<A[mid])
                return BS(A,B,low,mid-1);
            else
                return BS(A,B,mid+1,high);
        }
        else
        {
            if(B>A[mid] && B<=A[high])
                return BS(A,B,mid+1,high);
            else
                return BS(A,B,low,mid-1);
        }
    }
    else
        return -1;
}
int Solution::search(const vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    return BS(A,B,0,A.size()-1);
    
}
