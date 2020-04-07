std::vector<int> arrayReplace(std::vector<int> inputArray, int elemToReplace, int substitutionElem) {
    int i;
    for(i=0;i<inputArray.size();i++)
    {
        if(inputArray[i]==elemToReplace)
            inputArray[i]=substitutionElem;
    }
    return inputArray;
}