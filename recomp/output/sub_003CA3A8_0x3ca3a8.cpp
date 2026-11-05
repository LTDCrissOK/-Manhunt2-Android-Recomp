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

// Function: sub_003CA3A8
// Address: 0x3ca3a8 - 0x3ca410
void sub_003CA3A8_0x3ca3a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CA3A8_0x3ca3a8");
#endif

    switch (ctx->pc) {
        case 0x3ca3d8u: goto label_3ca3d8;
        case 0x3ca3e0u: goto label_3ca3e0;
        case 0x3ca3f8u: goto label_3ca3f8;
        default: break;
    }

    ctx->pc = 0x3ca3a8u;

    // 0x3ca3a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3ca3a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3ca3ac: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3ca3acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3ca3b0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3ca3b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3ca3b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3ca3b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ca3b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3ca3b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3ca3bc: 0x40106000  mfc0        $s0, Status
    ctx->pc = 0x3ca3bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ctx->cop0_status);
    // 0x3ca3c0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3ca3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3ca3c4: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x3ca3c4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x3ca3c8: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3CA3C8u;
    {
        const bool branch_taken_0x3ca3c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ca3c8) {
            ctx->pc = 0x3CA3D8u;
            goto label_3ca3d8;
        }
    }
    ctx->pc = 0x3CA3D0u;
    // 0x3ca3d0: 0xc0f4006  jal         func_3D0018
    ctx->pc = 0x3CA3D0u;
    SET_GPR_U32(ctx, 31, 0x3CA3D8u);
    ctx->pc = 0x3D0018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0018u, 0x3CA3D0u, 0x3CA3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA3D8u;
label_3ca3d8:
    // 0x3ca3d8: 0xc0f25bc  jal         func_3C96F0
    ctx->pc = 0x3CA3D8u;
    SET_GPR_U32(ctx, 31, 0x3CA3E0u);
    ctx->pc = 0x3CA3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CA3D8u;
    // 0x3ca3dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C96F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C96F0u, 0x3CA3D8u, 0x3CA3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA3E0u;
label_3ca3e0:
    // 0x3ca3e0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3ca3e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ca3e4: 0xf  sync
    ctx->pc = 0x3ca3e4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3ca3e8: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3CA3E8u;
    {
        const bool branch_taken_0x3ca3e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CA3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA3E8u;
        // 0x3ca3ec: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ca3e8) {
            ctx->pc = 0x3CA3FCu;
            goto label_3ca3fc;
        }
    }
    ctx->pc = 0x3CA3F0u;
    // 0x3ca3f0: 0xc0f401a  jal         func_3D0068
    ctx->pc = 0x3CA3F0u;
    SET_GPR_U32(ctx, 31, 0x3CA3F8u);
    ctx->pc = 0x3D0068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0068u, 0x3CA3F0u, 0x3CA3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA3F8u;
label_3ca3f8:
    // 0x3ca3f8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3ca3f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ca3fc:
    // 0x3ca3fc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3ca3fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3ca400: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3ca400u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ca404: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3ca404u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ca408: 0x3e00008  jr          $ra
    ctx->pc = 0x3CA408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CA40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA408u;
        // 0x3ca40c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CA408u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CA410u;
}
