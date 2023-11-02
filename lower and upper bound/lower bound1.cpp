 int size=nums.size();
        int low=0,high=size-1;
        int mid=0;
        while(low<=high){
         mid=low+(high-low)/2; 
         if(nums[mid]==target)
         return mid;

         else if(nums[mid]>target)
              high=mid-1;
              else
             low=mid+1;

        }
        return low;