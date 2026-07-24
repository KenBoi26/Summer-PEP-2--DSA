from typing import List

class Solution:
    def dfs(self, isConnected: List[List[int]], visited: List[bool], node: int) -> None:
        visited[node] = True

        for i in range(len(isConnected)):
            if isConnected[node][i] == 1 and not visited[i]:
                self.dfs(isConnected, visited, i)

    def findCircleNum(self, isConnected: List[List[int]]) -> int:
        count = 0
        visited = [False] * len(isConnected)

        for i in range(len(isConnected)):
            if not visited[i]:
                self.dfs(isConnected, visited, i)
                count += 1

        return count