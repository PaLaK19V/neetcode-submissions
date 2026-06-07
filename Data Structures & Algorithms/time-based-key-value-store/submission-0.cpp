class TimeMap {
public:
    unordered_map<string,vector<pair<int,string>>>mp;

    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        mp[key].push_back({timestamp,value});
    }
    
    string get(string key, int timestamp) {
        string ans="";
        for(auto &p:mp[key]){
            if(p.first<=timestamp){
                ans=p.second;
            }
        }
        return ans;
    }
};
