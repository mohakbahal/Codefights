bool isLucky(int n) {
    int count=0;
    int temp=n;
    while(n!=0)
    {
        count++;
        n=n/10;
    }
    int mid=count/2;
    int fhalf,lhalf;
    fhalf=temp/(pow(10,mid));
    int sum1=0,sum2=0,rem1,rem2;
    while(fhalf!=0)
    {
        rem1=fhalf%10;
        sum1=sum1+rem1;
        fhalf/=10;
    }
    while(mid!=0)
    {
        rem2=temp%10;
        sum2=sum2+rem2;
        mid--;
        temp/=10;
    }
    if(sum1==sum2)
        return true;
    else
        return false;
    
}