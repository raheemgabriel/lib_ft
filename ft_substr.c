char *ft_substr(char const *s, unsigned int start,size_t len)
{
    char *sub;
    size_t i = ft_strlen(s);
    size_t z = 0;
    sub = malloc(len + 1);
    while(z < len)
    {
        sub[z] = s[start];
        z++;
        start++;
    }
    return(sub);
}