bool isPalindrome(char * s)
{

    for(int i=0; i<strlen(s); i++)
    {
        if('A'<=s[i] && s[i]<='Z')
        {
            s[i]=s[i]-'A'+'a';
        }
    }


    int right=0;
    int left=strlen(s)-1;
    while(right < left)
    {
        while(s[right]<'a' || s[right]>'z')
            right++;

        while(s[left]<'a' || s[left]>'z')
            left--;

        if(s[right] != s[left])
        {
            right++;
            left--;
        }else
        {
            return false;
        }

    }

    return true;
}