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

// Function: sub_001C3DF0
// Address: 0x1c3df0 - 0x1c3e20
void sub_001C3DF0_0x1c3df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C3DF0_0x1c3df0");
#endif

    ctx->pc = 0x1c3df0u;

    // 0x1c3df0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c3df0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1c3df4: 0x14a20008  bne         $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C3DF4u;
    {
        const bool branch_taken_0x1c3df4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c3df4) {
            ctx->pc = 0x1C3E18u;
            goto label_1c3e18;
        }
    }
    ctx->pc = 0x1C3DFCu;
    // 0x1c3dfc: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C3DFCu;
    {
        const bool branch_taken_0x1c3dfc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3DFCu;
        // 0x1c3e00: 0x3c030049  lui         $v1, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3dfc) {
            ctx->pc = 0x1C3E18u;
            goto label_1c3e18;
        }
    }
    ctx->pc = 0x1C3E04u;
    // 0x1c3e04: 0x2462f180  addiu       $v0, $v1, -0xE80
    ctx->pc = 0x1c3e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963584));
    // 0x1c3e08: 0xac60f180  sw          $zero, -0xE80($v1)
    ctx->pc = 0x1c3e08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294963584), GPR_U32(ctx, 0));
    // 0x1c3e0c: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1c3e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x1c3e10: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1c3e10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1c3e14: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1c3e14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_1c3e18:
    // 0x1c3e18: 0x3e00008  jr          $ra
    ctx->pc = 0x1C3E18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C3E18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C3E20u;
}
