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

// Function: sub_003D7DE8
// Address: 0x3d7de8 - 0x3d7e38
void sub_003D7DE8_0x3d7de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D7DE8_0x3d7de8");
#endif

    switch (ctx->pc) {
        case 0x3d7e28u: goto label_3d7e28;
        default: break;
    }

    ctx->pc = 0x3d7de8u;

    // 0x3d7de8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3d7de8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3d7dec: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x3d7decu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d7df0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3d7df0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3d7df4: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x3D7DF4u;
    {
        const bool branch_taken_0x3d7df4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D7DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7DF4u;
        // 0x3d7df8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7df4) {
            ctx->pc = 0x3D7E28u;
            goto label_3d7e28;
        }
    }
    ctx->pc = 0x3D7DFCu;
    // 0x3d7dfc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3d7dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3d7e00: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x3d7e00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x3d7e04: 0x3c08003d  lui         $t0, 0x3D
    ctx->pc = 0x3d7e04u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)61 << 16));
    // 0x3d7e08: 0x24a58608  addiu       $a1, $a1, -0x79F8
    ctx->pc = 0x3d7e08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936072));
    // 0x3d7e0c: 0x84470000  lh          $a3, 0x0($v0)
    ctx->pc = 0x3d7e0cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3d7e10: 0x250878b8  addiu       $t0, $t0, 0x78B8
    ctx->pc = 0x3d7e10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 30904));
    // 0x3d7e14: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3d7e14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3d7e18: 0x60482d  daddu       $t1, $v1, $zero
    ctx->pc = 0x3d7e18u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d7e1c: 0x673821  addu        $a3, $v1, $a3
    ctx->pc = 0x3d7e1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x3d7e20: 0xc0f5fc0  jal         func_3D7F00
    ctx->pc = 0x3D7E20u;
    SET_GPR_U32(ctx, 31, 0x3D7E28u);
    ctx->pc = 0x3D7E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D7E20u;
    // 0x3d7e24: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D7F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D7F00u, 0x3D7E20u, 0x3D7E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D7E28u;
label_3d7e28:
    // 0x3d7e28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3d7e28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d7e2c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3d7e2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3d7e30: 0x3e00008  jr          $ra
    ctx->pc = 0x3D7E30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D7E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7E30u;
        // 0x3d7e34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D7E30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D7E38u;
}
