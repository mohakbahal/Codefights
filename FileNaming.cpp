std::vector<std::string> fileNaming(std::vector<std::string> names) {
    set <string> temp;
    vector <string> result;
    for(string s:names)
    {
        int n=1;
        string res=s;
        while(temp.find(res)!=temp.end())
        {
            res=s+'('+to_string(n++)+')';
        }
        temp.insert(res);
        result.push_back(res);
    }
    return result;
}
