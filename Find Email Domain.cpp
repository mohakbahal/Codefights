std::string findEmailDomain(std::string address) {
    int i,temp;
    temp=address.find_last_of('@');
    return address.substr(temp+1);
    
}
