# A = {10, 7, 8}
# B = {200, 4, 5}
# C = {300, 2, 3}
# D = {100, 200, 300}

# print(A.intersection(D))
# print(B.intersection(D))
# print(C.intersection(D))
# print(A.intersection(B, C, D))
# print set() #if no one is matching

A = {100, 7, 8}
B = {200, 4, 5}
C = {300, 2, 3, 7}
D = {100, 200, 300}

print(A & C)
print(A & D)

print(A & C & D)

print(A & B & C & D)

# print set() if no one is matching
 




 