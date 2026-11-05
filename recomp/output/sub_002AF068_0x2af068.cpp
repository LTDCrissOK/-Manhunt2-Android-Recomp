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

// Function: sub_002AF068
// Address: 0x2af068 - 0x2af0c0
void sub_002AF068_0x2af068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AF068_0x2af068");
#endif

    ctx->pc = 0x2af068u;

    // 0x2af068: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2af068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2af06c: 0x8c43aa80  lw          $v1, -0x5580($v0)
    ctx->pc = 0x2af06cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FAA80u));
    // 0x2af070: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AF070u;
    {
        const bool branch_taken_0x2af070 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF070u;
        // 0x2af074: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af070) {
            ctx->pc = 0x2AF088u;
            goto label_2af088;
        }
    }
    ctx->pc = 0x2AF078u;
    // 0x2af078: 0x8c44bd50  lw          $a0, -0x42B0($v0)
    ctx->pc = 0x2af078u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950224)));
    // 0x2af07c: 0x8c8311c0  lw          $v1, 0x11C0($a0)
    ctx->pc = 0x2af07cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4544)));
    // 0x2af080: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x2af080u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x2af084: 0xac8311c0  sw          $v1, 0x11C0($a0)
    ctx->pc = 0x2af084u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4544), GPR_U32(ctx, 3));
label_2af088:
    // 0x2af088: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2af088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2af08c: 0x9043aa84  lbu         $v1, -0x557C($v0)
    ctx->pc = 0x2af08cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3FAA84u));
    // 0x2af090: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AF090u;
    {
        const bool branch_taken_0x2af090 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF090u;
        // 0x2af094: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af090) {
            ctx->pc = 0x2AF0A8u;
            goto label_2af0a8;
        }
    }
    ctx->pc = 0x2AF098u;
    // 0x2af098: 0x8c44bd50  lw          $a0, -0x42B0($v0)
    ctx->pc = 0x2af098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950224)));
    // 0x2af09c: 0x8c8311c0  lw          $v1, 0x11C0($a0)
    ctx->pc = 0x2af09cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4544)));
    // 0x2af0a0: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x2af0a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x2af0a4: 0xac8311c0  sw          $v1, 0x11C0($a0)
    ctx->pc = 0x2af0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4544), GPR_U32(ctx, 3));
label_2af0a8:
    // 0x2af0a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2AF0A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AF0A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AF0B0u;
    // 0x2af0b0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2af0b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2af0b4: 0x0  nop
    ctx->pc = 0x2af0b4u;
    // NOP
    // 0x2af0b8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2af0b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2af0bc: 0x0  nop
    ctx->pc = 0x2af0bcu;
    // NOP
    ctx->pc = 0x2af0c0u;
}
