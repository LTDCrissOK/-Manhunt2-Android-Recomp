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

// Function: sub_003D60D0
// Address: 0x3d60d0 - 0x3d6100
void sub_003D60D0_0x3d60d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D60D0_0x3d60d0");
#endif

    switch (ctx->pc) {
        case 0x3d60f4u: goto label_3d60f4;
        default: break;
    }

    ctx->pc = 0x3d60d0u;

    // 0x3d60d0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3d60d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x3d60d4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3d60d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3d60d8: 0x24422470  addiu       $v0, $v0, 0x2470
    ctx->pc = 0x3d60d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9328));
    // 0x3d60dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3d60dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3d60e0: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x3d60e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x3d60e4: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D60E4u;
    {
        const bool branch_taken_0x3d60e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D60E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D60E4u;
        // 0x3d60e8: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d60e4) {
            ctx->pc = 0x3D60F4u;
            goto label_3d60f4;
        }
    }
    ctx->pc = 0x3D60ECu;
    // 0x3d60ec: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3D60ECu;
    SET_GPR_U32(ctx, 31, 0x3D60F4u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3D60ECu, 0x3D60F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D60F4u;
label_3d60f4:
    // 0x3d60f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3d60f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d60f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3D60F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D60FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D60F8u;
        // 0x3d60fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D60F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D6100u;
}
