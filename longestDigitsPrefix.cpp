std::string longestDigitsPrefix(std::string inputString) {
    int i = 0;
    for(auto x : inputString){
        if(!isdigit(x))
            break;
        i++;
    }
    return inputString.substr(0, i);
}
