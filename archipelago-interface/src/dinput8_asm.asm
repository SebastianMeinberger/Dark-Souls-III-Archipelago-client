.code

extern mProcs:QWORD

DirectInput8Create proc

	jmp mProcs[0*8]

DirectInput8Create endp


END
