s = "B4A1D3"
digit = ""
character = ""
for i in s:
    if i.isalpha():
        character +=i
    else:
        digit += i  
digit = ''.join(sorted(digit))    
character = ''.join(sorted(character))   
print(character+digit)