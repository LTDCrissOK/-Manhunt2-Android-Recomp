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

// Function: sub_001DF638
// Address: 0x1df638 - 0x1df6b0
void sub_001DF638_0x1df638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DF638_0x1df638");
#endif

    switch (ctx->pc) {
        case 0x1df664u: goto label_1df664;
        case 0x1df680u: goto label_1df680;
        default: break;
    }

    ctx->pc = 0x1df638u;

    // 0x1df638: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1df638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1df63c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1df63cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1df640: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1df640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1df644: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1df644u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df648: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1df648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1df64c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1df64cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df650: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1df650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1df654: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1df654u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df658: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1df658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1df65c: 0xc077fee  jal         func_1DFFB8
    ctx->pc = 0x1DF65Cu;
    SET_GPR_U32(ctx, 31, 0x1DF664u);
    ctx->pc = 0x1DF660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF65Cu;
    // 0x1df660: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DFFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFFB8u, 0x1DF65Cu, 0x1DF664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF664u;
label_1df664:
    // 0x1df664: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DF664u;
    {
        const bool branch_taken_0x1df664 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF664u;
        // 0x1df668: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df664) {
            ctx->pc = 0x1DF688u;
            goto label_1df688;
        }
    }
    ctx->pc = 0x1DF66Cu;
    // 0x1df66c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1df66cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df670: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1df670u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df674: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x1df674u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df678: 0xc077dac  jal         func_1DF6B0
    ctx->pc = 0x1DF678u;
    SET_GPR_U32(ctx, 31, 0x1DF680u);
    ctx->pc = 0x1DF67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF678u;
    // 0x1df67c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DF6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF6B0u, 0x1DF678u, 0x1DF680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF680u;
label_1df680:
    // 0x1df680: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1DF680u;
    {
        const bool branch_taken_0x1df680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF680u;
        // 0x1df684: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df680) {
            ctx->pc = 0x1DF694u;
            goto label_1df694;
        }
    }
    ctx->pc = 0x1DF688u;
label_1df688:
    // 0x1df688: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1df688u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1df68c: 0x8c6291c0  lw          $v0, -0x6E40($v1)
    ctx->pc = 0x1df68cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F91C0u));
    // 0x1df690: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1df690u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1df694:
    // 0x1df694: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1df694u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1df698: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1df698u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1df69c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1df69cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1df6a0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1df6a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1df6a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1DF6A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DF6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF6A4u;
        // 0x1df6a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DF6A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DF6ACu;
    // 0x1df6ac: 0x0  nop
    ctx->pc = 0x1df6acu;
    // NOP
    ctx->pc = 0x1df6b0u;
}
