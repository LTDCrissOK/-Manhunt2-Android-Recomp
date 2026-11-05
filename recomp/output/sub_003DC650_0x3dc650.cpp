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

// Function: sub_003DC650
// Address: 0x3dc650 - 0x3dc680
void sub_003DC650_0x3dc650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DC650_0x3dc650");
#endif

    switch (ctx->pc) {
        case 0x3dc650u: goto label_3dc650;
        case 0x3dc654u: goto label_3dc654;
        case 0x3dc658u: goto label_3dc658;
        case 0x3dc65cu: goto label_3dc65c;
        case 0x3dc660u: goto label_3dc660;
        case 0x3dc664u: goto label_3dc664;
        case 0x3dc668u: goto label_3dc668;
        case 0x3dc66cu: goto label_3dc66c;
        case 0x3dc670u: goto label_3dc670;
        case 0x3dc674u: goto label_3dc674;
        case 0x3dc678u: goto label_3dc678;
        case 0x3dc67cu: goto label_3dc67c;
        default: break;
    }

    ctx->pc = 0x3dc650u;

label_3dc650:
    // 0x3dc650: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3dc650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3dc654:
    // 0x3dc654: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3dc654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3dc658:
    // 0x3dc658: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x3dc658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_3dc65c:
    // 0x3dc65c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_3dc660:
    if (ctx->pc == 0x3DC660u) {
        ctx->pc = 0x3DC660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC65Cu;
        // 0x3dc660: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DC664u;
        goto label_3dc664;
    }
    ctx->pc = 0x3DC65Cu;
    {
        const bool branch_taken_0x3dc65c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DC660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC65Cu;
        // 0x3dc660: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc65c) {
            ctx->pc = 0x3DC678u;
            goto label_3dc678;
        }
    }
    ctx->pc = 0x3DC664u;
label_3dc664:
    // 0x3dc664: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x3dc664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_3dc668:
    // 0x3dc668: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x3dc668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_3dc66c:
    // 0x3dc66c: 0x40f809  jalr        $v0
label_3dc670:
    if (ctx->pc == 0x3DC670u) {
        ctx->pc = 0x3DC674u;
        goto label_3dc674;
    }
    ctx->pc = 0x3DC66Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3DC674u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DC66Cu, 0x3DC674u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3DC674u;
label_3dc674:
    // 0x3dc674: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3dc674u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3dc678:
    // 0x3dc678: 0x3e00008  jr          $ra
label_3dc67c:
    if (ctx->pc == 0x3DC67Cu) {
        ctx->pc = 0x3DC67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC678u;
        // 0x3dc67c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DC680u;
        goto label_fallthrough_0x3dc678;
    }
    ctx->pc = 0x3DC678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DC67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC678u;
        // 0x3dc67c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DC678u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3dc678:
    ctx->pc = 0x3DC680u;
}
