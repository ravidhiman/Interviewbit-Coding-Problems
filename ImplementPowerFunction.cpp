/*implement pow(x, n) % d.

In other words, given x, n and d,

find (xn % d)

Note that remainders on division cannot be negative. 
In other words, make sure the answer you return is non negative.

Input : x = 2, n = 3, d = 3
Output : 2

2^3 % 3 = 8 % 3 = 2.*/

int Solution::pow(int x, int n, int d) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    if(x == 0)
        return 0;
    if(n == 0)
        return 1;
    long long  ret;
    long long temp = pow(x,n/2,d);
    if(n%2)
    {
        ret =  (((x*temp)%d)*temp)%d;

    }    
    else
        ret =  (temp*temp)%d;

    if(ret < 0)
        return (ret+d)%d;
    return ret;
}
