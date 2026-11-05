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

// Function: sub_00356E68
// Address: 0x356e68 - 0x356ec0
void sub_00356E68_0x356e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00356E68_0x356e68");
#endif

    switch (ctx->pc) {
        case 0x356e88u: goto label_356e88;
        default: break;
    }

    ctx->pc = 0x356e68u;

    // 0x356e68: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x356e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x356e6c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x356E6Cu;
    {
        const bool branch_taken_0x356e6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x356E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356E6Cu;
        // 0x356e70: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356e6c) {
            ctx->pc = 0x356EB0u;
            goto label_356eb0;
        }
    }
    ctx->pc = 0x356E74u;
    // 0x356e74: 0x2442ca30  addiu       $v0, $v0, -0x35D0
    ctx->pc = 0x356e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953520));
    // 0x356e78: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x356e78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356e7c: 0x24a6006c  addiu       $a2, $a1, 0x6C
    ctx->pc = 0x356e7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 108));
    // 0x356e80: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x356e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x356e84: 0x0  nop
    ctx->pc = 0x356e84u;
    // NOP
label_356e88:
    // 0x356e88: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x356e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x356e8c: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x356E8Cu;
    {
        const bool branch_taken_0x356e8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x356e8c) {
            ctx->pc = 0x356E90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x356E8Cu;
            // 0x356e90: 0x24a5000c  addiu       $a1, $a1, 0xC (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x356EA4u;
            goto label_356ea4;
        }
    }
    ctx->pc = 0x356E94u;
    // 0x356e94: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x356e94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x356e98: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x356E98u;
    {
        const bool branch_taken_0x356e98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x356e98) {
            ctx->pc = 0x356E9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x356E98u;
            // 0x356e9c: 0xa0a00000  sb          $zero, 0x0($a1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x356EA0u;
            goto label_356ea0;
        }
    }
    ctx->pc = 0x356EA0u;
label_356ea0:
    // 0x356ea0: 0x24a5000c  addiu       $a1, $a1, 0xC
    ctx->pc = 0x356ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
label_356ea4:
    // 0x356ea4: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x356ea4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x356ea8: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x356EA8u;
    {
        const bool branch_taken_0x356ea8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x356ea8) {
            ctx->pc = 0x356EACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x356EA8u;
            // 0x356eac: 0x8ca30008  lw          $v1, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x356E88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_356e88;
        }
    }
    ctx->pc = 0x356EB0u;
label_356eb0:
    // 0x356eb0: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x356eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x356eb4: 0x3e00008  jr          $ra
    ctx->pc = 0x356EB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x356EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356EB4u;
        // 0x356eb8: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x356EB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x356EBCu;
    // 0x356ebc: 0x0  nop
    ctx->pc = 0x356ebcu;
    // NOP
    ctx->pc = 0x356ec0u;
}
