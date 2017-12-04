
img=imread('img_satelite.tif');
img=im2double(img);
img2=img;
img3=img;
img4=img;
subplot(2,2,1);
imshow(img);

for i=1:765
    for j=1:765
        img2(i,j)=power(img(i,j),2.1);
        img3(i,j)=power(img(i,j),15);
        img4(i,j)=power(img(i,j),0.8);
    end
end
subplot(2,2,2);
imshow(img2);
subplot(2,2,3);
imshow(img3);
subplot(2,2,4);
imshow(img4);