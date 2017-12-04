
img=imread('cameraman.tif');
subplot(2,1,1);
imshow(img);

for i=1:256
    for j=1:256
        img(i,j)=255-img(i,j);
    end
end
subplot(2,1,2);
imshow(img);