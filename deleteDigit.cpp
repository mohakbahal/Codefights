int deleteDigit(int n) {
    string temp=std::to_string(n);
    auto iter=adjacent_find(temp.begin(),temp.end(),std::less<>{});
    if(iter==temp.end())
        temp.pop_back();
    else
        temp.erase(iter);
    return stoi(temp);
}
