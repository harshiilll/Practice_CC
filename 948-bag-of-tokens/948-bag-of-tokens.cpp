class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
    	sort(tokens.begin(),tokens.end());   //Sorted in Ascending order 
    int t_size = size(tokens); 
    int gain = 0;               //Pointer on First element 
    int score = 0, max_score = 0;
    int spend = t_size-1;       //Pointer on Last element
    
    while(gain<=spend){
        
        if(power >= tokens[gain]){  //If we have power > (current) Token
            score+=1;
            max_score = std::max(max_score,score); 
            power-=tokens[gain];
            gain++;
        }
        
        else if(score >= 1){        //When current Token < Power and if we have score > 0
            power += tokens[spend];
            score -= 1;
            spend--;
        }
        else
            break;                  //If none condition mentioned above satisfies break the loop
    }
    
    return max_score;
    
}
};