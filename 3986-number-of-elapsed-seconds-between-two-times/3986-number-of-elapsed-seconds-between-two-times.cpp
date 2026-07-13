class Solution {
public:
    int secondsBetweenTimes(string startTime, string endTime) {
        int start = 0, end = 0, multi = 60 * 60;
        string stStr = "", endStr = "";
        for (int i = 0; i < startTime.length(); i++) {
            if (startTime[i] != ':') {
                stStr += startTime[i];
                endStr += endTime[i];
            }
            if (startTime[i] == ':' || i == startTime.length() - 1) {
                start += stoi(stStr) * multi;
                end += stoi(endStr) * multi;
                cout << start << " " << end << endl;
                stStr = "";
                endStr = "";
                multi /= 60;
            }
        }
        return end - start;
    }
};