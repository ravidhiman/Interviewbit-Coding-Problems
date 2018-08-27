/*
Given a list of non negative integers, arrange them such that they form the largest number.

For example:

Given [3, 30, 34, 5, 9], the largest formed number is 9534330.
*/

string myToString(int a)
{
    stringstream ss;
    ss << a;
    return ss.str();
}

int myCompare(int x,int y)
{
        string a = myToString(x);
        string b = myToString(y);
        string ab = a+b;
        string ba = b+a;
        return ab.compare(ba)>0?1:0;
}

string Solution::largestNumber(const vector<int> &A) 
{
   vector<int> temp(A);
    int count_zeros = 0;
    for(int i=0;i<temp.size();i++)
        if(temp[i] == 0)
            count_zeros++;
    if(count_zeros == temp.size())
        return "0";
        
    string res = "";
    sort(temp.begin(), temp.end(), myCompare);
    for(int i=0;i<temp.size();i++)
    {
        res += myToString(temp[i]);
    }
    return res;
}
