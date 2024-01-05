age = input()

# how many years is it until that person reach 90?
age = int(age)
age =(90 - age)

# find how many weeks he have left. how many years he got left X weeks in a year
Weeks = (age * 52)
Weeks = str(Weeks)

print("You have " + Weeks + " weeks left.")
