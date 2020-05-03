sstd::string buildPalindrome(std::string st) {
    int x=0;
    while (st != string(st.rbegin(), st.rend())) 
        st.insert(st.end()-x, st[x]), ++x;
    return st;
}
