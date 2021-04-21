	
	int firstOcc(int arr[], int n, int x)
	{
	    int low = 0;
	    int high = n - 1;
	    int ans = -1;
	    while(low <= high)
	    {
	        int mid = low + ((high - low)/ 2);
	        if(arr[mid] == x)
	        {
	            ans = mid;
	            high = mid - 1;
	        }
	        else if(arr[mid] < x)
	        {
	           low = mid + 1;
	        }
	        else
	        {
	            high = mid - 1;
	        }
	        
	    }
	    return ans;
	}
	
	
	
	int lastOcc(int arr[], int n, int x)
	{
	    int low = 0;
	    int high = n - 1;
	    int ans = -1;
	    while(low <= high)
	    {
	        int mid = low + ((high - low)/ 2);
	        if(arr[mid] == x)
	        {
	            ans = mid;
	            low = mid + 1;
	        
	        }
	        else if(arr[mid] < x)
	        {
	           low = mid + 1;
	        }
	        else
	        {
	           high = mid - 1;
	        }
	        
	    }
	    return ans;
	}
	
	
	
	
	int count(int arr[], int n, int x) {
	    // code here
	    int first = firstOcc(arr, n, x);
	    int last = lastOcc(arr, n, x);
	    
	    return last - first + 1; 
	}
