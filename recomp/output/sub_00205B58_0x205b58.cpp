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

// Function: sub_00205B58
// Address: 0x205b58 - 0x205b98
void sub_00205B58_0x205b58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00205B58_0x205b58");
#endif

    switch (ctx->pc) {
        case 0x205b84u: goto label_205b84;
        default: break;
    }

    ctx->pc = 0x205b58u;

    // 0x205b58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x205b58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x205b5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x205b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x205b60: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x205b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x205b64: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x205B64u;
    {
        const bool branch_taken_0x205b64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x205B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205B64u;
        // 0x205b68: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205b64) {
            ctx->pc = 0x205B84u;
            goto label_205b84;
        }
    }
    ctx->pc = 0x205B6Cu;
    // 0x205b6c: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x205b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x205b70: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x205b70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x205b74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x205b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x205b78: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x205b78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x205b7c: 0xc0e80e0  jal         func_3A0380
    ctx->pc = 0x205B7Cu;
    SET_GPR_U32(ctx, 31, 0x205B84u);
    ctx->pc = 0x205B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205B7Cu;
    // 0x205b80: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A0380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A0380u, 0x205B7Cu, 0x205B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205B84u;
label_205b84:
    // 0x205b84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x205b84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x205b88: 0x3e00008  jr          $ra
    ctx->pc = 0x205B88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x205B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205B88u;
        // 0x205b8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205B88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x205B90u;
    // 0x205b90: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x205b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x205b94: 0x0  nop
    ctx->pc = 0x205b94u;
    // NOP
    ctx->pc = 0x205b98u;
}
