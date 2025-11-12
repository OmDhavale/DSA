import tkinter as tk
from tkinter import messagebox

# Function to display the entered details
def submit():
    name = entry_name.get()
    gender = gender_var.get()
    interests = [interest for interest, var in interest_vars.items() if var.get()]
    
    message = f"Name: {name}\nGender: {gender}\nInterests: {', '.join(interests)}"
    messagebox.showinfo("Entered Details", message)

# Create the main window
root = tk.Tk()
root.title("User Information")

# Name input
tk.Label(root, text="Enter your name:").pack(pady=5)
entry_name = tk.Entry(root)
entry_name.pack(pady=5)

# Gender selection
tk.Label(root, text="Select your gender:").pack(pady=5)
gender_var = tk.StringVar()
tk.Radiobutton(root, text="Male", variable=gender_var, value="Male").pack()
tk.Radiobutton(root, text="Female", variable=gender_var, value="Female").pack()
tk.Radiobutton(root, text="Other", variable=gender_var, value="Other").pack()

# Interests selection
tk.Label(root, text="Select your interests:").pack(pady=5)
interest_vars = {
    "Sports": tk.BooleanVar(),
    "Music": tk.BooleanVar(),
    "Movies": tk.BooleanVar(),
    "Reading": tk.BooleanVar()
}
for interest, var in interest_vars.items():
    tk.Checkbutton(root, text=interest, variable=var).pack()

# Submit button
submit_button = tk.Button(root, text="Submit", command=submit)
submit_button.pack(pady=20)

# Start the GUI loop
root.mainloop()
