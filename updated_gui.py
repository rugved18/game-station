import tkinter as tk
from tkinter import messagebox
import random
# Function to start the Guessing Numbers game
def start_guessing_numbers():
    messagebox.showinfo("Guessing Numbers", "Welcome to the Guessing Numbers game!")

    # Create a new window for the game
    game_window = tk.Toplevel()
    game_window.title("Guessing Numbers Game")
    game_window.geometry("200x250")  # Set the window size to 500x400
    game_window.configure(bg="yellow")
    # Set the font size and family
    custom_font = ('Helvetica', 29)  # Change 'Helvetica' to your desired font family and 16 to your desired font size
    # Set the number of attempts
    max_attempts = 7
    
    # Create a label to display the number of attempts left
    attempts_label = tk.Label(game_window, text=f"Attempts left: {max_attempts}", font=('Arial', 14))
    attempts_label.pack()

    # Generate a random target number
    min_val, max_val = 1, 100  # You can adjust the range as needed
    target_number = random.randint(min_val, max_val)

    def check_guess():
        nonlocal max_attempts
        guess = int(guess_entry.get())

        if max_attempts > 0:
            max_attempts -= 1
            attempts_label.config(text=f"Attempts left: {max_attempts}")
            
            if guess < target_number:
                result_label.config(text="Try a higher number.")
            elif guess > target_number:
                result_label.config(text="Try a lower number.")
            else:
                result_label.config(text=f"Congratulations! You guessed it. The number was {target_number}.")
                guess_entry.config(state='disabled')
        else:
            result_label.config(text=f"Out of attempts. The number was {target_number}.")

    guess_label = tk.Label(game_window, text="Enter your guess:")
    guess_label.pack()

    guess_entry = tk.Entry(game_window)
    guess_entry.pack()

    submit_button = tk.Button(game_window, text="Submit", command=check_guess)
    submit_button.pack()

    result_label = tk.Label(game_window, text="")
    result_label.pack()

if __name__ == "__main__":
   
# Function to start the Tic Tac Toe game
 def start_tic_tac_toe():
    global current_player, board
    current_player = 'X'
    board = [' ' for _ in range(9)]
    
    messagebox.showinfo("Tic Tac Toe", "Let's play Tic Tac Toe!\nPlayer X goes first.")
    
    # Create a new window for the game
    game_window = tk.Toplevel()
    game_window.title("Tic Tac Toe Game")

    # Define custom colors
    x_color = 'blue'
    o_color = 'red'
    button_bg = 'lightgray'

    # Create buttons for the game board with custom styling
    buttons = []
    for i in range(9):
        button = tk.Button(game_window, text=' ', font=('Helvetica', 24), width=8, height=2, command=lambda i=i: make_move(i), bg=button_bg)
        buttons.append(button)
        row, col = divmod(i, 3)
        button.grid(row=row, column=col, padx=5, pady=5)

    # Create a function to make a move
    def make_move(position):
        if board[position] == ' ':
            board[position] = current_player
            if current_player == 'X':
                buttons[position].config(text=current_player, state='disabled', disabledforeground=x_color)
            else:
                buttons[position].config(text=current_player, state='disabled', disabledforeground=o_color)
            check_winner()
            toggle_player()

    # Create a function to toggle players
    def toggle_player():
        global current_player
        if current_player == 'X':
            current_player = 'O'
        else:
            current_player = 'X'

    # Create a function to check for a winner
    def check_winner():
        # Check rows, columns, and diagonals for a win
        for i in range(3):
            if (board[i] == board[i + 3] == board[i + 6] == current_player) or \
               (board[i * 3] == board[i * 3 + 1] == board[i * 3 + 2] == current_player):
                messagebox.showinfo("Tic Tac Toe", f"Player {current_player} wins!")
                game_window.quit()
                return

        if (board[0] == board[4] == board[8] == current_player) or \
           (board[2] == board[4] == board[6] == current_player):
            messagebox.showinfo("Tic Tac Toe", f"Player {current_player} wins!")
            game_window.quit()
            return

        # Check for a tie (no empty spaces left)
        if ' ' not in board:
            messagebox.showinfo("Tic Tac Toe", "It's a tie!")
            game_window.quit()
            return

    game_window.mainloop()

if __name__ == "__main__":
    

    

    # Add your Tic Tac Toe game code here
    pass
# Function to start the Rock, Paper, Scissors game
def start_rock_paper_scissors():
    options = ['Rock', 'Paper', 'Scissors']
    
    messagebox.showinfo("Rock, Paper, Scissors", "Let's play Rock, Paper, Scissors!")

    # Create a new window for the game
    game_window = tk.Toplevel()
    game_window.title("Rock, Paper, Scissors Game")

    # Define custom colors
    bg_color = '#FFD700'  # Light golden yellow
    button_bg = '#3CB371'  # Medium sea green
    button_fg = 'white'
    button_font = ('Arial', 14)
    result_font = ('Arial', 16)

    game_window.configure(bg=bg_color)

    # Create buttons for the game options with custom styling
    buttons = []
    for option in options:
        button = tk.Button(
            game_window, text=option, font=button_font, width=12, height=2,
            command=lambda option=option: play(option),
            bg=button_bg, fg=button_fg
        )
        buttons.append(button)
        button.pack(pady=10)

    result_label = tk.Label(game_window, text="", font=result_font, bg=bg_color)
    result_label.pack(pady=20)

    # Create a function to play the game
    def play(player_choice):
        computer_choice = random.choice(options)
        result = determine_winner(player_choice, computer_choice)

        result_label.config(text=f'You chose {player_choice}. Computer chose {computer_choice}. {result}')

    # Create a function to determine the winner
    def determine_winner(player_choice, computer_choice):
        if player_choice == computer_choice:
            return "It's a tie!"
        elif (
            (player_choice == 'Rock' and computer_choice == 'Scissors') or
            (player_choice == 'Paper' and computer_choice == 'Rock') or
            (player_choice == 'Scissors' and computer_choice == 'Paper')
        ):
            return 'You win!'
        else:
            return 'Computer wins!'

    game_window.mainloop()

if __name__ == "__main__":
    

    
    # Add your Rock Paper Scissors game code here
    pass
def main_menu():
    root = tk.Tk()
    root.title("Game Station")
    root.configure(bg="lightblue")
    root.geometry("400x300")

    label = tk.Label(root, text="Welcome to the Game Station!", font=("Arial", 16))
    label.pack(pady=20)

    button1 = tk.Button(root, text="Guessing Numbers", command=start_guessing_numbers)
    button1.pack()

    button2 = tk.Button(root, text="Tic Tac Toe", command=start_tic_tac_toe)
    button2.pack()

    button3 = tk.Button(root, text="Rock Paper Scissors", command=start_rock_paper_scissors)
    button3.pack()

    quit_button = tk.Button(root, text="Quit", command=root.quit)
    quit_button.pack()

    root.mainloop()

if __name__ == "__main__":
    main_menu()

