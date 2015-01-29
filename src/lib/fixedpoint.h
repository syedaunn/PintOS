//x and y are fixed-point numbers, n is an integer, fixed-point
//numbers are in signed p.q format where p + q = 31, and f is 1 << q

#define f 16384			//1 << 14 where q = 14 (2^q = 2^14)

//Integer to fixed point conversion
#define INT_TO_FIXEDPOINT(n) (n * f)

//Fixed point to Integer conversion
#define FIXEDPOINT_TO_INT_ZERO(x) (x / f)							//Rounding towards zero
#define FIXEDPOINT_TO_INT_NEAREST(x) (x >= 0 ? ((x + f/2) / f) : ((x - f/2) / f))		//Rounding to the nearest

//Fixed Point Addition
#define FIXEDPOINT_ADD(x, y) (x + y)

//Fixed Point Subtraction
#define FIXEDPOINT_SUBTRACT(x, y) (x - y)

//Fixed point and integer Addition
#define FIXEDPOINT_INT_ADD(x, n) (x + n * f)

//Int from Fixed point Subtraction
#define FIXEDPOINT_INT_SUBTRACT(x, n) (x - n * f)

//Fixed point multiplication
#define FIXEDPOINT_MULTIPLY(x, y) (((int64_t) x) * y / f)

//Fixed point with int mulrtiplication
#define FIXEDPOINT_INT_MULTIPLY(x, n) (x * n)

//Fixed point division
#define FIXEDPOINT_DIVIDE(x, y) (((int64_t) x) * f / y

//Fixed point with int division
#define FIXEDPOINT_INT_DIVIDE(x, n) (x / n)
