close all
clear all
clc

img=imread('cameraman.tif');
img=im2double(img);
[m,n]=size(img);
%original Image
%figure;
imshow(img);
p=2*m;q=2*n;

D=160;

F=zeros(p,q);
for i=1:m
    for j=1:n
        F(i,j)=img(i,j);
    end
end
%figure;
% Image after padding
imshow(F);

for i=1:p
    for j=1:q
        if mod(i+j,2)==1
           F(i,j)=F(i,j)*(-1);
       end
    end
end
%figure;
% image after multiply with (-1)^(x+y)
imshow(F);
F1=F;
F=fft2(F1);
%figure;
% after fourier transfer
imshow(F);

% ideal low-pass filter
H=zeros(p,q);
for i=1:p
    for j=1:q
        dist=sqrt((i-m)*(i-m)+(j-n)*(j-n));
        if dist<D
            H(i,j)=1;
        end
    end
end
%figure;
% filter
imshow(H);

G=F.*H;
%figure;
% image after multiplication
imshow(G);

%get image
G1=real(ifft2(G));

for i=1:p
    for j=1:q
       if mod(i+j,2)==1
           G1(i,j)=G1(i,j)*(-1);
       end
    end
end
%mat2gray
%final image
%figure;
imshow(G1);

for i=1:m
    for j=1:n
        img(i,j)=G1(i,j);
    end
end
%figure;
imshow(img)