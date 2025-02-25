# Prints the square of a number

# First look at the variables that are used in your code
# are there any strings??
# each line of assembly can only be one instruction
.text

main:
	# define the registers you are using at the start of each section
	# $t0 = x
	# $t1 = y

	li	$v0, 4
	la	$a0, prompt_str
	syscall

	li	$v0, 5
	syscall
	move	$t0, $v0

	mul	$t1, $t0, $t0

	li	$v0, 1
	move	$a0, $t1
	syscall

	li	$v0, 11
	li	$a0, '\n'
	syscall

epilogue:
	li	$v0, 0
	jr	$ra

.data

prompt_str:
	.asciiz	"Enter a number: "

# prompt_str:
# 	.ascii "Enter a number: \0"