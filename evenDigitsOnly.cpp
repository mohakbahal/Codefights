bool evenDigitsOnly(int n) {
    int rem;
        while(n!=0)
        {
            rem=n%10;
            if(rem%2!=0)
                return false;
            n=n/10;
        }
        return true;
}