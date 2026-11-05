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

// Function: sub_0013E3B0
// Address: 0x13e3b0 - 0x13e3f0
void sub_0013E3B0_0x13e3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013E3B0_0x13e3b0");
#endif

    switch (ctx->pc) {
        case 0x13e3c8u: goto label_13e3c8;
        case 0x13e3dcu: goto label_13e3dc;
        default: break;
    }

    ctx->pc = 0x13e3b0u;

    // 0x13e3b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13e3b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13e3b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13e3b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13e3b8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x13e3b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x13e3bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13e3bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e3c0: 0xc05a5fa  jal         func_1697E8
    ctx->pc = 0x13E3C0u;
    SET_GPR_U32(ctx, 31, 0x13E3C8u);
    ctx->pc = 0x13E3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E3C0u;
    // 0x13e3c4: 0x8e04005c  lw          $a0, 0x5C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1697E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1697E8u, 0x13E3C0u, 0x13E3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E3C8u;
label_13e3c8:
    // 0x13e3c8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x13E3C8u;
    {
        const bool branch_taken_0x13e3c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e3c8) {
            ctx->pc = 0x13E3CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13E3C8u;
            // 0x13e3cc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13E3E0u;
            goto label_13e3e0;
        }
    }
    ctx->pc = 0x13E3D0u;
    // 0x13e3d0: 0x8e040058  lw          $a0, 0x58($s0)
    ctx->pc = 0x13e3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x13e3d4: 0xc05e530  jal         func_1794C0
    ctx->pc = 0x13E3D4u;
    SET_GPR_U32(ctx, 31, 0x13E3DCu);
    ctx->pc = 0x13E3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E3D4u;
    // 0x13e3d8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1794C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1794C0u, 0x13E3D4u, 0x13E3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E3DCu;
label_13e3dc:
    // 0x13e3dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13e3dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13e3e0:
    // 0x13e3e0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x13e3e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13e3e4: 0x3e00008  jr          $ra
    ctx->pc = 0x13E3E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13E3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E3E4u;
        // 0x13e3e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E3E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13E3ECu;
    // 0x13e3ec: 0x0  nop
    ctx->pc = 0x13e3ecu;
    // NOP
    ctx->pc = 0x13e3f0u;
}
