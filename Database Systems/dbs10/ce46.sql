

create table cruises
(cruise_id number,
 cruise_name varchar2(30),
 start_date date,
 end_date date,
 constraint cruise_id_pk primary key (cruise_id),
 constraint cruise_name_ck check (cruise_name in ('Hawaii','Bahamas','Bermuda','Mexico','Day at Sea'))
);

create sequence seq_cruise_id MINVALUE 1;

delete from CRUISES;

insert into CRUISES (CRUISE_ID,CRUISE_NAME) values(seq_cruise_id.NEXTVAL,'Hawaii');

desc SYS.USER_SEQUENCES;