select product_no,description from product_master where product_no not in (select distinct product_no from SALSE_ORDER_DETAILS);
(select product_no from product_master) minus (select distinct product_no from SALSE_ORDER_DETAILS);

select c.name,c.address1,c.city,c.pincode from client_master c join salse_order s on c.client_no=s.client_no where s.s_order_no='019001';

select c.name from client_master c join salse_order s on c.client_no=s.client_no where s.DELY_DATE<'may-96';

select client_no,name from client_master where (select count(s.client_no) from salse_order s natural join salse_order_details sd natural join product_master p where lower(p.description)='cd drive')=1;

select cl

======================================================================
create table aab_department1 (dept_id number(3) primary key, name varchar2(5));
insert into aab_department1 (1,'CE');
insert into aab_department1 (2,'EC');

create table aab_department2 (dept_id number(3) primary key, name varchar2(5));
insert into aab_department2 (1,'IT');
insert into aab_department2 (2,'CH');

create table aab_department3 (dept_id number(3) primary key, name varchar2(5));
insert into aab_department3 (1,'CV');
insert into aab_department3 (2,'MH');


create table aab_student (sid number(3) primary key,name varchar2(10), dept_id number(3) references aab_department1, dept_id number(3) references aab_department2, dept_id number(3) references aab_department3);
insert into aab_student (1,'vatsal',1,1,1);
insert into aab_student (2,'kishan',1,2,1);
insert into aab_student (3,'sahdev',2,2,2);

