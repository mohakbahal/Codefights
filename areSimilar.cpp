bool areSimilar(std::vector<int> a, std::vector<int> b) {
    int i,count=0;
    set<int> x;
    set<int> y;
    for(i=0;i<a.size();i++)
    {
        if(a[i]!=b[i]){
            count++;
            x.insert(a[i]);
            y.insert(b[i]);
        }
    }
        if(count==0)
            return true;
        else if(count==2 && x==y)
            return true;
        else
            return false;
}
