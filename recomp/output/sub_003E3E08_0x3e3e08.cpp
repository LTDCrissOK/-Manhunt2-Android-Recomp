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

// Function: sub_003E3E08
// Address: 0x3e3e08 - 0x3e3e58
void sub_003E3E08_0x3e3e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E3E08_0x3e3e08");
#endif

    ctx->pc = 0x3e3e08u;

    // 0x3e3e08: 0x8c86000c  lw          $a2, 0xC($a0)
    ctx->pc = 0x3e3e08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3e3e0c: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x3e3e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x3e3e10: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x3e3e10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x3e3e14: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x3e3e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x3e3e18: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3E3E18u;
    {
        const bool branch_taken_0x3e3e18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e3e18) {
            ctx->pc = 0x3E3E1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E3E18u;
            // 0x3e3e1c: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E3E20u;
            goto label_3e3e20;
        }
    }
    ctx->pc = 0x3E3E20u;
label_3e3e20:
    // 0x3e3e20: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x3e3e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3e3e24: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x3e3e24u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x3e3e28: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x3e3e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3e3e2c: 0x54830003  bnel        $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E3E2Cu;
    {
        const bool branch_taken_0x3e3e2c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3e3e2c) {
            ctx->pc = 0x3E3E30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E3E2Cu;
            // 0x3e3e30: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E3E3Cu;
            goto label_3e3e3c;
        }
    }
    ctx->pc = 0x3E3E34u;
    // 0x3e3e34: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3E3E34u;
    {
        const bool branch_taken_0x3e3e34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E3E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3E34u;
        // 0x3e3e38: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3e34) {
            ctx->pc = 0x3E3E4Cu;
            goto label_3e3e4c;
        }
    }
    ctx->pc = 0x3E3E3Cu;
label_3e3e3c:
    // 0x3e3e3c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3e3e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x3e3e40: 0x54820002  bnel        $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3E3E40u;
    {
        const bool branch_taken_0x3e3e40 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x3e3e40) {
            ctx->pc = 0x3E3E44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E3E40u;
            // 0x3e3e44: 0xac66000c  sw          $a2, 0xC($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E3E4Cu;
            goto label_3e3e4c;
        }
    }
    ctx->pc = 0x3E3E48u;
    // 0x3e3e48: 0xac660008  sw          $a2, 0x8($v1)
    ctx->pc = 0x3e3e48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
label_3e3e4c:
    // 0x3e3e4c: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x3e3e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
    // 0x3e3e50: 0x3e00008  jr          $ra
    ctx->pc = 0x3E3E50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E3E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3E50u;
        // 0x3e3e54: 0xac860004  sw          $a2, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E3E50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E3E58u;
}
