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

// Function: sub_002D2EE8
// Address: 0x2d2ee8 - 0x2d2f18
void sub_002D2EE8_0x2d2ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D2EE8_0x2d2ee8");
#endif

    switch (ctx->pc) {
        case 0x2d2f0cu: goto label_2d2f0c;
        default: break;
    }

    ctx->pc = 0x2d2ee8u;

    // 0x2d2ee8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d2ee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d2eec: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x2d2eecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x2d2ef0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d2ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d2ef4: 0x24423d98  addiu       $v0, $v0, 0x3D98
    ctx->pc = 0x2d2ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15768));
    // 0x2d2ef8: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x2d2ef8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x2d2efc: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D2EFCu;
    {
        const bool branch_taken_0x2d2efc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2EFCu;
        // 0x2d2f00: 0xac820018  sw          $v0, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2efc) {
            ctx->pc = 0x2D2F0Cu;
            goto label_2d2f0c;
        }
    }
    ctx->pc = 0x2D2F04u;
    // 0x2d2f04: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x2D2F04u;
    SET_GPR_U32(ctx, 31, 0x2D2F0Cu);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x2D2F04u, 0x2D2F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2F0Cu;
label_2d2f0c:
    // 0x2d2f0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d2f0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d2f10: 0x3e00008  jr          $ra
    ctx->pc = 0x2D2F10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D2F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2F10u;
        // 0x2d2f14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D2F10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D2F18u;
}
