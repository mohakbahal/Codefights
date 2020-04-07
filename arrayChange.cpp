int arrayChange(std::vector<int> inputArray) {
    int i,count=0;
    for(i=0;i<inputArray.size()-1;i++)
    {
        if(inputArray[i]>=inputArray[i+1])
        {
            int difference=inputArray[i]+1 -inputArray[i+1];
            count+=difference;
            inputArray[i+1]=inputArray[i]+1;
        }
    }
    return count;
}
