// to handle negative modulo 
x = ((x % m) + m) % m;


// traversal in circular array 
final_index = ((start + jump) % n + n) % n;


// Safe modulo for anything that can go negative
int modNorm(long long x, int m) {
    return ((x % m) + m) % m;
}
