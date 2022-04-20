s1 = input()
half = int(len( s1 ) /2)      #divide the string in two parts and check if they are equal or not.
if len(s1) % 2 == 0 :         #even
    first_Str  = s1[:half]
    second_Str  = s1[half:]
else :                       #odd
    first_Str = s1[:half]  
    second_Str = s1[half+1:]

if first_Str == second_Str:
  print(s1 , 'string is symmertical')
else :
  print(s1,'string is not symmeritical')
