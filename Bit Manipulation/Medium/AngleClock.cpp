class Solution {
public:
    double angleClock(int hour, int minutes) {
        double minute = minutes*6.0;
        double hours = (hour%12)*30.0 + minutes*0.5;
        double diff = abs(hours-minute);
        return min(diff,360-diff);
    }
};