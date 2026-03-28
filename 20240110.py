# TP 3 Python - Première Bac Pro SN

"""
a = 1
if a > 0:
    print("a est positif")
"""

"""
a = -12
if a >= 0:
    print(a)
else:
    print(-a)
"""

"""
a, b = 1, 2
if a > b:
    print(a)
else:
    print(b)
"""

"""
a, b = 1, 2
if a > b:
    m = a
else:
    m = b
print(m)
"""

"""
# Exemple de condition sans variables définies
if x >= 0:
    x = x / 2
else:
    x = 3 * x + 1
"""

"""
x = 7
y = 10
print(x == y)
"""

"""
x = 7
y = 10
print(x == 7 and y == 5)
"""

"""
x = 7
y = 10
print(x > 7 or x == 7)
"""

"""
x = 7
y = 10
print(not x < 5)
"""

"""
x = 7
y = 10
print(not (x < 5) and (y == 10) or (x < 5) and not (y == 10))
"""

"""
age = int(input("Quel âge as-tu ? "))
if age >= 18:
    print("Vous êtes un adulte")
elif age < 3:
    print("Vous êtes un bébé")
else:
    print("Vous êtes un enfant")
"""

"""
age = int(input("Quel âge as-tu ? "))
if age >= 18:
    print("Vous êtes un adulte")
elif age < 3:
    print("Vous êtes un bébé")
elif age >= 3 and age < 15:
    print("Vous êtes un enfant")
else:
    print("Vous êtes un lycéen")
"""

"""
def hello_world(name):
    print("My name is", name)
"""

# Fonction finale opérationnelle
def hello_world(name, name2):
    agent = "Agent 007"
    print("My name is", name2, name)
    print(name2, name)
    return agent

# Appel de la fonction et stockage du résultat
agent = hello_world("Bond", "James")