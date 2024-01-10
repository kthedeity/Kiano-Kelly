#Love cal
print("The Love Calculator is calculating your score...")
name1 = input() # What is your name?
name2 = input() # what is your name?

combine_name = name1 + " " + name2
lower_txt = combine_name.lower()

count_t = lower_txt.count("t")
count_r = lower_txt.count("r")
count_u = lower_txt.count("u")
count_e = lower_txt.count("e")
count_l = lower_txt.count("l")
count_o= lower_txt.count("o")
count_v = lower_txt.count("v")
count_e = lower_txt.count("e")

True_cal = str(int(count_t + count_r + count_u + count_e))
love_cal = str(int(count_l + count_o + count_v + count_e))
love_score = True_cal + love_cal
love_score = int(love_score)

if love_score < 10 or love_score > 90:
  print(f"Your score is {love_score}, you go together like coke and mentos.")
elif love_score > 39 and love_score < 51:
  print(f"Your score is {love_score}, you are alright together.")
else:
 print(f"Your score is {love_score}.")

