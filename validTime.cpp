bool validTime(std::string time) {
    if(time[0]>'2' || time[3]>'5')
        return false;
        if(time[0]=='2')
        {
            if(time[1]>'3')
            return false;
        }
        return true;
}
