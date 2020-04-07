std::string alphabeticShift(std::string inputString) {
    int i;
    for(i=0;i<inputString.length();i++)
    {   
        if(inputString[i]=='z')
            inputString[i]='a';
        else
        inputString[i]=inputString[i]+1;
    }
    return inputString;
}
