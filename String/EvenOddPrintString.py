s  = "samyak"
print("character at odd")
for i in range(0,len(s)):
    if(i%2==0):
        print(s[i])

print("character at even")
for i in range(0,len(s)):
    if(i%2!=0):
        print(s[i])