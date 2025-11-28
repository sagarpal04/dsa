# Write your MySQL query statement below
select equ.unique_id, eq.name from employees eq left join EmployeeUNI equ on eq.id = equ.id;