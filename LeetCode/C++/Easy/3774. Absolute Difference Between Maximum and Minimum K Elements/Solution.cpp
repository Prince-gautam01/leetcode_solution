class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
     sort(nums.begin(),nums.end());
      int s1=0;
      int s2=0;
     for(int i=0;i<k;i++){
	    s1=s1+nums[i];
        }
        int cnt=0;
    for(int j=nums.size()-1;j>=0;j--){
        cnt++;
        if(cnt<=k){
            s2=s2+nums[j];
            }
        }           
    int ans=abs(s1-s2);
    return ans;     
    }
};