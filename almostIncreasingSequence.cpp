bool almostIncreasingSequence(std::vector<int> s) {

    bool p=true;

    for(int i=0; i<s.size()-1; i++){

        if(s[i]>=s[i+1]){
            if(s[i+1]<=s[i-1] && i>0)
                s.erase(s.begin() + i+1);
            else
                s.erase(s.begin() + i);
            break;
        }
    }

    for(int i=0; i<s.size()-1; i++){

        if(s[i]>=s[i+1]){
            p= false;
            break;
        }
    }

    return p;
}