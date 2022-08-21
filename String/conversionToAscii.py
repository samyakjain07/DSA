s = 'a3b8c9'
x = 0
s1 = ''
i = 0
while(i<len(s)):
    if(s[i].isalpha()):
        x = ord(s[i])
        s1 = s1 + s[i]

    else:
        x = x + int(s[i])
        a = chr(x)
        s1 = s1 + a
    
    i +=1
print(s1)        