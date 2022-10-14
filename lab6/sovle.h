int mypow(int n){
    if (n==1)
        return 2;
    else
        return (2 * mypow(n-1));
}