img=imread('moon.tif');
subplot(3,3,1);
imshow(img);
plane1=img;
plane2=img;
plane3=img;
plane4=img;
plane5=img;
plane6=img;
plane7=img;
plane8=img;

for i=1:537
    for j=1:358
        plane1(i,j)=(img(i,j) & 128)*255;
        plane2(i,j)=(img(i,j) & 64)*255;
        plane3(i,j)=(img(i,j) & 32)*255;
        plane4(i,j)=(img(i,j) & 16)*255;
        plane5(i,j)=(img(i,j) & 8)*255;
        plane6(i,j)=(img(i,j) & 4)*255;
        plane7(i,j)=(img(i,j) & 2)*255;
        plane8(i,j)=(img(i,j) & 1)*255;
    end
end

subplot(3,3,2);
imshow(plane1);
subplot(3,3,3);
imshow(plane2);
subplot(3,3,4);
imshow(plane3);
subplot(3,3,5);
imshow(plane4);
subplot(3,3,6);
imshow(plane5);
subplot(3,3,7);
imshow(plane6);
subplot(3,3,8);
imshow(plane7);
subplot(3,3,9);
imshow(plane8);