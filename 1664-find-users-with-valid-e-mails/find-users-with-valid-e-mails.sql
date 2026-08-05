# Write your MySQL query statement below
select user_id,name,mail 
from users
where mail REGeXP '^[a-zA-Z][a-zA-Z0-9_.-]*@leetcode[.]com$'
and mail like binary '%@leetcode.com'
