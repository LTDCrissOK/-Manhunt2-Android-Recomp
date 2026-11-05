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

// Function: sub_003A70A0
// Address: 0x3a70a0 - 0x3a70e0
void sub_003A70A0_0x3a70a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A70A0_0x3a70a0");
#endif

    ctx->pc = 0x3a70a0u;

    // 0x3a70a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a70a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a70a4: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A70A4u;
    {
        const bool branch_taken_0x3a70a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A70A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A70A4u;
        // 0x3a70a8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a70a4) {
            ctx->pc = 0x3A70C0u;
            goto label_3a70c0;
        }
    }
    ctx->pc = 0x3A70ACu;
    // 0x3a70ac: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3a70acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3a70b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a70b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a70b4: 0x2484e0e8  addiu       $a0, $a0, -0x1F18
    ctx->pc = 0x3a70b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959336));
    // 0x3a70b8: 0x80e9d40  j           func_3A7500
    ctx->pc = 0x3A70B8u;
    ctx->pc = 0x3A70BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A70B8u;
    // 0x3a70bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7500u;
    sub_003A7500_0x3a7500(rdram, ctx, runtime); return;
    ctx->pc = 0x3A70C0u;
label_3a70c0:
    // 0x3a70c0: 0x80820001  lb          $v0, 0x1($a0)
    ctx->pc = 0x3a70c0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x3a70c4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A70C4u;
    {
        const bool branch_taken_0x3a70c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A70C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A70C4u;
        // 0x3a70c8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a70c4) {
            ctx->pc = 0x3A70D8u;
            goto label_3a70d8;
        }
    }
    ctx->pc = 0x3A70CCu;
    // 0x3a70cc: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x3a70ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x3a70d0: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x3a70d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x3a70d4: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x3a70d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
label_3a70d8:
    // 0x3a70d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3A70D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A70DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A70D8u;
        // 0x3a70dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A70D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A70E0u;
}
