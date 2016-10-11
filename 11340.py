
tests = int(input())
#file = open("out.txt", "w")
#file.truncate()
for i in range(tests):
	k = int(input())
	paid = {}
	for j in range(k): 
		line = input()
		line = line.split()
		paid[ line[0] ] = int( line[1] )

	m = int(input())

	price = 0
	for j in range(m):
		line = input() 
		length = len(line)

		for k in range(length):
			if line[k] in paid.keys():
				price += paid[ line[k] ]

	costs = price / 100;

	#file.write("%.2f$\n" % costs)
	print("%.2f$" % costs)
