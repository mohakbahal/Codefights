int circleOfNumbers(int n, int firstNumber) {
    vector <int> v;
    for(int i=0;i<n;i++)
        v.push_back(i);
    int half=n/2;
    if(firstNumber<half)
        return v[firstNumber+half];
    else
        return v[firstNumber-half];    
}