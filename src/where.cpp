#include <string>
#include "where.hpp"

long StringObj::find(string& t, char c)
{
    for (long i = 0; i < t.length(); i++)
    {
        if (t[i] == c)
        {
            return i;
        }
    }
    return -1;
}
long StringObj::find(string& t, string& s)
{
    for (long i = 0; i <= t.length() - s.length(); i++)
    {
        long j = 0;

        while (j < s.length() && t[i + j] == s[j])
        {
            j++;
        }

        if (j == s.length())
        {
            return i;
        }
    }
    return -1;
}