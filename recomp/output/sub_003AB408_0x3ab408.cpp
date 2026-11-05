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

// Function: sub_003AB408
// Address: 0x3ab408 - 0x3ab470
void sub_003AB408_0x3ab408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AB408_0x3ab408");
#endif

    switch (ctx->pc) {
        case 0x3ab434u: goto label_3ab434;
        case 0x3ab448u: goto label_3ab448;
        case 0x3ab450u: goto label_3ab450;
        default: break;
    }

    ctx->pc = 0x3ab408u;

    // 0x3ab408: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3ab408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3ab40c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3ab40cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3ab410: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3ab410u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab414: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3ab414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3ab418: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3ab418u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab41c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3ab41cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3ab420: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3ab420u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab424: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3ab424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3ab428: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3ab428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3ab42c: 0xc0ea7d8  jal         func_3A9F60
    ctx->pc = 0x3AB42Cu;
    SET_GPR_U32(ctx, 31, 0x3AB434u);
    ctx->pc = 0x3AB430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB42Cu;
    // 0x3ab430: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A9F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A9F60u, 0x3AB42Cu, 0x3AB434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB434u;
label_3ab434:
    // 0x3ab434: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ab434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab438: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3ab438u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab43c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3ab43cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab440: 0xc0ead1c  jal         func_3AB470
    ctx->pc = 0x3AB440u;
    SET_GPR_U32(ctx, 31, 0x3AB448u);
    ctx->pc = 0x3AB444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB440u;
    // 0x3ab444: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AB470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AB470u, 0x3AB440u, 0x3AB448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB448u;
label_3ab448:
    // 0x3ab448: 0xc0ea7de  jal         func_3A9F78
    ctx->pc = 0x3AB448u;
    SET_GPR_U32(ctx, 31, 0x3AB450u);
    ctx->pc = 0x3AB44Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB448u;
    // 0x3ab44c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A9F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A9F78u, 0x3AB448u, 0x3AB450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB450u;
label_3ab450:
    // 0x3ab450: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3ab450u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3ab454: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3ab454u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab458: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3ab458u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ab45c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3ab45cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ab460: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3ab460u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3ab464: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3ab464u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3ab468: 0x3e00008  jr          $ra
    ctx->pc = 0x3AB468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AB46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB468u;
        // 0x3ab46c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AB468u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AB470u;
}
