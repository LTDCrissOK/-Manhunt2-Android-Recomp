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

// Function: sub_002AFD48
// Address: 0x2afd48 - 0x2aff18
void sub_002AFD48_0x2afd48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AFD48_0x2afd48");
#endif

    switch (ctx->pc) {
        case 0x2afda8u: goto label_2afda8;
        case 0x2afdd8u: goto label_2afdd8;
        case 0x2afdecu: goto label_2afdec;
        case 0x2afdf8u: goto label_2afdf8;
        case 0x2afe04u: goto label_2afe04;
        case 0x2afe0cu: goto label_2afe0c;
        case 0x2afe1cu: goto label_2afe1c;
        case 0x2afe28u: goto label_2afe28;
        case 0x2afe44u: goto label_2afe44;
        case 0x2afe58u: goto label_2afe58;
        case 0x2afe64u: goto label_2afe64;
        case 0x2afe70u: goto label_2afe70;
        case 0x2afe98u: goto label_2afe98;
        case 0x2afec4u: goto label_2afec4;
        default: break;
    }

    ctx->pc = 0x2afd48u;

    // 0x2afd48: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2afd48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2afd4c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x2afd4cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2afd50: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x2afd50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x2afd54: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x2afd54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2afd58: 0xffb30068  sd          $s3, 0x68($sp)
    ctx->pc = 0x2afd58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
    // 0x2afd5c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2afd5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2afd60: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x2afd60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x2afd64: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x2afd64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x2afd68: 0xffb50078  sd          $s5, 0x78($sp)
    ctx->pc = 0x2afd68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 21));
    // 0x2afd6c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2afd6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2afd70: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x2afd70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x2afd74: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2afd74u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2afd78: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x2afd78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x2afd7c: 0x2456ed00  addiu       $s6, $v0, -0x1300
    ctx->pc = 0x2afd7cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962432));
    // 0x2afd80: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x2afd80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
    // 0x2afd84: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2afd84u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2afd88: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x2afd88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x2afd8c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2afd8cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2afd90: 0xffb70088  sd          $s7, 0x88($sp)
    ctx->pc = 0x2afd90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 23));
    // 0x2afd94: 0x3c1e0057  lui         $fp, 0x57
    ctx->pc = 0x2afd94u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)87 << 16));
    // 0x2afd98: 0xffbf0098  sd          $ra, 0x98($sp)
    ctx->pc = 0x2afd98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 31));
    // 0x2afd9c: 0x8c630668  lw          $v1, 0x668($v1)
    ctx->pc = 0x2afd9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1640)));
    // 0x2afda0: 0x8c970594  lw          $s7, 0x594($a0)
    ctx->pc = 0x2afda0u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1428)));
    // 0x2afda4: 0xafa30040  sw          $v1, 0x40($sp)
    ctx->pc = 0x2afda4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
label_2afda8:
    // 0x2afda8: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x2afda8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2afdac: 0x139040  sll         $s2, $s3, 1
    ctx->pc = 0x2afdacu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x2afdb0: 0x731024  and         $v0, $v1, $s3
    ctx->pc = 0x2afdb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 19));
    // 0x2afdb4: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x2AFDB4u;
    {
        const bool branch_taken_0x2afdb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AFDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFDB4u;
        // 0x2afdb8: 0x26b10001  addiu       $s1, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afdb4) {
            ctx->pc = 0x2AFED8u;
            goto label_2afed8;
        }
    }
    ctx->pc = 0x2AFDBCu;
    // 0x2afdbc: 0x1a80002c  blez        $s4, . + 4 + (0x2C << 2)
    ctx->pc = 0x2AFDBCu;
    {
        const bool branch_taken_0x2afdbc = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x2AFDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFDBCu;
        // 0x2afdc0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afdbc) {
            ctx->pc = 0x2AFE70u;
            goto label_2afe70;
        }
    }
    ctx->pc = 0x2AFDC4u;
    // 0x2afdc4: 0x16e2001a  bne         $s7, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2AFDC4u;
    {
        const bool branch_taken_0x2afdc4 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        ctx->pc = 0x2AFDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFDC4u;
        // 0x2afdc8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afdc4) {
            ctx->pc = 0x2AFE30u;
            goto label_2afe30;
        }
    }
    ctx->pc = 0x2AFDCCu;
    // 0x2afdcc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2afdccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2afdd0: 0xc09f74e  jal         func_27DD38
    ctx->pc = 0x2AFDD0u;
    SET_GPR_U32(ctx, 31, 0x2AFDD8u);
    ctx->pc = 0x2AFDD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFDD0u;
    // 0x2afdd4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27DD38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27DD38u, 0x2AFDD0u, 0x2AFDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFDD8u;
label_2afdd8:
    // 0x2afdd8: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x2afdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x2afddc: 0x27c44ec0  addiu       $a0, $fp, 0x4EC0
    ctx->pc = 0x2afddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 20160));
    // 0x2afde0: 0x2445ed08  addiu       $a1, $v0, -0x12F8
    ctx->pc = 0x2afde0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962440));
    // 0x2afde4: 0xc0aebd6  jal         func_2BAF58
    ctx->pc = 0x2AFDE4u;
    SET_GPR_U32(ctx, 31, 0x2AFDECu);
    ctx->pc = 0x2AFDE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFDE4u;
    // 0x2afde8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAF58u, 0x2AFDE4u, 0x2AFDECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFDECu;
label_2afdec:
    // 0x2afdec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2afdecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2afdf0: 0xc09f736  jal         func_27DCD8
    ctx->pc = 0x2AFDF0u;
    SET_GPR_U32(ctx, 31, 0x2AFDF8u);
    ctx->pc = 0x2AFDF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFDF0u;
    // 0x2afdf4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27DCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27DCD8u, 0x2AFDF0u, 0x2AFDF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFDF8u;
label_2afdf8:
    // 0x2afdf8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2afdf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2afdfc: 0xc09f74e  jal         func_27DD38
    ctx->pc = 0x2AFDFCu;
    SET_GPR_U32(ctx, 31, 0x2AFE04u);
    ctx->pc = 0x2AFE00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFDFCu;
    // 0x2afe00: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27DD38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27DD38u, 0x2AFDFCu, 0x2AFE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFE04u;
label_2afe04:
    // 0x2afe04: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2AFE04u;
    {
        const bool branch_taken_0x2afe04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AFE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFE04u;
        // 0x2afe08: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afe04) {
            ctx->pc = 0x2AFE74u;
            goto label_2afe74;
        }
    }
    ctx->pc = 0x2AFE0Cu;
label_2afe0c:
    // 0x2afe0c: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x2afe0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2afe10: 0x27c44ec0  addiu       $a0, $fp, 0x4EC0
    ctx->pc = 0x2afe10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 20160));
    // 0x2afe14: 0xc0aebd6  jal         func_2BAF58
    ctx->pc = 0x2AFE14u;
    SET_GPR_U32(ctx, 31, 0x2AFE1Cu);
    ctx->pc = 0x2AFE18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFE14u;
    // 0x2afe18: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAF58u, 0x2AFE14u, 0x2AFE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFE1Cu;
label_2afe1c:
    // 0x2afe1c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2afe1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2afe20: 0xc09f736  jal         func_27DCD8
    ctx->pc = 0x2AFE20u;
    SET_GPR_U32(ctx, 31, 0x2AFE28u);
    ctx->pc = 0x2AFE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFE20u;
    // 0x2afe24: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27DCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27DCD8u, 0x2AFE20u, 0x2AFE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFE28u;
label_2afe28:
    // 0x2afe28: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x2AFE28u;
    {
        const bool branch_taken_0x2afe28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AFE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFE28u;
        // 0x2afe2c: 0x220a82d  daddu       $s5, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afe28) {
            ctx->pc = 0x2AFEDCu;
            goto label_2afedc;
        }
    }
    ctx->pc = 0x2AFE30u;
label_2afe30:
    // 0x2afe30: 0x16e20010  bne         $s7, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2AFE30u;
    {
        const bool branch_taken_0x2afe30 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        ctx->pc = 0x2AFE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFE30u;
        // 0x2afe34: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afe30) {
            ctx->pc = 0x2AFE74u;
            goto label_2afe74;
        }
    }
    ctx->pc = 0x2AFE38u;
    // 0x2afe38: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2afe38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2afe3c: 0xc09f74e  jal         func_27DD38
    ctx->pc = 0x2AFE3Cu;
    SET_GPR_U32(ctx, 31, 0x2AFE44u);
    ctx->pc = 0x2AFE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFE3Cu;
    // 0x2afe40: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27DD38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27DD38u, 0x2AFE3Cu, 0x2AFE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFE44u;
label_2afe44:
    // 0x2afe44: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x2afe44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
    // 0x2afe48: 0x27c44ec0  addiu       $a0, $fp, 0x4EC0
    ctx->pc = 0x2afe48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 20160));
    // 0x2afe4c: 0x2465ed10  addiu       $a1, $v1, -0x12F0
    ctx->pc = 0x2afe4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962448));
    // 0x2afe50: 0xc0aebd6  jal         func_2BAF58
    ctx->pc = 0x2AFE50u;
    SET_GPR_U32(ctx, 31, 0x2AFE58u);
    ctx->pc = 0x2AFE54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFE50u;
    // 0x2afe54: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAF58u, 0x2AFE50u, 0x2AFE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFE58u;
label_2afe58:
    // 0x2afe58: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2afe58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2afe5c: 0xc09f736  jal         func_27DCD8
    ctx->pc = 0x2AFE5Cu;
    SET_GPR_U32(ctx, 31, 0x2AFE64u);
    ctx->pc = 0x2AFE60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFE5Cu;
    // 0x2afe60: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27DCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27DCD8u, 0x2AFE5Cu, 0x2AFE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFE64u;
label_2afe64:
    // 0x2afe64: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2afe64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2afe68: 0xc09f74e  jal         func_27DD38
    ctx->pc = 0x2AFE68u;
    SET_GPR_U32(ctx, 31, 0x2AFE70u);
    ctx->pc = 0x2AFE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFE68u;
    // 0x2afe6c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27DD38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27DD38u, 0x2AFE68u, 0x2AFE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFE70u;
label_2afe70:
    // 0x2afe70: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2afe70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_2afe74:
    // 0x2afe74: 0xa7a00002  sh          $zero, 0x2($sp)
    ctx->pc = 0x2afe74u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x2afe78: 0x2446aaf8  addiu       $a2, $v0, -0x5508
    ctx->pc = 0x2afe78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945528));
    // 0x2afe7c: 0xa7a00004  sh          $zero, 0x4($sp)
    ctx->pc = 0x2afe7cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x2afe80: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x2afe80u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2afe84: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2afe84u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2afe88: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x2afe88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2afe8c: 0x26b10001  addiu       $s1, $s5, 0x1
    ctx->pc = 0x2afe8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2afe90: 0x139040  sll         $s2, $s3, 1
    ctx->pc = 0x2afe90u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x2afe94: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2afe94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2afe98:
    // 0x2afe98: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2afe98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2afe9c: 0x5453000b  bnel        $v0, $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x2AFE9Cu;
    {
        const bool branch_taken_0x2afe9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x2afe9c) {
            ctx->pc = 0x2AFEA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AFE9Cu;
            // 0x2afea0: 0x2463000c  addiu       $v1, $v1, 0xC (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AFECCu;
            goto label_2afecc;
        }
    }
    ctx->pc = 0x2AFEA4u;
    // 0x2afea4: 0x90620004  lbu         $v0, 0x4($v1)
    ctx->pc = 0x2afea4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2afea8: 0x1040ffd8  beqz        $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x2AFEA8u;
    {
        const bool branch_taken_0x2afea8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AFEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFEA8u;
        // 0x2afeac: 0xc41021  addu        $v0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afea8) {
            ctx->pc = 0x2AFE0Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2afe0c;
        }
    }
    ctx->pc = 0x2AFEB0u;
    // 0x2afeb0: 0x90620004  lbu         $v0, 0x4($v1)
    ctx->pc = 0x2afeb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2afeb4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2afeb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2afeb8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2afeb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2afebc: 0xc09f74e  jal         func_27DD38
    ctx->pc = 0x2AFEBCu;
    SET_GPR_U32(ctx, 31, 0x2AFEC4u);
    ctx->pc = 0x2AFEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFEBCu;
    // 0x2afec0: 0xa7a20000  sh          $v0, 0x0($sp) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27DD38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27DD38u, 0x2AFEBCu, 0x2AFEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFEC4u;
label_2afec4:
    // 0x2afec4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2AFEC4u;
    {
        const bool branch_taken_0x2afec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AFEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFEC4u;
        // 0x2afec8: 0x220a82d  daddu       $s5, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afec4) {
            ctx->pc = 0x2AFEDCu;
            goto label_2afedc;
        }
    }
    ctx->pc = 0x2AFECCu;
label_2afecc:
    // 0x2afecc: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x2afeccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2afed0: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x2AFED0u;
    {
        const bool branch_taken_0x2afed0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AFED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFED0u;
        // 0x2afed4: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afed0) {
            ctx->pc = 0x2AFE98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2afe98;
        }
    }
    ctx->pc = 0x2AFED8u;
label_2afed8:
    // 0x2afed8: 0x220a82d  daddu       $s5, $s1, $zero
    ctx->pc = 0x2afed8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2afedc:
    // 0x2afedc: 0x2aa20020  slti        $v0, $s5, 0x20
    ctx->pc = 0x2afedcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x2afee0: 0x1440ffb1  bnez        $v0, . + 4 + (-0x4F << 2)
    ctx->pc = 0x2AFEE0u;
    {
        const bool branch_taken_0x2afee0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AFEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFEE0u;
        // 0x2afee4: 0x240982d  daddu       $s3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afee0) {
            ctx->pc = 0x2AFDA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2afda8;
        }
    }
    ctx->pc = 0x2AFEE8u;
    // 0x2afee8: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x2afee8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2afeec: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x2afeecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2afef0: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x2afef0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2afef4: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x2afef4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2afef8: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x2afef8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2afefc: 0xdfb50078  ld          $s5, 0x78($sp)
    ctx->pc = 0x2afefcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2aff00: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x2aff00u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2aff04: 0xdfb70088  ld          $s7, 0x88($sp)
    ctx->pc = 0x2aff04u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2aff08: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x2aff08u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2aff0c: 0xdfbf0098  ld          $ra, 0x98($sp)
    ctx->pc = 0x2aff0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2aff10: 0x3e00008  jr          $ra
    ctx->pc = 0x2AFF10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AFF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFF10u;
        // 0x2aff14: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AFF10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AFF18u;
}
