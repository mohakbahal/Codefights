std::vector<int> sortByHeight(std::vector<int> a) { 
    int i,j,temp;
    for(i=0;i<a.size();i++)
    {
        temp=0;
        for(j=i+1;j<a.size();j++)
        {
            if(a[i]!=-1 && a[j]!=-1 && a[i]>a[j])
            {
                        temp=a[j];
                        a[j]=a[i];
                        a[i]=temp;
                    
            }
        }
    }
    return a;
}
