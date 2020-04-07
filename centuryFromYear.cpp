int centuryFromYear(int year) {
    int temp1,temp2;
    temp1=year/100;
    temp2=year%100;
    if(temp2==00)
        return temp1;
    else
        return (temp1+1);
}
