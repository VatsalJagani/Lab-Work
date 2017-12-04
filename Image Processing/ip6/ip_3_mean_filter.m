img=imread('gamma-noise.tif');
[m,n]=size(img);
img=im2double(img);
output=img;

for i=1:m
    for j=1:n
        m=255;
        if (i>1 & j>1 & i<m & j<n)
           m=nthroot(img(i-1,j-1),9)*nthroot(img(i-1,j),9)*nthroot(img(i-1,j+1),9)*nthroot(img(i,j-1),9)*nthroot(img(i,j),9)*nthroot(img(i,j+1),9)*nthroot(img(i+1,j-1),9)*nthroot(img(i+1,j),9)*nthroot(img(i+1,j+1),9);
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