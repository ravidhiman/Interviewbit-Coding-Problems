/*You are in an infinite 2D grid where you can move in any of the 8 directions :

 (x,y) to 
    (x+1, y), 
    (x - 1, y), 
    (x, y+1), 
    (x, y-1), 
    (x-1, y-1), 
    (x+1,y+1), 
    (x-1,y+1), 
    (x+1,y-1) 
You are given a sequence of points and the order in which you need to cover the points. Give the minimum number of steps in which you can achieve it. You start from the first point.*/

int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    if(A.size() == 1 || A.size() == 0)
        return 0;
    int total_steps=0;
    for(int i=1;i<A.size();i++)
    {
        total_steps += max(abs(A[i] - A[i-1]),abs(B[i] - B[i-1]));
    }

    return total_steps;
}
