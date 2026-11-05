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

// Function: entry_002b7694
// Address: 0x2b7694 - 0x2b76ae
void entry_002b7694_0x2b7694(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002b7694_0x2b7694");
#endif

    ctx->pc = 0x2b7694u;

    // 0x2b7694: 0xae11590c  sw          $s1, 0x590C($s0)
    ctx->pc = 0x2b7694u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 22796), GPR_U32(ctx, 17));
    // 0x2b7698: 0x14510003  bne         $v0, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B7698u;
    {
        const bool branch_taken_0x2b7698 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x2B769Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7698u;
        // 0x2b769c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7698) {
            ctx->pc = 0x2B76A8u;
            goto label_2b76a8;
        }
    }
    ctx->pc = 0x2B76A0u;
    // 0x2b76a0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2B76A0u;
    {
        const bool branch_taken_0x2b76a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B76A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B76A0u;
        // 0x2b76a4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b76a0) {
            ctx->pc = 0x2B76C0u;
            return;
        }
    }
    ctx->pc = 0x2B76A8u;
label_2b76a8:
    // 0x2b76a8: 0xc0ad684  jal         func_2B5A10
    ctx->pc = 0x2B76A8u;
    SET_GPR_U32(ctx, 31, 0x2B76B0u);
    ctx->pc = 0x2B76ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B76A8u;
    // 0x2b76ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5A10u, 0x2B76A8u, 0x2B76B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B76B0u;
}
