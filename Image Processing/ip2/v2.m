img=zeros(128);
for i=21:108
    for j=21:108
        img(i,j)=150;
    end
end

subplot(3,3,1);
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

subplot(3,3,2);
imshow(img2);

subplot(3,3,3);
imshow(img+img2);
subplot(3,3,4);
imshow(img-img2);
subplot(3,3,5);
imshow(img.*img2);
subplot(3,3,6);
imshow(img & img2);
subplot(3,3,7);
imshow(img | img2);
subplot(3,3,8);
imshow(~img);
subplot(3,3,9);
imshow(xor(img,img2));