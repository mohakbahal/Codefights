std::vector<std::string> allLongestStrings(std::vector<std::string> inputArray) {
    int maxlength;
    int i;
    vector<std::string> r;
    maxlength=0;
    for(i=0;i<inputArray.size();i++)
    {
        if(inputArray[i].length()>maxlength)
        {
            maxlength=inputArray[i].length();
        }
    }
    for(i=0;i<inputArray.size();i++)
    {
        if(inputArray[i].length()==maxlength)
            r.push_back(inputArray[i]);
    }
    return r;
}

