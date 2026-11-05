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

// Function: sub_00187850
// Address: 0x187850 - 0x1878e0
void sub_00187850_0x187850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00187850_0x187850");
#endif

    switch (ctx->pc) {
        case 0x187850u: goto label_187850;
        case 0x187854u: goto label_187854;
        case 0x187858u: goto label_187858;
        case 0x18785cu: goto label_18785c;
        case 0x187860u: goto label_187860;
        case 0x187864u: goto label_187864;
        case 0x187868u: goto label_187868;
        case 0x18786cu: goto label_18786c;
        case 0x187870u: goto label_187870;
        case 0x187874u: goto label_187874;
        case 0x187878u: goto label_187878;
        case 0x18787cu: goto label_18787c;
        case 0x187880u: goto label_187880;
        case 0x187884u: goto label_187884;
        case 0x187888u: goto label_187888;
        case 0x18788cu: goto label_18788c;
        case 0x187890u: goto label_187890;
        case 0x187894u: goto label_187894;
        case 0x187898u: goto label_187898;
        case 0x18789cu: goto label_18789c;
        case 0x1878a0u: goto label_1878a0;
        case 0x1878a4u: goto label_1878a4;
        case 0x1878a8u: goto label_1878a8;
        case 0x1878acu: goto label_1878ac;
        case 0x1878b0u: goto label_1878b0;
        case 0x1878b4u: goto label_1878b4;
        case 0x1878b8u: goto label_1878b8;
        case 0x1878bcu: goto label_1878bc;
        case 0x1878c0u: goto label_1878c0;
        case 0x1878c4u: goto label_1878c4;
        case 0x1878c8u: goto label_1878c8;
        case 0x1878ccu: goto label_1878cc;
        case 0x1878d0u: goto label_1878d0;
        case 0x1878d4u: goto label_1878d4;
        case 0x1878d8u: goto label_1878d8;
        case 0x1878dcu: goto label_1878dc;
        default: break;
    }

    ctx->pc = 0x187850u;

label_187850:
    // 0x187850: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x187850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_187854:
    // 0x187854: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x187854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_187858:
    // 0x187858: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x187858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_18785c:
    // 0x18785c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18785cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_187860:
    // 0x187860: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x187860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_187864:
    // 0x187864: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x187864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_187868:
    // 0x187868: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_18786c:
    if (ctx->pc == 0x18786Cu) {
        ctx->pc = 0x18786Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187868u;
        // 0x18786c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187870u;
        goto label_187870;
    }
    ctx->pc = 0x187868u;
    {
        const bool branch_taken_0x187868 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x18786Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187868u;
        // 0x18786c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187868) {
            ctx->pc = 0x187880u;
            goto label_187880;
        }
    }
    ctx->pc = 0x187870u;
label_187870:
    // 0x187870: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x187870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_187874:
    // 0x187874: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x187874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_187878:
    // 0x187878: 0x40f809  jalr        $v0
label_18787c:
    if (ctx->pc == 0x18787Cu) {
        ctx->pc = 0x187880u;
        goto label_187880;
    }
    ctx->pc = 0x187878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x187880u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187878u, 0x187880u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x187880u;
label_187880:
    // 0x187880: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x187880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_187884:
    // 0x187884: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_187888:
    if (ctx->pc == 0x187888u) {
        ctx->pc = 0x187888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187884u;
        // 0x187888: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18788Cu;
        goto label_18788c;
    }
    ctx->pc = 0x187884u;
    {
        const bool branch_taken_0x187884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x187888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187884u;
        // 0x187888: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187884) {
            ctx->pc = 0x1878ACu;
            goto label_1878ac;
        }
    }
    ctx->pc = 0x18788Cu;
label_18788c:
    // 0x18788c: 0xc0f5240  jal         func_3D4900
label_187890:
    if (ctx->pc == 0x187890u) {
        ctx->pc = 0x187890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18788Cu;
        // 0x187890: 0x240400b0  addiu       $a0, $zero, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187894u;
        goto label_187894;
    }
    ctx->pc = 0x18788Cu;
    SET_GPR_U32(ctx, 31, 0x187894u);
    ctx->pc = 0x187890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18788Cu;
    // 0x187890: 0x240400b0  addiu       $a0, $zero, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x18788Cu, 0x187894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187894u;
label_187894:
    // 0x187894: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x187894u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_187898:
    // 0x187898: 0xc064e44  jal         func_193910
label_18789c:
    if (ctx->pc == 0x18789Cu) {
        ctx->pc = 0x18789Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187898u;
        // 0x18789c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1878A0u;
        goto label_1878a0;
    }
    ctx->pc = 0x187898u;
    SET_GPR_U32(ctx, 31, 0x1878A0u);
    ctx->pc = 0x18789Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187898u;
    // 0x18789c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193910u, 0x187898u, 0x1878A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1878A0u;
label_1878a0:
    // 0x1878a0: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x1878a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
label_1878a4:
    // 0x1878a4: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1878a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1878a8:
    // 0x1878a8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1878a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1878ac:
    // 0x1878ac: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1878acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1878b0:
    // 0x1878b0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1878b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1878b4:
    // 0x1878b4: 0x8c660020  lw          $a2, 0x20($v1)
    ctx->pc = 0x1878b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_1878b8:
    // 0x1878b8: 0xc0f809  jalr        $a2
label_1878bc:
    if (ctx->pc == 0x1878BCu) {
        ctx->pc = 0x1878BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1878B8u;
        // 0x1878bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1878C0u;
        goto label_1878c0;
    }
    ctx->pc = 0x1878B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1878C0u);
        ctx->pc = 0x1878BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1878B8u;
        // 0x1878bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1878B8u, 0x1878C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1878C0u;
label_1878c0:
    // 0x1878c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1878c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1878c4:
    // 0x1878c4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1878c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1878c8:
    // 0x1878c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1878c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1878cc:
    // 0x1878cc: 0x3e00008  jr          $ra
label_1878d0:
    if (ctx->pc == 0x1878D0u) {
        ctx->pc = 0x1878D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1878CCu;
        // 0x1878d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1878D4u;
        goto label_1878d4;
    }
    ctx->pc = 0x1878CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1878D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1878CCu;
        // 0x1878d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1878CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1878D4u;
label_1878d4:
    // 0x1878d4: 0x0  nop
    ctx->pc = 0x1878d4u;
    // NOP
label_1878d8:
    // 0x1878d8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1878d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1878dc:
    // 0x1878dc: 0x0  nop
    ctx->pc = 0x1878dcu;
    // NOP
    ctx->pc = 0x1878e0u;
}
