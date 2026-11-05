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

// Function: sub_001D6B90
// Address: 0x1d6b90 - 0x1d6c40
void sub_001D6B90_0x1d6b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D6B90_0x1d6b90");
#endif

    switch (ctx->pc) {
        case 0x1d6ba8u: goto label_1d6ba8;
        case 0x1d6bb0u: goto label_1d6bb0;
        case 0x1d6bbcu: goto label_1d6bbc;
        case 0x1d6bc4u: goto label_1d6bc4;
        case 0x1d6bccu: goto label_1d6bcc;
        case 0x1d6bd4u: goto label_1d6bd4;
        case 0x1d6bdcu: goto label_1d6bdc;
        case 0x1d6be8u: goto label_1d6be8;
        case 0x1d6c04u: goto label_1d6c04;
        case 0x1d6c0cu: goto label_1d6c0c;
        case 0x1d6c14u: goto label_1d6c14;
        case 0x1d6c1cu: goto label_1d6c1c;
        case 0x1d6c28u: goto label_1d6c28;
        case 0x1d6c30u: goto label_1d6c30;
        default: break;
    }

    ctx->pc = 0x1d6b90u;

    // 0x1d6b90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d6b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d6b94: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1d6b94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x1d6b98: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d6b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d6b9c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d6b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d6ba0: 0xc0c33da  jal         func_30CF68
    ctx->pc = 0x1D6BA0u;
    SET_GPR_U32(ctx, 31, 0x1D6BA8u);
    ctx->pc = 0x1D6BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6BA0u;
    // 0x1d6ba4: 0x2484ff68  addiu       $a0, $a0, -0x98 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30CF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30CF68u, 0x1D6BA0u, 0x1D6BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6BA8u;
label_1d6ba8:
    // 0x1d6ba8: 0xc0d473a  jal         func_351CE8
    ctx->pc = 0x1D6BA8u;
    SET_GPR_U32(ctx, 31, 0x1D6BB0u);
    ctx->pc = 0x1D6BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6BA8u;
    // 0x1d6bac: 0x3c100057  lui         $s0, 0x57 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x351CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351CE8u, 0x1D6BA8u, 0x1D6BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6BB0u;
label_1d6bb0:
    // 0x1d6bb0: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1d6bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x1d6bb4: 0xc0aee12  jal         func_2BB848
    ctx->pc = 0x1D6BB4u;
    SET_GPR_U32(ctx, 31, 0x1D6BBCu);
    ctx->pc = 0x1D6BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6BB4u;
    // 0x1d6bb8: 0x24844f18  addiu       $a0, $a0, 0x4F18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BB848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB848u, 0x1D6BB4u, 0x1D6BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6BBCu;
label_1d6bbc:
    // 0x1d6bbc: 0xc0cd8ec  jal         func_3363B0
    ctx->pc = 0x1D6BBCu;
    SET_GPR_U32(ctx, 31, 0x1D6BC4u);
    ctx->pc = 0x1D6BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6BBCu;
    // 0x1d6bc0: 0x26104ec0  addiu       $s0, $s0, 0x4EC0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x1D6BBCu, 0x1D6BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6BC4u;
label_1d6bc4:
    // 0x1d6bc4: 0xc0cd09a  jal         func_334268
    ctx->pc = 0x1D6BC4u;
    SET_GPR_U32(ctx, 31, 0x1D6BCCu);
    ctx->pc = 0x334268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x334268u, 0x1D6BC4u, 0x1D6BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6BCCu;
label_1d6bcc:
    // 0x1d6bcc: 0xc0ae9f6  jal         func_2BA7D8
    ctx->pc = 0x1D6BCCu;
    SET_GPR_U32(ctx, 31, 0x1D6BD4u);
    ctx->pc = 0x1D6BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6BCCu;
    // 0x1d6bd0: 0x26040008  addiu       $a0, $s0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BA7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BA7D8u, 0x1D6BCCu, 0x1D6BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6BD4u;
label_1d6bd4:
    // 0x1d6bd4: 0xc0ae94a  jal         func_2BA528
    ctx->pc = 0x1D6BD4u;
    SET_GPR_U32(ctx, 31, 0x1D6BDCu);
    ctx->pc = 0x1D6BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6BD4u;
    // 0x1d6bd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BA528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BA528u, 0x1D6BD4u, 0x1D6BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6BDCu;
label_1d6bdc:
    // 0x1d6bdc: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x1d6bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x1d6be0: 0xc07f494  jal         func_1FD250
    ctx->pc = 0x1D6BE0u;
    SET_GPR_U32(ctx, 31, 0x1D6BE8u);
    ctx->pc = 0x1D6BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6BE0u;
    // 0x1d6be4: 0x24849b10  addiu       $a0, $a0, -0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD250u, 0x1D6BE0u, 0x1D6BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6BE8u;
label_1d6be8:
    // 0x1d6be8: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1d6be8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1d6bec: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1d6becu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d6bf0: 0x8c628ec8  lw          $v0, -0x7138($v1)
    ctx->pc = 0x1d6bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F8EC8u));
    // 0x1d6bf4: 0x14440005  bne         $v0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D6BF4u;
    {
        const bool branch_taken_0x1d6bf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x1d6bf4) {
            ctx->pc = 0x1D6C0Cu;
            goto label_1d6c0c;
        }
    }
    ctx->pc = 0x1D6BFCu;
    // 0x1d6bfc: 0xc075cf2  jal         func_1D73C8
    ctx->pc = 0x1D6BFCu;
    SET_GPR_U32(ctx, 31, 0x1D6C04u);
    ctx->pc = 0x1D73C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D73C8u, 0x1D6BFCu, 0x1D6C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6C04u;
label_1d6c04:
    // 0x1d6c04: 0xc075d2c  jal         func_1D74B0
    ctx->pc = 0x1D6C04u;
    SET_GPR_U32(ctx, 31, 0x1D6C0Cu);
    ctx->pc = 0x1D74B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D74B0u, 0x1D6C04u, 0x1D6C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6C0Cu;
label_1d6c0c:
    // 0x1d6c0c: 0xc0b681c  jal         func_2DA070
    ctx->pc = 0x1D6C0Cu;
    SET_GPR_U32(ctx, 31, 0x1D6C14u);
    ctx->pc = 0x2DA070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA070u, 0x1D6C0Cu, 0x1D6C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6C14u;
label_1d6c14:
    // 0x1d6c14: 0xc0da566  jal         func_369598
    ctx->pc = 0x1D6C14u;
    SET_GPR_U32(ctx, 31, 0x1D6C1Cu);
    ctx->pc = 0x369598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x369598u, 0x1D6C14u, 0x1D6C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6C1Cu;
label_1d6c1c:
    // 0x1d6c1c: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x1d6c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x1d6c20: 0xc08295c  jal         func_20A570
    ctx->pc = 0x1D6C20u;
    SET_GPR_U32(ctx, 31, 0x1D6C28u);
    ctx->pc = 0x1D6C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6C20u;
    // 0x1d6c24: 0x2484c100  addiu       $a0, $a0, -0x3F00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20A570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A570u, 0x1D6C20u, 0x1D6C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6C28u;
label_1d6c28:
    // 0x1d6c28: 0xc09e946  jal         func_27A518
    ctx->pc = 0x1D6C28u;
    SET_GPR_U32(ctx, 31, 0x1D6C30u);
    ctx->pc = 0x27A518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27A518u, 0x1D6C28u, 0x1D6C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6C30u;
label_1d6c30:
    // 0x1d6c30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d6c30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d6c34: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d6c34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d6c38: 0x3e00008  jr          $ra
    ctx->pc = 0x1D6C38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D6C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6C38u;
        // 0x1d6c3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6C38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D6C40u;
}
