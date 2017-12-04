img=imread('low_contrast_img.tif');
subplot(2,1,1);
imshow(img);
img2=img;
min=9999999;
max=0;
for i=1:500
    for j=1:500
        if min>img(i,j)
            min=img(i,j);
        end
        if max<img(i,j)
            max=img(i,j);
        end
    end
end


for i=1:500
    for j=1:500
        img2(i,j)=(255/(max-min))*(img(i,j)-min);
    end
end
subplot(2,1,2);
imshow(img2);
figure;
subplot(2,1,1);
imhist(img);
subplot(2,1,2);
imhist(img2);