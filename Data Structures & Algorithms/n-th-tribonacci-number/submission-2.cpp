class Solution {
    int a[101];
public:
    int tribonacci(int n) {
    if (n == 0)
    {
        a[0] = 0;
        return 0;
    }
    else if (n == 1 || n == 2)
    {
        a[1] = 1;
        a[2] = 1;
        return a[1];
    }
    else if (a[n] == 0)
    {
        a[n] = tribonacci(n-1) + tribonacci(n-2) + tribonacci(n-3);
        return a[n]; 
    }
    else if (a[n] != 0)
        return a[n];
    
}
};