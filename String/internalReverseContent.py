s = " hi my name is samyak"
l = s.split()
l1 = []
for i in l:
    l1.append(i[::-1])
s1 = " ".join(l1)
print(s1)