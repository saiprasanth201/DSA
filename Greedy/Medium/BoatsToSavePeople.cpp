class Solution {
    public:
        int numRescueBoats(vector<int>& people, int limit) {
            sort(people.begin(),people.end());
            int n=people.size(),i=0,j=n-1,cnt=0;
            while(i<=j){
                int sum = people[i]+people[j];
                if(sum <= limit){
                    i++;
                    j--;
                    cnt++;
                }else{
                    cnt++;
                    j--;
                }
            }
            return cnt;
        }
    };


class Solution {
    public:
        int numRescueBoats(vector<int>& people, int limit) {
            sort(people.begin(),people.end());
            int n=people.size(),i=0,j=n-1,cnt=0;
            while(i<=j){
                int sum = people[i]+people[j];
                if(sum <= limit){
                    i++;
                }else{
                    cnt++;
                    j--;
                }
            }
            return cnt;
        }
    };