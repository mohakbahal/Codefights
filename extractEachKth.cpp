std::vector<int> extractEachKth(std::vector<int> inputArray, int k) {
    int i;
    vector <int> result;
    for(i=0;i<inputArray.size();i++)
    {
        if((i+1)%k!=0)
            result.push_back(inputArray[i]);
    }
    return result;
}