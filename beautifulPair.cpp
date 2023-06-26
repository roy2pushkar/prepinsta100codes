int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }

    return gcd(b, a % b);
}
int countBeautifulPairs(vector<int> &nums)
{
    int n = nums.size();
    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            // string s1=to_string(nums[i]);
            // string s2=to_string(nums[j]);
            int n1;
            int rem;
            int temp = nums[i];
            while (temp != 0)
            {
                rem = temp % 10;
                temp = temp / 10;
            }
            if (temp == 0)
                n1 = rem;

            int n2 = nums[j] % 10;
            if (gcd(n1, n2) == 1)
            {

                cnt++;
            }
        }
    }
    return cnt;
}