class Solution {
public:
    double angleClock(int hour, int minutes) {
        double h=hour%12;
        double m=h*30;
        double n=minutes*5.5;
        double ans;
        if(m>n)
        {
            ans=(m-n);
        }
        else
        {
            ans=(n-m);
        }
        if(ans>180)
        {
            return 360-ans;
        }
        return ans;
    }
};