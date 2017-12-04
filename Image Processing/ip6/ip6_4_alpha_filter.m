%img=imread('gamma-noise.tif');
img=imread('salt-pepper-noise.tif');
[m,n]=size(img);
output=img;

c=zeros(1,9);
f=2;

for i=1:m
    for j=1:n
        m=255;
        if (i>1 & j>1 & i<m & j<n)
            w=1;
            for k=-1:1
                for l=-1:1
                    c(1,w)=img(i+k,j+l);
                    w=w+1;
                end
            end
            c=sort(c);
            m=0;
            for k=1+f/2:9-f/2
                m=m+c(1,k);
            end
            m=m/(9-f);
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