SELECT
  product_no,
  description
FROM
  AA_PRODUCT_MASTER
WHERE
  product_no IN
  (
    SELECT
      product_no
    FROM
      aa_sales_order NATURAL
    JOIN AA_SALES_ORDER_DETAILS
    WHERE
      dely_date<=sysdate
  );
SELECT
  name,
  address1,
  city,
  pincode
FROM
  AA_CLIENT_MASTER
WHERE
  CLIENT_NO IN
  (
    SELECT
      UNIQUE client_no
    FROM
      AA_SALES_ORDER_DETAILS NATURAL
    JOIN AA_SALES_ORDER
    WHERE
      product_no='p019001'
  );
SELECT
  name
FROM
  AA_CLIENT_MASTER
WHERE
  client_no IN
  (
    SELECT
      CLIENT_NO
    FROM
      AA_SALES_ORDER
    WHERE
      AA_SALES_ORDER.S_ORDER_DATE<=TO_DATE('may 96','MON YY')
  );
SELECT
  client_no,
  name
FROM
  AA_CLIENT_MASTER
WHERE
  CLIENT_NO=
  (
    SELECT
      client_no
    FROM
      AA_SALES_ORDER NATURAL
    JOIN AA_SALES_ORDER_DETAILS NATURAL
    JOIN AA_PRODUCT_MASTER
    WHERE
      description='1.44 Drive'
  );
SELECT
  client_no,
  name
FROM
  AA_CLIENT_MASTER
WHERE
  client_no IN
  (
    SELECT
      AA_CLIENT_MASTER.CLIENT_NO
    FROM
      aa_product_master NATURAL
    JOIN AA_SALES_ORDER NATURAL
    JOIN AA_SALES_ORDER_DETAILS
    GROUP BY
      CLIENT_NO
      having sum(qty_order*SELL_PRICE)>=10000
  );

  
  select * from AA_SALES_ORDER where CLIENT_NO=(select CLIENT_NO from AA_CLIENT_MASTER where name='Rahul desai');




select client_no as no,name as name from AA_CLIENT_MASTER where CITY='Bombay'
union
select salesman_no,sal_name from AA_SALESMAN_MASTER where city='Bombay';

select sal_name from AA_SALESMAN_MASTER where city='Bombay' and SALESMAN_NO in (select SALESMAN_NO from AA_SALES_ORDER natural join AA_CLIENT_MASTER where city='Bombay');

SELECT
  product_no,
  description,
  QTY_ON_HAND,
  COST_PRICE
FROM
  AA_PRODUCT_MASTER
WHERE
  product_no IN
  (
    SELECT
      product_no
    FROM
      aa_sales_order NATURAL
    JOIN AA_SALES_ORDER_DETAILS
    WHERE
      dely_date<=sysdate
  );