bool palindromeRearranging(std::string inputString) {
    int a[26] = {0};
    for(char i : inputString) 
        a[i - 'a']++;
    int c = 0;
    for(int i = 0; i < 26; i++) 
        if(a[i] % 2) 
            c++;
    return c <= 1;
}
