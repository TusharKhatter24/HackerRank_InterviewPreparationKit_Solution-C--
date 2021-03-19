string isBalanced(string exp) {
    if(exp[0]==']' || exp[0]=='}' || exp[0]==')')return "NO";

    // Write your code here
    
    bool istrue=true;
    int i;
     
stack<char> s1;
    
    for(i=0;exp[i]!='\0';i++)
    { 
        if(exp[i]=='{' || exp[i]=='[' || exp[i]=='(')
       
        {s1.push(exp[i]);
        
        }
    
	if(s1.empty())
   	   continue;
        
       if(exp[i]=='}' )
       {char temp=s1.top();
      
          if(temp=='{')
          { s1.pop();}
        else
        {istrue=false;}
       
       } 
         else if(exp[i]==']')
       {char temp=s1.top();
      
          if(temp=='[')
          { s1.pop();}
         else
         { istrue=false;}
       }
        
        else if(exp[i]==')')
       {char temp=s1.top();
      
          if(temp=='(')
          { s1.pop();}
        else
        { istrue=false;}
       }
    }
    
   if(s1.empty()==0)
   {istrue=false;}
    
    return (istrue==true)?"YES":"NO";

}