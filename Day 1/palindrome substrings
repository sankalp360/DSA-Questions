
    public static boolean isPalindrome(String str)
    {
        boolean ans = true;
        for(int i=0; i<str.length()/2; i++)
        {
            if(str.charAt(i) == str.charAt(str.length()-i-1))
            {
                continue;
            }
            else
            {
                ans = false;
                break;
            }
        }
        return ans;
    }
	public static void solution(String str){
		//write your code here
		for(int i=0; i<str.length(); i++)
		{
		    for(int j=0; j<str.length(); j++)
		    {
		        if(isPalindrome(str.substring(i, j)) == true)
		        {
		            System.out.println(str.substring(i,j));
		        }
		    }
		}
		
	}

	public static void main(String[] args) {
		Scanner scn = new Scanner(System.in);
		String str = scn.next();
		solution(str);
	}
