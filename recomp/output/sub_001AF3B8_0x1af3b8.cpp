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

// Function: sub_001AF3B8
// Address: 0x1af3b8 - 0x1af408
void sub_001AF3B8_0x1af3b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AF3B8_0x1af3b8");
#endif

    switch (ctx->pc) {
        case 0x1af3ccu: goto label_1af3cc;
        case 0x1af3e0u: goto label_1af3e0;
        case 0x1af3f8u: goto label_1af3f8;
        default: break;
    }

    ctx->pc = 0x1af3b8u;

    // 0x1af3b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1af3b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1af3bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1af3bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1af3c0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1af3c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1af3c4: 0xc06c11c  jal         func_1B0470
    ctx->pc = 0x1AF3C4u;
    SET_GPR_U32(ctx, 31, 0x1AF3CCu);
    ctx->pc = 0x1AF3C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF3C4u;
    // 0x1af3c8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0470u, 0x1AF3C4u, 0x1AF3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF3CCu;
label_1af3cc:
    // 0x1af3cc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1af3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1af3d0: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AF3D0u;
    {
        const bool branch_taken_0x1af3d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1AF3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF3D0u;
        // 0x1af3d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af3d0) {
            ctx->pc = 0x1AF3E8u;
            goto label_1af3e8;
        }
    }
    ctx->pc = 0x1AF3D8u;
    // 0x1af3d8: 0xc06bd02  jal         func_1AF408
    ctx->pc = 0x1AF3D8u;
    SET_GPR_U32(ctx, 31, 0x1AF3E0u);
    ctx->pc = 0x1AF3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF3D8u;
    // 0x1af3dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF408u, 0x1AF3D8u, 0x1AF3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF3E0u;
label_1af3e0:
    // 0x1af3e0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1AF3E0u;
    {
        const bool branch_taken_0x1af3e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF3E0u;
        // 0x1af3e4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af3e0) {
            ctx->pc = 0x1AF3FCu;
            goto label_1af3fc;
        }
    }
    ctx->pc = 0x1AF3E8u;
label_1af3e8:
    // 0x1af3e8: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1af3e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1af3ec: 0x24060119  addiu       $a2, $zero, 0x119
    ctx->pc = 0x1af3ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 281));
    // 0x1af3f0: 0xc06b808  jal         func_1AE020
    ctx->pc = 0x1AF3F0u;
    SET_GPR_U32(ctx, 31, 0x1AF3F8u);
    ctx->pc = 0x1AF3F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF3F0u;
    // 0x1af3f4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE020u, 0x1AF3F0u, 0x1AF3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF3F8u;
label_1af3f8:
    // 0x1af3f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1af3f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1af3fc:
    // 0x1af3fc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1af3fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1af400: 0x3e00008  jr          $ra
    ctx->pc = 0x1AF400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF400u;
        // 0x1af404: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF400u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AF408u;
}
