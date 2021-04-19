import random
import array

file = open("./graph", "w")

min_nodes = input("Min nodes: ")
max_nodes = input("Max nodes: ")
min_nodes = int(min_nodes)
max_nodes = int(max_nodes)
n = random.randint(min_nodes, max_nodes)        #nodes

min_vertex = 0
max_vertex = n * (n - 1)
m = random.randint(min_vertex, max_vertex)      #vertex

max_cost = input("Max cost: ")
max_cost = int(max_cost)

graph = [[0, 0]]

i = 0
while i < m:
    node1 = random.randint(1, n)
    node2 = random.randint(1, n)
    cost = random.randint(1, max_cost)

    next_step = "True"

    if node1 == node2:
        next_step = "False"

    for j in range(1, i+1):
        if graph[j][0] == node1 and graph[j][1] == node2:
            next_step = "False"

    if next_step == "True":
        graph.append([node1, node2, cost])
        i = i + 1

graph = sorted(graph)

file.write(str(n) + " " + str(m) + "\n")

for i in range (1, m+1):
    file.write(str(graph[i][0]) + " " +
               str(graph[i][1]) + " " +
               str(graph[i][2]) + "\n")
