year = int(input())

# if its divisonable by 4 then no reminders 
if year %  4 == 0:
# Not leap year unless a speical case
  if year % 100 != 0:
    print("Leap year")
 # Is leap year if both conditions are true
  elif year % 100 == 0 and year % 400 == 0:
    print("Leap year")
  # if Not true
  else:
    print("Not leap year") 
# if the first if statement wasnt true
else:
  print("Not leap year")
"""
Another way to code it 
if year % 4 == 0:
  if year % 100 == 0:
    if year % 400 == 0:
      print("Leap year")
    else:
      print("Not leap year")
  else:
    print("Leap year")
else:
  print("Not leap year")
"""
