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

// Function: sub_003D4AA0
// Address: 0x3d4aa0 - 0x3d4af8
void sub_003D4AA0_0x3d4aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D4AA0_0x3d4aa0");
#endif

    switch (ctx->pc) {
        case 0x3d4ab0u: goto label_3d4ab0;
        case 0x3d4ab8u: goto label_3d4ab8;
        case 0x3d4ac0u: goto label_3d4ac0;
        case 0x3d4ac8u: goto label_3d4ac8;
        case 0x3d4ad0u: goto label_3d4ad0;
        case 0x3d4ae0u: goto label_3d4ae0;
        case 0x3d4ae8u: goto label_3d4ae8;
        case 0x3d4af0u: goto label_3d4af0;
        default: break;
    }

    ctx->pc = 0x3d4aa0u;

    // 0x3d4aa0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3d4aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3d4aa4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3d4aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3d4aa8: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3D4AA8u;
    SET_GPR_U32(ctx, 31, 0x3D4AB0u);
    ctx->pc = 0x3D4AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4AA8u;
    // 0x3d4aac: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3D4AA8u, 0x3D4AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4AB0u;
label_3d4ab0:
    // 0x3d4ab0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x3D4AB0u;
    {
        const bool branch_taken_0x3d4ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D4AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4AB0u;
        // 0x3d4ab4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4ab0) {
            ctx->pc = 0x3D4B08u;
            return;
        }
    }
    ctx->pc = 0x3D4AB8u;
label_3d4ab8:
    // 0x3d4ab8: 0xc0f55b4  jal         func_3D56D0
    ctx->pc = 0x3D4AB8u;
    SET_GPR_U32(ctx, 31, 0x3D4AC0u);
    ctx->pc = 0x3D56D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D56D0u, 0x3D4AB8u, 0x3D4AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4AC0u;
label_3d4ac0:
    // 0x3d4ac0: 0xc0f56d0  jal         func_3D5B40
    ctx->pc = 0x3D4AC0u;
    SET_GPR_U32(ctx, 31, 0x3D4AC8u);
    ctx->pc = 0x3D5B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D5B40u, 0x3D4AC0u, 0x3D4AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4AC8u;
label_3d4ac8:
    // 0x3d4ac8: 0xc0f5c6a  jal         func_3D71A8
    ctx->pc = 0x3D4AC8u;
    SET_GPR_U32(ctx, 31, 0x3D4AD0u);
    ctx->pc = 0x3D4ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4AC8u;
    // 0x3d4acc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D71A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D71A8u, 0x3D4AC8u, 0x3D4AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4AD0u;
label_3d4ad0:
    // 0x3d4ad0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x3d4ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x3d4ad4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3d4ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d4ad8: 0xc0f576e  jal         func_3D5DB8
    ctx->pc = 0x3D4AD8u;
    SET_GPR_U32(ctx, 31, 0x3D4AE0u);
    ctx->pc = 0x3D4ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4AD8u;
    // 0x3d4adc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D5DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D5DB8u, 0x3D4AD8u, 0x3D4AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4AE0u;
label_3d4ae0:
    // 0x3d4ae0: 0xc0f55b4  jal         func_3D56D0
    ctx->pc = 0x3D4AE0u;
    SET_GPR_U32(ctx, 31, 0x3D4AE8u);
    ctx->pc = 0x3D56D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D56D0u, 0x3D4AE0u, 0x3D4AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4AE8u;
label_3d4ae8:
    // 0x3d4ae8: 0xc0f5730  jal         func_3D5CC0
    ctx->pc = 0x3D4AE8u;
    SET_GPR_U32(ctx, 31, 0x3D4AF0u);
    ctx->pc = 0x3D4AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4AE8u;
    // 0x3d4aec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D5CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D5CC0u, 0x3D4AE8u, 0x3D4AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4AF0u;
label_3d4af0:
    // 0x3d4af0: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x3D4AF0u;
    {
        const bool branch_taken_0x3d4af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d4af0) {
            ctx->pc = 0x3D4AE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d4ae0;
        }
    }
    ctx->pc = 0x3D4AF8u;
}
