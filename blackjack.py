import random

cards = [11,2,3,4,5,6,7,8,9,10,10,10,10]
user_cards = []
dealer_cards = []

def initiate():
    user_cards.append(random.choice(cards))
    user_cards.append(random.choice(cards))
    dealer_cards.append(random.choice(cards))
    dealer_cards.append(random.choice(cards))

def bust():
    print(f"\nYour cards were: {user_cards} and score was {sum(user_cards)}")
    print(f"Dealer Cards were: {dealer_cards} and score was {sum(dealer_cards)}")
    print("You Bust!")

def win():
    print(f"\nYour cards were: {user_cards} and score was {sum(user_cards)}")
    print(f"Dealer Cards were: {dealer_cards} and score was {sum(dealer_cards)}")
    print("You Win!")

def draw_game():
    print(f"\nYour cards were: {user_cards} and score was {sum(user_cards)}")
    print(f"Dealer Cards were: {dealer_cards} and score was {sum(dealer_cards)}")
    print("You Draw!")

def draw():
    user_cards.append(random.choice(cards))
    # if user_cards.index(11) == True and sum(user_cards) > 21:
    #     user_cards.pop(len(user_cards) - 1)
    #     user_cards.append(1)
    if sum(dealer_cards) < 17:
        dealer_cards.append(random.choice(cards))

def pass_chance():
    while sum(dealer_cards) < 17:
        dealer_cards.append(random.choice(cards))
    
keep_playing = 'y'

while keep_playing == 'y':
    keep_playing = input("Do you want to play Black-Jack y/n: ")
    draw_card = "y"
    if keep_playing == 'n':
        print("Thanks for playing!")
        break
    user_cards = []
    dealer_cards = []

    initiate()
    
    print(f"\nYour cards are: {user_cards} and score is {sum(user_cards)}")
    print(f"Dealers first card is {dealer_cards[0]}")
    
    draw_card = input("Do you want to get another card? y/n: ")
    draw_card1 = draw_card
    while draw_card == 'y':
        draw()
        if sum(user_cards) > 21:
            bust()
            break
        elif sum(dealer_cards) > 21 or sum(user_cards) == 21:
            win()
            break
        else:
            print(f"\nYour cards are: {user_cards} and score is {sum(user_cards)}")
            print(f"Dealers first card is {dealer_cards[0]}")
        
        draw_card = input("Do you want to get another card? y/n: ")
        
        if draw_card == 'n':
            pass_chance()
            if sum(user_cards) > 21 or sum(user_cards) < sum(dealer_cards):
                bust()
                break
            elif sum(user_cards) > sum(dealer_cards):
                win()
                break
            elif sum(user_cards) == sum(dealer_cards):
                draw_game()
                break
    
    if draw_card1 == 'n':
        pass_chance()
        if sum(user_cards) > 21:
            bust()
        elif (sum(dealer_cards) > 21) and (sum(user_cards) <= 21):
            win()
        elif sum(user_cards) > sum(dealer_cards):
            win()
        elif sum(user_cards) == sum(dealer_cards):
            draw_game()

    
    

