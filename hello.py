planets = ["Mercury", "Venus", "Earth", "Mars", "Jupiter",
"Saturn", "Uranus", "Neptune", "Pluto"]

def get_planet(index):
    return planets[index]

for x in range(0, 9):
    print(get_planet(x))