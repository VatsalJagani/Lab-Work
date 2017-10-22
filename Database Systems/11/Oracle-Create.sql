/* ===================================================================================================  */
/*  creating table  */

create table users (
	userid number(4) primary key,
	password varchar(25) not null,
	user_role varchar(10),
	avaibility char(1) default('Y') check(avaibility in ('Y','N'))
);

create table employees(
	empid number(4)  primary key,
	userid number(4) references users(userid) not null,
	emp_type varchar(5) check(emp_type in ('NUR','ACC','REG','REC','PHA','LAB','MAN')) not null,
	name varchar(40) not null,
	contact_no varchar(13),
	address varchar(100) not null,
	city varchar(20),
	marital_status char(1) not null check(marital_status in ('M','U')),	
	gender char(1) not null check(gender in ('M','F')),			
	birthdate date,
	job_start date,
	job_end date
);

create table doctor(
	doctorid number(4) primary key,
	userid number(4) references users(userid) not null,
	name varchar(40) not null,
	contact_no varchar(13),
	address varchar(100) not null,
	city varchar(20),
	gender char(1) not null check(gender in ('M','F')),
	info varchar(100) default('Doctor have very high experience in cancer treatments')
);

create table patient (
	pid number(8) primary key,
	name varchar(40) not null,
	contact_no varchar(13),
	address varchar(100) not null,
	city varchar(20),
	marital_status char(1) not null check(marital_status in ('M','U')),
	gender char(1) not null check(gender in ('M','F')),
	birthdate date,
	reg_by number(4) references employees(empid) not null,
	reg_date date
);

create table places(
	place_id number(4) primary key,
	place_type varchar(5) check(place_type in ('ROOM','ACC','REG','REC','MED','LAB','OPT')) not null,
	description varchar(50),
	shift1 number(4) references employees(empid),
	shift2 number(4) references employees(empid),
	shift3 number(4) references employees(empid)
);

create table rooms(
	room_no number(3) primary key,
	place_id number(4) references places(place_id) not null,
	capacity number(2) not null
);

create table operation_th(
	ot_no number(2) primary key,
	place_id number(4) references places(place_id) not null,
	ot_type varchar(5) check(ot_type in ('OPT','RADIO','CHEMO')) not null
);

create table checkin(
	pid number(8) references patient(pid),
	checkin_no number(2),
	checkin_by number(4) references employees(empid) not null,
	room number(3) references rooms(room_no),
	in_time date,
	out_time date,
	primary key(pid, checkin_no)
);
/* datetime datatype not available in oracle  
        in_time datetime,
        out_time datetime,
*/

create table treatment(
	pid number(8),
	checkin_no number(2),
	tr_no number(2),
	tr_date date,
	checkup_by number(4) references doctor(doctorid) not null,
	medical_pre varchar(200) default('No medicines required'),
	lab_pre varchar(200) default('No laboratory required'),
	suggestion varchar(200) default('No suggestions'),
	foreign key (pid,checkin_no) references checkin(pid,checkin_no),
	primary key(pid, checkin_no, tr_no)
);

create table lab_report(
	pid number(8),
	checkin_no number(2),
	laboratory_no number(2),	
	glucose number(4,2),
	hemoglobin number(4,2),
	rdc number(2,2),
	wbc number(2,2),
	afp number(3,2),	/* alpha feto-protein */
	hcg number(2,2),	/* beta human chorionic gonadotropin */
	psa number(2,2),	/* prostate specific antigen */
	lab_description varchar(200),
	cost number(8,2) not null,
	lab_date date,
	laboratory_by number(4) references employees(empid) not null,
	foreign key (pid,checkin_no) references checkin(pid,checkin_no),
	primary key(pid, checkin_no, laboratory_no)
);

create table medical_bill(
	pid number(8),
	checkin_no number(2),
	med_no number(2),
	med_by number(4) references employees(empid) not null,
	med_date date,
	med_description varchar(300) not null,
	cost number(8,2) not null,
	foreign key (pid,checkin_no) references checkin(pid,checkin_no),
	primary key(pid, checkin_no, med_no)
);

create table bill(
	pid number(8),
	checkin_no number(2),
	bill_no number(2),
	bill_by number(4) references employees(empid) not null,
	bill_date date,
	doctor_fee number(8,2) default(0.00) not null,
	room_fee number(8,2) default(0.00) not null,
	lab_fee number(8,2) default(0.00) not null,
	medical_fee number(8,2) default(0.00) not null,
	op_fee number(8,2) default(0.00) not null,
	other_fee number(8,2) default(0.00) not null,
	foreign key (pid,checkin_no) references checkin(pid,checkin_no),
	primary key(pid, checkin_no, bill_no)
);


/* ================================================================================================================  */
/*  sequences  */
/* remove all IDENTITY(1000,1) and add below sequences  */

create sequence userid_seq minvalue 1000;
create sequence patientid_seq minvalue 10000000;
create sequence doctorid_seq minvalue 1000;
create sequence empid_seq minvalue 1000;
create sequence placeid_seq minvalue 1000;

