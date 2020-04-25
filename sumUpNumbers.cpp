int sumUpNumbers(std::string inputString) {
    int sum=0,temp=0;
    inputString.push_back('#');
    for(char c:inputString)
    {
        if(c>='0'&&c<='9')
            temp=temp*10+c-'0';
        else
        {
            sum=sum+temp;
            temp=0;
        }
    }
    return sum;
}
