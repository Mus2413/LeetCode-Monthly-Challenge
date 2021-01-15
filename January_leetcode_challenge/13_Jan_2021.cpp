class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int i=0,j=people.size()-1;
        int count=0;
        while(i<=j)
        {
            if(i==j)
            {
                count++;
                i++;
                j--;
                break;
            }
            int x=people[i];
            int y=people[j];
            if(x+y>limit)
            {
                count++;
                j--;
            }
            else
            {
                j--;
                i++;
                count++;
            }
        }
        return count;
        
        
    }
};