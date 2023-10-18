int mindiff(int arr[], int n)
{
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (arr[i] <= arr[j] && j - i > c)
            {
                c = j - i;
            }
        }
    }
    return c;
}