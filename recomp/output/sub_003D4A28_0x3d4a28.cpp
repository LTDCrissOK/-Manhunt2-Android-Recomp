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

// Function: sub_003D4A28
// Address: 0x3d4a28 - 0x3d4a80
void sub_003D4A28_0x3d4a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D4A28_0x3d4a28");
#endif

    switch (ctx->pc) {
        case 0x3d4a40u: goto label_3d4a40;
        case 0x3d4a48u: goto label_3d4a48;
        case 0x3d4a50u: goto label_3d4a50;
        case 0x3d4a58u: goto label_3d4a58;
        case 0x3d4a68u: goto label_3d4a68;
        case 0x3d4a70u: goto label_3d4a70;
        case 0x3d4a78u: goto label_3d4a78;
        default: break;
    }

    ctx->pc = 0x3d4a28u;

    // 0x3d4a28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3d4a28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3d4a2c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3d4a2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3d4a30: 0x10800017  beqz        $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x3D4A30u;
    {
        const bool branch_taken_0x3d4a30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D4A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4A30u;
        // 0x3d4a34: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4a30) {
            ctx->pc = 0x3D4A90u;
            return;
        }
    }
    ctx->pc = 0x3D4A38u;
    // 0x3d4a38: 0xc0b2524  jal         func_2C9490
    ctx->pc = 0x3D4A38u;
    SET_GPR_U32(ctx, 31, 0x3D4A40u);
    ctx->pc = 0x2C9490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9490u, 0x3D4A38u, 0x3D4A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4A40u;
label_3d4a40:
    // 0x3d4a40: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x3D4A40u;
    {
        const bool branch_taken_0x3d4a40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D4A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4A40u;
        // 0x3d4a44: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4a40) {
            ctx->pc = 0x3D4A94u;
            return;
        }
    }
    ctx->pc = 0x3D4A48u;
label_3d4a48:
    // 0x3d4a48: 0xc0f55b4  jal         func_3D56D0
    ctx->pc = 0x3D4A48u;
    SET_GPR_U32(ctx, 31, 0x3D4A50u);
    ctx->pc = 0x3D56D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D56D0u, 0x3D4A48u, 0x3D4A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4A50u;
label_3d4a50:
    // 0x3d4a50: 0xc0f56d0  jal         func_3D5B40
    ctx->pc = 0x3D4A50u;
    SET_GPR_U32(ctx, 31, 0x3D4A58u);
    ctx->pc = 0x3D5B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D5B40u, 0x3D4A50u, 0x3D4A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4A58u;
label_3d4a58:
    // 0x3d4a58: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3d4a58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d4a5c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3d4a5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d4a60: 0xc0f576e  jal         func_3D5DB8
    ctx->pc = 0x3D4A60u;
    SET_GPR_U32(ctx, 31, 0x3D4A68u);
    ctx->pc = 0x3D4A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4A60u;
    // 0x3d4a64: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D5DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D5DB8u, 0x3D4A60u, 0x3D4A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4A68u;
label_3d4a68:
    // 0x3d4a68: 0xc0f55b4  jal         func_3D56D0
    ctx->pc = 0x3D4A68u;
    SET_GPR_U32(ctx, 31, 0x3D4A70u);
    ctx->pc = 0x3D56D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D56D0u, 0x3D4A68u, 0x3D4A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4A70u;
label_3d4a70:
    // 0x3d4a70: 0xc0f5730  jal         func_3D5CC0
    ctx->pc = 0x3D4A70u;
    SET_GPR_U32(ctx, 31, 0x3D4A78u);
    ctx->pc = 0x3D4A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4A70u;
    // 0x3d4a74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D5CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D5CC0u, 0x3D4A70u, 0x3D4A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4A78u;
label_3d4a78:
    // 0x3d4a78: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x3D4A78u;
    {
        const bool branch_taken_0x3d4a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d4a78) {
            ctx->pc = 0x3D4A68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d4a68;
        }
    }
    ctx->pc = 0x3D4A80u;
}
