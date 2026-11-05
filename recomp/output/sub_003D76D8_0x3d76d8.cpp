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

// Function: sub_003D76D8
// Address: 0x3d76d8 - 0x3d7728
void sub_003D76D8_0x3d76d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D76D8_0x3d76d8");
#endif

    switch (ctx->pc) {
        case 0x3d76fcu: goto label_3d76fc;
        case 0x3d7714u: goto label_3d7714;
        default: break;
    }

    ctx->pc = 0x3d76d8u;

    // 0x3d76d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3d76d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3d76dc: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3d76dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x3d76e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3d76e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3d76e4: 0x8c627178  lw          $v0, 0x7178($v1)
    ctx->pc = 0x3d76e4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6C7178u));
    // 0x3d76e8: 0x24707178  addiu       $s0, $v1, 0x7178
    ctx->pc = 0x3d76e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 29048));
    // 0x3d76ec: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3D76ECu;
    {
        const bool branch_taken_0x3d76ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D76F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D76ECu;
        // 0x3d76f0: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d76ec) {
            ctx->pc = 0x3D7714u;
            goto label_3d7714;
        }
    }
    ctx->pc = 0x3D76F4u;
    // 0x3d76f4: 0xc0f5e2e  jal         func_3D78B8
    ctx->pc = 0x3D76F4u;
    SET_GPR_U32(ctx, 31, 0x3D76FCu);
    ctx->pc = 0x3D78B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D78B8u, 0x3D76F4u, 0x3D76FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D76FCu;
label_3d76fc:
    // 0x3d76fc: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3d76fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x3d7700: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x3d7700u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
    // 0x3d7704: 0x24a52688  addiu       $a1, $a1, 0x2688
    ctx->pc = 0x3d7704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9864));
    // 0x3d7708: 0x24c62d68  addiu       $a2, $a2, 0x2D68
    ctx->pc = 0x3d7708u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 11624));
    // 0x3d770c: 0xc0f5cb0  jal         func_3D72C0
    ctx->pc = 0x3D770Cu;
    SET_GPR_U32(ctx, 31, 0x3D7714u);
    ctx->pc = 0x3D7710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D770Cu;
    // 0x3d7710: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D72C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D72C0u, 0x3D770Cu, 0x3D7714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D7714u;
label_3d7714:
    // 0x3d7714: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3d7714u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d7718: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3d7718u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d771c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3d771cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d7720: 0x3e00008  jr          $ra
    ctx->pc = 0x3D7720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D7724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7720u;
        // 0x3d7724: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D7720u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D7728u;
}
