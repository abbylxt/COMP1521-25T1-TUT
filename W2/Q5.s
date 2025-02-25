# Squares a number, unless its square is too big for a 32-bit integer.
# If it is too big, prints an error message instead.

# CONSTANT
SQUARE_MAX = 46340

main:
	# $t0 = x, $t1 = y

	li	$v0, 4			# Note this is the same as our previous program
	la	$a0, prompt_str	
	syscall

	li	$v0, 5
	syscall
	move	$t0, $v0

if_condition:
	ble	$t0, SQUARE_MAX, if_else

	li	$v0, 4			# Note this is the same as our previous program
	la	$a0, too_big_str
	syscall

	b	if_end

if_else:
	mul	$t1, $t0, $t0

	li	$v0, 1
	move	$a0, $t1
	syscall

	li	$v0, 11
	li	$a0, '\n'
	syscall

if_end:


epilogue:
	li	$v0, 0
	jr	$ra

.data

prompt_str:
        .asciiz "Enter a number: "

too_big_str:
	.ascii "square too big for 32 bits\n\0"