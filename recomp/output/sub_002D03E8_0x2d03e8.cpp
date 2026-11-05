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

// Function: sub_002D03E8
// Address: 0x2d03e8 - 0x2d0430
void sub_002D03E8_0x2d03e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D03E8_0x2d03e8");
#endif

    switch (ctx->pc) {
        case 0x2d0410u: goto label_2d0410;
        default: break;
    }

    ctx->pc = 0x2d03e8u;

    // 0x2d03e8: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x2d03e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x2d03ec: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2d03ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x2d03f0: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x2d03f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x2d03f4: 0xac870010  sw          $a3, 0x10($a0)
    ctx->pc = 0x2d03f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 7));
    // 0x2d03f8: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x2d03f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x2d03fc: 0x18e0000a  blez        $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x2D03FCu;
    {
        const bool branch_taken_0x2d03fc = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x2D0400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D03FCu;
        // 0x2d0400: 0x3c030004  lui         $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d03fc) {
            ctx->pc = 0x2D0428u;
            goto label_2d0428;
        }
    }
    ctx->pc = 0x2D0404u;
    // 0x2d0404: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d0404u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0408: 0x3463ce40  ori         $v1, $v1, 0xCE40
    ctx->pc = 0x2d0408u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52800);
    // 0x2d040c: 0x0  nop
    ctx->pc = 0x2d040cu;
    // NOP
label_2d0410:
    // 0x2d0410: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2d0410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2d0414: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x2d0414u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2d0418: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2d0418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2d041c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2d041cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2d0420: 0x14e0fffb  bnez        $a3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2D0420u;
    {
        const bool branch_taken_0x2d0420 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D0424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0420u;
        // 0x2d0424: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0420) {
            ctx->pc = 0x2D0410u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d0410;
        }
    }
    ctx->pc = 0x2D0428u;
label_2d0428:
    // 0x2d0428: 0x3e00008  jr          $ra
    ctx->pc = 0x2D0428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D0428u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D0430u;
}
