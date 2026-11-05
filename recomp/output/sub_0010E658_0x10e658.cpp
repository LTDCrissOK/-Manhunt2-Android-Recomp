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

// Function: sub_0010E658
// Address: 0x10e658 - 0x10e690
void sub_0010E658_0x10e658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010E658_0x10e658");
#endif

    switch (ctx->pc) {
        case 0x10e658u: goto label_10e658;
        case 0x10e65cu: goto label_10e65c;
        case 0x10e660u: goto label_10e660;
        case 0x10e664u: goto label_10e664;
        case 0x10e668u: goto label_10e668;
        case 0x10e66cu: goto label_10e66c;
        case 0x10e670u: goto label_10e670;
        case 0x10e674u: goto label_10e674;
        case 0x10e678u: goto label_10e678;
        case 0x10e67cu: goto label_10e67c;
        case 0x10e680u: goto label_10e680;
        case 0x10e684u: goto label_10e684;
        case 0x10e688u: goto label_10e688;
        case 0x10e68cu: goto label_10e68c;
        default: break;
    }

    ctx->pc = 0x10e658u;

label_10e658:
    // 0x10e658: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10e658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_10e65c:
    // 0x10e65c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10e65cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_10e660:
    // 0x10e660: 0x8c840014  lw          $a0, 0x14($a0)
    ctx->pc = 0x10e660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_10e664:
    // 0x10e664: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_10e668:
    if (ctx->pc == 0x10E668u) {
        ctx->pc = 0x10E668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E664u;
        // 0x10e668: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E66Cu;
        goto label_10e66c;
    }
    ctx->pc = 0x10E664u;
    {
        const bool branch_taken_0x10e664 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E664u;
        // 0x10e668: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e664) {
            ctx->pc = 0x10E684u;
            goto label_10e684;
        }
    }
    ctx->pc = 0x10E66Cu;
label_10e66c:
    // 0x10e66c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x10e66cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_10e670:
    // 0x10e670: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x10e670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_10e674:
    // 0x10e674: 0x40f809  jalr        $v0
label_10e678:
    if (ctx->pc == 0x10E678u) {
        ctx->pc = 0x10E67Cu;
        goto label_10e67c;
    }
    ctx->pc = 0x10E674u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x10E67Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E674u, 0x10E67Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10E67Cu;
label_10e67c:
    // 0x10e67c: 0x10000002  b           . + 4 + (0x2 << 2)
label_10e680:
    if (ctx->pc == 0x10E680u) {
        ctx->pc = 0x10E680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E67Cu;
        // 0x10e680: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E684u;
        goto label_10e684;
    }
    ctx->pc = 0x10E67Cu;
    {
        const bool branch_taken_0x10e67c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E67Cu;
        // 0x10e680: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e67c) {
            ctx->pc = 0x10E688u;
            goto label_10e688;
        }
    }
    ctx->pc = 0x10E684u;
label_10e684:
    // 0x10e684: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10e684u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10e688:
    // 0x10e688: 0x3e00008  jr          $ra
label_10e68c:
    if (ctx->pc == 0x10E68Cu) {
        ctx->pc = 0x10E68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E688u;
        // 0x10e68c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E690u;
        goto label_fallthrough_0x10e688;
    }
    ctx->pc = 0x10E688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10E68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E688u;
        // 0x10e68c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E688u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x10e688:
    ctx->pc = 0x10E690u;
}
