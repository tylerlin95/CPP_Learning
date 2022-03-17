	.file	"Main.cpp"
	.text
	.section	.rodata
	.type	_ZStL19piecewise_construct, @object
	.size	_ZStL19piecewise_construct, 1
_ZStL19piecewise_construct:
	.zero	1
	.local	_ZStL8__ioinit
	.comm	_ZStL8__ioinit,1,1
	.section	.text._ZN6Entity5PrintEv,"axG",@progbits,_ZN6Entity5PrintEv,comdat
	.align 2
	.weak	_ZN6Entity5PrintEv
	.type	_ZN6Entity5PrintEv, @function
_ZN6Entity5PrintEv:
.LFB1493:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1493:
	.size	_ZN6Entity5PrintEv, .-_ZN6Entity5PrintEv
	.section	.rodata
.LC0:
	.string	"Entity"
	.section	.text._ZN6Entity7GetNameB5cxx11Ev,"axG",@progbits,_ZN6Entity7GetNameB5cxx11Ev,comdat
	.align 2
	.weak	_ZN6Entity7GetNameB5cxx11Ev
	.type	_ZN6Entity7GetNameB5cxx11Ev, @function
_ZN6Entity7GetNameB5cxx11Ev:
.LFB1494:
	.cfi_startproc
	.cfi_personality 0x9b,DW.ref.__gxx_personality_v0
	.cfi_lsda 0x1b,.LLSDA1494
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$40, %rsp
	.cfi_offset 3, -24
	movq	%rdi, -40(%rbp)
	movq	%rsi, -48(%rbp)
	movq	%fs:40, %rax
	movq	%rax, -24(%rbp)
	xorl	%eax, %eax
	leaq	-25(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSaIcEC1Ev@PLT
	leaq	-25(%rbp), %rdx
	movq	-40(%rbp), %rax
	leaq	.LC0(%rip), %rsi
	movq	%rax, %rdi
.LEHB0:
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1EPKcRKS3_@PLT
.LEHE0:
	leaq	-25(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSaIcED1Ev@PLT
	movq	-40(%rbp), %rax
	movq	-24(%rbp), %rcx
	xorq	%fs:40, %rcx
	je	.L5
	jmp	.L7
.L6:
	movq	%rax, %rbx
	leaq	-25(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSaIcED1Ev@PLT
	movq	%rbx, %rax
	movq	%rax, %rdi
.LEHB1:
	call	_Unwind_Resume@PLT
.LEHE1:
.L7:
	call	__stack_chk_fail@PLT
.L5:
	addq	$40, %rsp
	popq	%rbx
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1494:
	.globl	__gxx_personality_v0
	.section	.gcc_except_table._ZN6Entity7GetNameB5cxx11Ev,"aG",@progbits,_ZN6Entity7GetNameB5cxx11Ev,comdat
.LLSDA1494:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE1494-.LLSDACSB1494
.LLSDACSB1494:
	.uleb128 .LEHB0-.LFB1494
	.uleb128 .LEHE0-.LEHB0
	.uleb128 .L6-.LFB1494
	.uleb128 0
	.uleb128 .LEHB1-.LFB1494
	.uleb128 .LEHE1-.LEHB1
	.uleb128 0
	.uleb128 0
.LLSDACSE1494:
	.section	.text._ZN6Entity7GetNameB5cxx11Ev,"axG",@progbits,_ZN6Entity7GetNameB5cxx11Ev,comdat
	.size	_ZN6Entity7GetNameB5cxx11Ev, .-_ZN6Entity7GetNameB5cxx11Ev
	.section	.text._ZN6Entity12GetClassNameB5cxx11Ev,"axG",@progbits,_ZN6Entity12GetClassNameB5cxx11Ev,comdat
	.align 2
	.weak	_ZN6Entity12GetClassNameB5cxx11Ev
	.type	_ZN6Entity12GetClassNameB5cxx11Ev, @function
_ZN6Entity12GetClassNameB5cxx11Ev:
.LFB1495:
	.cfi_startproc
	.cfi_personality 0x9b,DW.ref.__gxx_personality_v0
	.cfi_lsda 0x1b,.LLSDA1495
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$40, %rsp
	.cfi_offset 3, -24
	movq	%rdi, -40(%rbp)
	movq	%rsi, -48(%rbp)
	movq	%fs:40, %rax
	movq	%rax, -24(%rbp)
	xorl	%eax, %eax
	leaq	-25(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSaIcEC1Ev@PLT
	leaq	-25(%rbp), %rdx
	movq	-40(%rbp), %rax
	leaq	.LC0(%rip), %rsi
	movq	%rax, %rdi
.LEHB2:
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1EPKcRKS3_@PLT
.LEHE2:
	leaq	-25(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSaIcED1Ev@PLT
	movq	-40(%rbp), %rax
	movq	-24(%rbp), %rcx
	xorq	%fs:40, %rcx
	je	.L11
	jmp	.L13
.L12:
	movq	%rax, %rbx
	leaq	-25(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSaIcED1Ev@PLT
	movq	%rbx, %rax
	movq	%rax, %rdi
.LEHB3:
	call	_Unwind_Resume@PLT
.LEHE3:
.L13:
	call	__stack_chk_fail@PLT
.L11:
	addq	$40, %rsp
	popq	%rbx
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1495:
	.section	.gcc_except_table._ZN6Entity12GetClassNameB5cxx11Ev,"aG",@progbits,_ZN6Entity12GetClassNameB5cxx11Ev,comdat
.LLSDA1495:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE1495-.LLSDACSB1495
.LLSDACSB1495:
	.uleb128 .LEHB2-.LFB1495
	.uleb128 .LEHE2-.LEHB2
	.uleb128 .L12-.LFB1495
	.uleb128 0
	.uleb128 .LEHB3-.LFB1495
	.uleb128 .LEHE3-.LEHB3
	.uleb128 0
	.uleb128 0
.LLSDACSE1495:
	.section	.text._ZN6Entity12GetClassNameB5cxx11Ev,"axG",@progbits,_ZN6Entity12GetClassNameB5cxx11Ev,comdat
	.size	_ZN6Entity12GetClassNameB5cxx11Ev, .-_ZN6Entity12GetClassNameB5cxx11Ev
	.section	.text._ZN9PrintableC2Ev,"axG",@progbits,_ZN9PrintableC5Ev,comdat
	.align 2
	.weak	_ZN9PrintableC2Ev
	.type	_ZN9PrintableC2Ev, @function
_ZN9PrintableC2Ev:
.LFB1498:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	leaq	16+_ZTV9Printable(%rip), %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, (%rax)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1498:
	.size	_ZN9PrintableC2Ev, .-_ZN9PrintableC2Ev
	.weak	_ZN9PrintableC1Ev
	.set	_ZN9PrintableC1Ev,_ZN9PrintableC2Ev
	.section	.text._ZN6EntityC2Ev,"axG",@progbits,_ZN6EntityC5Ev,comdat
	.align 2
	.weak	_ZN6EntityC2Ev
	.type	_ZN6EntityC2Ev, @function
_ZN6EntityC2Ev:
.LFB1500:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN9PrintableC2Ev
	leaq	16+_ZTV6Entity(%rip), %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, (%rax)
	movq	-8(%rbp), %rax
	addq	$8, %rax
	movq	%rax, %rdi
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1Ev@PLT
	movq	-8(%rbp), %rax
	movl	$0, 40(%rax)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN6Entity5PrintEv
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1500:
	.size	_ZN6EntityC2Ev, .-_ZN6EntityC2Ev
	.weak	_ZN6EntityC1Ev
	.set	_ZN6EntityC1Ev,_ZN6EntityC2Ev
	.section	.text._ZNK6Entity7GetNameB5cxx11Ev,"axG",@progbits,_ZNK6Entity7GetNameB5cxx11Ev,comdat
	.align 2
	.weak	_ZNK6Entity7GetNameB5cxx11Ev
	.type	_ZNK6Entity7GetNameB5cxx11Ev, @function
_ZNK6Entity7GetNameB5cxx11Ev:
.LFB1502:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movl	40(%rax), %eax
	leal	1(%rax), %edx
	movq	-8(%rbp), %rax
	movl	%edx, 40(%rax)
	movq	-8(%rbp), %rax
	addq	$8, %rax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1502:
	.size	_ZNK6Entity7GetNameB5cxx11Ev, .-_ZNK6Entity7GetNameB5cxx11Ev
	.section	.text._ZN6EntityD2Ev,"axG",@progbits,_ZN6EntityD5Ev,comdat
	.align 2
	.weak	_ZN6EntityD2Ev
	.type	_ZN6EntityD2Ev, @function
_ZN6EntityD2Ev:
.LFB1505:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	leaq	16+_ZTV6Entity(%rip), %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, (%rax)
	movq	-8(%rbp), %rax
	addq	$8, %rax
	movq	%rax, %rdi
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1505:
	.size	_ZN6EntityD2Ev, .-_ZN6EntityD2Ev
	.weak	_ZN6EntityD1Ev
	.set	_ZN6EntityD1Ev,_ZN6EntityD2Ev
	.text
	.globl	_Z9PrintNameP6Entity
	.type	_Z9PrintNameP6Entity, @function
_Z9PrintNameP6Entity:
.LFB1515:
	.cfi_startproc
	.cfi_personality 0x9b,DW.ref.__gxx_personality_v0
	.cfi_lsda 0x1b,.LLSDA1515
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$72, %rsp
	.cfi_offset 3, -24
	movq	%rdi, -72(%rbp)
	movq	%fs:40, %rax
	movq	%rax, -24(%rbp)
	xorl	%eax, %eax
	movq	-72(%rbp), %rax
	movq	(%rax), %rax
	addq	$8, %rax
	movq	(%rax), %rax
	leaq	-64(%rbp), %rdx
	movq	-72(%rbp), %rcx
	movq	%rcx, %rsi
	movq	%rdx, %rdi
.LEHB4:
	call	*%rax
.LEHE4:
	leaq	-64(%rbp), %rax
	movq	%rax, %rsi
	leaq	_ZSt4cout(%rip), %rdi
.LEHB5:
	call	_ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKNSt7__cxx1112basic_stringIS4_S5_T1_EE@PLT
	movq	%rax, %rdx
	movq	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL(%rip), %rax
	movq	%rax, %rsi
	movq	%rdx, %rdi
	call	_ZNSolsEPFRSoS_E@PLT
.LEHE5:
	leaq	-64(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev@PLT
	nop
	movq	-24(%rbp), %rax
	xorq	%fs:40, %rax
	je	.L21
	jmp	.L23
.L22:
	movq	%rax, %rbx
	leaq	-64(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev@PLT
	movq	%rbx, %rax
	movq	%rax, %rdi
.LEHB6:
	call	_Unwind_Resume@PLT
.LEHE6:
.L23:
	call	__stack_chk_fail@PLT
.L21:
	addq	$72, %rsp
	popq	%rbx
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1515:
	.section	.gcc_except_table,"a",@progbits
.LLSDA1515:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE1515-.LLSDACSB1515
.LLSDACSB1515:
	.uleb128 .LEHB4-.LFB1515
	.uleb128 .LEHE4-.LEHB4
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB5-.LFB1515
	.uleb128 .LEHE5-.LEHB5
	.uleb128 .L22-.LFB1515
	.uleb128 0
	.uleb128 .LEHB6-.LFB1515
	.uleb128 .LEHE6-.LEHB6
	.uleb128 0
	.uleb128 0
.LLSDACSE1515:
	.text
	.size	_Z9PrintNameP6Entity, .-_Z9PrintNameP6Entity
	.globl	_Z5PrintP9Printable
	.type	_Z5PrintP9Printable, @function
_Z5PrintP9Printable:
.LFB1516:
	.cfi_startproc
	.cfi_personality 0x9b,DW.ref.__gxx_personality_v0
	.cfi_lsda 0x1b,.LLSDA1516
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$72, %rsp
	.cfi_offset 3, -24
	movq	%rdi, -72(%rbp)
	movq	%fs:40, %rax
	movq	%rax, -24(%rbp)
	xorl	%eax, %eax
	movq	-72(%rbp), %rax
	movq	(%rax), %rax
	movq	(%rax), %rax
	leaq	-64(%rbp), %rdx
	movq	-72(%rbp), %rcx
	movq	%rcx, %rsi
	movq	%rdx, %rdi
.LEHB7:
	call	*%rax
.LEHE7:
	leaq	-64(%rbp), %rax
	movq	%rax, %rsi
	leaq	_ZSt4cout(%rip), %rdi
.LEHB8:
	call	_ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKNSt7__cxx1112basic_stringIS4_S5_T1_EE@PLT
	movq	%rax, %rdx
	movq	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL(%rip), %rax
	movq	%rax, %rsi
	movq	%rdx, %rdi
	call	_ZNSolsEPFRSoS_E@PLT
.LEHE8:
	leaq	-64(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev@PLT
	nop
	movq	-24(%rbp), %rax
	xorq	%fs:40, %rax
	je	.L26
	jmp	.L28
.L27:
	movq	%rax, %rbx
	leaq	-64(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev@PLT
	movq	%rbx, %rax
	movq	%rax, %rdi
.LEHB9:
	call	_Unwind_Resume@PLT
.LEHE9:
.L28:
	call	__stack_chk_fail@PLT
.L26:
	addq	$72, %rsp
	popq	%rbx
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1516:
	.section	.gcc_except_table
.LLSDA1516:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE1516-.LLSDACSB1516
.LLSDACSB1516:
	.uleb128 .LEHB7-.LFB1516
	.uleb128 .LEHE7-.LEHB7
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB8-.LFB1516
	.uleb128 .LEHE8-.LEHB8
	.uleb128 .L27-.LFB1516
	.uleb128 0
	.uleb128 .LEHB9-.LFB1516
	.uleb128 .LEHE9-.LEHB9
	.uleb128 0
	.uleb128 0
.LLSDACSE1516:
	.text
	.size	_Z5PrintP9Printable, .-_Z5PrintP9Printable
	.globl	_Z11PrintStringRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
	.type	_Z11PrintStringRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE, @function
_Z11PrintStringRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE:
.LFB1517:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rsi
	leaq	_ZSt4cout(%rip), %rdi
	call	_ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKNSt7__cxx1112basic_stringIS4_S5_T1_EE@PLT
	movq	%rax, %rdx
	movq	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL(%rip), %rax
	movq	%rax, %rsi
	movq	%rdx, %rdi
	call	_ZNSolsEPFRSoS_E@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1517:
	.size	_Z11PrintStringRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE, .-_Z11PrintStringRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
	.section	.rodata
.LC1:
	.string	"Hello World!"
	.text
	.globl	main
	.type	main, @function
main:
.LFB1518:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$72, %rsp
	.cfi_offset 3, -24
	movq	%fs:40, %rax
	movq	%rax, -24(%rbp)
	xorl	%eax, %eax
	leaq	.LC1(%rip), %rsi
	leaq	_ZSt4cout(%rip), %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	%rax, %rdx
	movq	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL(%rip), %rax
	movq	%rax, %rsi
	movq	%rdx, %rdi
	call	_ZNSolsEPFRSoS_E@PLT
	leaq	-80(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN6EntityC1Ev
	leaq	-80(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNK6Entity7GetNameB5cxx11Ev
	movl	$0, %ebx
	leaq	-80(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN6EntityD1Ev
	movl	%ebx, %eax
	movq	-24(%rbp), %rcx
	xorq	%fs:40, %rcx
	je	.L32
	call	__stack_chk_fail@PLT
.L32:
	addq	$72, %rsp
	popq	%rbx
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1518:
	.size	main, .-main
	.weak	_ZTV6Entity
	.section	.data.rel.ro.local._ZTV6Entity,"awG",@progbits,_ZTV6Entity,comdat
	.align 8
	.type	_ZTV6Entity, @object
	.size	_ZTV6Entity, 32
_ZTV6Entity:
	.quad	0
	.quad	_ZTI6Entity
	.quad	_ZN6Entity12GetClassNameB5cxx11Ev
	.quad	_ZN6Entity7GetNameB5cxx11Ev
	.weak	_ZTV9Printable
	.section	.data.rel.ro._ZTV9Printable,"awG",@progbits,_ZTV9Printable,comdat
	.align 8
	.type	_ZTV9Printable, @object
	.size	_ZTV9Printable, 24
_ZTV9Printable:
	.quad	0
	.quad	_ZTI9Printable
	.quad	__cxa_pure_virtual
	.weak	_ZTI6Entity
	.section	.data.rel.ro._ZTI6Entity,"awG",@progbits,_ZTI6Entity,comdat
	.align 8
	.type	_ZTI6Entity, @object
	.size	_ZTI6Entity, 24
_ZTI6Entity:
	.quad	_ZTVN10__cxxabiv120__si_class_type_infoE+16
	.quad	_ZTS6Entity
	.quad	_ZTI9Printable
	.weak	_ZTS6Entity
	.section	.rodata._ZTS6Entity,"aG",@progbits,_ZTS6Entity,comdat
	.align 8
	.type	_ZTS6Entity, @object
	.size	_ZTS6Entity, 8
_ZTS6Entity:
	.string	"6Entity"
	.weak	_ZTI9Printable
	.section	.data.rel.ro._ZTI9Printable,"awG",@progbits,_ZTI9Printable,comdat
	.align 8
	.type	_ZTI9Printable, @object
	.size	_ZTI9Printable, 16
_ZTI9Printable:
	.quad	_ZTVN10__cxxabiv117__class_type_infoE+16
	.quad	_ZTS9Printable
	.weak	_ZTS9Printable
	.section	.rodata._ZTS9Printable,"aG",@progbits,_ZTS9Printable,comdat
	.align 8
	.type	_ZTS9Printable, @object
	.size	_ZTS9Printable, 11
_ZTS9Printable:
	.string	"9Printable"
	.text
	.type	_Z41__static_initialization_and_destruction_0ii, @function
_Z41__static_initialization_and_destruction_0ii:
.LFB2014:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	%edi, -4(%rbp)
	movl	%esi, -8(%rbp)
	cmpl	$1, -4(%rbp)
	jne	.L35
	cmpl	$65535, -8(%rbp)
	jne	.L35
	leaq	_ZStL8__ioinit(%rip), %rdi
	call	_ZNSt8ios_base4InitC1Ev@PLT
	leaq	__dso_handle(%rip), %rdx
	leaq	_ZStL8__ioinit(%rip), %rsi
	movq	_ZNSt8ios_base4InitD1Ev@GOTPCREL(%rip), %rax
	movq	%rax, %rdi
	call	__cxa_atexit@PLT
.L35:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2014:
	.size	_Z41__static_initialization_and_destruction_0ii, .-_Z41__static_initialization_and_destruction_0ii
	.type	_GLOBAL__sub_I__Z9PrintNameP6Entity, @function
_GLOBAL__sub_I__Z9PrintNameP6Entity:
.LFB2015:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$65535, %esi
	movl	$1, %edi
	call	_Z41__static_initialization_and_destruction_0ii
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2015:
	.size	_GLOBAL__sub_I__Z9PrintNameP6Entity, .-_GLOBAL__sub_I__Z9PrintNameP6Entity
	.section	.init_array,"aw"
	.align 8
	.quad	_GLOBAL__sub_I__Z9PrintNameP6Entity
	.hidden	DW.ref.__gxx_personality_v0
	.weak	DW.ref.__gxx_personality_v0
	.section	.data.rel.local.DW.ref.__gxx_personality_v0,"awG",@progbits,DW.ref.__gxx_personality_v0,comdat
	.align 8
	.type	DW.ref.__gxx_personality_v0, @object
	.size	DW.ref.__gxx_personality_v0, 8
DW.ref.__gxx_personality_v0:
	.quad	__gxx_personality_v0
	.hidden	__dso_handle
	.ident	"GCC: (Ubuntu 7.5.0-3ubuntu1~18.04) 7.5.0"
	.section	.note.GNU-stack,"",@progbits
