

// find missing no from o to n using xor 
int ans = 0;
for(int i=0;i<=n;i++) ans ^= i;
for(int x : v) ans ^= x;


// to calculate 2 ki power very fast 
long long ans=1LL << (n);



// power calc but fast
int binpow(int a, int b) {
    int res = 1;
    while(b) {
        if(b & 1) res *= a;
        a *= a;
        b >>= 1;
    }
    return res;
}

//prime check 
bool isPrime(int n) {
    if(n < 2) return false;
    for(int i = 2; i*i <= n; i++) {
        if(n % i == 0) return false;
    }
    return true;
}

//sieve 
vector<bool> sieve(int n) {
    vector<bool> isprime(n+1, true);
    isprime[0] = isprime[1] = false;
    for(int i=2;i*i<=n;i++){
        if(isprime[i]){
            for(int j=i*i;j<=n;j+=i)
                isprime[j]=false;
        }
    }
    return isprime;
}

// prefix sum range of l to r wale questions

vector<int> pref(n);
pref[0] = a[0];
for(int i=1;i<n;i++)
    pref[i] = pref[i-1] + a[i];


//binary search basic
int l=0, r=n-1;
while(l<=r){
    int mid=(l+r)/2;
    if(v[mid]==target) return mid;
    else if(v[mid]<target) l=mid+1;
    else r=mid-1;
}

//PPN count bits 1
__builtin_popcount(x);


// max min
int mn = *min_element(v.begin(), v.end());
int mx = *max_element(v.begin(), v.end());
// index of max/min element
int idx = it - v.begin();


// imp syntaxs for imple

pair<int,int> p = {a,b};

// input in vector fast
vector<int> v(n);
for(auto &x : v) cin >> x;

// count occurances 
count(v.begin(), v.end(), x);

// find element
auto it = find(v.begin(), v.end(), x);

// remove duplicates fast 
sort(v.begin(), v.end());
v.erase(unique(v.begin(), v.end()), v.end());

// rotate by 'k' potision
rotate(v.begin(), v.begin()+k, v.end());

























