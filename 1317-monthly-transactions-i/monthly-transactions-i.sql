SELECT 
    DATE_FORMAT(trans_date, '%Y-%m') AS month,
    country,
    COUNT(id) AS trans_count,
    count(if(state='approved',1,NULL)) as approved_count,
    sum(amount) as trans_total_amount,
    sum(if(state = 'approved',amount,0))approved_total_amount
FROM 
    Transactions
GROUP BY 
    month, country;
