std::vector<int> alternatingSums(std::vector<int> a) {
    std::vector<int> s={0,0};
    for(int i=0;i<a.size();i++)
    {
        if(i%2==0)
            s[0]+=a[i];
        else
            s[1]+=a[i];
    }
    return s;
    
    
}