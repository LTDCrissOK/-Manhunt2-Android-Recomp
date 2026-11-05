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

// Function: sub_0029C658
// Address: 0x29c658 - 0x29c690
void sub_0029C658_0x29c658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029C658_0x29c658");
#endif

    switch (ctx->pc) {
        case 0x29c67cu: goto label_29c67c;
        default: break;
    }

    ctx->pc = 0x29c658u;

    // 0x29c658: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29c658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29c65c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29c65cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29c660: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x29c660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x29c664: 0x54800003  bnel        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x29C664u;
    {
        const bool branch_taken_0x29c664 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x29c664) {
            ctx->pc = 0x29C668u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29C664u;
            // 0x29c668: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29C674u;
            goto label_29c674;
        }
    }
    ctx->pc = 0x29C66Cu;
    // 0x29c66c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x29C66Cu;
    {
        const bool branch_taken_0x29c66c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C66Cu;
        // 0x29c670: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c66c) {
            ctx->pc = 0x29C684u;
            goto label_29c684;
        }
    }
    ctx->pc = 0x29C674u;
label_29c674:
    // 0x29c674: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x29C674u;
    SET_GPR_U32(ctx, 31, 0x29C67Cu);
    ctx->pc = 0x29C678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C674u;
    // 0x29c678: 0x24840238  addiu       $a0, $a0, 0x238 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x29C674u, 0x29C67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C67Cu;
label_29c67c:
    // 0x29c67c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29c67cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29c680: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x29c680u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_29c684:
    // 0x29c684: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29c684u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29c688: 0x3e00008  jr          $ra
    ctx->pc = 0x29C688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29C68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C688u;
        // 0x29c68c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C688u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29C690u;
}
