clear all;

i=imread('/home/user1/Desktop/Images/Desert.jpg');

j=rgb2gray(i);
msg='hellolab11';
x=dec2bin(msg,8);
y=x';
z=y(:);
w=z';

prev_msg=w;

k=j;
temp=0;
K=1;
[M,N]=size(k);
msg_len=size(w);
for I=1:M
	for J=1:N
		t=j(I,J);
		lsb=bitget(t,1);
		if( K >= msg_len )
            temp=1;
            break;
        end
        if(w(K)=='1')
			k(I,J)=bitset(t,1,1);
		else
			k(I,J)=bitset(t,1,0);
		end
    end
    K=K+1;
    if(temp==1)
        break;
    end
end

figure,imshow(j);
figure,imshow(k);

array=zeros(msg_len);
K=1;
temp=0;
for I=1:M
	for J=1:N
		t=k(I,J);
		lsb=bitget(t,1);             
		if( K >= msg_len )
            temp=1;
            break;
        end
        array(K)=lsb;
    end
    K=K+1;
    if(temp==1)
        break;
    end
end



array
length(array)
S = num2str(80,array)
length(S)
%S = '101011101011010101011010'
S = reshape(S, length(S)/8, 8)
decimalValues = bin2dec(S)

