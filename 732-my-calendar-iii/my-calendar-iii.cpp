class MyCalendarThree {
public:
map<int,int>mp;

    MyCalendarThree() {
        
    }
    
    int book(int startTime, int endTime) {

      mp[startTime]++;
      mp[endTime]--;

      int cntmax=0,cnt=0;

      for(auto it:mp){
      cnt+=it.second;
      cntmax=max(cntmax,cnt);
      }

      return cntmax;
        
    }
};

/**
 * Your MyCalendarThree object will be instantiated and called as such:
 * MyCalendarThree* obj = new MyCalendarThree();
 * int param_1 = obj->book(startTime,endTime);
 */