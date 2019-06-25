.data
strOp:	.asciiz "Opciones:\n1.Celsius a fahrenheit\n2.Fahrenheit a celsius\n3.Celsius a kelvin\n4.Kelvin a celsius\n5.Kelvin a fahrenheit\n6.Fahrenheit a kelvin\n"
strValor:.asciiz "Ingrese valor: "
strError:.asciiz "\nOpcion invalida!: reinicie el programa"
strCF: 	.asciiz "celsiusToFahrenheit: "
strFC: 	.asciiz "fahrenheitToCelsius: "
strCK: 	.asciiz "celsiusToKelvin: "
strKC: 	.asciiz "kelvinToCelsius: "
strKF: 	.asciiz "kelvinToFahrenheit: "
strFK: 	.asciiz "fahrenheitToKelvin: "
saltoLinea: 
	.ascii "\n"
.text			
				
main: 	li $v0,4	
	#select op
	la $a0,strOp
	syscall 
	li $v0,5
	syscall
	addi $s3,$v0,0
	addi $t0, $zero,1
	addi $t1, $zero,2
	addi $t2, $zero,3
	addi $t3, $zero,4
	addi $t4, $zero,5
	addi $t5, $zero,6
	beq $s3,$t0,cf
	beq $s3,$t1,fc
	beq $s3,$t2,ck
	beq $s3,$t3,kc
	beq $s3,$t4,kf
	beq $s3,$t5,fk
	j err
	
	#celsiusToFahrenheit................................................
	cf:
	
	li $v0,4
	#la $a0,strValor	imprime "Ingrese valor: "
	syscall
	
	li $v0,5	#pide valor a convertir
	syscall		
	addi $s0,$v0,0	
		
	jal celsiusToFahrenheit	
	
	li $v0,4
	la $a0,strCF #imprime "kelvinToCelcius"
	syscall 
	li $v0,1
	addi $a0,$v1,0 #imprime resultado de operacion
	syscall 
	
	li $v0,4
	
	la $a0,saltoLinea #imprime "salto de linea"
	syscall 
	
	j fin
	#///////////////////////////////////////////////////////////////////
	#fahrenheitToCelsius................................................
	fc:
	li $v0,4
	la $a0,strValor	#imprime "Ingrese valor: "
	syscall
	
	li $v0,5	#pide valor a convertir
	syscall
	addi $s0,$v0,0
	
	jal fahrenheitToCelsius
	
	li $v0,4
	
	la $a0,strFC #imprime "fahrenheitToCelsius"
	syscall 
	li $v0,1
	addi $a0,$v1,0 #imprime resultado de operacion
	syscall 
	
	li $v0,4
	
	la $a0,saltoLinea #imprime "salto de linea"
	syscall 
	
	j fin
	#///////////////////////////////////////////////////////////////////
	#celsiusToKelvin................................................
	ck:
	li $v0,4
	la $a0,strValor	#imprime "Ingrese valor: "
	syscall
	
	li $v0,5	#pide valor a convertir
	syscall
	addi $s0,$v0,0
	jal celsiusToKelvin
	
	li $v0,4
	
	la $a0,strCK #imprime "celsiusToKelvin"
	syscall 
	li $v0,1
	addi $a0,$v1,0 #imprime resultado de operacion
	syscall 
	
	li $v0,4
	
	la $a0,saltoLinea #imprime "salto de linea"
	syscall 
	
	j fin
	#///////////////////////////////////////////////////////////////////
	#kelvinToCelsius................................................
	kc:
	li $v0,4
	la $a0,strValor	#imprime "Ingrese valor: "
	syscall
	
	li $v0,5	#pide valor a convertir
	syscall
	addi $s0,$v0,0
	jal kelvinToCelsius
	
	li $v0,4
	
	la $a0,strKC #imprime "kelvinToCelsius"
	syscall 
	li $v0,1
	addi $a0,$v1,0 #imprime resultado de operacion
	syscall 
	
	li $v0,4
	
	la $a0,saltoLinea #imprime "salto de linea"
	syscall 
	
	j fin
	#///////////////////////////////////////////////////////////////////...................................................................
	#kelvinToFahrenheit................................................
	kf:
	li $v0,4
	la $a0,strValor	#imprime "Ingrese valor: "
	syscall
	
	li $v0,5	#pide valor a convertir
	syscall
	addi $s0,$v0,0
	jal kelvinToFahrenheit
	
	li $v0,4
	
	la $a0,strKF #imprime "kelvinToFahrenheit"
	syscall 
	li $v0,1
	addi $a0,$v1,0 #imprime resultado de operacion
	syscall 
	
	li $v0,4
	
	la $a0,saltoLinea  #imprime "salto de linea"
	syscall
	
	j fin
	#///////////////////////////////////////////////////////////////////
	#fahrenheitToKelvin.........................................................
	fk:
	li $v0,4
	la $a0,strValor	#imprime "Ingrese valor: "
	syscall
	
	li $v0,5	#pide valor a convertir
	syscall
	addi $s0,$v0,0
	jal fahrenheitToKelvin
	
	li $v0,4
	
	la $a0,strFK #imprime "fahrenheitToKelvin"
	syscall 
	li $v0,1
	addi $a0,$v1,0 #imprime resultado de operacion
	syscall 
	
	j fin
	#///////////////////////////////////////////////////////////////////
	err: 
	li $v0,4
	la $a0,strError
	syscall
	
	
	fin:
	li $v0,10
	syscall
	
	
celsiusToFahrenheit:
	addi $sp, $sp, -4
	sw   $s0, 0($sp)	
	mul  $s0, $s0, 9	#$s0=s0*9
	div  $s0, $s0, 5	#$s0=s0/5
	addi $s0, $s0, 32	
	add  $v1, $zero, $s0
	lw   $s0, 0($sp)
	addi $sp, $sp, 4
	jr $ra

fahrenheitToCelsius:
	addi $sp, $sp, -4
	sw   $s0, 0($sp)
	addi $s0, $s0, -32	#$s0=(valor-273)
	mul  $s0, $s0, 5	#$s0=s0*9
	div  $s0, $s0, 9	#$s0=s0/5	
	add  $v1, $zero, $s0
	lw   $s0, 0($sp)
	addi $sp, $sp, 4
	jr $ra
	
celsiusToKelvin:
	addi $sp, $sp, -4
	sw   $s0, 0($sp)
	addi $s0, $s0, 273
	add  $v1, $zero, $s0
	lw   $s0, 0($sp)
	addi $sp, $sp, 4
	jr $ra
	
kelvinToCelsius:
	addi $sp, $sp, -4
	sw   $s0, 0($sp)
	addi $s0, $s0, -273
	add  $v1, $zero, $s0
	lw   $s0, 0($sp)
	addi $sp, $sp, 4
	jr $ra
		
kelvinToFahrenheit:
	addi $sp, $sp, -4
	sw   $s0, 0($sp)
	addi $s0, $s0, -273	#$s0=(valor-273)
	mul  $s0, $s0, 9	#$s0=s0*9
	div  $s0, $s0, 5	#$s0=s0/5
	addi $s0, $s0, 32
	add  $v1, $zero, $s0
	lw   $s0, 0($sp)
	addi $sp, $sp, 4
	jr $ra
	
fahrenheitToKelvin:
	addi $sp, $sp, -4
	sw   $s0, 0($sp)
	addi $s0, $s0, -32	#$s0=(valor-273)9
	mul  $s0, $s0, 5	#$s0=s0*9
	div  $s0, $s0, 9	#$s0=s0/5
	addi $s0, $s0, 273
	add  $v1, $zero, $s0
	lw   $s0, 0($sp)
	addi $sp, $sp, 4
	jr $ra
	
