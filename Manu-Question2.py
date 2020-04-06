for i in range(int(input())):  #int conversion 
        word = input()   
        word=word.upper()       #missing assignment
        vowels = ['A','E','I','O','U']
        count = 0             #assignment hence =
        for j in range(0,len(word)): #0 instead of 1 and missing : and len
                if word[j] in vowels:   #no need of[]
                        if j == 0:      # == needed
                                count+=1
                        elif word[j+1] in vowels:  #no need of []
                                continue   #no need of break
                        else:                   
                                count+=1    #+=1 instead of ++
        print (count) 
