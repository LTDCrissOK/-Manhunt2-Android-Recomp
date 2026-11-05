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

// Function: sub_003B2D68
// Address: 0x3b2d68 - 0x3b2e20
void sub_003B2D68_0x3b2d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B2D68_0x3b2d68");
#endif

    switch (ctx->pc) {
        case 0x3b2d98u: goto label_3b2d98;
        case 0x3b2dd8u: goto label_3b2dd8;
        case 0x3b2e08u: goto label_3b2e08;
        default: break;
    }

    ctx->pc = 0x3b2d68u;

    // 0x3b2d68: 0x3c080042  lui         $t0, 0x42
    ctx->pc = 0x3b2d68u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)66 << 16));
    // 0x3b2d6c: 0x8d024e50  lw          $v0, 0x4E50($t0)
    ctx->pc = 0x3b2d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x424E50u));
    // 0x3b2d70: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x3B2D70u;
    {
        const bool branch_taken_0x3b2d70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B2D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2D70u;
        // 0x3b2d74: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2d70) {
            ctx->pc = 0x3B2DFCu;
            goto label_3b2dfc;
        }
    }
    ctx->pc = 0x3B2D78u;
    // 0x3b2d78: 0x2403ffe0  addiu       $v1, $zero, -0x20
    ctx->pc = 0x3b2d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
    // 0x3b2d7c: 0x24425c9f  addiu       $v0, $v0, 0x5C9F
    ctx->pc = 0x3b2d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23711));
    // 0x3b2d80: 0x3c040042  lui         $a0, 0x42
    ctx->pc = 0x3b2d80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)66 << 16));
    // 0x3b2d84: 0x433024  and         $a2, $v0, $v1
    ctx->pc = 0x3b2d84u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3b2d88: 0x2447ffe1  addiu       $a3, $v0, -0x1F
    ctx->pc = 0x3b2d88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967265));
    // 0x3b2d8c: 0xac864e58  sw          $a2, 0x4E58($a0)
    ctx->pc = 0x3b2d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20056), GPR_U32(ctx, 6));
    // 0x3b2d90: 0x24050400  addiu       $a1, $zero, 0x400
    ctx->pc = 0x3b2d90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x3b2d94: 0x0  nop
    ctx->pc = 0x3b2d94u;
    // NOP
label_3b2d98:
    // 0x3b2d98: 0xe51021  addu        $v0, $a3, $a1
    ctx->pc = 0x3b2d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x3b2d9c: 0xc52021  addu        $a0, $a2, $a1
    ctx->pc = 0x3b2d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x3b2da0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3b2da0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b2da4: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3b2da4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3b2da8: 0x0  nop
    ctx->pc = 0x3b2da8u;
    // NOP
    // 0x3b2dac: 0x4a1fffa  bgez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3B2DACu;
    {
        const bool branch_taken_0x3b2dac = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x3B2DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2DACu;
        // 0x3b2db0: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2dac) {
            ctx->pc = 0x3B2D98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b2d98;
        }
    }
    ctx->pc = 0x3B2DB4u;
    // 0x3b2db4: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x3b2db4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x3b2db8: 0x2403ffe0  addiu       $v1, $zero, -0x20
    ctx->pc = 0x3b2db8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
    // 0x3b2dbc: 0x24426c27  addiu       $v0, $v0, 0x6C27
    ctx->pc = 0x3b2dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27687));
    // 0x3b2dc0: 0x3c040042  lui         $a0, 0x42
    ctx->pc = 0x3b2dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)66 << 16));
    // 0x3b2dc4: 0x433024  and         $a2, $v0, $v1
    ctx->pc = 0x3b2dc4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3b2dc8: 0x2447ffe1  addiu       $a3, $v0, -0x1F
    ctx->pc = 0x3b2dc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967265));
    // 0x3b2dcc: 0xac864e54  sw          $a2, 0x4E54($a0)
    ctx->pc = 0x3b2dccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20052), GPR_U32(ctx, 6));
    // 0x3b2dd0: 0x24051000  addiu       $a1, $zero, 0x1000
    ctx->pc = 0x3b2dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x3b2dd4: 0x0  nop
    ctx->pc = 0x3b2dd4u;
    // NOP
label_3b2dd8:
    // 0x3b2dd8: 0xe51021  addu        $v0, $a3, $a1
    ctx->pc = 0x3b2dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x3b2ddc: 0xc52021  addu        $a0, $a2, $a1
    ctx->pc = 0x3b2ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x3b2de0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3b2de0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b2de4: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3b2de4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3b2de8: 0x0  nop
    ctx->pc = 0x3b2de8u;
    // NOP
    // 0x3b2dec: 0x4a1fffa  bgez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3B2DECu;
    {
        const bool branch_taken_0x3b2dec = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x3B2DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2DECu;
        // 0x3b2df0: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2dec) {
            ctx->pc = 0x3B2DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b2dd8;
        }
    }
    ctx->pc = 0x3B2DF4u;
    // 0x3b2df4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3b2df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b2df8: 0xad024e50  sw          $v0, 0x4E50($t0)
    ctx->pc = 0x3b2df8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20048), GPR_U32(ctx, 2));
label_3b2dfc:
    // 0x3b2dfc: 0x3e00008  jr          $ra
    ctx->pc = 0x3B2DFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B2DFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B2E04u;
    // 0x3b2e04: 0x0  nop
    ctx->pc = 0x3b2e04u;
    // NOP
label_3b2e08:
    // 0x3b2e08: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x3b2e08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x3b2e0c: 0x24634e4c  addiu       $v1, $v1, 0x4E4C
    ctx->pc = 0x3b2e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20044));
    // 0x3b2e10: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3b2e10u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x424E4Cu));
    // 0x3b2e14: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3b2e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3b2e18: 0x3e00008  jr          $ra
    ctx->pc = 0x3B2E18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B2E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2E18u;
        // 0x3b2e1c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B2E18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B2E20u;
}
