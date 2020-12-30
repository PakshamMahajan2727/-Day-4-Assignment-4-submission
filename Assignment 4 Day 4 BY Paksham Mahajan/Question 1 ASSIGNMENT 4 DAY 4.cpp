/* Question 1
      In the Binary Search algorithm, it is suggested to 
	  calculate the mid as beg + (end - beg) / 2 
      instead of (beg + end) / 2. Why is it so? 

   
   
SOLUTION 1: -        
       
	   1.       If we calculate mid as (beg + end) / 2,
	    then we can get problem of integer overflow.
        Let us understand with an example:- 
        Let us take worst case of both indices of array 
	i.e maximum value of integer value of beg and end index 
	of array, i.e for eg let us take  beg=2147483661 and 
    end= 2147483661, now if we calculate mid by this 
	upper formula (beg + end) / 2, then (beg+end) will be 
	evaluated first and it will be 4,29,49,67,322 but this 
	is out of range of integer value ,so int variable will 
	get out of range and would cause problem of       
	integer overflow , and so it will return any 
	wrong value i.e -1 or it may cause segmentation fault
		 because of overflow condition.
    SO THIS FORMULA (beg + end) / 2 IS AVOIDED/NEGLECTED.

  2.     But now if we take second formula 
    beg + (end - beg) / 2  then here first of all (end-beg)
	will be evaluated which in worst case 
	(when both beg and end indices of array has maximum 
	integer values) then also it will be very very small 
	alue as subtraction is being done ,then this value 
	is being divided by 2, so it becomes more small value
	then it is being added to beg which will be in range
	of integer value, so here there will be no problem 
    of overflow condition and we will every time get 
	correct answer of mid value.

3.    SO THATS WHY beg + (end - beg) / 2 FORMULA IS PREFERED 
    FOR CALCULATION OF MID IN BINARY SEARCH ALGORITHM.








