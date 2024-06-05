import subprocess

# Command to execute the .exe file
command = ["gcc-pasta.exe", "papa", "pineapple"] # list of separate CLI commands, args

# Use subprocess.Popen to execute the command
process = subprocess.Popen(
    command, 
    stdout=subprocess.PIPE, 
    stderr=subprocess.PIPE, 
    text=True
    )

# Capture the output and error streams
stdout, stderr = process.communicate()  #Captures all CLI outputs

# Print the output
print("Standard Output:\n", stdout)
print("Standard Error:\n", stderr)
