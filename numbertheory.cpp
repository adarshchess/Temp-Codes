// number theory codes 


// for gcd avoiding overflow
int gcd(int a,int b)
{
	//a>b
	if(a<b)
	swap(a,b);
	if(b==0)
	return a;
     else
     return gcd(b,a%b);
}

// for lcm using the same gcd fun 

lcm(a,b)=(a/gcd(a,b))*b


// binary exponentiation a ki power b 

//without modulo
int binexp(int a,int b){
    if(b==1) return a;
    int res=binexp(a,b/2);
    if(b%2==0) return res*res;
    else return res*res*a;
}
//with modulo
int binExpWithModulo(int a,int b){
    if(b==1) return (a%mod);
    int res=binExpWithModulo(a,b/2);
    if(b%2==0) return (res*res)%mod;
    else return ((res*res)%mod*(a%mod))%mod;
}


// factorial 

int fact(int x,int mod)
{
    int f=1;
    for(int i=1;i<=x;i++)
    {
  f=(f*i%mod)%mod;
    }
    return f;
}


// checking isprime 


bool isPrime(int n){
    if(n==1) return false;
    for(int i=2;i<=n-1;i++){
        if(n%i==0) return false;
    }

    return true;

}
//Tc: O(N)  brute method

bool isPrime(int n){
    if(n==1)return false;
    for(int i=2;i*i<=n;i++){
        if(n%i==0) return false;
    }

    return true;
}

// tc:O(sqrt(n)) optimal method i=2 se root(n)


//finding 'all the factors' of a number n

vector<int> findFactors(int n)
{
    vector<int> res;
    for(int i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            res.push_back(i);
            if(i!=(n/i))
            {
 res.push_back(n/i);
            }
        }
    }
    sort(res.begin(),res.end());
    return res;
}


// finding 'all prime factors' of a number 

vector<pair<int,int>> pfs(int n)
{
    vector<pair<int,int>> res;
    int x=n;
    for(int i=2;i<=n;i++)
    {
        if(n%i==0)
        {
            int count=0;
            while(n%i==0)
            {
                count++;
                n=n/i;
            }
            res.push_back({i,count});
        }
    }
return res;
}

//optimised approach for the same 

vector<pair<int, int>> pfs(int n)
{
    vector<pair<int, int>> primeFact; 
    int x = n;
for (int i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
        {
            // i is the prime factor of n
            int ct = 0;
            while (x % i == 0)
            {
                x /= i;
                ct++;
            }
            primeFact.push_back({i, ct});
        }
    }
    if (x > 1)
    {
        primeFact.push_back({x, 1});
    }
}


// number of factors and sum of all factors of a number 

for(auto x:primeFact) ct*=(x.second+1);
    cout<<"Count : ";

cout<<ct<<"\n";  // ct of factors of number n
    int sumOfFact=1;
    for(auto i:primeFact){
        int p=i.first,x=i.second;
        int temp=(binexp(p,x+1)-1)/(p-1);
        cout<<temp<<"\n";
        sumOfFact*=temp;
    }
    cout<<"SUM: "<<sumOfFact<<"\n";







