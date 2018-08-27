/*There are two sorted arrays A and B of size m and n respectively.

Find the median of the two sorted arrays ( The median of the array formed by merging both the arrays ).

The overall run time complexity should be O(log (m+n))*/

double BS(const vector<int> &A, const vector<int> &B)
{
 int low = 0;
    int high = A.size();
    while(low<=high)
    {
        int par_x = (low+high)/2;
        int par_y = (A.size()+B.size()+1)/2 - par_x;
        
        int maxLeftX= (par_x == 0)? INT_MIN:A[par_x-1];
        int minRightX = (par_x == A.size()) ? INT_MAX:A[par_x];
        int maxLeftY = (par_y == 0) ? INT_MIN:B[par_y-1];
        int minRightY = (par_y == B.size())?INT_MAX:B[par_y];
        if(maxLeftX<=minRightY && maxLeftY<=minRightX)
            if((A.size()+B.size())%2)
                return max(maxLeftX,maxLeftY);
            else
                return double(max(maxLeftX,maxLeftY)+min(minRightX , minRightY))/2;
        if(maxLeftX>minRightY)
            high = par_x-1;
        else
            low = par_x+1;
    }
}

double Solution::findMedianSortedArrays(const vector<int> &A, const vector<int> &B) {
    if(A.size()>B.size())
        return BS(B,A);
    else
        return BS(A,B);
}
