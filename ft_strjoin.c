char *ft_strjoin(char const *s1, char const *s2)
{
    char *end;
    char *s11 = (char *)s1;
    char *s22 = (char *)s2;
    size_t i = ft_strlen(s11);
    size_t z = ft_strlen(s22);
    end = malloc(i + z + 1);
    i = 0;
    while(s11[i])
    {
        end[i] = s11[i];
        i++;
    }
    z = 0;
    while(s22[z])
    {
        end[i] = s22[z];
        i++;
        z++;
    }
    end[i] = '\0'; 
    return(end);
}