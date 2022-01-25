float sum(float x, float y)
{
    return x + y;
}
float mul(float x, float y)
{
    return x * y;
}
float diff(float x, float y)
{
    if (x > y)
        return x - y;
    else
        return y - x;
}
float div(float x, float y)
{
    if (y != 0)
        return x / y;
    else
        return -1;
}
