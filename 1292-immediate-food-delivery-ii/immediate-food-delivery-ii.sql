# Write your MySQL query statement bel

with temp as(
    select customer_id,min(order_date) as fi from delivery group by customer_id
)

select round((count(*)/(select count(distinct customer_id) from delivery ))*100 ,2)as immediate_percentage from delivery  d join temp t on d.customer_id=t.customer_id where t.fi =d.customer_pref_delivery_date;
