class UndergroundSystem {
public:
    unordered_map<string, pair<double, int>> result;
    unordered_map<int, pair<string, int>> psgr;
    UndergroundSystem() {
        
    }
    
    void checkIn(int id, string stationName, int t) {
        psgr[id] = make_pair(stationName, t);
    }
    
    void checkOut(int id, string stationName, int t) {
        result[psgr[id].first + "->" + stationName].first += (double)(t - psgr[id].second);
        result[psgr[id].first + "->" + stationName].second++;
        psgr.erase(id);
    }
    
    double getAverageTime(string startStation, string endStation) {
        return result[startStation + "->" + endStation].first / result[startStation + "->" + endStation].second;
    }
};