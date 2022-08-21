s = 'aaaaasssssdddddwwwfffffmmmmmm'
list1 = []
s1 = '' 
for i in s:
    if i  not in list1:
        list1.append(i)
s1=''.join(list1)
print(s1)

s2 = set(s)
output= ''.join(s2)
print(output)