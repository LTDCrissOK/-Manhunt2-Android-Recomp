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

// Function: sub_0010E428
// Address: 0x10e428 - 0x10e478
void sub_0010E428_0x10e428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010E428_0x10e428");
#endif

    switch (ctx->pc) {
        case 0x10e46cu: goto label_10e46c;
        default: break;
    }

    ctx->pc = 0x10e428u;

    // 0x10e428: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10e428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10e42c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x10e42cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e430: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10e430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10e434: 0xacc500b0  sw          $a1, 0xB0($a2)
    ctx->pc = 0x10e434u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 176), GPR_U32(ctx, 5));
    // 0x10e438: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x10e438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x10e43c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x10E43Cu;
    {
        const bool branch_taken_0x10e43c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10E440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E43Cu;
        // 0x10e440: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e43c) {
            ctx->pc = 0x10E470u;
            goto label_10e470;
        }
    }
    ctx->pc = 0x10E444u;
    // 0x10e444: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x10e444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x10e448: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x10e448u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x10e44c: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x10e44cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x10e450: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10e450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10e454: 0x8c44020c  lw          $a0, 0x20C($v0)
    ctx->pc = 0x10e454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x10e458: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10E458u;
    {
        const bool branch_taken_0x10e458 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x10e458) {
            ctx->pc = 0x10E470u;
            goto label_10e470;
        }
    }
    ctx->pc = 0x10E460u;
    // 0x10e460: 0x8cc50010  lw          $a1, 0x10($a2)
    ctx->pc = 0x10e460u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x10e464: 0xc0441f0  jal         func_1107C0
    ctx->pc = 0x10E464u;
    SET_GPR_U32(ctx, 31, 0x10E46Cu);
    ctx->pc = 0x10E468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E464u;
    // 0x10e468: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1107C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1107C0u, 0x10E464u, 0x10E46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E46Cu;
label_10e46c:
    // 0x10e46c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10e46cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10e470:
    // 0x10e470: 0x3e00008  jr          $ra
    ctx->pc = 0x10E470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10E474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E470u;
        // 0x10e474: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E470u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10E478u;
}
