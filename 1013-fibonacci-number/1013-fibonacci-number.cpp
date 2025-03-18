class Solution {
public:
    int fib(int n) 
    {
        return dp(n);
    }
    unordered_map<int, int> cache;
    
    int dp(int i){
        if(i < 2) return i;

        if(cache.find(i) != cache.end()){
            return cache[i];
        }
        else{
            cache[i] = dp(i - 1) + dp(i - 2);
            return cache[i];
        }
    }
};