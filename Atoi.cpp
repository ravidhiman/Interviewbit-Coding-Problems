/*mplement atoi to convert a string to an integer.

Example :

Input : "9 2704"
Output : 9
*/

int Solution::atoi(const string A) {
     if(A.length() == 0)
        return 0;
    long res = 0;
    int sign = 1;
    int plus_count =0;
    bool flag =false;
    for(int i=0;i<A.length();i++)
    {
        if(A[i]>=48 && A[i] <=57)
        {
            res = (res*10); 
            res+= (A[i]-48);
            if(sign*res < INT_MIN)
                return INT_MIN;
            if(res > INT_MAX)
                return INT_MAX;
            flag = true;
        }
        else if(A[i] == '-')
        {
            if(sign == -1)
                return 0;
            else
                sign = -1;
        }
        else if(A[i] == '+')
        {
            if(plus_count == 1)
                return 0;
            else
                plus_count = 1;
        }
        else if(A[i] == ' ' && res==0 && (plus_count==1 || sign==-1))
            return 0;
        else if(A[i] == ' ' && res==0 && !flag )
            continue;
        else
            break;
    }
    res = sign*res;
    if(res>INT_MAX)
        return INT_MAX;
    if(res<INT_MIN)
        return INT_MIN;
    return res;
}
