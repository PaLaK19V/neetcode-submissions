class TimeMap {
public:
    unordered_map<string,vector<pair<int,string>>> mp;

    TimeMap() {    }
    
    void set(string key, string value, int timestamp) {
        mp[key].push_back({timestamp,value});
    }
    
    string get(string key, int timestamp) {
        string ans="";
        auto& val=mp[key];
        int left=0;
        int right=val.size()-1;
        if(mp.find(key)==mp.end()){
            return "";
        }
        while(left<=right){
            int mid=left+(right-left)/2;
            if(val[mid].first<=timestamp){
                ans=val[mid].second;
                left=mid+1;
            }
            else{
                right=mid-1;
            }
        }
        return ans;
    }
};
