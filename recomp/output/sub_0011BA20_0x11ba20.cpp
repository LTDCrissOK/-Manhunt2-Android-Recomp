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

// Function: sub_0011BA20
// Address: 0x11ba20 - 0x11bc08
void sub_0011BA20_0x11ba20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011BA20_0x11ba20");
#endif

    switch (ctx->pc) {
        case 0x11ba5cu: goto label_11ba5c;
        case 0x11ba74u: goto label_11ba74;
        case 0x11baa4u: goto label_11baa4;
        case 0x11bae0u: goto label_11bae0;
        case 0x11baf4u: goto label_11baf4;
        case 0x11bb10u: goto label_11bb10;
        case 0x11bb28u: goto label_11bb28;
        case 0x11bb40u: goto label_11bb40;
        case 0x11bb58u: goto label_11bb58;
        case 0x11bb6cu: goto label_11bb6c;
        case 0x11bba4u: goto label_11bba4;
        default: break;
    }

    ctx->pc = 0x11ba20u;

    // 0x11ba20: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x11ba20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x11ba24: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x11ba24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x11ba28: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x11ba28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x11ba2c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x11ba2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ba30: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x11ba30u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ba34: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x11ba34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x11ba38: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x11ba38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x11ba3c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x11ba3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x11ba40: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x11ba40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x11ba44: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x11ba44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x11ba48: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x11ba48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x11ba4c: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x11ba4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
    // 0x11ba50: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x11ba50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x11ba54: 0xc04566a  jal         func_1159A8
    ctx->pc = 0x11BA54u;
    SET_GPR_U32(ctx, 31, 0x11BA5Cu);
    ctx->pc = 0x11BA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BA54u;
    // 0x11ba58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1159A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1159A8u, 0x11BA54u, 0x11BA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BA5Cu;
label_11ba5c:
    // 0x11ba5c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11BA5Cu;
    {
        const bool branch_taken_0x11ba5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11BA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BA5Cu;
        // 0x11ba60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ba5c) {
            ctx->pc = 0x11BA6Cu;
            goto label_11ba6c;
        }
    }
    ctx->pc = 0x11BA64u;
    // 0x11ba64: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x11BA64u;
    {
        const bool branch_taken_0x11ba64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BA64u;
        // 0x11ba68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ba64) {
            ctx->pc = 0x11BBD4u;
            goto label_11bbd4;
        }
    }
    ctx->pc = 0x11BA6Cu;
label_11ba6c:
    // 0x11ba6c: 0xc04566a  jal         func_1159A8
    ctx->pc = 0x11BA6Cu;
    SET_GPR_U32(ctx, 31, 0x11BA74u);
    ctx->pc = 0x11BA70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BA6Cu;
    // 0x11ba70: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1159A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1159A8u, 0x11BA6Cu, 0x11BA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BA74u;
label_11ba74:
    // 0x11ba74: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x11ba74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ba78: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x11ba78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x11ba7c: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x11ba7cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ba80: 0x8c62075c  lw          $v0, 0x75C($v1)
    ctx->pc = 0x11ba80u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F075Cu));
    // 0x11ba84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11ba84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ba88: 0x200b82d  daddu       $s7, $s0, $zero
    ctx->pc = 0x11ba88u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ba8c: 0x200b02d  daddu       $s6, $s0, $zero
    ctx->pc = 0x11ba8cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ba90: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11ba90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11ba94: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x11ba94u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ba98: 0xac62075c  sw          $v0, 0x75C($v1)
    ctx->pc = 0x11ba98u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3F075Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F075Cu, _value); } while (0);
    // 0x11ba9c: 0xc04569e  jal         func_115A78
    ctx->pc = 0x11BA9Cu;
    SET_GPR_U32(ctx, 31, 0x11BAA4u);
    ctx->pc = 0x11BAA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BA9Cu;
    // 0x11baa0: 0x200a02d  daddu       $s4, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115A78u, 0x11BA9Cu, 0x11BAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BAA4u;
label_11baa4:
    // 0x11baa4: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x11baa4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11baa8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x11baa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x11baac: 0x2c460002  sltiu       $a2, $v0, 0x2
    ctx->pc = 0x11baacu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x11bab0: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x11bab0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x11bab4: 0x38440001  xori        $a0, $v0, 0x1
    ctx->pc = 0x11bab4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x11bab8: 0x96650014  lhu         $a1, 0x14($s3)
    ctx->pc = 0x11bab8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x11babc: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x11babcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x11bac0: 0x4b00b  movn        $s6, $zero, $a0
    ctx->pc = 0x11bac0u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 0));
    // 0x11bac4: 0x3a80b  movn        $s5, $zero, $v1
    ctx->pc = 0x11bac4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 0));
    // 0x11bac8: 0x6a00b  movn        $s4, $zero, $a2
    ctx->pc = 0x11bac8u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 0));
    // 0x11bacc: 0x245282b  sltu        $a1, $s2, $a1
    ctx->pc = 0x11baccu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x11bad0: 0x10a00032  beqz        $a1, . + 4 + (0x32 << 2)
    ctx->pc = 0x11BAD0u;
    {
        const bool branch_taken_0x11bad0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BAD0u;
        // 0x11bad4: 0x2b80b  movn        $s7, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bad0) {
            ctx->pc = 0x11BB9Cu;
            goto label_11bb9c;
        }
    }
    ctx->pc = 0x11BAD8u;
    // 0x11bad8: 0x2402006c  addiu       $v0, $zero, 0x6C
    ctx->pc = 0x11bad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x11badc: 0x0  nop
    ctx->pc = 0x11badcu;
    // NOP
label_11bae0:
    // 0x11bae0: 0x2221818  mult        $v1, $s1, $v0
    ctx->pc = 0x11bae0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x11bae4: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x11bae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x11bae8: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x11bae8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11baec: 0xc04552a  jal         func_1154A8
    ctx->pc = 0x11BAECu;
    SET_GPR_U32(ctx, 31, 0x11BAF4u);
    ctx->pc = 0x11BAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BAECu;
    // 0x11baf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1154A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1154A8u, 0x11BAECu, 0x11BAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BAF4u;
label_11baf4:
    // 0x11baf4: 0x145e0024  bne         $v0, $fp, . + 4 + (0x24 << 2)
    ctx->pc = 0x11BAF4u;
    {
        const bool branch_taken_0x11baf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 30));
        ctx->pc = 0x11BAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BAF4u;
        // 0x11baf8: 0x26230001  addiu       $v1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11baf4) {
            ctx->pc = 0x11BB88u;
            goto label_11bb88;
        }
    }
    ctx->pc = 0x11BAFCu;
    // 0x11bafc: 0x12c00004  beqz        $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x11BAFCu;
    {
        const bool branch_taken_0x11bafc = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BAFCu;
        // 0x11bb00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bafc) {
            ctx->pc = 0x11BB10u;
            goto label_11bb10;
        }
    }
    ctx->pc = 0x11BB04u;
    // 0x11bb04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11bb04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bb08: 0xc045540  jal         func_115500
    ctx->pc = 0x11BB08u;
    SET_GPR_U32(ctx, 31, 0x11BB10u);
    ctx->pc = 0x11BB0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BB08u;
    // 0x11bb0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115500u, 0x11BB08u, 0x11BB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BB10u;
label_11bb10:
    // 0x11bb10: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x11BB10u;
    {
        const bool branch_taken_0x11bb10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11bb10) {
            ctx->pc = 0x11BB14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11BB10u;
            // 0x11bb14: 0x121040  sll         $v0, $s2, 1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11BB74u;
            goto label_11bb74;
        }
    }
    ctx->pc = 0x11BB18u;
    // 0x11bb18: 0x12a00003  beqz        $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x11BB18u;
    {
        const bool branch_taken_0x11bb18 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BB18u;
        // 0x11bb1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bb18) {
            ctx->pc = 0x11BB28u;
            goto label_11bb28;
        }
    }
    ctx->pc = 0x11BB20u;
    // 0x11bb20: 0xc045540  jal         func_115500
    ctx->pc = 0x11BB20u;
    SET_GPR_U32(ctx, 31, 0x11BB28u);
    ctx->pc = 0x11BB24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BB20u;
    // 0x11bb24: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115500u, 0x11BB20u, 0x11BB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BB28u;
label_11bb28:
    // 0x11bb28: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x11BB28u;
    {
        const bool branch_taken_0x11bb28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11bb28) {
            ctx->pc = 0x11BB2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11BB28u;
            // 0x11bb2c: 0x121040  sll         $v0, $s2, 1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11BB74u;
            goto label_11bb74;
        }
    }
    ctx->pc = 0x11BB30u;
    // 0x11bb30: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x11BB30u;
    {
        const bool branch_taken_0x11bb30 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BB30u;
        // 0x11bb34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bb30) {
            ctx->pc = 0x11BB40u;
            goto label_11bb40;
        }
    }
    ctx->pc = 0x11BB38u;
    // 0x11bb38: 0xc045540  jal         func_115500
    ctx->pc = 0x11BB38u;
    SET_GPR_U32(ctx, 31, 0x11BB40u);
    ctx->pc = 0x11BB3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BB38u;
    // 0x11bb3c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115500u, 0x11BB38u, 0x11BB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BB40u;
label_11bb40:
    // 0x11bb40: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x11BB40u;
    {
        const bool branch_taken_0x11bb40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11bb40) {
            ctx->pc = 0x11BB44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11BB40u;
            // 0x11bb44: 0x121040  sll         $v0, $s2, 1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11BB74u;
            goto label_11bb74;
        }
    }
    ctx->pc = 0x11BB48u;
    // 0x11bb48: 0x12e00003  beqz        $s7, . + 4 + (0x3 << 2)
    ctx->pc = 0x11BB48u;
    {
        const bool branch_taken_0x11bb48 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BB48u;
        // 0x11bb4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bb48) {
            ctx->pc = 0x11BB58u;
            goto label_11bb58;
        }
    }
    ctx->pc = 0x11BB50u;
    // 0x11bb50: 0xc045540  jal         func_115500
    ctx->pc = 0x11BB50u;
    SET_GPR_U32(ctx, 31, 0x11BB58u);
    ctx->pc = 0x11BB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BB50u;
    // 0x11bb54: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115500u, 0x11BB50u, 0x11BB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BB58u;
label_11bb58:
    // 0x11bb58: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11BB58u;
    {
        const bool branch_taken_0x11bb58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11BB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BB58u;
        // 0x11bb5c: 0x121040  sll         $v0, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bb58) {
            ctx->pc = 0x11BB74u;
            goto label_11bb74;
        }
    }
    ctx->pc = 0x11BB60u;
    // 0x11bb60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11bb60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bb64: 0xc045540  jal         func_115500
    ctx->pc = 0x11BB64u;
    SET_GPR_U32(ctx, 31, 0x11BB6Cu);
    ctx->pc = 0x11BB68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BB64u;
    // 0x11bb68: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115500u, 0x11BB64u, 0x11BB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BB6Cu;
label_11bb6c:
    // 0x11bb6c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11BB6Cu;
    {
        const bool branch_taken_0x11bb6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BB6Cu;
        // 0x11bb70: 0x121040  sll         $v0, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bb6c) {
            ctx->pc = 0x11BB84u;
            goto label_11bb84;
        }
    }
    ctx->pc = 0x11BB74u;
label_11bb74:
    // 0x11bb74: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x11bb74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x11bb78: 0x3a22021  addu        $a0, $sp, $v0
    ctx->pc = 0x11bb78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x11bb7c: 0x307200ff  andi        $s2, $v1, 0xFF
    ctx->pc = 0x11bb7cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x11bb80: 0xa4910000  sh          $s1, 0x0($a0)
    ctx->pc = 0x11bb80u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 17));
label_11bb84:
    // 0x11bb84: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x11bb84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_11bb88:
    // 0x11bb88: 0x96620014  lhu         $v0, 0x14($s3)
    ctx->pc = 0x11bb88u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x11bb8c: 0x3071ffff  andi        $s1, $v1, 0xFFFF
    ctx->pc = 0x11bb8cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x11bb90: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x11bb90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x11bb94: 0x1440ffd2  bnez        $v0, . + 4 + (-0x2E << 2)
    ctx->pc = 0x11BB94u;
    {
        const bool branch_taken_0x11bb94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11BB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BB94u;
        // 0x11bb98: 0x2402006c  addiu       $v0, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bb94) {
            ctx->pc = 0x11BAE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11bae0;
        }
    }
    ctx->pc = 0x11BB9Cu;
label_11bb9c:
    // 0x11bb9c: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x11BB9Cu;
    SET_GPR_U32(ctx, 31, 0x11BBA4u);
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x11BB9Cu, 0x11BBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BBA4u;
label_11bba4:
    // 0x11bba4: 0x52001b  divu        $zero, $v0, $s2
    ctx->pc = 0x11bba4u;
    { uint32_t divisor = GPR_U32(ctx, 18); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x11bba8: 0x52400001  beql        $s2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x11BBA8u;
    {
        const bool branch_taken_0x11bba8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x11bba8) {
            ctx->pc = 0x11BBACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11BBA8u;
            // 0x11bbac: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x11BBB0u;
            goto label_11bbb0;
        }
    }
    ctx->pc = 0x11BBB0u;
label_11bbb0:
    // 0x11bbb0: 0x2405006c  addiu       $a1, $zero, 0x6C
    ctx->pc = 0x11bbb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x11bbb4: 0x8e660010  lw          $a2, 0x10($s3)
    ctx->pc = 0x11bbb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x11bbb8: 0x1810  mfhi        $v1
    ctx->pc = 0x11bbb8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x11bbbc: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x11bbbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x11bbc0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x11bbc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x11bbc4: 0x3a32021  addu        $a0, $sp, $v1
    ctx->pc = 0x11bbc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x11bbc8: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x11bbc8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11bbcc: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x11bbccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x11bbd0: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x11bbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_11bbd4:
    // 0x11bbd4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x11bbd4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11bbd8: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x11bbd8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x11bbdc: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x11bbdcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11bbe0: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x11bbe0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x11bbe4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x11bbe4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11bbe8: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x11bbe8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x11bbec: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x11bbecu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11bbf0: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x11bbf0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x11bbf4: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x11bbf4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11bbf8: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x11bbf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x11bbfc: 0x3e00008  jr          $ra
    ctx->pc = 0x11BBFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11BC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BBFCu;
        // 0x11bc00: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11BBFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11BC04u;
    // 0x11bc04: 0x0  nop
    ctx->pc = 0x11bc04u;
    // NOP
    ctx->pc = 0x11bc08u;
}
