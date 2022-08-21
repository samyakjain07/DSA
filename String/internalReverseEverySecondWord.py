s = " hi my name is samyak"
l = s.split()
l1 = []
count = 0
for i in l:
    if(count%2==0):
        l1.append(i[::-1])
    else:
        l1.append(i)
    count = count + 1    
s1 = " ".join(l1)
print(s1)