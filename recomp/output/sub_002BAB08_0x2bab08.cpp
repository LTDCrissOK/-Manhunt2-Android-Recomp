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

// Function: sub_002BAB08
// Address: 0x2bab08 - 0x2bac98
void sub_002BAB08_0x2bab08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BAB08_0x2bab08");
#endif

    switch (ctx->pc) {
        case 0x2bab34u: goto label_2bab34;
        case 0x2bab3cu: goto label_2bab3c;
        case 0x2bab48u: goto label_2bab48;
        case 0x2bab6cu: goto label_2bab6c;
        case 0x2bab90u: goto label_2bab90;
        case 0x2babccu: goto label_2babcc;
        case 0x2babe4u: goto label_2babe4;
        case 0x2babfcu: goto label_2babfc;
        case 0x2bac14u: goto label_2bac14;
        case 0x2bac34u: goto label_2bac34;
        case 0x2bac44u: goto label_2bac44;
        case 0x2bac50u: goto label_2bac50;
        case 0x2bac64u: goto label_2bac64;
        case 0x2bac74u: goto label_2bac74;
        case 0x2bac80u: goto label_2bac80;
        default: break;
    }

    ctx->pc = 0x2bab08u;

    // 0x2bab08: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2bab08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2bab0c: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x2bab0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x2bab10: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2bab10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2bab14: 0x2442b0e0  addiu       $v0, $v0, -0x4F20
    ctx->pc = 0x2bab14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947040));
    // 0x2bab18: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2bab18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2bab1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2bab1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bab20: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2bab20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2bab24: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2bab24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bab28: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bab28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bab2c: 0xc0b7082  jal         func_2DC208
    ctx->pc = 0x2BAB2Cu;
    SET_GPR_U32(ctx, 31, 0x2BAB34u);
    ctx->pc = 0x2BAB30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BAB2Cu;
    // 0x2bab30: 0xac406394  sw          $zero, 0x6394($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 25492), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC208u, 0x2BAB2Cu, 0x2BAB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAB34u;
label_2bab34:
    // 0x2bab34: 0xc09eb04  jal         func_27AC10
    ctx->pc = 0x2BAB34u;
    SET_GPR_U32(ctx, 31, 0x2BAB3Cu);
    ctx->pc = 0x27AC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27AC10u, 0x2BAB34u, 0x2BAB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAB3Cu;
label_2bab3c:
    // 0x2bab3c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2bab3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bab40: 0xc0d7394  jal         func_35CE50
    ctx->pc = 0x2BAB40u;
    SET_GPR_U32(ctx, 31, 0x2BAB48u);
    ctx->pc = 0x2BAB44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BAB40u;
    // 0x2bab44: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE50u, 0x2BAB40u, 0x2BAB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAB48u;
label_2bab48:
    // 0x2bab48: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2bab48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2bab4c: 0x8c629e40  lw          $v0, -0x61C0($v1)
    ctx->pc = 0x2bab4cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F9E40u));
    // 0x2bab50: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2bab50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2bab54: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BAB54u;
    {
        const bool branch_taken_0x2bab54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BAB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAB54u;
        // 0x2bab58: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bab54) {
            ctx->pc = 0x2BAB6Cu;
            goto label_2bab6c;
        }
    }
    ctx->pc = 0x2BAB5Cu;
    // 0x2bab5c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2bab5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2bab60: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2bab60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bab64: 0xc0d754c  jal         func_35D530
    ctx->pc = 0x2BAB64u;
    SET_GPR_U32(ctx, 31, 0x2BAB6Cu);
    ctx->pc = 0x2BAB68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BAB64u;
    // 0x2bab68: 0x24a500c8  addiu       $a1, $a1, 0xC8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D530u, 0x2BAB64u, 0x2BAB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAB6Cu;
label_2bab6c:
    // 0x2bab6c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2bab6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2bab70: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x2bab70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2bab74: 0x8c629160  lw          $v0, -0x6EA0($v1)
    ctx->pc = 0x2bab74u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F9160u));
    // 0x2bab78: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x2bab78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x2bab7c: 0x24a59920  addiu       $a1, $a1, -0x66E0
    ctx->pc = 0x2bab7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940960));
    // 0x2bab80: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2bab80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bab84: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x2bab84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2bab88: 0xc0d754c  jal         func_35D530
    ctx->pc = 0x2BAB88u;
    SET_GPR_U32(ctx, 31, 0x2BAB90u);
    ctx->pc = 0x2BAB8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BAB88u;
    // 0x2bab8c: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D530u, 0x2BAB88u, 0x2BAB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAB90u;
label_2bab90:
    // 0x2bab90: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x2bab90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x2bab94: 0x8c6325a4  lw          $v1, 0x25A4($v1)
    ctx->pc = 0x2bab94u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4C25A4u));
    // 0x2bab98: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x2bab98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2bab9c: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2BAB9Cu;
    {
        const bool branch_taken_0x2bab9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BABA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAB9Cu;
        // 0x2baba0: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bab9c) {
            ctx->pc = 0x2BAC14u;
            goto label_2bac14;
        }
    }
    ctx->pc = 0x2BABA4u;
    // 0x2baba4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2baba4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2baba8: 0x24420100  addiu       $v0, $v0, 0x100
    ctx->pc = 0x2baba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x2babac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2babacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2babb0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2babb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2babb4: 0x800008  jr          $a0
    ctx->pc = 0x2BABB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2BABBCu: goto label_2babbc;
            case 0x2BABD4u: goto label_2babd4;
            case 0x2BABECu: goto label_2babec;
            case 0x2BAC04u: goto label_2bac04;
            case 0x2BAC14u: goto label_2bac14;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BABB4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2BABBCu;
label_2babbc:
    // 0x2babbc: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2babbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2babc0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2babc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2babc4: 0xc0d754c  jal         func_35D530
    ctx->pc = 0x2BABC4u;
    SET_GPR_U32(ctx, 31, 0x2BABCCu);
    ctx->pc = 0x2BABC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BABC4u;
    // 0x2babc8: 0x24a500d0  addiu       $a1, $a1, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D530u, 0x2BABC4u, 0x2BABCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BABCCu;
label_2babcc:
    // 0x2babcc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2BABCCu;
    {
        const bool branch_taken_0x2babcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BABD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BABCCu;
        // 0x2babd0: 0x8e229e40  lw          $v0, -0x61C0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294942272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2babcc) {
            ctx->pc = 0x2BAC18u;
            goto label_2bac18;
        }
    }
    ctx->pc = 0x2BABD4u;
label_2babd4:
    // 0x2babd4: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2babd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2babd8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2babd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2babdc: 0xc0d754c  jal         func_35D530
    ctx->pc = 0x2BABDCu;
    SET_GPR_U32(ctx, 31, 0x2BABE4u);
    ctx->pc = 0x2BABE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BABDCu;
    // 0x2babe0: 0x24a500d8  addiu       $a1, $a1, 0xD8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D530u, 0x2BABDCu, 0x2BABE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BABE4u;
label_2babe4:
    // 0x2babe4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2BABE4u;
    {
        const bool branch_taken_0x2babe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BABE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BABE4u;
        // 0x2babe8: 0x8e229e40  lw          $v0, -0x61C0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294942272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2babe4) {
            ctx->pc = 0x2BAC18u;
            goto label_2bac18;
        }
    }
    ctx->pc = 0x2BABECu;
label_2babec:
    // 0x2babec: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2babecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2babf0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2babf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2babf4: 0xc0d754c  jal         func_35D530
    ctx->pc = 0x2BABF4u;
    SET_GPR_U32(ctx, 31, 0x2BABFCu);
    ctx->pc = 0x2BABF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BABF4u;
    // 0x2babf8: 0x24a500e0  addiu       $a1, $a1, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D530u, 0x2BABF4u, 0x2BABFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BABFCu;
label_2babfc:
    // 0x2babfc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2BABFCu;
    {
        const bool branch_taken_0x2babfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BABFCu;
        // 0x2bac00: 0x8e229e40  lw          $v0, -0x61C0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294942272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2babfc) {
            ctx->pc = 0x2BAC18u;
            goto label_2bac18;
        }
    }
    ctx->pc = 0x2BAC04u;
label_2bac04:
    // 0x2bac04: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2bac04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2bac08: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2bac08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bac0c: 0xc0d754c  jal         func_35D530
    ctx->pc = 0x2BAC0Cu;
    SET_GPR_U32(ctx, 31, 0x2BAC14u);
    ctx->pc = 0x2BAC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BAC0Cu;
    // 0x2bac10: 0x24a500e8  addiu       $a1, $a1, 0xE8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D530u, 0x2BAC0Cu, 0x2BAC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAC14u;
label_2bac14:
    // 0x2bac14: 0x8e229e40  lw          $v0, -0x61C0($s1)
    ctx->pc = 0x2bac14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294942272)));
label_2bac18:
    // 0x2bac18: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2bac18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2bac1c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BAC1Cu;
    {
        const bool branch_taken_0x2bac1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bac1c) {
            ctx->pc = 0x2BAC20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BAC1Cu;
            // 0x2bac20: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BAC38u;
            goto label_2bac38;
        }
    }
    ctx->pc = 0x2BAC24u;
    // 0x2bac24: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2bac24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2bac28: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2bac28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bac2c: 0xc0d754c  jal         func_35D530
    ctx->pc = 0x2BAC2Cu;
    SET_GPR_U32(ctx, 31, 0x2BAC34u);
    ctx->pc = 0x2BAC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BAC2Cu;
    // 0x2bac30: 0x24a500f0  addiu       $a1, $a1, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D530u, 0x2BAC2Cu, 0x2BAC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAC34u;
label_2bac34:
    // 0x2bac34: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2bac34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_2bac38:
    // 0x2bac38: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2bac38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bac3c: 0xc0d754c  jal         func_35D530
    ctx->pc = 0x2BAC3Cu;
    SET_GPR_U32(ctx, 31, 0x2BAC44u);
    ctx->pc = 0x2BAC40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BAC3Cu;
    // 0x2bac40: 0x24a500f8  addiu       $a1, $a1, 0xF8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D530u, 0x2BAC3Cu, 0x2BAC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAC44u;
label_2bac44:
    // 0x2bac44: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x2bac44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bac48: 0xc0aeb26  jal         func_2BAC98
    ctx->pc = 0x2BAC48u;
    SET_GPR_U32(ctx, 31, 0x2BAC50u);
    ctx->pc = 0x2BAC4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BAC48u;
    // 0x2bac4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAC98u, 0x2BAC48u, 0x2BAC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAC50u;
label_2bac50:
    // 0x2bac50: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2bac50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bac54: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BAC54u;
    {
        const bool branch_taken_0x2bac54 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAC54u;
        // 0x2bac58: 0x3c02005b  lui         $v0, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)91 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bac54) {
            ctx->pc = 0x2BAC6Cu;
            goto label_2bac6c;
        }
    }
    ctx->pc = 0x2BAC5Cu;
    // 0x2bac5c: 0xc0a2152  jal         func_288548
    ctx->pc = 0x2BAC5Cu;
    SET_GPR_U32(ctx, 31, 0x2BAC64u);
    ctx->pc = 0x288548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288548u, 0x2BAC5Cu, 0x2BAC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAC64u;
label_2bac64:
    // 0x2bac64: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2BAC64u;
    {
        const bool branch_taken_0x2bac64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAC64u;
        // 0x2bac68: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bac64) {
            ctx->pc = 0x2BAC78u;
            goto label_2bac78;
        }
    }
    ctx->pc = 0x2BAC6Cu;
label_2bac6c:
    // 0x2bac6c: 0xc0c582a  jal         func_3160A8
    ctx->pc = 0x2BAC6Cu;
    SET_GPR_U32(ctx, 31, 0x2BAC74u);
    ctx->pc = 0x2BAC70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BAC6Cu;
    // 0x2bac70: 0x8c4421e0  lw          $a0, 0x21E0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8672)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3160A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3160A8u, 0x2BAC6Cu, 0x2BAC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAC74u;
label_2bac74:
    // 0x2bac74: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2bac74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2bac78:
    // 0x2bac78: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x2BAC78u;
    SET_GPR_U32(ctx, 31, 0x2BAC80u);
    ctx->pc = 0x2BAC7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BAC78u;
    // 0x2bac7c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2BAC78u, 0x2BAC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAC80u;
label_2bac80:
    // 0x2bac80: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2bac80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bac84: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2bac84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bac88: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2bac88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bac8c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2bac8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bac90: 0x3e00008  jr          $ra
    ctx->pc = 0x2BAC90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BAC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAC90u;
        // 0x2bac94: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BAC90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BAC98u;
}
