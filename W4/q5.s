main:
main_prologue:
	begin				# open stack frame
	push	$ra			# push $ra onto stack

main_body:
	# sum4(11, 13, 17, 19);
	li	$a0, 11			# loading arguments into $a registers to prep for function call
	li	$a1, 13
	li	$a2, 17
	li	$a3, 19

	jal	sum4			# jump to function and link current location

	move	$a0, $v0		# printf("%d", sum4(11, 13, 17, 19));
	li	$v0, 1
	syscall

	li	$a0, '\n'		# printf("\n");
	li	$v0, 11
	syscall

main_epilogue:

	pop	$ra			# pop top value from stack and place it into $ra
	li	$v0, 0			# return 0;
	jr	$ra


sum4:
	# li	$a0, a
	# li	$a1, b
	# li	$a2, c
	# li	$a3, d
sum4_prologue:
	begin 	
	push	$ra
	push	$s0
	push	$s1
	push	$s2
	push	$s3
sum4_body:
	move	$s2, $a2
	move	$s3, $a3
	
	# already $a0 = a, $a1 = b
	jal	sum2
	move	$s0, $v0

	move	$a0, $s2
	move	$a1, $s3
	jal	sum2

	move	$s1, $v0
	
	move	$a0, $s0
	move	$a1, $s1
	jal	sum2

sum4_epilogue:
	pop	$s3
	pop	$s2
	pop	$s1
	pop	$s0
	pop	$ra
	end

	jr	$ra

sum2:
sum2_prologue:

sum2_body:
	add	$v0, $a0, $a1

sum2_epilogue:
	jr	$ra

