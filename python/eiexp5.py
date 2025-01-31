import pandas as pd
import matplotlib.pyplot as plt

# Read CSV file
data = pd.read_csv('your_file.csv')

# Process data (e.g., extract columns)
x = data['x_column']
y = data['y_column']

# Plot graph
plt.plot(x, y)
plt.xlabel('X-axis Label')
plt.ylabel('Y-axis Label')
plt.title('Your Graph Title')
plt.show()
