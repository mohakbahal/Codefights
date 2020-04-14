std::string lineEncoding(std::string s) {
    std::string result;
    int i;
    for(i=0;i<s.length();i++)
    {
        int count=1;
        while(i<s.length() && s[i]==s[i+1])
        {
            count++;
            i++;
        }
        if(count>1)
            result+=to_string(count);
            result+=s[i];
    }
    return result;
}
