class Solution {
public:
    string dayOfTheWeek(int d, int m, int y) {
        int c=0;

            vector<string> days= {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
        if (m < 3) m += 12, y -= 1;
        c = y / 100, y = y % 100;
        int w = (c / 4 - 2 * c + y + y / 4 + 13 * (m + 1) / 5 + d - 1) % 7;
        return days[(w + 7) % 7];
    
    }
};