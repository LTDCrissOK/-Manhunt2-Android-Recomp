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

// Function: sub_003CAA80
// Address: 0x3caa80 - 0x3caac0
void sub_003CAA80_0x3caa80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CAA80_0x3caa80");
#endif

    ctx->pc = 0x3caa80u;

    // 0x3caa80: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3caa80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3caa84: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x3caa84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3caa88: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x3caa88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3caa8c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x3caa8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3caa90: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3caa90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3caa94: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3caa94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3caa98: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x3caa98u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x3caa9c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x3caa9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x3caaa0: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x3caaa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x3caaa4: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3CAAA4u;
    {
        const bool branch_taken_0x3caaa4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x3CAAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAAA4u;
        // 0x3caaa8: 0xaca40008  sw          $a0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3caaa4) {
            ctx->pc = 0x3CAAB4u;
            goto label_3caab4;
        }
    }
    ctx->pc = 0x3CAAACu;
    // 0x3caaac: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x3caaacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x3caab0: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x3caab0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
label_3caab4:
    // 0x3caab4: 0x3e00008  jr          $ra
    ctx->pc = 0x3CAAB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CAAB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CAABCu;
    // 0x3caabc: 0x0  nop
    ctx->pc = 0x3caabcu;
    // NOP
    ctx->pc = 0x3caac0u;
}
