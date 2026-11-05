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

// Function: sub_0033DB70
// Address: 0x33db70 - 0x33dba8
void sub_0033DB70_0x33db70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033DB70_0x33db70");
#endif

    ctx->pc = 0x33db70u;

    // 0x33db70: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x33db70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x33db74: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x33DB74u;
    {
        const bool branch_taken_0x33db74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33DB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DB74u;
        // 0x33db78: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33db74) {
            ctx->pc = 0x33DB94u;
            goto label_33db94;
        }
    }
    ctx->pc = 0x33DB7Cu;
    // 0x33db7c: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x33db7cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33db80: 0x38420010  xori        $v0, $v0, 0x10
    ctx->pc = 0x33db80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)16);
    // 0x33db84: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x33DB84u;
    {
        const bool branch_taken_0x33db84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33DB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DB84u;
        // 0x33db88: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33db84) {
            ctx->pc = 0x33DB98u;
            goto label_33db98;
        }
    }
    ctx->pc = 0x33DB8Cu;
    // 0x33db8c: 0x3e00008  jr          $ra
    ctx->pc = 0x33DB8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33DB8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33DB94u;
label_33db94:
    // 0x33db94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33db94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33db98:
    // 0x33db98: 0x8c832cc0  lw          $v1, 0x2CC0($a0)
    ctx->pc = 0x33db98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11456)));
    // 0x33db9c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x33db9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x33dba0: 0x3e00008  jr          $ra
    ctx->pc = 0x33DBA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33DBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DBA0u;
        // 0x33dba4: 0xac832cc0  sw          $v1, 0x2CC0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 11456), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33DBA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33DBA8u;
}
