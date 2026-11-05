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

// Function: sub_003363B0
// Address: 0x3363b0 - 0x3363f0
void sub_003363B0_0x3363b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003363B0_0x3363b0");
#endif

    switch (ctx->pc) {
        case 0x3363b0u: goto label_3363b0;
        case 0x3363b4u: goto label_3363b4;
        case 0x3363b8u: goto label_3363b8;
        case 0x3363bcu: goto label_3363bc;
        case 0x3363c0u: goto label_3363c0;
        case 0x3363c4u: goto label_3363c4;
        case 0x3363c8u: goto label_3363c8;
        case 0x3363ccu: goto label_3363cc;
        case 0x3363d0u: goto label_3363d0;
        case 0x3363d4u: goto label_3363d4;
        case 0x3363d8u: goto label_3363d8;
        case 0x3363dcu: goto label_3363dc;
        case 0x3363e0u: goto label_3363e0;
        case 0x3363e4u: goto label_3363e4;
        case 0x3363e8u: goto label_3363e8;
        case 0x3363ecu: goto label_3363ec;
        default: break;
    }

    ctx->pc = 0x3363b0u;

label_3363b0:
    // 0x3363b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3363b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3363b4:
    // 0x3363b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3363b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3363b8:
    // 0x3363b8: 0x3c100048  lui         $s0, 0x48
    ctx->pc = 0x3363b8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)72 << 16));
label_3363bc:
    // 0x3363bc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3363bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_3363c0:
    // 0x3363c0: 0x8e042c80  lw          $a0, 0x2C80($s0)
    ctx->pc = 0x3363c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11392)));
label_3363c4:
    // 0x3363c4: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_3363c8:
    if (ctx->pc == 0x3363C8u) {
        ctx->pc = 0x3363C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3363C4u;
        // 0x3363c8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3363CCu;
        goto label_3363cc;
    }
    ctx->pc = 0x3363C4u;
    {
        const bool branch_taken_0x3363c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3363c4) {
            ctx->pc = 0x3363C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3363C4u;
            // 0x3363c8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3363E4u;
            goto label_3363e4;
        }
    }
    ctx->pc = 0x3363CCu;
label_3363cc:
    // 0x3363cc: 0x8c83020c  lw          $v1, 0x20C($a0)
    ctx->pc = 0x3363ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
label_3363d0:
    // 0x3363d0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3363d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3363d4:
    // 0x3363d4: 0x40f809  jalr        $v0
label_3363d8:
    if (ctx->pc == 0x3363D8u) {
        ctx->pc = 0x3363D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3363D4u;
        // 0x3363d8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3363DCu;
        goto label_3363dc;
    }
    ctx->pc = 0x3363D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3363DCu);
        ctx->pc = 0x3363D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3363D4u;
        // 0x3363d8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3363D4u, 0x3363DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3363DCu;
label_3363dc:
    // 0x3363dc: 0xae002c80  sw          $zero, 0x2C80($s0)
    ctx->pc = 0x3363dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11392), GPR_U32(ctx, 0));
label_3363e0:
    // 0x3363e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3363e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3363e4:
    // 0x3363e4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3363e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3363e8:
    // 0x3363e8: 0x3e00008  jr          $ra
label_3363ec:
    if (ctx->pc == 0x3363ECu) {
        ctx->pc = 0x3363ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3363E8u;
        // 0x3363ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3363F0u;
        goto label_fallthrough_0x3363e8;
    }
    ctx->pc = 0x3363E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3363ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3363E8u;
        // 0x3363ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3363E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3363e8:
    ctx->pc = 0x3363F0u;
}
