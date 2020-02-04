import matplotlib.pyplot as plt
from matplotlib.patches import Ellipse

fig = plt.figure(0)
ax = fig.add_subplot(111, aspect='equal')
e = Ellipse(xy = (0,2), width = 1.81 * 2, height = 0.94 * 2, angle = 27.6)
ax.add_artist(e)

e.set_facecolor("white")
plt.xlim(-2, 2)
plt.ylim(0.5, 3.5)
ax.grid(True)
plt.title("50% Probablity Contour - Homework 4.2")

plt.show()

