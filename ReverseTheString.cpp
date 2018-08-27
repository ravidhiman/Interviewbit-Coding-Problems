/*
Given an input string, reverse the string word by word.

Example:

Given s = "the sky is blue",

return "blue is sky the".
*/

void Solution::reverseWords(string &A) {
    reverse(A.begin(),A.end());
    string B = "",temp;
    std::size_t found = -1,sav = 0;
    while(1)
    {
        found = A.find(" ",found+1);
        if (found==std::string::npos)
        {
            temp = A.substr(sav);
            reverse(temp.begin(),temp.end());
            B += temp;
            break;
        }
        temp = A.substr(sav, found-sav);
        sav = found+1;
        reverse(temp.begin(),temp.end());
        B += temp;
        B += " ";
    }
    if(sav != 0)        
        A = B;
    else
        reverse(A.begin(),A.end());
}
