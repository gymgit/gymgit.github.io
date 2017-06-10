
lines = open("packet-s7comm.c", 'r').readlines()
out = open("constants.txt", 'w')

prev = False

for x, line in enumerate(lines):
	words = line.split()

	if not words and prev:
		out.write('\n')
		prev = False
	if "#define" in words:
		val = words[2]
		name = words[1]
		for l2 in lines[x+1:x+100]:
			if name+',' in l2.split():
				name = l2.split('"')[1]
				break
		out.write(val + ' - ' + name +'\n')
		prev = True
out.close()
