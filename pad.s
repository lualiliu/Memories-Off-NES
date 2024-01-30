
.segment "ZEROPAGE"

PAD_STATE: 		.res 2		;one byte per controller
PAD_STATEP: 		.res 2
PAD_STATET: 		.res 2

.importzp		TEMP
PAD_BUF			=TEMP+1

.include "nes.inc"
.segment "CODE"
.export _pad_poll3

;unsigned char __fastcall__ pad_poll3(unsigned char pad);

_pad_poll3:

	tay
	ldx #0

@padPollPort3:

	lda #1
	sta APU_PAD1
	lda #0
	sta APU_PAD1
	lda #8
	sta <TEMP

@padPollLoop3:

	lda APU_PAD1,y
	lsr a
        lsr a
	ror <PAD_BUF,x
        
	dec <TEMP
	bne @padPollLoop3

	inx
	cpx #3
	bne @padPollPort3

	lda <PAD_BUF
	cmp <PAD_BUF+1
	beq @done
	cmp <PAD_BUF+2
	beq @done
	lda <PAD_BUF+1

@done:

	sta <PAD_STATE,y
	tax
	eor <PAD_STATEP,y
	and <PAD_STATE ,y
	sta <PAD_STATET,y
	txa
	sta <PAD_STATEP,y

	ldx #$00
	rts

