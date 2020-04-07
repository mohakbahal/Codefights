int shapeArea(int n) {
    int i,area=1;
    for(i=0;i<n;i++)
    {
        area=area+4*i;
    }
    return area;
}
