# Write your MySQL query statement below
select 
case 
when id=(select max(id) from seat) and id%2=1 then id
when id%2=1 then id+1 else id-1 end as id,
student
# make id 1 ,2 then 2 to 3
# odd me minus
# even me add
from seat
order by id
