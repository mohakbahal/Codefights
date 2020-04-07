int matrixElementsSum(std::vector<std::vector<int>> matrix) {
    int i,j,total=0;
    for(j=0;j<matrix[0].size();j++)
    {
        for(i=0;i<matrix.size();i++)
        {
            if(matrix[i][j]==0)
                break;
            else
                total=total+matrix[i][j];
        }
    }
    return total;
}
