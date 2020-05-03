std::string messageFromBinaryCode(std::string code) {
    string result="";
    for(int i=0;i<code.length();i+=8)
    {
        bitset<8> temp(code.substr(i,8));
        result+=temp.to_ulong();
    }
    return result;
}
