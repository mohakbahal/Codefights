int arrayMaximalAdjacentDifference(std::vector<int> inputArray) {
    int i,max,diff;
    max=inputArray[0]-inputArray[1];
    for(i=1;i<inputArray.size();i++)
    {
        diff=abs(inputArray[i]-inputArray[i-1]);
        if(max<diff)
            max=diff;
    }
    return max;
}
