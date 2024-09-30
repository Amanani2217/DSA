# Write your MySQL query statement below
with temp as (select product_id,min(year) as year from sales group by product_id )
 
 select s.product_id,t.year as first_year,quantity,price from sales s left join temp t on s.product_id = t.product_id where s.product_id=t.product_id and s.year=t.year
