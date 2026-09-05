class Solution {
    public int strStr(String haystack, String needle) {

        int firstOccur = -1;
        firstOccur = haystack.indexOf(needle);
        if (firstOccur >= 0){
            return firstOccur;
        }
        return firstOccur;

        /*Alternate Step
        int m = haystack.length();
        int n = needle.length();

        if(n>m){
            return -1;
        }

        for(int i=0;i<=m-n;i++){
            int j;
            for(j=0;j<n;j++){
                if(haystack.charAt(i+j)!=needle.charAt(j)){
                    break;
                }
            }
            if(j==n){
                return i;
            }
        }

        return -1;*/

       
    }
}
