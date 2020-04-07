int adjacentElementsProduct(std::vector<int> inputArray) {
    int length,i,product;
    length=inputArray.size();
    int max=inputArray[0]*inputArray[1];
    for(i=1;i<length;i++)
    {
        product=inputArray[i]*inputArray[i-1];
        if(max<product)
            max=product;
    }
    return max;
    
}