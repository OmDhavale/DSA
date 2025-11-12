import tkinter as tk
from tkinter import messagebox

# Function to handle button click
def on_submit():
    name = name_entry.get()
    selected_gender = gender_var.get()
    terms_accepted = terms_var.get()

    # Display a simple message with the gathered information
    message = f"Name: {name}\nGender: {selected_gender}\nTerms Accepted: {terms_accepted}"
    messagebox.showinfo("Submitted Information", message)

# Function to create a custom dialog box
def show_custom_dialog():
    custom_dialog = tk.Toplevel(root)
    custom_dialog.title("Custom Dialog")
    label = tk.Label(custom_dialog, text="This is a custom dialog box!")
    label.pack(pady=10)
    ok_button = tk.Button(custom_dialog, text="OK", command=custom_dialog.destroy)
    ok_button.pack(pady=10)
# Initialize the root window
root = tk.Tk()
root.title("Tkinter GUI Example")
# Label for Name
name_label = tk.Label(root, text="Enter your name:")
name_label.pack(pady=5)
# Textbox for Name input
name_entry = tk.Entry(root)
name_entry.pack(pady=5)
# Radio buttons for Gender selection
gender_var = tk.StringVar()
gender_label = tk.Label(root, text="Select your gender:")
gender_label.pack(pady=5)
gender_male = tk.Radiobutton(root, text="Male", variable=gender_var, value="Male")
gender_male.pack(pady=2)
gender_female = tk.Radiobutton(root, text="Female", variable=gender_var, value="Female")
gender_female.pack(pady=2)
gender_other = tk.Radiobutton(root, text="Other", variable=gender_var, value="Other")
gender_other.pack(pady=2)
# Checkbox for Terms acceptance
terms_var = tk.BooleanVar()
terms_checkbox = tk.Checkbutton(root, text="I accept the terms and conditions", variable=terms_var)
terms_checkbox.pack(pady=5)
# Submit Button
submit_button = tk.Button(root, text="Submit", command=on_submit)
submit_button.pack(pady=10)
# Custom Dialog Button
custom_dialog_button = tk.Button(root, text="Show Custom Dialog", command=show_custom_dialog)
custom_dialog_button.pack(pady=10)
# Run the application
root.mainloop()
