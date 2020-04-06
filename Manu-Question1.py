
Input = [] 
n = int(input("Enter number of elements : "))
temp = input()      #need to convert string to int
temp=temp.split()   #spliting the string

ans=0               #initializing ans

for i in range(0, n):
    
    ele = int(temp[i])      #insertion
    Input.append(ele)
if(Input[0]<0):
    prev =1
else:
    prev=-1
for elem in Input: 
	if elem ==0:         # == needed
               
		sign = 1     #1 insted of -1
	else: 
		sign = elem / abs(elem) 

	if sign == -prev:    	
		ans = ans + 1
		prev = sign 
print(ans-1)                  #wrong variable and ans-1 is needed

