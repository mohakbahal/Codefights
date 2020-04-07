bool checkPalindrome(std::string inputString) {
    int length;
    length=inputString.length();
    int i,end,middle,begin;
    end=length-1;
    middle=length/2;
    for(begin=0;begin<middle;begin++)
    {
        if(inputString[begin]!=inputString[end])
        {
            return false;
            break;
        }
        end--;
    }
    if(begin==middle)
    {
        return true;
    }
    
}
