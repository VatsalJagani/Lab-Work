img=imread('skeleton.tif');
subplot(1,2,1);
imshow(img);
%imtool
%130-180

for i=1:800
    for j=1:500
        if 130<=img(i,j) && img(i,j)<=180
            img(i,j)=230;
        end
    end
end


subplot(1,2,2);
imshow(img);
