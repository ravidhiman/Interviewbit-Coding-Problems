/*Given a non-negative number represented as an array of digits,

add 1 to the number ( increment the number represented by the digits ).

The digits are stored such that the most significant digit is at the head of the list.*/

vector<int> Solution::plusOne(vector<int> &A) {
    vector<int> vecOut;
    int len = A.size();
    int carry = 1;
    int x;
    for(int i = len-1;i>=0;i--)
    {
        x = A[i] + carry;
        carry = x/10;
        x = x%10;
        vecOut.push_back(x);
    }
    if(carry == 1)
        vecOut.push_back(carry);
    
    int i;
    
    
    for(i = vecOut.size()-1; i >=0 ; --i)
    {
        if(vecOut[i] != 0)
            break;
    }
    
    if(i+1 != vecOut.size())
        vecOut.resize(i+1);
    
    reverse(vecOut.begin(),vecOut.end());
    
    return vecOut;
}
