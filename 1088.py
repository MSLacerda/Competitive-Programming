
count = 0;
aux = 0;
while 1:
	vet = map(int, raw_input().split())
	if (vet[0] == 0): break

	for x in range(1,vet[0]):
		while(vet[x] != x):
			count += 2*(vet[x] - x) - 1
			aux = vet[vet[x]]
			vet[vet[x]] = vet[x]
			vet[x] = aux

	if (count % 2 == 0): 
		print "Carlos"
	else: 
		print "Marcelo"
	count = aux = n = 0;






