class Solution {
    public int maxCount(int[] banned, int n, int maxSum) {
        int max=0;
        int cnt=0;
        HashSet<Integer> hash=new HashSet<>();
        for(int t: banned){
            hash.add(t);
        }
        for(int i=1;i<=n;i++){
            if(!hash.contains(i) && (max+i)<=maxSum){
                max+=i;
                cnt++;
            }
        }
        return cnt;
    }
}