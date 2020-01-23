
image_file = 'ball.png';

img = imread(image_file);

R = img(:,:,1);
G = img(:,:,2);
B = img(:,:,3);

Blank = R*0;