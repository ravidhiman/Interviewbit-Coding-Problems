/*Find out the maximum sub-array of non negative numbers from an array.
The sub-array should be continuous. That is, a sub-array created by choosing the second and fourth element and skipping the third element is invalid.

Maximum sub-array is defined in terms of the sum of the elements in the sub-array. Sub-array A is greater than sub-array B if sum(A) > sum(B).*/


vector<int> Solution::maxset(vector<int> &A) 
{
    vector<int> vecOut;
    long long sum = 0;
    int max_len = 0;
    long long max_sum = INT_MIN;
    int start_i = 0;
    int j = 0,i;
    for(i=0;i<A.size();i++)
    {
        if(A[i] < 0 )
        {
            if(max_sum < sum)
            {
                max_len = i-j;
                start_i = j;
                max_sum = sum;
            }
            else if(max_sum == sum)
            {
                if(max_len < i-j)
                {
                    max_len = i-j;
                    start_i = j;
                }
            }
            j = i+1;
            sum = 0;
        }
        else
            sum += A[i];
    }
    if(i == A.size())
    {
        if(max_sum < sum)
        {
            max_len = i-j;
            start_i = j;
        }
        else if(max_sum == sum)
        {
            if(max_len < i-j)
            {
                max_len = i-j;
                start_i = j;
            }
        }
    }

    for(int i=start_i;i<start_i+max_len;i++)
        vecOut.push_back(A[i]);
    return vecOut;
}
