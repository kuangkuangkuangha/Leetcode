# 181 182 183
# Write your MySQL query statement below
select lastName, firstName, city, state from Person left join Address on Person.PersonId = Address.PersonId

# Write your MySQL query statement below
select Email from Person group by Email having count(*)>1

# Write your MySQL query statement below
select Name as Customers from Customers where not exists 
(
    select * from Orders where CustomerId = Customers.Id
)

