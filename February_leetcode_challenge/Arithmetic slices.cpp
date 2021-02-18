 class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& A) {
        int answer = 0, n = A.size();
    
    for(int j = 2; j < n ; j++){
      int d = A[j - 1] - A[j - 2];
      
      if(A[j] - A[j - 1] == d){
        int k = 1;
        for(int w = j + 1; w < n && A[w] - A[j] == d; w++,j++,k++);
        answer += (k+1)*k/2;
      }
    }
    
    return answer;
    }
};