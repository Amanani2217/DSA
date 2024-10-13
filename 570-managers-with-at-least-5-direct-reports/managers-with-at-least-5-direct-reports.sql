-- # Write your MySQL query statement below

-- select name from employee where id in (select managerId from employee group by managerId having count(id)>=5)



select name from employee where id in (select managerid from employee group by managerid having count(*)>=5)














