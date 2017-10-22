
DROP index city_for_client;

alter table client_master add primary key(client_no);

--1--
create index com_for_client
on
client_master(city,client_no);

select plan_table_output from table(dbms_xplan.display('plan_table',null,'basic'));


--2--
create index no_for_sales_order
on
sales_order(s_order_no);

--3--
create index composite_for_salse_details
on
sales_order_details(s_order_no,product_no);


select client_no,city from client_master where client_no='0010' and  city='Bombay';

