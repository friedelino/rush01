# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    gen_all.py                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fmaurer <fmaurer42@gmail.com>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/31 09:02:27 by fmaurer           #+#    #+#              #
#    Updated: 2022/07/31 17:40:24 by fmaurer          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# https://stackoverflow.com/questions/25984746/creating-a-latin-square-program-in-python
#
# def create_latin_square(n: int, start_el: int=1):
#     row = [i for i in range(1, n+1)]
#     row = row[start_el-1:] + row[:start_el-1]
#     return [row[i:] + row[:i] for i in range(n)]


frst = []
for i in range(1,5):
    for j in range(1,5):
        for k in range(1,5):
            for l in range(1,5):
                if i != j and i != k and i != l and j != k and j != l and k != l:
                    frst.append([i,j,k,l])


squares0 = []
for row in frst:
    for i in range(1,5):
        for j in range(1,5):
            for k in range(1,5):
                for l in range(1,5):
                    if i != j and i != k and i != l and j != k and j != l and k != l and \
                       (i!=row[0] and j!=row[1] and k!=row[2] and l!=row[3]):
                        candi = [[row[0], row[1], row[2], row[3]], [i,j,k,l]]
                        if candi not in squares0:
                            squares0.append(candi)

squares1 = []
for sq in squares0:
    for i in range(1,5):
        for j in range(1,5):
            for k in range(1,5):
                for l in range(1,5):
                    if i != j and i != k and i != l and j != k and j != l and k != l and \
                        (i!=sq[0][0] and j!=sq[0][1] and k!=sq[0][2] and l!=sq[0][3]) and \
                        (i!=sq[1][0] and j!=sq[1][1] and k!=sq[1][2] and l!=sq[1][3]):
                        candi = [sq[0], sq[1], [i,j,k,l]]
                        if candi not in squares1:
                            squares1.append(candi)

for sq in squares1:
    for i in range(0,4):
        if sq[0][i] == sq[1][i] or sq[0][i] == sq[2][i] or sq[1][i] == sq[2][i]:
            print(sq)
            print("ho!")

squares2 = []
for sq in squares1:
    for i in range(1,5):
        for j in range(1,5):
            for k in range(1,5):
                for l in range(1,5):
                    if i != j and i != k and i != l and j != k and j != l and k != l and \
                        (i!=sq[0][0] and j!=sq[0][1] and k!=sq[0][2] and l!=sq[0][3]) and \
                        (i!=sq[1][0] and j!=sq[1][1] and k!=sq[1][2] and l!=sq[1][3]) and \
                        (i!=sq[2][0] and j!=sq[2][1] and k!=sq[2][2] and l!=sq[2][3]):
                        candi = [sq[0], sq[1], sq[2], [i,j,k,l]]
                        if candi not in squares1:
                            squares2.append(candi)




arsch = [[2, 3, 1, 4,],
[3, 1, 4, 2,],
[1, 4, 2, 3,],
[4, 2, 3, 1,]]

if arsch in squares2:
    print("jo!")

# print("const int\tALLSQUARES[576][4][4] = {\n{")
# for sq in squares2:
#     for i in range(4):
#         if i == 0:
#             print(f"{{{sq[i][0]}, {sq[i][1]}, {sq[i][2]}, {sq[i][3]}}},")
#         elif i in [1,2]:
#             print(f"{{{sq[i][0]}, {sq[i][1]}, {sq[i][2]}, {sq[i][3]}}},")
#         else:
#             print(f"{{{sq[i][0]}, {sq[i][1]}, {sq[i][2]}, {sq[i][3]}}}")
#     print("}, {")

# print(len(squares2))
