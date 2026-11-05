#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0038CD48
// Address: 0x38cd48 - 0x38cfb8
void sub_0038CD48_0x38cd48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038CD48_0x38cd48");
#endif

    switch (ctx->pc) {
        case 0x38cddcu: goto label_38cddc;
        case 0x38ce08u: goto label_38ce08;
        case 0x38ce18u: goto label_38ce18;
        case 0x38cef8u: goto label_38cef8;
        case 0x38cf08u: goto label_38cf08;
        default: break;
    }

    ctx->pc = 0x38cd48u;

    // 0x38cd48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x38cd48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x38cd4c: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x38cd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x38cd50: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x38cd50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x38cd54: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x38cd54u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38cd58: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x38cd58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x38cd5c: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x38cd5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38cd60: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x38cd60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x38cd64: 0x8c820820  lw          $v0, 0x820($a0)
    ctx->pc = 0x38cd64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2080)));
    // 0x38cd68: 0x435018  mult        $t2, $v0, $v1
    ctx->pc = 0x38cd68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x38cd6c: 0x1441021  addu        $v0, $t2, $a0
    ctx->pc = 0x38cd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x38cd70: 0xac4906dc  sw          $t1, 0x6DC($v0)
    ctx->pc = 0x38cd70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1756), GPR_U32(ctx, 9));
    // 0x38cd74: 0xac8901c0  sw          $t1, 0x1C0($a0)
    ctx->pc = 0x38cd74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 448), GPR_U32(ctx, 9));
    // 0x38cd78: 0x8c820160  lw          $v0, 0x160($a0)
    ctx->pc = 0x38cd78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 352)));
    // 0x38cd7c: 0x54480006  bnel        $v0, $t0, . + 4 + (0x6 << 2)
    ctx->pc = 0x38CD7Cu;
    {
        const bool branch_taken_0x38cd7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        if (branch_taken_0x38cd7c) {
            ctx->pc = 0x38CD80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38CD7Cu;
            // 0x38cd80: 0x8c830184  lw          $v1, 0x184($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 388)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38CD98u;
            goto label_38cd98;
        }
    }
    ctx->pc = 0x38CD84u;
    // 0x38cd84: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x38cd84u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x38cd88: 0xaca00014  sw          $zero, 0x14($a1)
    ctx->pc = 0x38cd88u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 0));
    // 0x38cd8c: 0xaca00010  sw          $zero, 0x10($a1)
    ctx->pc = 0x38cd8cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 0));
    // 0x38cd90: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x38cd90u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x38cd94: 0x8c830184  lw          $v1, 0x184($a0)
    ctx->pc = 0x38cd94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 388)));
label_38cd98:
    // 0x38cd98: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x38cd98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x38cd9c: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x38CD9Cu;
    {
        const bool branch_taken_0x38cd9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x38cd9c) {
            ctx->pc = 0x38CDA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38CD9Cu;
            // 0x38cda0: 0xacc90000  sw          $t1, 0x0($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38CDACu;
            goto label_38cdac;
        }
    }
    ctx->pc = 0x38CDA4u;
    // 0x38cda4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x38CDA4u;
    {
        const bool branch_taken_0x38cda4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38CDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CDA4u;
        // 0x38cda8: 0xacc80000  sw          $t0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38cda4) {
            ctx->pc = 0x38CDC0u;
            goto label_38cdc0;
        }
    }
    ctx->pc = 0x38CDACu;
label_38cdac:
    // 0x38cdac: 0x8c820184  lw          $v0, 0x184($a0)
    ctx->pc = 0x38cdacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 388)));
    // 0x38cdb0: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x38cdb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x38cdb4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x38cdb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x38cdb8: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x38cdb8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x38cdbc: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x38cdbcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
label_38cdc0:
    // 0x38cdc0: 0x8c830160  lw          $v1, 0x160($a0)
    ctx->pc = 0x38cdc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 352)));
    // 0x38cdc4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x38cdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38cdc8: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x38CDC8u;
    {
        const bool branch_taken_0x38cdc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x38cdc8) {
            ctx->pc = 0x38CDCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38CDC8u;
            // 0x38cdcc: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38CDE4u;
            goto label_38cde4;
        }
    }
    ctx->pc = 0x38CDD0u;
    // 0x38cdd0: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x38cdd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x38cdd4: 0xc0e28f8  jal         func_38A3E0
    ctx->pc = 0x38CDD4u;
    SET_GPR_U32(ctx, 31, 0x38CDDCu);
    ctx->pc = 0x38CDD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38CDD4u;
    // 0x38cdd8: 0x24a59530  addiu       $a1, $a1, -0x6AD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38A3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A3E0u, 0x38CDD4u, 0x38CDDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38CDDCu;
label_38cddc:
    // 0x38cddc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x38cddcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38cde0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x38cde0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_38cde4:
    // 0x38cde4: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x38cde4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x38cde8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x38cde8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38cdec: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x38cdecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38cdf0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x38cdf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x38cdf4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x38cdf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x38cdf8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x38cdf8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38cdfc: 0x3e00008  jr          $ra
    ctx->pc = 0x38CDFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38CE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CDFCu;
        // 0x38ce00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38CDFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38CE04u;
    // 0x38ce04: 0x0  nop
    ctx->pc = 0x38ce04u;
    // NOP
label_38ce08:
    // 0x38ce08: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x38ce08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x38ce0c: 0x3c0a0039  lui         $t2, 0x39
    ctx->pc = 0x38ce0cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)57 << 16));
    // 0x38ce10: 0x254acfa0  addiu       $t2, $t2, -0x3060
    ctx->pc = 0x38ce10u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294954912));
    // 0x38ce14: 0x79430000  lq          $v1, 0x0($t2)
    ctx->pc = 0x38ce14u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x38CFA0u));
label_38ce18:
    // 0x38ce18: 0x78c80000  lq          $t0, 0x0($a2)
    ctx->pc = 0x38ce18u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x38ce1c: 0x2042fffc  addi        $v0, $v0, -0x4
    ctx->pc = 0x38ce1cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 2), (int32_t)4294967292, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 2, (int32_t)tmp); }
    // 0x38ce20: 0x78c90010  lq          $t1, 0x10($a2)
    ctx->pc = 0x38ce20u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x38ce24: 0x78ca0020  lq          $t2, 0x20($a2)
    ctx->pc = 0x38ce24u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x38ce28: 0x78cb0030  lq          $t3, 0x30($a2)
    ctx->pc = 0x38ce28u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x38ce2c: 0x78cc0040  lq          $t4, 0x40($a2)
    ctx->pc = 0x38ce2cu;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 6), 64)));
    // 0x38ce30: 0x78cd0050  lq          $t5, 0x50($a2)
    ctx->pc = 0x38ce30u;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 6), 80)));
    // 0x38ce34: 0x78ce0060  lq          $t6, 0x60($a2)
    ctx->pc = 0x38ce34u;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 6), 96)));
    // 0x38ce38: 0x78cf0070  lq          $t7, 0x70($a2)
    ctx->pc = 0x38ce38u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 6), 112)));
    // 0x38ce3c: 0x78b90000  lq          $t9, 0x0($a1)
    ctx->pc = 0x38ce3cu;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x38ce40: 0x71194108  paddh       $t0, $t0, $t9
    ctx->pc = 0x38ce40u;
    SET_GPR_VEC(ctx, 8, PS2_PADDH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 25)));
    // 0x38ce44: 0x78b90010  lq          $t9, 0x10($a1)
    ctx->pc = 0x38ce44u;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x38ce48: 0x710341e8  pminh       $t0, $t0, $v1
    ctx->pc = 0x38ce48u;
    SET_GPR_VEC(ctx, 8, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 3)));
    // 0x38ce4c: 0x710041c8  pmaxh       $t0, $t0, $zero
    ctx->pc = 0x38ce4cu;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x38ce50: 0x71394908  paddh       $t1, $t1, $t9
    ctx->pc = 0x38ce50u;
    SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 25)));
    // 0x38ce54: 0x78b90020  lq          $t9, 0x20($a1)
    ctx->pc = 0x38ce54u;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x38ce58: 0x712349e8  pminh       $t1, $t1, $v1
    ctx->pc = 0x38ce58u;
    SET_GPR_VEC(ctx, 9, PS2_PMINH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 3)));
    // 0x38ce5c: 0x712049c8  pmaxh       $t1, $t1, $zero
    ctx->pc = 0x38ce5cu;
    SET_GPR_VEC(ctx, 9, PS2_PMAXH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x38ce60: 0x71284ec8  ppacb       $t1, $t1, $t0
    ctx->pc = 0x38ce60u;
    SET_GPR_VEC(ctx, 9, PS2_PPACB(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x38ce64: 0x71595108  paddh       $t2, $t2, $t9
    ctx->pc = 0x38ce64u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
    // 0x38ce68: 0x714351e8  pminh       $t2, $t2, $v1
    ctx->pc = 0x38ce68u;
    SET_GPR_VEC(ctx, 10, PS2_PMINH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 3)));
    // 0x38ce6c: 0x78b90030  lq          $t9, 0x30($a1)
    ctx->pc = 0x38ce6cu;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x38ce70: 0x714051c8  pmaxh       $t2, $t2, $zero
    ctx->pc = 0x38ce70u;
    SET_GPR_VEC(ctx, 10, PS2_PMAXH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x38ce74: 0x71795908  paddh       $t3, $t3, $t9
    ctx->pc = 0x38ce74u;
    SET_GPR_VEC(ctx, 11, PS2_PADDH(GPR_VEC(ctx, 11), GPR_VEC(ctx, 25)));
    // 0x38ce78: 0x78b90040  lq          $t9, 0x40($a1)
    ctx->pc = 0x38ce78u;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x38ce7c: 0x716359e8  pminh       $t3, $t3, $v1
    ctx->pc = 0x38ce7cu;
    SET_GPR_VEC(ctx, 11, PS2_PMINH(GPR_VEC(ctx, 11), GPR_VEC(ctx, 3)));
    // 0x38ce80: 0x716059c8  pmaxh       $t3, $t3, $zero
    ctx->pc = 0x38ce80u;
    SET_GPR_VEC(ctx, 11, PS2_PMAXH(GPR_VEC(ctx, 11), GPR_VEC(ctx, 0)));
    // 0x38ce84: 0x716a5ec8  ppacb       $t3, $t3, $t2
    ctx->pc = 0x38ce84u;
    SET_GPR_VEC(ctx, 11, PS2_PPACB(GPR_VEC(ctx, 11), GPR_VEC(ctx, 10)));
    // 0x38ce88: 0x71996108  paddh       $t4, $t4, $t9
    ctx->pc = 0x38ce88u;
    SET_GPR_VEC(ctx, 12, PS2_PADDH(GPR_VEC(ctx, 12), GPR_VEC(ctx, 25)));
    // 0x38ce8c: 0x78b90050  lq          $t9, 0x50($a1)
    ctx->pc = 0x38ce8cu;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 5), 80)));
    // 0x38ce90: 0x718361e8  pminh       $t4, $t4, $v1
    ctx->pc = 0x38ce90u;
    SET_GPR_VEC(ctx, 12, PS2_PMINH(GPR_VEC(ctx, 12), GPR_VEC(ctx, 3)));
    // 0x38ce94: 0x718061c8  pmaxh       $t4, $t4, $zero
    ctx->pc = 0x38ce94u;
    SET_GPR_VEC(ctx, 12, PS2_PMAXH(GPR_VEC(ctx, 12), GPR_VEC(ctx, 0)));
    // 0x38ce98: 0x71b96908  paddh       $t5, $t5, $t9
    ctx->pc = 0x38ce98u;
    SET_GPR_VEC(ctx, 13, PS2_PADDH(GPR_VEC(ctx, 13), GPR_VEC(ctx, 25)));
    // 0x38ce9c: 0x78b90060  lq          $t9, 0x60($a1)
    ctx->pc = 0x38ce9cu;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 5), 96)));
    // 0x38cea0: 0x71a369e8  pminh       $t5, $t5, $v1
    ctx->pc = 0x38cea0u;
    SET_GPR_VEC(ctx, 13, PS2_PMINH(GPR_VEC(ctx, 13), GPR_VEC(ctx, 3)));
    // 0x38cea4: 0x71a069c8  pmaxh       $t5, $t5, $zero
    ctx->pc = 0x38cea4u;
    SET_GPR_VEC(ctx, 13, PS2_PMAXH(GPR_VEC(ctx, 13), GPR_VEC(ctx, 0)));
    // 0x38cea8: 0x71ac6ec8  ppacb       $t5, $t5, $t4
    ctx->pc = 0x38cea8u;
    SET_GPR_VEC(ctx, 13, PS2_PPACB(GPR_VEC(ctx, 13), GPR_VEC(ctx, 12)));
    // 0x38ceac: 0x71d97108  paddh       $t6, $t6, $t9
    ctx->pc = 0x38ceacu;
    SET_GPR_VEC(ctx, 14, PS2_PADDH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 25)));
    // 0x38ceb0: 0x78b90070  lq          $t9, 0x70($a1)
    ctx->pc = 0x38ceb0u;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 5), 112)));
    // 0x38ceb4: 0x71c371e8  pminh       $t6, $t6, $v1
    ctx->pc = 0x38ceb4u;
    SET_GPR_VEC(ctx, 14, PS2_PMINH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 3)));
    // 0x38ceb8: 0x71c071c8  pmaxh       $t6, $t6, $zero
    ctx->pc = 0x38ceb8u;
    SET_GPR_VEC(ctx, 14, PS2_PMAXH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 0)));
    // 0x38cebc: 0x7c890000  sq          $t1, 0x0($a0)
    ctx->pc = 0x38cebcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 9));
    // 0x38cec0: 0x71f97908  paddh       $t7, $t7, $t9
    ctx->pc = 0x38cec0u;
    SET_GPR_VEC(ctx, 15, PS2_PADDH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 25)));
    // 0x38cec4: 0x71e379e8  pminh       $t7, $t7, $v1
    ctx->pc = 0x38cec4u;
    SET_GPR_VEC(ctx, 15, PS2_PMINH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 3)));
    // 0x38cec8: 0x71e079c8  pmaxh       $t7, $t7, $zero
    ctx->pc = 0x38cec8u;
    SET_GPR_VEC(ctx, 15, PS2_PMAXH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 0)));
    // 0x38cecc: 0x71ee7ec8  ppacb       $t7, $t7, $t6
    ctx->pc = 0x38ceccu;
    SET_GPR_VEC(ctx, 15, PS2_PPACB(GPR_VEC(ctx, 15), GPR_VEC(ctx, 14)));
    // 0x38ced0: 0x7c8b0010  sq          $t3, 0x10($a0)
    ctx->pc = 0x38ced0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 11));
    // 0x38ced4: 0x7c8d0020  sq          $t5, 0x20($a0)
    ctx->pc = 0x38ced4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 13));
    // 0x38ced8: 0x7c8f0030  sq          $t7, 0x30($a0)
    ctx->pc = 0x38ced8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 15));
    // 0x38cedc: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x38cedcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x38cee0: 0x24840040  addiu       $a0, $a0, 0x40
    ctx->pc = 0x38cee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x38cee4: 0x1440ffcc  bnez        $v0, . + 4 + (-0x34 << 2)
    ctx->pc = 0x38CEE4u;
    {
        const bool branch_taken_0x38cee4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38CEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CEE4u;
        // 0x38cee8: 0x24c60080  addiu       $a2, $a2, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38cee4) {
            ctx->pc = 0x38CE18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38ce18;
        }
    }
    ctx->pc = 0x38CEECu;
    // 0x38ceec: 0x3e00008  jr          $ra
    ctx->pc = 0x38CEECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38CEECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38CEF4u;
    // 0x38cef4: 0x0  nop
    ctx->pc = 0x38cef4u;
    // NOP
label_38cef8:
    // 0x38cef8: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x38cef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x38cefc: 0x3c0a0039  lui         $t2, 0x39
    ctx->pc = 0x38cefcu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)57 << 16));
    // 0x38cf00: 0x254acfa0  addiu       $t2, $t2, -0x3060
    ctx->pc = 0x38cf00u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294954912));
    // 0x38cf04: 0x79430000  lq          $v1, 0x0($t2)
    ctx->pc = 0x38cf04u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x38CFA0u));
label_38cf08:
    // 0x38cf08: 0x78a80000  lq          $t0, 0x0($a1)
    ctx->pc = 0x38cf08u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x38cf0c: 0x2042fffc  addi        $v0, $v0, -0x4
    ctx->pc = 0x38cf0cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 2), (int32_t)4294967292, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 2, (int32_t)tmp); }
    // 0x38cf10: 0xa0c82d  daddu       $t9, $a1, $zero
    ctx->pc = 0x38cf10u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38cf14: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x38cf14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x38cf18: 0x7b290010  lq          $t1, 0x10($t9)
    ctx->pc = 0x38cf18u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 25), 16)));
    // 0x38cf1c: 0x7b2a0020  lq          $t2, 0x20($t9)
    ctx->pc = 0x38cf1cu;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 25), 32)));
    // 0x38cf20: 0x7b2b0030  lq          $t3, 0x30($t9)
    ctx->pc = 0x38cf20u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 25), 48)));
    // 0x38cf24: 0x7b2c0040  lq          $t4, 0x40($t9)
    ctx->pc = 0x38cf24u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 25), 64)));
    // 0x38cf28: 0x7b2d0050  lq          $t5, 0x50($t9)
    ctx->pc = 0x38cf28u;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 25), 80)));
    // 0x38cf2c: 0x7b2e0060  lq          $t6, 0x60($t9)
    ctx->pc = 0x38cf2cu;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 25), 96)));
    // 0x38cf30: 0x7b2f0070  lq          $t7, 0x70($t9)
    ctx->pc = 0x38cf30u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 25), 112)));
    // 0x38cf34: 0x710341e8  pminh       $t0, $t0, $v1
    ctx->pc = 0x38cf34u;
    SET_GPR_VEC(ctx, 8, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 3)));
    // 0x38cf38: 0x710041c8  pmaxh       $t0, $t0, $zero
    ctx->pc = 0x38cf38u;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x38cf3c: 0x712349e8  pminh       $t1, $t1, $v1
    ctx->pc = 0x38cf3cu;
    SET_GPR_VEC(ctx, 9, PS2_PMINH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 3)));
    // 0x38cf40: 0x712049c8  pmaxh       $t1, $t1, $zero
    ctx->pc = 0x38cf40u;
    SET_GPR_VEC(ctx, 9, PS2_PMAXH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x38cf44: 0x71284ec8  ppacb       $t1, $t1, $t0
    ctx->pc = 0x38cf44u;
    SET_GPR_VEC(ctx, 9, PS2_PPACB(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x38cf48: 0x714351e8  pminh       $t2, $t2, $v1
    ctx->pc = 0x38cf48u;
    SET_GPR_VEC(ctx, 10, PS2_PMINH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 3)));
    // 0x38cf4c: 0x714051c8  pmaxh       $t2, $t2, $zero
    ctx->pc = 0x38cf4cu;
    SET_GPR_VEC(ctx, 10, PS2_PMAXH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x38cf50: 0x716359e8  pminh       $t3, $t3, $v1
    ctx->pc = 0x38cf50u;
    SET_GPR_VEC(ctx, 11, PS2_PMINH(GPR_VEC(ctx, 11), GPR_VEC(ctx, 3)));
    // 0x38cf54: 0x716059c8  pmaxh       $t3, $t3, $zero
    ctx->pc = 0x38cf54u;
    SET_GPR_VEC(ctx, 11, PS2_PMAXH(GPR_VEC(ctx, 11), GPR_VEC(ctx, 0)));
    // 0x38cf58: 0x716a5ec8  ppacb       $t3, $t3, $t2
    ctx->pc = 0x38cf58u;
    SET_GPR_VEC(ctx, 11, PS2_PPACB(GPR_VEC(ctx, 11), GPR_VEC(ctx, 10)));
    // 0x38cf5c: 0x718361e8  pminh       $t4, $t4, $v1
    ctx->pc = 0x38cf5cu;
    SET_GPR_VEC(ctx, 12, PS2_PMINH(GPR_VEC(ctx, 12), GPR_VEC(ctx, 3)));
    // 0x38cf60: 0x718061c8  pmaxh       $t4, $t4, $zero
    ctx->pc = 0x38cf60u;
    SET_GPR_VEC(ctx, 12, PS2_PMAXH(GPR_VEC(ctx, 12), GPR_VEC(ctx, 0)));
    // 0x38cf64: 0x71a369e8  pminh       $t5, $t5, $v1
    ctx->pc = 0x38cf64u;
    SET_GPR_VEC(ctx, 13, PS2_PMINH(GPR_VEC(ctx, 13), GPR_VEC(ctx, 3)));
    // 0x38cf68: 0x71a069c8  pmaxh       $t5, $t5, $zero
    ctx->pc = 0x38cf68u;
    SET_GPR_VEC(ctx, 13, PS2_PMAXH(GPR_VEC(ctx, 13), GPR_VEC(ctx, 0)));
    // 0x38cf6c: 0x71ac6ec8  ppacb       $t5, $t5, $t4
    ctx->pc = 0x38cf6cu;
    SET_GPR_VEC(ctx, 13, PS2_PPACB(GPR_VEC(ctx, 13), GPR_VEC(ctx, 12)));
    // 0x38cf70: 0x71c371e8  pminh       $t6, $t6, $v1
    ctx->pc = 0x38cf70u;
    SET_GPR_VEC(ctx, 14, PS2_PMINH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 3)));
    // 0x38cf74: 0x71c071c8  pmaxh       $t6, $t6, $zero
    ctx->pc = 0x38cf74u;
    SET_GPR_VEC(ctx, 14, PS2_PMAXH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 0)));
    // 0x38cf78: 0x71e379e8  pminh       $t7, $t7, $v1
    ctx->pc = 0x38cf78u;
    SET_GPR_VEC(ctx, 15, PS2_PMINH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 3)));
    // 0x38cf7c: 0x71e079c8  pmaxh       $t7, $t7, $zero
    ctx->pc = 0x38cf7cu;
    SET_GPR_VEC(ctx, 15, PS2_PMAXH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 0)));
    // 0x38cf80: 0x71ee7ec8  ppacb       $t7, $t7, $t6
    ctx->pc = 0x38cf80u;
    SET_GPR_VEC(ctx, 15, PS2_PPACB(GPR_VEC(ctx, 15), GPR_VEC(ctx, 14)));
    // 0x38cf84: 0x7c890000  sq          $t1, 0x0($a0)
    ctx->pc = 0x38cf84u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 9));
    // 0x38cf88: 0x7c8b0010  sq          $t3, 0x10($a0)
    ctx->pc = 0x38cf88u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 11));
    // 0x38cf8c: 0x7c8d0020  sq          $t5, 0x20($a0)
    ctx->pc = 0x38cf8cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 13));
    // 0x38cf90: 0x7c8f0030  sq          $t7, 0x30($a0)
    ctx->pc = 0x38cf90u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 15));
    // 0x38cf94: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x38CF94u;
    {
        const bool branch_taken_0x38cf94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38CF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CF94u;
        // 0x38cf98: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38cf94) {
            ctx->pc = 0x38CF08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38cf08;
        }
    }
    ctx->pc = 0x38CF9Cu;
    // 0x38cf9c: 0x0  nop
    ctx->pc = 0x38cf9cu;
    // NOP
    // 0x38cfa0: 0xff00ff  .word       0x00FF00FF                   # dsra32      $zero, $ra, 3 # 00E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x38cfa0u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 31) >> (32 + 3));
    // 0x38cfa4: 0xff00ff  .word       0x00FF00FF                   # dsra32      $zero, $ra, 3 # 00E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x38cfa4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 31) >> (32 + 3));
    // 0x38cfa8: 0xff00ff  .word       0x00FF00FF                   # dsra32      $zero, $ra, 3 # 00E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x38cfa8u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 31) >> (32 + 3));
    // 0x38cfac: 0xff00ff  .word       0x00FF00FF                   # dsra32      $zero, $ra, 3 # 00E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x38cfacu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 31) >> (32 + 3));
    // 0x38cfb0: 0x3e00008  jr          $ra
    ctx->pc = 0x38CFB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38CFB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38CFB8u;
}
