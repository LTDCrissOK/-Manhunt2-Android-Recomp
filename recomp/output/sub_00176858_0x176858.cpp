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

// Function: sub_00176858
// Address: 0x176858 - 0x1768c8
void sub_00176858_0x176858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00176858_0x176858");
#endif

    switch (ctx->pc) {
        case 0x176858u: goto label_176858;
        case 0x17685cu: goto label_17685c;
        case 0x176860u: goto label_176860;
        case 0x176864u: goto label_176864;
        case 0x176868u: goto label_176868;
        case 0x17686cu: goto label_17686c;
        case 0x176870u: goto label_176870;
        case 0x176874u: goto label_176874;
        case 0x176878u: goto label_176878;
        case 0x17687cu: goto label_17687c;
        case 0x176880u: goto label_176880;
        case 0x176884u: goto label_176884;
        case 0x176888u: goto label_176888;
        case 0x17688cu: goto label_17688c;
        case 0x176890u: goto label_176890;
        case 0x176894u: goto label_176894;
        case 0x176898u: goto label_176898;
        case 0x17689cu: goto label_17689c;
        case 0x1768a0u: goto label_1768a0;
        case 0x1768a4u: goto label_1768a4;
        case 0x1768a8u: goto label_1768a8;
        case 0x1768acu: goto label_1768ac;
        case 0x1768b0u: goto label_1768b0;
        case 0x1768b4u: goto label_1768b4;
        case 0x1768b8u: goto label_1768b8;
        case 0x1768bcu: goto label_1768bc;
        case 0x1768c0u: goto label_1768c0;
        case 0x1768c4u: goto label_1768c4;
        default: break;
    }

    ctx->pc = 0x176858u;

label_176858:
    // 0x176858: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x176858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_17685c:
    // 0x17685c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17685cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_176860:
    // 0x176860: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x176860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_176864:
    // 0x176864: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x176864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_176868:
    // 0x176868: 0xc04f954  jal         func_13E550
label_17686c:
    if (ctx->pc == 0x17686Cu) {
        ctx->pc = 0x17686Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176868u;
        // 0x17686c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176870u;
        goto label_176870;
    }
    ctx->pc = 0x176868u;
    SET_GPR_U32(ctx, 31, 0x176870u);
    ctx->pc = 0x17686Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176868u;
    // 0x17686c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E550u, 0x176868u, 0x176870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176870u;
label_176870:
    // 0x176870: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x176870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_176874:
    // 0x176874: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x176874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_176878:
    // 0x176878: 0xae0300b4  sw          $v1, 0xB4($s0)
    ctx->pc = 0x176878u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 3));
label_17687c:
    // 0x17687c: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x17687cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_176880:
    // 0x176880: 0xc04f8fc  jal         func_13E3F0
label_176884:
    if (ctx->pc == 0x176884u) {
        ctx->pc = 0x176884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176880u;
        // 0x176884: 0xae0200b0  sw          $v0, 0xB0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176888u;
        goto label_176888;
    }
    ctx->pc = 0x176880u;
    SET_GPR_U32(ctx, 31, 0x176888u);
    ctx->pc = 0x176884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176880u;
    // 0x176884: 0xae0200b0  sw          $v0, 0xB0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E3F0u, 0x176880u, 0x176888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176888u;
label_176888:
    // 0x176888: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x176888u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17688c:
    // 0x17688c: 0x8e0500bc  lw          $a1, 0xBC($s0)
    ctx->pc = 0x17688cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_176890:
    // 0x176890: 0xc045fea  jal         func_117FA8
label_176894:
    if (ctx->pc == 0x176894u) {
        ctx->pc = 0x176894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176890u;
        // 0x176894: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176898u;
        goto label_176898;
    }
    ctx->pc = 0x176890u;
    SET_GPR_U32(ctx, 31, 0x176898u);
    ctx->pc = 0x176894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176890u;
    // 0x176894: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117FA8u, 0x176890u, 0x176898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176898u;
label_176898:
    // 0x176898: 0x8e0400b0  lw          $a0, 0xB0($s0)
    ctx->pc = 0x176898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_17689c:
    // 0x17689c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17689cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1768a0:
    // 0x1768a0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1768a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1768a4:
    // 0x1768a4: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x1768a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_1768a8:
    // 0x1768a8: 0x40f809  jalr        $v0
label_1768ac:
    if (ctx->pc == 0x1768ACu) {
        ctx->pc = 0x1768ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1768A8u;
        // 0x1768ac: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1768B0u;
        goto label_1768b0;
    }
    ctx->pc = 0x1768A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1768B0u);
        ctx->pc = 0x1768ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1768A8u;
        // 0x1768ac: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1768A8u, 0x1768B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1768B0u;
label_1768b0:
    // 0x1768b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1768b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1768b4:
    // 0x1768b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1768b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1768b8:
    // 0x1768b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1768b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1768bc:
    // 0x1768bc: 0x3e00008  jr          $ra
label_1768c0:
    if (ctx->pc == 0x1768C0u) {
        ctx->pc = 0x1768C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1768BCu;
        // 0x1768c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1768C4u;
        goto label_1768c4;
    }
    ctx->pc = 0x1768BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1768C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1768BCu;
        // 0x1768c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1768BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1768C4u;
label_1768c4:
    // 0x1768c4: 0x0  nop
    ctx->pc = 0x1768c4u;
    // NOP
    ctx->pc = 0x1768c8u;
}
