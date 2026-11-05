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

// Function: sub_003CA410
// Address: 0x3ca410 - 0x3ca478
void sub_003CA410_0x3ca410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CA410_0x3ca410");
#endif

    switch (ctx->pc) {
        case 0x3ca440u: goto label_3ca440;
        case 0x3ca448u: goto label_3ca448;
        case 0x3ca460u: goto label_3ca460;
        default: break;
    }

    ctx->pc = 0x3ca410u;

    // 0x3ca410: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3ca410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3ca414: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3ca414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3ca418: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3ca418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3ca41c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3ca41cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ca420: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3ca420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3ca424: 0x40106000  mfc0        $s0, Status
    ctx->pc = 0x3ca424u;
    SET_GPR_S32(ctx, 16, (int32_t)ctx->cop0_status);
    // 0x3ca428: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3ca428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3ca42c: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x3ca42cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x3ca430: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3CA430u;
    {
        const bool branch_taken_0x3ca430 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ca430) {
            ctx->pc = 0x3CA440u;
            goto label_3ca440;
        }
    }
    ctx->pc = 0x3CA438u;
    // 0x3ca438: 0xc0f4006  jal         func_3D0018
    ctx->pc = 0x3CA438u;
    SET_GPR_U32(ctx, 31, 0x3CA440u);
    ctx->pc = 0x3D0018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0018u, 0x3CA438u, 0x3CA440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA440u;
label_3ca440:
    // 0x3ca440: 0xc0f25b8  jal         func_3C96E0
    ctx->pc = 0x3CA440u;
    SET_GPR_U32(ctx, 31, 0x3CA448u);
    ctx->pc = 0x3CA444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CA440u;
    // 0x3ca444: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C96E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C96E0u, 0x3CA440u, 0x3CA448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA448u;
label_3ca448:
    // 0x3ca448: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3ca448u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ca44c: 0xf  sync
    ctx->pc = 0x3ca44cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3ca450: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3CA450u;
    {
        const bool branch_taken_0x3ca450 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CA454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA450u;
        // 0x3ca454: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ca450) {
            ctx->pc = 0x3CA464u;
            goto label_3ca464;
        }
    }
    ctx->pc = 0x3CA458u;
    // 0x3ca458: 0xc0f401a  jal         func_3D0068
    ctx->pc = 0x3CA458u;
    SET_GPR_U32(ctx, 31, 0x3CA460u);
    ctx->pc = 0x3D0068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0068u, 0x3CA458u, 0x3CA460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA460u;
label_3ca460:
    // 0x3ca460: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3ca460u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ca464:
    // 0x3ca464: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3ca464u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3ca468: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3ca468u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ca46c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3ca46cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ca470: 0x3e00008  jr          $ra
    ctx->pc = 0x3CA470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CA474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA470u;
        // 0x3ca474: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CA470u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CA478u;
}
