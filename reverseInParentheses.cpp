std::string reverseInParentheses(std::string inputString) {
    while(inputString.find('(')!=-1)
    {
        int lastleftparen=(int)inputString.rfind('(');
        int firstrightparen=(int)inputString.find(')',lastleftparen);
        std::reverse(inputString.begin()+lastleftparen+1,inputString.begin()+firstrightparen);
        inputString.erase(inputString.begin()+firstrightparen);
        inputString.erase(inputString.begin()+lastleftparen);
    }
    return inputString;
}