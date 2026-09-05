class Solution {
    public int lengthOfLastWord(String s) {
        int m = s.length();

        int k = 0;
        for(int i=m-1;i>=0;i--){
            if(s.charAt(i)!=' '){
                k++;
            }
            else if(k!=0){
                break;
            }
        }
        return k;

    }
}