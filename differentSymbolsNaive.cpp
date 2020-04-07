int differentSymbolsNaive(std::string s) {
    return std::set<char>(s.begin(),s.end()).size();
}
