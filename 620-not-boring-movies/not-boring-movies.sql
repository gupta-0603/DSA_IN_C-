# Write your MySQL query statement below
SELECT 
      c.id,
      c.movie,
      c.description,
      c.rating
FROM Cinema c
where mod(id,2)!=0 and description!='boring'
order by rating desc;

