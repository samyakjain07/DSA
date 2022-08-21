from curses.ascii import isalpha
from unicodedata import numeric


s = 'a4b3c2'
ans = ''
ch = ''
n = 0
for i in range(0,len(s)):
    if(s[i].isalpha()):
        if(s[i+1]== '0',s[i+1]== '1',s[i+1]== '2',s[i+1]== '3',s[i+1]== '4',s[i+1]== '5'):
            ch = ch + s[i]
            n = int(s[i+1])
        
    
    for i in range(0,n):
        ans = ans + ch
    ch = ''
    n = 0    
print(ans)    

# or
s = 'a4b3c2'
ans = ''
for ch in s:
    if(ch.isalpha()): 
        x = ch
    else:
        ans = ans+ int(ch) * x    
print(ans)