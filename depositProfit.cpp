int depositProfit(int deposit, int rate, int threshold) {
    int count=0;
    float d=deposit;
    while(d<threshold)
    {
        d+=d*rate/100;
        count++;
    }
    return count;
}