void *calloc(size_t count, size_t size)
{
    size_t i = 0;
    size_t length;
    void *xmalloc;

    length = count * size;
    xmalloc = malloc(len);
    if(!xmalloc)
    return(NULL);
    ft_bzero(xmalloc);
    return(xmalloc);
}
//case handle