img=imread('cameraman.tif');
subplot(2,1,1);
imshow(img);

for i=1:256
    for j=1:256
        if img(i,j)<128
            img(i,j)=0;
        else
            img(i,j)=255;
        end
    end
end

subplot(2,1,2);
imshow(img);