# Write your MySQL query statement below
SELECT e1.name as Employee
FROM Employee e1
JOIN Employee e2
ON e1.ManagerID=e2.ID
WHERE e1.salary>e2.salary;