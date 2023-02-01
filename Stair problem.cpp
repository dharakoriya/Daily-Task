

int Solution::climbStairs(int A) {
    if(A<=2)
    {
        return A;
    }
    else
    {
        return climbStairs(A-1) + climbStairs(A-2) ;
    }
}
