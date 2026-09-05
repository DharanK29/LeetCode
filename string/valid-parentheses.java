 class ArrayStack{
    private char[] arr;
    private int top;
    private int capacity;

    public ArrayStack(int size){
        arr = new char[size];
        capacity = size;
        top = -1;
    }

    public void push(char ch){
        if(isFull()){
            return ;
        }
        arr[++top] = ch;
    } 

    public char pop(){
        if(isEmpty()){
            return 'a';
        }
        return arr[top--];
    }

    public boolean isFull(){
        return top == capacity-1;
    }

    public boolean isEmpty(){
        return top == -1;
    }
}

class Solution {
    
    public static boolean isValid(String s) {
        ArrayStack myStack = new ArrayStack(10000000);


        for(int i=0;i<s.length();i++){
            char ch = s.charAt(i);
            if(ch!='{' && ch!='[' && ch!='(' && ch!='}' && ch!=']' && ch!=')') return false;

            if(ch=='{' || ch=='[' || ch=='('){
                myStack.push(ch);
            }
            else if(ch=='}' || ch==']' || ch==')'){
                if(myStack.isEmpty()) return false;
                char temp = myStack.pop();

                if((temp!='(' && ch==')') ||(temp!='[' && ch==']') ||(temp!='{' && ch=='}') ){
                    return false;
                }
            }
        }
        return myStack.isEmpty();
    }

    public static void main(String[] args){
        Scanner obj = new Scanner(System.in);

        String exp = obj.nextLine();

        if(isValid(exp)==true){
            System.out.println("true");
        }
        else{
            System.out.println("false");
        }
    }
}