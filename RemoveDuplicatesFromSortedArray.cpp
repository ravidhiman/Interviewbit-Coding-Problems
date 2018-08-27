/*Remove duplicates from Sorted Array
Given a sorted array, remove the duplicates in place such that each element appears only once and return the new length.*/

int Solution::removeDuplicates(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    if(!A.size())
        return 0;
    int i,j=1;
    
    for(i=1;i<A.size();i++)
    {
        if(A[i-1] != A[i])
        
            A[j++] = A[i];
    }
    return j;
}
