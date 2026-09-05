class Solution {
    public int PrecedenceOfRoman(char ch){
        switch(ch){
            case 'M':
                return 1000;
            case 'D':
                return 500;
            case 'C':
                return 100;
            case 'L':
                return 50;
            case 'X':
                return 10;
            case 'V':
                return 5;
            case 'I':
                return 1;
            default:
               return 0;
        }
    }
    public int romanToInt(String s) {
        int value = 0;

        for(int i=0;i<s.length()-1;i++){
            if(PrecedenceOfRoman(s.charAt(i))<PrecedenceOfRoman(s.charAt(i+1))){
                value -= PrecedenceOfRoman(s.charAt(i));
            }
            else{
                value += PrecedenceOfRoman(s.charAt(i));
            }
        }
        return value+PrecedenceOfRoman(s.charAt(s.length()-1));
    }
}