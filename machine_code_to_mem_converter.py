lhex = ['0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f', ]
a = ''
with open('/Users/jerrry/Desktop/example.txt', 'r') as file:
    content = file.read()
    #print(content[0:8])
    
byte = ''
line = ''
count = 0
word = []

for i in range(len(content)):
    
    if (content[i] in lhex):
        
        byte += content[i]
        
        if (count == 4):
            line = ''
            for i in range(len(word)):
                line += word[len(word)-i-1] + ' '
            print(line)
            count = 0
            word = []
            
        if (len(byte) >= 2):
            word.append(byte)
            byte = ''
            count += 1