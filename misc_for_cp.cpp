// subarray in cp problems


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
