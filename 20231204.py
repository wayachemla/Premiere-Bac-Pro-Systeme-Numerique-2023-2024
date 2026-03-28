# TP 1 Python - Première Bac Pro SN

'''
Fonction f(a) : Calcule x² - x + 41
'''
def f(a):
    valeur = a**2 - a + 41
    return valeur

'''
Variante de la fonction f(x) en une seule ligne
'''
def f_variante(x):
    return x**2 - x + 41

# Affichage de test (en commentaire)
# print("C'est le mal")

'''
Fonction f3(x) : Calcule et affiche la valeur directement
'''
def f3(x):
    valeur = x**2 - x + 41
    print(valeur)

'''
Fonction somme(a, b) : Retourne la somme de deux nombres
'''
def somme(a, b):
    s = a + b
    return s

'''
Exemple d'utilisation de la fonction somme
print(somme(5, 3))
print('somme(8, 24) =', somme(8, 24))
'''

'''
Fonction difference(a, b) : Retourne la soustraction de b à a
'''
def difference(a, b):
    s = a - b
    return s

'''
Fonction produit(a, b) : Retourne la multiplication de a et b
'''
def produit(a, b):
    s = a * b
    return s