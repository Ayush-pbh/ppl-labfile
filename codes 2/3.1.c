// Date  - 

// Objective - To code seqential logic in C


// 3.1
#include <stdio.h>
void main(){
    int par_height,par_width,par_area;
    printf("[Prallalogram] Please Enter Parallalogram details.");
    printf("[Prallalogram] Please Enter Base parallalogram.");
    scanf("%d", &par_width);
    printf("[Prallalogram] Please Enter Height of parallalogram.");
    scanf("%d", &par_height);
    par_area =  par_height*par_width;
    printf("Area of [Parlalogram] %d",&par_area);

    int trap_height,trap_small_b,trap_large_b;
    printf("[Trapezoid] Please Enter Trapezoid details.");
    printf("[Trapezoid] Please Enter Small Base parallalogram.");
    scanf("%d", &trap_small_b);
    printf("[Trapezoid] Please Enter Large Base parallalogram.");
    scanf("%d", &trap_large_b);
    printf("[Trapezoid] Please Enter Height of parallalogram.");
    scanf("%d", &trap_height);
    float trap_area =  (trap_small_b+trap_large_b)/2*trap_height;
    printf("Area of [Trapezoid] %f",trap_area);
    
    int rho_height,rho_side;
    printf("[Rhombus] Please Enter Rhombus details.");
    printf("[Rhombus] Please Enter Rhombus Height.");
    scanf("%d", &rho_height);
    printf("[Rhombus] Please Enter Rhombus Side.");
    scanf("%d", &rho_side);
    float rho_area =  rho_height*rho_side;
    printf("Area of [Sphere] %f",rho_area);

    int spe_radius;
    printf("[Spehere] Please Enter Sphere details.");
    printf("[Spehere] Please Enter Sphere Radius.");
    scanf("%d", &spe_radius);
    float spe_area =  4*3.14*(spe_radius*spe_radius);
    printf("Area of [Sphere] %f",spe_area);
    int ellipse_radius_maj,  ellipse_radius_minor;
    printf("[Ellipse] Please Enter Ellipse details.");
    printf("[Ellipse] Please Enter Major Radius .");
    scanf("%d", &ellipse_radius_maj);
    printf("[Ellipse] Please Enter Major Radius .");
    scanf("%d", &ellipse_radius_minor);
    float ellipse_area =  3.14*(ellipse_radius_maj*ellipse_radius_minor);
    printf("Area of [Ellipse] %f",ellipse_area);
}
