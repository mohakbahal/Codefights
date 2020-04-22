std::string longestWord(std::string text) {
    string max="";
    string count="";
    for(int i=0;i<text.length();i++)
    {
        if(isalpha(text[i]))
        {
            count+=text[i];
        }
        else {
            if(count.length()>max.length())
                {
                    max=count;
                }
                count="";
        }
    }
        if(count.length()>max.length())
            max=count;
    return max;
}
