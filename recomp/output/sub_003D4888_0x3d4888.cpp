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

// Function: sub_003D4888
// Address: 0x3d4888 - 0x3d48e0
void sub_003D4888_0x3d4888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D4888_0x3d4888");
#endif

    switch (ctx->pc) {
        case 0x3d48a0u: goto label_3d48a0;
        case 0x3d48a8u: goto label_3d48a8;
        case 0x3d48b0u: goto label_3d48b0;
        case 0x3d48b8u: goto label_3d48b8;
        case 0x3d48c8u: goto label_3d48c8;
        case 0x3d48d0u: goto label_3d48d0;
        case 0x3d48d8u: goto label_3d48d8;
        default: break;
    }

    ctx->pc = 0x3d4888u;

    // 0x3d4888: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3d4888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3d488c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3d488cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3d4890: 0x10800017  beqz        $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x3D4890u;
    {
        const bool branch_taken_0x3d4890 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D4894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4890u;
        // 0x3d4894: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4890) {
            ctx->pc = 0x3D48F0u;
            return;
        }
    }
    ctx->pc = 0x3D4898u;
    // 0x3d4898: 0xc0b2524  jal         func_2C9490
    ctx->pc = 0x3D4898u;
    SET_GPR_U32(ctx, 31, 0x3D48A0u);
    ctx->pc = 0x2C9490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9490u, 0x3D4898u, 0x3D48A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D48A0u;
label_3d48a0:
    // 0x3d48a0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x3D48A0u;
    {
        const bool branch_taken_0x3d48a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D48A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D48A0u;
        // 0x3d48a4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d48a0) {
            ctx->pc = 0x3D48F4u;
            return;
        }
    }
    ctx->pc = 0x3D48A8u;
label_3d48a8:
    // 0x3d48a8: 0xc0f55b4  jal         func_3D56D0
    ctx->pc = 0x3D48A8u;
    SET_GPR_U32(ctx, 31, 0x3D48B0u);
    ctx->pc = 0x3D56D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D56D0u, 0x3D48A8u, 0x3D48B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D48B0u;
label_3d48b0:
    // 0x3d48b0: 0xc0f56d0  jal         func_3D5B40
    ctx->pc = 0x3D48B0u;
    SET_GPR_U32(ctx, 31, 0x3D48B8u);
    ctx->pc = 0x3D5B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D5B40u, 0x3D48B0u, 0x3D48B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D48B8u;
label_3d48b8:
    // 0x3d48b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3d48b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d48bc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3d48bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d48c0: 0xc0f576e  jal         func_3D5DB8
    ctx->pc = 0x3D48C0u;
    SET_GPR_U32(ctx, 31, 0x3D48C8u);
    ctx->pc = 0x3D48C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D48C0u;
    // 0x3d48c4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D5DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D5DB8u, 0x3D48C0u, 0x3D48C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D48C8u;
label_3d48c8:
    // 0x3d48c8: 0xc0f55b4  jal         func_3D56D0
    ctx->pc = 0x3D48C8u;
    SET_GPR_U32(ctx, 31, 0x3D48D0u);
    ctx->pc = 0x3D56D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D56D0u, 0x3D48C8u, 0x3D48D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D48D0u;
label_3d48d0:
    // 0x3d48d0: 0xc0f5730  jal         func_3D5CC0
    ctx->pc = 0x3D48D0u;
    SET_GPR_U32(ctx, 31, 0x3D48D8u);
    ctx->pc = 0x3D48D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D48D0u;
    // 0x3d48d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D5CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D5CC0u, 0x3D48D0u, 0x3D48D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D48D8u;
label_3d48d8:
    // 0x3d48d8: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x3D48D8u;
    {
        const bool branch_taken_0x3d48d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d48d8) {
            ctx->pc = 0x3D48C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d48c8;
        }
    }
    ctx->pc = 0x3D48E0u;
}
