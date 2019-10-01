// Preprocessor Solution

#define toStr(str) #str
#define io(v) cin >> v
#define INF 100000000
#define foreach(v, i) for(int i = 0; i < v.size(); ++i)
#define FUNCTION(name, operator) void name(int &cur_val, int compare) { (compare operator cur_val) ? cur_val = compare : cur_val = cur_val; }
