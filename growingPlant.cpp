int growingPlant(int upSpeed, int downSpeed, int desiredHeight) {
    int count=0,total=0;
    while(1)
    {
        total+=upSpeed;
        count++;
        if(total>=desiredHeight)
        break;
        total-=downSpeed;
        }
    return count;
}

