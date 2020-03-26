    
    if(x<0){
        x = -x;
    
    
    long long int  rem = x%d;
    int i = 0;
    
    while(i<n){
        i++;
        long long int newx  = rem*x;
        rem = newx%d;
        if(i==n)
        return x- rem;
        
       
       
        
     }
     
    }
    
    else{
            long long int  rem = x%d;
    int i = 1;
    
    while(i<n){
        i++;
        long long int newx  = rem*x;
        rem = newx%d;
        if(i==n)
        return rem;
        
       
       
        
     }
        
    }