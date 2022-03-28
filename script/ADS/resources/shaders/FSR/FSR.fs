#version 330 core
out vec4 FragColor;

uniform sampler2D input_image;
uniform sampler2D upSampling_image;
uniform int input_image_width;
uniform int input_image_height;
uniform vec4 u_con0;
uniform vec4 u_con1;
uniform vec4 u_con2;
uniform vec4 u_con3;


void main()
{
	// linearly interpolate between both textures (80% container, 20% awesomeface)
	FragColor = mix(texture(texture1, TexCoord), texture(texture2, TexCoord), 0.2);
}