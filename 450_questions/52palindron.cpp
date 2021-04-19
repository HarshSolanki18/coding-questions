	int isPlaindrome(string S)
	{
	    // Your code goes here
	    int n=S.size()-1,i=0;
	   while(i<=n){
	        if(S[i]!=S[n]){
	            return 0;
	        }
	        n--;
	        i++;
	    }
	    return 1;
     	}
