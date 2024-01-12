# Make your own "Choose Your Own Adventure" game. 
# Use conditionals such as if, else, and elif statements 
# to lay out the logic and the story's path in your program.
print('''
*******************************************************************************
          |                   |                  |                     |
 _________|________________.=""_;=.______________|_____________________|_______
|                   |  ,-"_,=""     `"=.|                  |
|___________________|__"=._o`"-._        `"=.______________|___________________
          |                `"=._o`"=._      _`"=._                     |
 _________|_____________________:=._o "=._."_.-="'"=.__________________|_______
|                   |    __.--" , ; `"=._o." ,-"""-._ ".   |
|___________________|_._"  ,. .` ` `` ,  `"-._"-._   ". '__|___________________
          |           |o`"=._` , "` `; .". ,  "-._"-._; ;              |
 _________|___________| ;`-.o`"=._; ." ` '`."\` . "-._ /_______________|_______
|                   | |o;    `"-.o`"=._``  '` " ,__.--o;   |
|___________________|_| ;     (#) `-.o `"=.`_.--"_o.-; ;___|___________________
____/______/______/___|o;._    "      `".o|o_.--"    ;o;____/______/______/____
/______/______/______/_"=._o--._        ; | ;        ; ;/______/______/______/_
____/______/______/______/__"=._o--._   ;o|o;     _._;o;____/______/______/____
/______/______/______/______/____"=._o._; | ;_.--"o.--"_/______/______/______/_
____/______/______/______/______/_____"=.o|o_.--""___/______/______/______/____
/______/______/______/______/______/______/______/______/______/______/_____ /
*******************************************************************************
''')

print("Welcome to Treasure Island.\n")
print("Your mission is to find the treasure\n")


Ans = input("choose left or right?\n")
choice = Ans.lower()

if choice == "left":
    choice2 = input("swim or wait\n")
    choice2 = choice2.lower()
    
    if choice2 == "wait":
        choice3 = input("Which Door? Red, Blue, Yellow\n")
        choice3 = choice3.lower()
        
        if choice3 == "red":
            print("Burned by fire. Game Over\n")
            choice3 = choice3.lower()
        
        elif choice3 == "blue":
            print("Eaten by beasts. Game Over.\n")
            choice3 = choice3.lower()  
        
        elif choice3 == "yellow":
            print("You Win!\n")
            choice3 = choice3.lower()
        
        else:
            print("Game Over.")
        
    else:
        print("Attacked by trout. Game Over.")

else:
    print("Fall into a hole. Game Over")
    
