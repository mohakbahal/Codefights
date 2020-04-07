char firstDigit(std::string inputString) {
    int i;
    for(i=0;i<inputString.length();i++)
    {
        if(isdigit(inputString[i]))
            break;
    }
    return inputString[i];
}
