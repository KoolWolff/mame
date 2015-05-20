// license:BSD-3-Clause
// copyright-holders:hap

// MELPS 4 opcode handlers



// Register-to-register transfers

void melps4_cpu_device::op_tab()
{
	// TAB: transfer B to A
	op_illegal();
}

void melps4_cpu_device::op_tba()
{
	// TBA: transfer A to B
	op_illegal();
}

void melps4_cpu_device::op_tay()
{
	// TAY: transfer Y to A
	op_illegal();
}

void melps4_cpu_device::op_tya()
{
	// TYA: transfer A to Y
	op_illegal();
}

void melps4_cpu_device::op_teab()
{
	// TEAB: transfer A and B to E
	op_illegal();
}

void melps4_cpu_device::op_tepa()
{
	// TEPA: decode A by PLA and transfer to E
	op_illegal();
}

void melps4_cpu_device::op_txa()
{
	// TXA: transfer bits 0,1 of A to X, inverted bit 2 to Z, inverted bit 3 to carry
	op_illegal();
}

void melps4_cpu_device::op_tax()
{
	// TAX: transfer X to bits 0,1 of A, inverted Z to bit 2, inverted carry to bit 3
	op_illegal();
}


// RAM addresses

void melps4_cpu_device::op_lxy()
{
	// LXY x,y: load immediate into X,Y, skip any next LXY
	op_illegal();
}

void melps4_cpu_device::op_lz()
{
	// LZ z: load immediate into Z
	op_illegal();
}

void melps4_cpu_device::op_iny()
{
	// INY: increment Y, skip next on overflow
	op_illegal();
}

void melps4_cpu_device::op_dey()
{
	// DEY: decrement Y, skip next on overflow
	op_illegal();
}

void melps4_cpu_device::op_lcps()
{
	// LCPS i: choose active DP,CY or DP',CY'
	op_illegal();
}

void melps4_cpu_device::op_sadr()
{
	// SADR j: ..
	op_illegal();
}


// RAM-accumulator transfers

void melps4_cpu_device::op_tam()
{
	// TAM j: transfer RAM to A, xor X with j
	op_illegal();
}

void melps4_cpu_device::op_xam()
{
	// XAM j: exchange RAM with A, xor X with j
	op_illegal();
}

void melps4_cpu_device::op_xamd()
{
	// XAMD j: XAM J, DEY
	op_illegal();
}

void melps4_cpu_device::op_xami()
{
	// XAMI j: XAM J, increment Y, skip next on Y=mask(default 0)
	op_illegal();
}


// Arithmetic Operations

void melps4_cpu_device::op_la()
{
	// LA n: load immediate into A, skip any next LA
	op_illegal();
}

void melps4_cpu_device::op_am()
{
	// AM: add RAM to A
	op_illegal();
}

void melps4_cpu_device::op_amc()
{
	// AMC: add RAM+CY to A and CY
	op_illegal();
}

void melps4_cpu_device::op_amcs()
{
	// AMCS: AMC, skip next on carry
	op_illegal();
}

void melps4_cpu_device::op_a()
{
	// A n: add immediate to A, skip next on no carry (except when n=6)
	op_illegal();
}

void melps4_cpu_device::op_sc()
{
	// SC: set carry
	op_illegal();
}

void melps4_cpu_device::op_rc()
{
	// RC: reset carry
	op_illegal();
}

void melps4_cpu_device::op_szc()
{
	// SZC: skip next on no carry
	op_illegal();
}

void melps4_cpu_device::op_cma()
{
	// CMA: complement A
	op_illegal();
}


// Bit operations

void melps4_cpu_device::op_sb()
{
	// SB j: set RAM bit
	op_illegal();
}

void melps4_cpu_device::op_rb()
{
	// RB j: reset RAM bit
	op_illegal();
}

void melps4_cpu_device::op_szb()
{
	// SZB j: skip next if RAM bit is reset
	op_illegal();
}


// Compares

void melps4_cpu_device::op_seam()
{
	// SEAM: skip next if A equals RAM
	op_illegal();
}

void melps4_cpu_device::op_sey()
{
	// SEY y: skip next if Y equals immediate
	op_illegal();
}


// A/D converter operations

void melps4_cpu_device::op_tla()
{
	// TLA: transfer A to L
	op_illegal();
}

void melps4_cpu_device::op_tha()
{
	// THA: transfer A to H
	op_illegal();
}

void melps4_cpu_device::op_taj()
{
	// TAJ: transfer J to A
	op_illegal();
}

void melps4_cpu_device::op_xal()
{
	// XAL: exchange A with L
	op_illegal();
}

void melps4_cpu_device::op_xah()
{
	// XAH: exchange A with H
	op_illegal();
}

void melps4_cpu_device::op_lc7()
{
	// LC7: load 7 into C
	op_illegal();
}

void melps4_cpu_device::op_dec()
{
	// DEC: decrement C, skip next on overflow
	op_illegal();
}

void melps4_cpu_device::op_shl()
{
	// SHL: set bit in L or H designated by C
	op_illegal();
}

void melps4_cpu_device::op_rhl()
{
	// RHL: reset bit in L or H designated by C
	op_illegal();
}

void melps4_cpu_device::op_cpa()
{
	// CPA: ..
	op_illegal();
}

void melps4_cpu_device::op_cpas()
{
	// CPAS: ..
	op_illegal();
}

void melps4_cpu_device::op_cpae()
{
	// CPAE: ..
	op_illegal();
}

void melps4_cpu_device::op_szj()
{
	// SZJ: ..
	op_illegal();
}


// Timer instruction

void melps4_cpu_device::op_t1ab()
{
	// T1AB: transfer A and B to timer 1
	op_illegal();
}

void melps4_cpu_device::op_trab()
{
	// TRAB: transfer A and B to timer 2 reload
	op_illegal();
}

void melps4_cpu_device::op_t2ab()
{
	// T2AB: transfer A and B to timer 2 and timer 2 reload
	op_illegal();
}

void melps4_cpu_device::op_tab1()
{
	// TAB1: transfer timer 1 to A and B
	op_illegal();
}

void melps4_cpu_device::op_tabr()
{
	// TABR: transfer timer 2 reload to A and B
	op_illegal();
}

void melps4_cpu_device::op_tab2()
{
	// TAB2: transfer timer 2 to A and B
	op_illegal();
}

void melps4_cpu_device::op_tva()
{
	// TVA: transfer A to timer control V
	op_illegal();
}

void melps4_cpu_device::op_twa()
{
	// TWA: transfer A to timer control W
	op_illegal();
}

void melps4_cpu_device::op_snz1()
{
	// SNZ1: skip next on flag 1F
	op_illegal();
}

void melps4_cpu_device::op_snz2()
{
	// SNZ2: skip next on flag 2F
	op_illegal();
}


// Jumps

void melps4_cpu_device::op_ba()
{
	// BA: x
	op_illegal();
}

void melps4_cpu_device::op_sp()
{
	// SP: set page
	op_illegal();
}

void melps4_cpu_device::op_b()
{
	// B xy: branch in current page
	op_illegal();
}

void melps4_cpu_device::op_bm()
{
	// BM xy call subroutine on page 14
	op_illegal();
}


// Program returns

void melps4_cpu_device::op_rt()
{
	// RT: return from subroutine
	op_illegal();
}

void melps4_cpu_device::op_rts()
{
	// RTS: RT, skip next
	op_illegal();
}

void melps4_cpu_device::op_rti()
{
	// RTI: return from interrupt routine
	op_illegal();
}


// Input/Output

void melps4_cpu_device::op_cld()
{
	// CLD: clear port D
	op_illegal();
}

void melps4_cpu_device::op_cls()
{
	// CLS: clear port S
	op_illegal();
}

void melps4_cpu_device::op_clds()
{
	// CLDS: CLD, CLS
	op_illegal();
}

void melps4_cpu_device::op_sd()
{
	// SD: set port D bit designated by Y
	op_illegal();
}

void melps4_cpu_device::op_rd()
{
	// RD: reset port D bit designated by Y
	op_illegal();
}

void melps4_cpu_device::op_szd()
{
	// SZD: skip next if port D bit designated by Y is 0
	op_illegal();
}

void melps4_cpu_device::op_osab()
{
	// OSAB: output A and B to port S
	op_illegal();
}

void melps4_cpu_device::op_ospa()
{
	// OSPA: decode A by PLA and output to port S
	op_illegal();
}

void melps4_cpu_device::op_ose()
{
	// OSE: output E to port S
	op_illegal();
}

void melps4_cpu_device::op_ias()
{
	// IAS i: transfer port S(hi/lo) to A
	op_illegal();
}

void melps4_cpu_device::op_ofa()
{
	// OFA: output A to port F
	op_illegal();
}

void melps4_cpu_device::op_iaf()
{
	// IAF: input port F to A
	op_illegal();
}

void melps4_cpu_device::op_oga()
{
	// OGA: output A to port G
	op_illegal();
}

void melps4_cpu_device::op_iak()
{
	// IAK: input port K to A
	op_illegal();
}

void melps4_cpu_device::op_szk()
{
	// SZK j: skip next if port K bit is reset
	op_illegal();
}

void melps4_cpu_device::op_su()
{
	// SU/RU: set/reset port U
	op_illegal();
}


// Interrupts

void melps4_cpu_device::op_ei()
{
	// EI: enable interrupt flag
	op_illegal();
}

void melps4_cpu_device::op_di()
{
	// DI: disable interrupt flag
	op_illegal();
}

void melps4_cpu_device::op_inth()
{
	// INTH: set interrupt polarity high
	op_illegal();
}

void melps4_cpu_device::op_intl()
{
	// INTL: set interrupt polarity low
	op_illegal();
}


// Misc

void melps4_cpu_device::op_nop()
{
	// NOP: no operation
}

void melps4_cpu_device::op_illegal()
{
	logerror("%s unknown opcode $%03X at $%04X\n", tag(), m_op, m_prev_pc);
}