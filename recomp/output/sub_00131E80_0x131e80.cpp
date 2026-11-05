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

// Function: sub_00131E80
// Address: 0x131e80 - 0x131ed8
void sub_00131E80_0x131e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00131E80_0x131e80");
#endif

    ctx->pc = 0x131e80u;

    // 0x131e80: 0x8c820218  lw          $v0, 0x218($a0)
    ctx->pc = 0x131e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 536)));
    // 0x131e84: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x131e84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x131e88: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x131e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x131e8c: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x131e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x131e90: 0x8c830218  lw          $v1, 0x218($a0)
    ctx->pc = 0x131e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 536)));
    // 0x131e94: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x131e94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x131e98: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x131e98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x131e9c: 0xac60001c  sw          $zero, 0x1C($v1)
    ctx->pc = 0x131e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 0));
    // 0x131ea0: 0x8c820218  lw          $v0, 0x218($a0)
    ctx->pc = 0x131ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 536)));
    // 0x131ea4: 0x8ca60008  lw          $a2, 0x8($a1)
    ctx->pc = 0x131ea4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x131ea8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x131ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x131eac: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x131eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x131eb0: 0xac460020  sw          $a2, 0x20($v0)
    ctx->pc = 0x131eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 6));
    // 0x131eb4: 0x8c830218  lw          $v1, 0x218($a0)
    ctx->pc = 0x131eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 536)));
    // 0x131eb8: 0x8ca6000c  lw          $a2, 0xC($a1)
    ctx->pc = 0x131eb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x131ebc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x131ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x131ec0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x131ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x131ec4: 0xac660024  sw          $a2, 0x24($v1)
    ctx->pc = 0x131ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 6));
    // 0x131ec8: 0x8c820218  lw          $v0, 0x218($a0)
    ctx->pc = 0x131ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 536)));
    // 0x131ecc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x131eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x131ed0: 0x3e00008  jr          $ra
    ctx->pc = 0x131ED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x131ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131ED0u;
        // 0x131ed4: 0xac820218  sw          $v0, 0x218($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 536), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x131ED0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x131ED8u;
}
