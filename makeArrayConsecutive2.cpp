int makeArrayConsecutive2(std::vector<int> statues) {
    int i=*min_element(statues.begin(),statues.end());
    int j=*max_element(statues.begin(),statues.end());
    int t,count=0,length;
    for(t=i;t<=j;t++)
    {
        count++;
    }
    length=statues.size();
    return count-length;
    
}