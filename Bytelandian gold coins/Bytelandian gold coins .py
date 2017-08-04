
def rec(n):
	if(n<12):
		return n;
	if n//4>1000000 :
		n_by2=rec(n//2)
		n_by3=rec(n//3)
		n_by4=rec(n//4)
		sum=n_by2+n_by3+n_by4
		if(sum<=n):
			return n
		return sum



	if a[n//2]==0:
		a[n//2]=rec(n//2)
	if a[n//3]==0:
		a[n//3]=rec(n//3)
	if a[n//4]==0:
		a[n//4]=rec(n//4)
	sum=a[n//2] + a[n//3] + a[n//4]
	if(sum<=n):
		return n
	return sum
for i in range(10):
	n=10
	n=int(input())
	a=[0]*10000003
	print(rec(n))


