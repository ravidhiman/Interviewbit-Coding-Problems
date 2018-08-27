/*The robot can only move either down or right at any point in time. The robot is trying to reach the bottom-right corner of the grid (marked ‘Finish’ in the diagram below).

How many possible unique paths are there?*/


int Solution::uniquePaths(int A, int B) {
    int **map = new int*[A];
    for(int i=0;i<A;i++)
    {
        map[i] = new int[B];
    }

    for(int i=0;i<A;i++)
    {
        for(int j=0;j<B;j++)
        {
            if(i ==0 || j == 0)
                map[i][j] = 1;
            else
                map[i][j] = map[i-1][j] + map[i][j-1];
        }
    }
    return map[A-1][B-1];
}
