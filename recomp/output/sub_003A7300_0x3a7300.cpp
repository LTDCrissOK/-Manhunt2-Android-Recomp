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

// Function: sub_003A7300
// Address: 0x3a7300 - 0x3a7348
void sub_003A7300_0x3a7300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A7300_0x3a7300");
#endif

    switch (ctx->pc) {
        case 0x3a7318u: goto label_3a7318;
        default: break;
    }

    ctx->pc = 0x3a7300u;

    // 0x3a7300: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a7300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a7304: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A7304u;
    {
        const bool branch_taken_0x3a7304 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A7308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7304u;
        // 0x3a7308: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7304) {
            ctx->pc = 0x3A7320u;
            goto label_3a7320;
        }
    }
    ctx->pc = 0x3A730Cu;
    // 0x3a730c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3a730cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3a7310: 0xc0e9d40  jal         func_3A7500
    ctx->pc = 0x3A7310u;
    SET_GPR_U32(ctx, 31, 0x3A7318u);
    ctx->pc = 0x3A7314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7310u;
    // 0x3a7314: 0x2484e1a8  addiu       $a0, $a0, -0x1E58 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7500u, 0x3A7310u, 0x3A7318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7318u;
label_3a7318:
    // 0x3a7318: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3A7318u;
    {
        const bool branch_taken_0x3a7318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A731Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7318u;
        // 0x3a731c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7318) {
            ctx->pc = 0x3A7324u;
            goto label_3a7324;
        }
    }
    ctx->pc = 0x3A7320u;
label_3a7320:
    // 0x3a7320: 0x80820001  lb          $v0, 0x1($a0)
    ctx->pc = 0x3a7320u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_3a7324:
    // 0x3a7324: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a7324u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a7328: 0x3e00008  jr          $ra
    ctx->pc = 0x3A7328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A732Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7328u;
        // 0x3a732c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A7328u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A7330u;
    // 0x3a7330: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3a7330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3a7334: 0x0  nop
    ctx->pc = 0x3a7334u;
    // NOP
    // 0x3a7338: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3a7338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3a733c: 0x0  nop
    ctx->pc = 0x3a733cu;
    // NOP
    // 0x3a7340: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3a7340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3a7344: 0x0  nop
    ctx->pc = 0x3a7344u;
    // NOP
    ctx->pc = 0x3a7348u;
}
