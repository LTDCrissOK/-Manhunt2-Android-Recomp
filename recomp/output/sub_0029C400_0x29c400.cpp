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

// Function: sub_0029C400
// Address: 0x29c400 - 0x29c478
void sub_0029C400_0x29c400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029C400_0x29c400");
#endif

    switch (ctx->pc) {
        case 0x29c400u: goto label_29c400;
        case 0x29c404u: goto label_29c404;
        case 0x29c408u: goto label_29c408;
        case 0x29c40cu: goto label_29c40c;
        case 0x29c410u: goto label_29c410;
        case 0x29c414u: goto label_29c414;
        case 0x29c418u: goto label_29c418;
        case 0x29c41cu: goto label_29c41c;
        case 0x29c420u: goto label_29c420;
        case 0x29c424u: goto label_29c424;
        case 0x29c428u: goto label_29c428;
        case 0x29c42cu: goto label_29c42c;
        case 0x29c430u: goto label_29c430;
        case 0x29c434u: goto label_29c434;
        case 0x29c438u: goto label_29c438;
        case 0x29c43cu: goto label_29c43c;
        case 0x29c440u: goto label_29c440;
        case 0x29c444u: goto label_29c444;
        case 0x29c448u: goto label_29c448;
        case 0x29c44cu: goto label_29c44c;
        case 0x29c450u: goto label_29c450;
        case 0x29c454u: goto label_29c454;
        case 0x29c458u: goto label_29c458;
        case 0x29c45cu: goto label_29c45c;
        case 0x29c460u: goto label_29c460;
        case 0x29c464u: goto label_29c464;
        case 0x29c468u: goto label_29c468;
        case 0x29c46cu: goto label_29c46c;
        case 0x29c470u: goto label_29c470;
        case 0x29c474u: goto label_29c474;
        default: break;
    }

    ctx->pc = 0x29c400u;

label_29c400:
    // 0x29c400: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29c400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_29c404:
    // 0x29c404: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x29c404u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_29c408:
    // 0x29c408: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x29c408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_29c40c:
    // 0x29c40c: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x29c40cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_29c410:
    // 0x29c410: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x29c410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_29c414:
    // 0x29c414: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x29c414u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_29c418:
    // 0x29c418: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x29c418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_29c41c:
    // 0x29c41c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x29c41cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_29c420:
    // 0x29c420: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29c420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_29c424:
    // 0x29c424: 0x8cb00028  lw          $s0, 0x28($a1)
    ctx->pc = 0x29c424u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
label_29c428:
    // 0x29c428: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x29c428u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29c42c:
    // 0x29c42c: 0x8e030278  lw          $v1, 0x278($s0)
    ctx->pc = 0x29c42cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
label_29c430:
    // 0x29c430: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x29c430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_29c434:
    // 0x29c434: 0x40f809  jalr        $v0
label_29c438:
    if (ctx->pc == 0x29C438u) {
        ctx->pc = 0x29C438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C434u;
        // 0x29c438: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C43Cu;
        goto label_29c43c;
    }
    ctx->pc = 0x29C434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29C43Cu);
        ctx->pc = 0x29C438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C434u;
        // 0x29c438: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C434u, 0x29C43Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29C43Cu;
label_29c43c:
    // 0x29c43c: 0xc0a7678  jal         func_29D9E0
label_29c440:
    if (ctx->pc == 0x29C440u) {
        ctx->pc = 0x29C440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C43Cu;
        // 0x29c440: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C444u;
        goto label_29c444;
    }
    ctx->pc = 0x29C43Cu;
    SET_GPR_U32(ctx, 31, 0x29C444u);
    ctx->pc = 0x29C440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C43Cu;
    // 0x29c440: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D9E0u, 0x29C43Cu, 0x29C444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C444u;
label_29c444:
    // 0x29c444: 0xa2110010  sb          $s1, 0x10($s0)
    ctx->pc = 0x29c444u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 16), (uint8_t)GPR_U32(ctx, 17));
label_29c448:
    // 0x29c448: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29c448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29c44c:
    // 0x29c44c: 0x8e030278  lw          $v1, 0x278($s0)
    ctx->pc = 0x29c44cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
label_29c450:
    // 0x29c450: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x29c450u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_29c454:
    // 0x29c454: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x29c454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_29c458:
    // 0x29c458: 0x40f809  jalr        $v0
label_29c45c:
    if (ctx->pc == 0x29C45Cu) {
        ctx->pc = 0x29C45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C458u;
        // 0x29c45c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C460u;
        goto label_29c460;
    }
    ctx->pc = 0x29C458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29C460u);
        ctx->pc = 0x29C45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C458u;
        // 0x29c45c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C458u, 0x29C460u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29C460u;
label_29c460:
    // 0x29c460: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29c460u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29c464:
    // 0x29c464: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x29c464u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_29c468:
    // 0x29c468: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x29c468u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_29c46c:
    // 0x29c46c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x29c46cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_29c470:
    // 0x29c470: 0x3e00008  jr          $ra
label_29c474:
    if (ctx->pc == 0x29C474u) {
        ctx->pc = 0x29C474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C470u;
        // 0x29c474: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C478u;
        goto label_fallthrough_0x29c470;
    }
    ctx->pc = 0x29C470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29C474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C470u;
        // 0x29c474: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C470u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x29c470:
    ctx->pc = 0x29C478u;
}
