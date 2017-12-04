
img=imread('cameraman.tif');
img=im2double(img);
img2=img;
img3=img;
img4=img;
subplot(2,2,1);
imshow(img);

for i=1:256
    for j=1:256
        img2(i,j)=2*log(1+img(i,j));
        img3(i,j)=8*log(1+img(i,j));
        img4(i,j)=20*log(1+img(i,j));
    end
end
subplot(2,2,2);
imshow(img2);
subplot(2,2,3);
imshow(img3);
subplot(2,2,4);
imshow(img4);