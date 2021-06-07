def cube( n ):
	
	s = 0
	while n != 0:
		m = n % 10
		s += m * m * m
		n //= 10
	return s    
	
def main():
	
	n = int(input("Enter a number = "))
	
	arr = [0] * 100
	
	k = 0
	
	arr[ k ] = n
	
	found = False;
	
	while not found:
		
	      k += 1
	      
	      arr[ k ] = cube(arr[k - 1]) 
	      
	      for i in range(0, k):
	      	
	      	  if arr[i] == arr[k]:
	      	  	
	      	  	 found = True
	      	  	 
	for i in range(0, k + 1):
		
		print(arr[i], end = " ")
main()		
