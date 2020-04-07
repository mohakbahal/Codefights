int commonCharacterCount(std::string s1, std::string s2) {
    int n1,n2,count=0;
    n1=s1.length();
    n2=s2.length();
    int freq1[26]={0};
    int freq2[26]={0};
    for(int i=0;i<n1;i++)
    {
        freq1[s1[i]-'a']++;
    }
    for(int i=0;i<n2;i++)
    {
        freq2[s2[i]-'a']++;
    }
    for(int i=0;i<26;i++)
    {
        count=count+(min(freq1[i],freq2[i]));
    }
    return count;
    
}
