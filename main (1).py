#uy ishi 1
# dic1 = {1: 10, 2: 20}
# dic2 = {3: 30, 4: 40}
# dic3 = {5: 50, 6: 60}
# dic4 = {**dic1, **dic2, **dic3}
# print(dic4)
#uy ishi 2 
# n = int(input("sonni kiriting:"))
# d1 = {i: i**2 for i in range(1, n)}
# print("Output:", d1)
#uy ishi 3 
# dic1 = {1: 10, 2: 20, 3: 30, 4: 40, 5: 50, 6: 60}
# dic1.pop(min(dic1, key=dic1.get))
# dic1.pop(max(dic1, key=dic1.get))
# print(dic1)
#uy ishi 4 
# n = int(input("Elementlar sonini kiriting: "))
# dic1 = {}
# for i in range(n):
#     key = int(input(f"{i+1}-kalitni kiriting: "))
#     value = int(input(f"{i+1}-qiymatni kiriting: "))
#     dic1[key] = value
# keys = [k for k, v in sorted(dic1.items(), key=lambda item: item[1], reverse=True)[:3]]
# print("Eng katta 3 ta qiymatli kalitlar:", keys)
#uy ishi 5 
# n = int(input("Elementlar sonini kiriting: "))
# dic = {}
# for i in range(n):
#     kalit = int(input(f"{i+1}-kalitni kiriting: "))
#     qiymat = int(input(f"{i+1}-qiymatni kiriting: "))
#     dic[kalit] = qiymat
# toplam = list(dic.items())  
# yigindi = [sum(tuplam) for tuplam in toplam] 
# print("Yig'indilar:", yigindi)
#sinf ishi 1 
# set1 = {10, 20, 30, 40, 50}
# set2 = {30, 40, 50, 60, 70}
# set1.intersection_update(set2)
# print(set1)  
#sinf ishi 2 
# set1 = {10, 20, 30, 40, 50}
# set2 = {30, 40, 50, 60, 70}
# set3 = set1.difference(set2)
# print(set3)  
#sinf ishi 3 
# keys = ['Ten', 'Twenty', 'Thirty']
# values = [10, 20, 30]
# dic = dict(zip(keys, values))
# print(dic) 
#sinf ishi 4 
# dic = {'x': 100, 'y': 200, 'z': 300}
# yigindi = sum(dic.values())
# print(yigindi)  
#sinf ishi 5 
# a = [2, 1, 3, 4, 5, 6, 2, 4, 3, 1, 5, 2, 4]
# b = {}
# for d in a:
#     if d in b:
#         b[d] += 1
#     else:
#         b[d] = 1
# print(b)
#uy ishi 6 
# a = [(1, 2), (3, 4), (5, 6)]
# b = []
# for d in a:
#     for c in d:
#         b.append(c)
# print("list", b)
#uy ishi 7 
d1 = {'a': 100, 'b': 200, 'c': 300}
d2 = {'a': 300, 'b': 200, 'd': 400}
d3 = {}
for key in d1.keys() | d2.keys():
    d3[key] = d1.get(key, 0) + d2.get(key, 0)
print(f"d3= {d3}")










