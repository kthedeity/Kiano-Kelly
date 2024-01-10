#Love cal
print("The Love Calculator is calculating your score...")
name1 = input() # What is your name?
name2 = input() # what is your middle name
name3 = input() # What is their name?


combine_name = name1 + " " + name2
lower_txt = combine_name.lower()

substringt = "t"
substringr = "r"
substringu = "u"
substringe = "e"
substringl = "l"
substringo = "o"
substringv = "v"
substringe = "e"
count_t = lower_txt.count(substringt)
count_r = lower_txt.count(substringr)
count_u = lower_txt.count(substringu)
count_e = lower_txt.count(substringe)
count_l = lower_txt.count(substringl)
count_o= lower_txt.count(substringo)
count_v = lower_txt.count(substringv)
count_e = lower_txt.count(substringe)

True_cal = int(count_t + count_r + count_u + count_e)
love_cal = int(count_l + count_o + count_v + count_e)
love_cal = str(love_cal)
True_cal = str(True_cal)
love_score = True_cal + love_cal
love_score = int(love_score)

if love_score < 10 or love_score > 90:
  print(f"Your score is {love_score}, you go together like coke and mentos.")
elif love_score > 39 and love_score < 51:
  print(f"Your score is {love_score}, you are alright together.")
else:
 print(f"Your score is {love_score}.")
