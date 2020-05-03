int absoluteValuesSumMinimization(std::vector<int> a) 
{
    int k,sum=0,min=INT_MAX,result;
    for(int i=0;i<a.size();i++)
    {
        k=a[i];
        for(int j=0;j<a.size();j++)
        {
            sum=sum+abs(a[j]-k);
        }
        if(sum<min)
            {
                min=sum;
                result=k;
            }
        sum=0;
    }
    return result;
}