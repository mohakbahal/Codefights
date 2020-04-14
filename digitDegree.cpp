int digitDegree(int n) {
    int sum,degree=0;
    if(n<10)
    return 0;
    else
    {
    while(1)
    {
        sum=0;
        while(n!=0)
        {
            sum+=n%10;
            n/=10;
        }
        n=sum;
        degree++;
        if(sum<10)
        break;
    }
    return degree;
    }
}
