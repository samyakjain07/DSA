s = 'aaaaasssssdddddwwwfffffmmmmmm'
list1 = []
s1 = '' 
for i in s:
    if i  not in list1:
        list1.append(i)

for ch in list1:
    print('{} occurs {} times '.format(ch, s.count(ch)))