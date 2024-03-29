class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        
        int dy=coordinates[1][1]-coordinates[0][1];
        int dx=coordinates[1][0]-coordinates[0][0];
        
        for(int i=2;i<coordinates.size();i++){
            
            int curr_dy=coordinates[i][1]-coordinates[i-1][1];
            int curr_dx=coordinates[i][0]-coordinates[i-1][0];
            
            if(dy*curr_dx != dx*curr_dy)
                return 0;  
            // dy/dx != curr_dy/curr_dx might through a run time error:division by 0
        }
        return 1;
    }
};