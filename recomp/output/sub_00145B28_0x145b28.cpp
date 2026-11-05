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

// Function: sub_00145B28
// Address: 0x145b28 - 0x145b68
void sub_00145B28_0x145b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00145B28_0x145b28");
#endif

    switch (ctx->pc) {
        case 0x145b4cu: goto label_145b4c;
        default: break;
    }

    ctx->pc = 0x145b28u;

    // 0x145b28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x145b28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x145b2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x145b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x145b30: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x145b30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x145b34: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x145b34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145b38: 0x8e020460  lw          $v0, 0x460($s0)
    ctx->pc = 0x145b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1120)));
    // 0x145b3c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x145B3Cu;
    {
        const bool branch_taken_0x145b3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x145b3c) {
            ctx->pc = 0x145B40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x145B3Cu;
            // 0x145b40: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x145B58u;
            goto label_145b58;
        }
    }
    ctx->pc = 0x145B44u;
    // 0x145b44: 0xc04d7ea  jal         func_135FA8
    ctx->pc = 0x145B44u;
    SET_GPR_U32(ctx, 31, 0x145B4Cu);
    ctx->pc = 0x135FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135FA8u, 0x145B44u, 0x145B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145B4Cu;
label_145b4c:
    // 0x145b4c: 0xae000524  sw          $zero, 0x524($s0)
    ctx->pc = 0x145b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1316), GPR_U32(ctx, 0));
    // 0x145b50: 0xae000520  sw          $zero, 0x520($s0)
    ctx->pc = 0x145b50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1312), GPR_U32(ctx, 0));
    // 0x145b54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x145b54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_145b58:
    // 0x145b58: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x145b58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x145b5c: 0x3e00008  jr          $ra
    ctx->pc = 0x145B5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x145B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145B5Cu;
        // 0x145b60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145B5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x145B64u;
    // 0x145b64: 0x0  nop
    ctx->pc = 0x145b64u;
    // NOP
    ctx->pc = 0x145b68u;
}
