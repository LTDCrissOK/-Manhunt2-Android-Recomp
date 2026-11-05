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

// Function: sub_003D6168
// Address: 0x3d6168 - 0x3d6198
void sub_003D6168_0x3d6168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D6168_0x3d6168");
#endif

    switch (ctx->pc) {
        case 0x3d618cu: goto label_3d618c;
        default: break;
    }

    ctx->pc = 0x3d6168u;

    // 0x3d6168: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3d6168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x3d616c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3d616cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3d6170: 0x24422470  addiu       $v0, $v0, 0x2470
    ctx->pc = 0x3d6170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9328));
    // 0x3d6174: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3d6174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3d6178: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x3d6178u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x3d617c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D617Cu;
    {
        const bool branch_taken_0x3d617c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D6180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D617Cu;
        // 0x3d6180: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d617c) {
            ctx->pc = 0x3D618Cu;
            goto label_3d618c;
        }
    }
    ctx->pc = 0x3D6184u;
    // 0x3d6184: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3D6184u;
    SET_GPR_U32(ctx, 31, 0x3D618Cu);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3D6184u, 0x3D618Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D618Cu;
label_3d618c:
    // 0x3d618c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3d618cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d6190: 0x3e00008  jr          $ra
    ctx->pc = 0x3D6190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D6194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6190u;
        // 0x3d6194: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D6190u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D6198u;
}
