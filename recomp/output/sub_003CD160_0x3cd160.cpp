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

// Function: sub_003CD160
// Address: 0x3cd160 - 0x3cd1f0
void sub_003CD160_0x3cd160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CD160_0x3cd160");
#endif

    ctx->pc = 0x3cd160u;

    // 0x3cd160: 0x8c850034  lw          $a1, 0x34($a0)
    ctx->pc = 0x3cd160u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x3cd164: 0x8ca60040  lw          $a2, 0x40($a1)
    ctx->pc = 0x3cd164u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x3cd168: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x3cd168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x3cd16c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3CD16Cu;
    {
        const bool branch_taken_0x3cd16c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3cd16c) {
            ctx->pc = 0x3CD170u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CD16Cu;
            // 0x3cd170: 0x8cc20010  lw          $v0, 0x10($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CD17Cu;
            goto label_3cd17c;
        }
    }
    ctx->pc = 0x3CD174u;
    // 0x3cd174: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3CD174u;
    {
        const bool branch_taken_0x3cd174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CD178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD174u;
        // 0x3cd178: 0xacc5000c  sw          $a1, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cd174) {
            ctx->pc = 0x3CD180u;
            goto label_3cd180;
        }
    }
    ctx->pc = 0x3CD17Cu;
label_3cd17c:
    // 0x3cd17c: 0xac45003c  sw          $a1, 0x3C($v0)
    ctx->pc = 0x3cd17cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 5));
label_3cd180:
    // 0x3cd180: 0xacc50010  sw          $a1, 0x10($a2)
    ctx->pc = 0x3cd180u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 5));
    // 0x3cd184: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x3cd184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x3cd188: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x3cd188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x3cd18c: 0xaca20020  sw          $v0, 0x20($a1)
    ctx->pc = 0x3cd18cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 2));
    // 0x3cd190: 0xaca3001c  sw          $v1, 0x1C($a1)
    ctx->pc = 0x3cd190u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 3));
    // 0x3cd194: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x3cd194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x3cd198: 0xaca20024  sw          $v0, 0x24($a1)
    ctx->pc = 0x3cd198u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 2));
    // 0x3cd19c: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x3cd19cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x3cd1a0: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x3cd1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x3cd1a4: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x3cd1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x3cd1a8: 0xaca20028  sw          $v0, 0x28($a1)
    ctx->pc = 0x3cd1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 2));
    // 0x3cd1ac: 0x8c83002c  lw          $v1, 0x2C($a0)
    ctx->pc = 0x3cd1acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x3cd1b0: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x3cd1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
    // 0x3cd1b4: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x3cd1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x3cd1b8: 0xaca20030  sw          $v0, 0x30($a1)
    ctx->pc = 0x3cd1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 2));
    // 0x3cd1bc: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x3cd1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3cd1c0: 0xaca30034  sw          $v1, 0x34($a1)
    ctx->pc = 0x3cd1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 3));
    // 0x3cd1c4: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x3cd1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3cd1c8: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3CD1C8u;
    {
        const bool branch_taken_0x3cd1c8 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x3cd1c8) {
            ctx->pc = 0x3CD1E4u;
            goto label_3cd1e4;
        }
    }
    ctx->pc = 0x3CD1D0u;
    // 0x3cd1d0: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x3cd1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x3cd1d4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3CD1D4u;
    {
        const bool branch_taken_0x3cd1d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3cd1d4) {
            ctx->pc = 0x3CD1E4u;
            goto label_3cd1e4;
        }
    }
    ctx->pc = 0x3CD1DCu;
    // 0x3cd1dc: 0x80f29c4  j           func_3CA710
    ctx->pc = 0x3CD1DCu;
    ctx->pc = 0x3CA710u;
    sub_003CA710_0x3ca710(rdram, ctx, runtime); return;
    ctx->pc = 0x3CD1E4u;
label_3cd1e4:
    // 0x3cd1e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3CD1E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CD1E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CD1ECu;
    // 0x3cd1ec: 0x0  nop
    ctx->pc = 0x3cd1ecu;
    // NOP
    ctx->pc = 0x3cd1f0u;
}
