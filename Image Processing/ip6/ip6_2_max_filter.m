img=imread('gaussian-noise.tif');
[m,n]=size(img);
output=img;

for i=1:m
    for j=1:n
        m=255;
        if (i>1 & j>1 & i<m & j<n)
           m=max(img(i-1,j-1),max(img(i-1,j),max(img(i-1,j+1),max(img(i,j-1),max(img(i,j),max(img(i,j+1),max(img(i+1,j-1),max(img(i+1,j),img(i+1,j+1)))))))));
        else
           m=img(i,j);
        end
        output(i,j)=m;
    end
end
subplot(2,1,1);
imshow(img);
subplot(2,1,2);
imshow(output);