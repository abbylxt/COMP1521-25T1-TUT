
main:
	li	$v0, 4
	la	$a0, prompt_str
	syscall

	li	$v0, 5
	syscall
	move	$t0, $v0



epilogue:
	li	$v0, 0
	jr	$ra

.data

prompt_str:
        .asciiz "Enter a number: "

too_big_or_small_str:
	.asciiz "small/big\n"

medium:
	.asciiz "medium\n"