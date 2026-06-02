// subarray in cp problems


//how to find if a numer is power of 2 using bit tracker 

n > 0 && (n & (n - 1)) == 0
    //iska logic ye hai koi bhi two ki power wala no hai uska bit form me sirf ek hi 1 hota hai we just need to check that

// prefix sum ppn
vector<int> pref(n);
pref[0] = a[0];

for(int i = 1; i < n; i++){
    pref[i] = pref[i-1] + a[i];
}

//  sliding window two pointers 

int l = 0;
for(int r = 0; r < n; r++){
    // expand window
    
    while(condition breaks){
        l++; // shrink
    }
    
    // process valid window
}
