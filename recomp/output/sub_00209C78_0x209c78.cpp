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

// Function: sub_00209C78
// Address: 0x209c78 - 0x209d00
void sub_00209C78_0x209c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00209C78_0x209c78");
#endif

    switch (ctx->pc) {
        case 0x209cc0u: goto label_209cc0;
        default: break;
    }

    ctx->pc = 0x209c78u;

    // 0x209c78: 0x3c0a0048  lui         $t2, 0x48
    ctx->pc = 0x209c78u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)72 << 16));
    // 0x209c7c: 0x30e900ff  andi        $t1, $a3, 0xFF
    ctx->pc = 0x209c7cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x209c80: 0x8d432b64  lw          $v1, 0x2B64($t2)
    ctx->pc = 0x209c80u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x482B64u));
    // 0x209c84: 0x3c0b0048  lui         $t3, 0x48
    ctx->pc = 0x209c84u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)72 << 16));
    // 0x209c88: 0x8d622b5c  lw          $v0, 0x2B5C($t3)
    ctx->pc = 0x209c88u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B5Cu));
    // 0x209c8c: 0x25280001  addiu       $t0, $t1, 0x1
    ctx->pc = 0x209c8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x209c90: 0x33880  sll         $a3, $v1, 2
    ctx->pc = 0x209c90u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x209c94: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x209c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x209c98: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x209c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x209c9c: 0xad432b64  sw          $v1, 0x2B64($t2)
    ctx->pc = 0x209c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 11108), GPR_U32(ctx, 3));
    // 0x209ca0: 0xa0480001  sb          $t0, 0x1($v0)
    ctx->pc = 0x209ca0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 8));
    // 0x209ca4: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x209ca4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x209ca8: 0x11200010  beqz        $t1, . + 4 + (0x10 << 2)
    ctx->pc = 0x209CA8u;
    {
        const bool branch_taken_0x209ca8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x209CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209CA8u;
        // 0x209cac: 0xa4450002  sh          $a1, 0x2($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209ca8) {
            ctx->pc = 0x209CECu;
            goto label_209cec;
        }
    }
    ctx->pc = 0x209CB0u;
    // 0x209cb0: 0x140402d  daddu       $t0, $t2, $zero
    ctx->pc = 0x209cb0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209cb4: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x209cb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209cb8: 0x160502d  daddu       $t2, $t3, $zero
    ctx->pc = 0x209cb8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209cbc: 0x0  nop
    ctx->pc = 0x209cbcu;
    // NOP
label_209cc0:
    // 0x209cc0: 0x8d032b64  lw          $v1, 0x2B64($t0)
    ctx->pc = 0x209cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 11108)));
    // 0x209cc4: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x209cc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x209cc8: 0x8d442b5c  lw          $a0, 0x2B5C($t2)
    ctx->pc = 0x209cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 11100)));
    // 0x209ccc: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x209cccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x209cd0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x209cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x209cd4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x209cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x209cd8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x209cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x209cdc: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x209cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x209ce0: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x209ce0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x209ce4: 0x14e0fff6  bnez        $a3, . + 4 + (-0xA << 2)
    ctx->pc = 0x209CE4u;
    {
        const bool branch_taken_0x209ce4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x209CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209CE4u;
        // 0x209ce8: 0xad032b64  sw          $v1, 0x2B64($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 11108), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209ce4) {
            ctx->pc = 0x209CC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_209cc0;
        }
    }
    ctx->pc = 0x209CECu;
label_209cec:
    // 0x209cec: 0x3e00008  jr          $ra
    ctx->pc = 0x209CECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209CECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x209CF4u;
    // 0x209cf4: 0x0  nop
    ctx->pc = 0x209cf4u;
    // NOP
    // 0x209cf8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x209cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x209cfc: 0x0  nop
    ctx->pc = 0x209cfcu;
    // NOP
    ctx->pc = 0x209d00u;
}
