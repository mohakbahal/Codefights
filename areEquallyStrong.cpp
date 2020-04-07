bool areEquallyStrong(int yourLeft, int yourRight, int friendsLeft, int friendsRight) {
    int mystrongest,myweakest,friendsstrongest,friendsweakest;
    if(yourLeft>yourRight)
    {mystrongest=yourLeft;
        myweakest=yourRight;}
    else
    {mystrongest=yourRight;
        myweakest=yourLeft;}
    
    if(friendsLeft>friendsRight)
    {
        friendsstrongest=friendsLeft;
        friendsweakest=friendsRight;
    }
    else
    {  
        friendsstrongest=friendsRight;
        friendsweakest=friendsLeft;
    }
    
    if(mystrongest==friendsstrongest && myweakest==friendsweakest)
        return true;
    else
        return false;
}