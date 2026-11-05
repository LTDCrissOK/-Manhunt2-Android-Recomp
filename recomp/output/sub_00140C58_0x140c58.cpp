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

// Function: sub_00140C58
// Address: 0x140c58 - 0x140ca0
void sub_00140C58_0x140c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00140C58_0x140c58");
#endif

    switch (ctx->pc) {
        case 0x140c7cu: goto label_140c7c;
        default: break;
    }

    ctx->pc = 0x140c58u;

    // 0x140c58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x140c58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x140c5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x140c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x140c60: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x140c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x140c64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x140c64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140c68: 0x8e020460  lw          $v0, 0x460($s0)
    ctx->pc = 0x140c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1120)));
    // 0x140c6c: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x140C6Cu;
    {
        const bool branch_taken_0x140c6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x140c6c) {
            ctx->pc = 0x140C70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x140C6Cu;
            // 0x140c70: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x140C94u;
            goto label_140c94;
        }
    }
    ctx->pc = 0x140C74u;
    // 0x140c74: 0xc04d7ea  jal         func_135FA8
    ctx->pc = 0x140C74u;
    SET_GPR_U32(ctx, 31, 0x140C7Cu);
    ctx->pc = 0x135FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135FA8u, 0x140C74u, 0x140C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140C7Cu;
label_140c7c:
    // 0x140c7c: 0xae000530  sw          $zero, 0x530($s0)
    ctx->pc = 0x140c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1328), GPR_U32(ctx, 0));
    // 0x140c80: 0xae000520  sw          $zero, 0x520($s0)
    ctx->pc = 0x140c80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1312), GPR_U32(ctx, 0));
    // 0x140c84: 0xae000524  sw          $zero, 0x524($s0)
    ctx->pc = 0x140c84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1316), GPR_U32(ctx, 0));
    // 0x140c88: 0xae000528  sw          $zero, 0x528($s0)
    ctx->pc = 0x140c88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1320), GPR_U32(ctx, 0));
    // 0x140c8c: 0xae00052c  sw          $zero, 0x52C($s0)
    ctx->pc = 0x140c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1324), GPR_U32(ctx, 0));
    // 0x140c90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x140c90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_140c94:
    // 0x140c94: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x140c94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x140c98: 0x3e00008  jr          $ra
    ctx->pc = 0x140C98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x140C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140C98u;
        // 0x140c9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x140C98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x140CA0u;
}
