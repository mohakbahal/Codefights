bool isBeautifulString(std::string inputString) {
     int freq[26]={0};
     int flag=0;
     for(int i=0;i<inputString.length();i++)
     {
         freq[inputString[i]-'a']++;
     }
    for(int i=0;i<25;i++)
    {
        if(freq[i]<freq[i+1])
            flag=1;
    }
    if(flag==0)
    return true;
    else
    return false;
}

