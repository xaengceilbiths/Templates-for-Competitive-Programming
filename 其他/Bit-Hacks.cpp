/// Only for non-negative integers
/// Returns the immediate next number with same count of one bits, -1 on failure
long long hakmemItem175(long long n){
    if (n == 0) return -1;
    long long x = (n & -n);
    long long left = (x + n);
    long long right = ((n ^ left) / x) >> 2;
    long long res = (left | right);
    return res;
}

/// Returns the immediate previous number with same count of one bits, -1 on failure
long long lol(long long n){
    if (n == 0 || n == 1) return -1;
    long long res = ~hakmemItem175(~n);
    return (res == 0) ? -1 : res;
}

unsigned int reverse_bits(unsigned int v){
    v = ((v >> 1) & 0x55555555) | ((v & 0x55555555) << 1);
    v = ((v >> 2) & 0x33333333) | ((v & 0x33333333) << 2);
    v = ((v >> 4) & 0x0F0F0F0F) | ((v & 0x0F0F0F0F) << 4);
    v = ((v >> 8) & 0x00FF00FF) | ((v & 0x00FF00FF) << 8);
    return ((v >> 16) | (v << 16));
}
