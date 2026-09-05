class Solution {
    public boolean isPalindrome(int x) {
        int temp = x;
        int reverse = 0;
        while(temp>0){
            reverse = reverse*10+temp%10 ;
            temp/=10;
        }

        if(reverse==x){
            return true;
        }
        else{
            return false;
        }
    }

    public void main(String[] args){
        Scanner obj = new Scanner(System.in);

        int n = obj.nextInt();

        if(n<0){
            System.out.println("false");
            return ;
        }

        if(n%2==0){
            System.out.println("false");
            return ;
        }

        if(isPalindrome(n)==true){
            System.out.println("true");
        }
        else{
            System.out.println("false");
        }
    }
}
