img=zeros(128);
for i=21:108
    for j=21:108
        img(i,j)=150;
    end
end

subplot(4,3,1);
imshow(img);

img2=zeros(128);
for i=1:64
    for j=1:64
        img2(i,j)=150;
    end
end
for i=65:128
    for j=65:128
        img2(i,j)=150;
    end
end

figure;
imshow(img2);


imshow(img+img2);
figure;
imshow(img-img2);
figure;
imshow(img.*img2);
figure;
imshow(img & img2);
figure;
imshow(img | img2);
figure;
imshow(~img);
figure;
imshow(xor(img,img2));