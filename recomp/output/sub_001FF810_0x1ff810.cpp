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

// Function: sub_001FF810
// Address: 0x1ff810 - 0x1ff870
void sub_001FF810_0x1ff810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FF810_0x1ff810");
#endif

    switch (ctx->pc) {
        case 0x1ff834u: goto label_1ff834;
        case 0x1ff840u: goto label_1ff840;
        case 0x1ff854u: goto label_1ff854;
        default: break;
    }

    ctx->pc = 0x1ff810u;

    // 0x1ff810: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ff810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ff814: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ff814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ff818: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ff818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ff81c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1ff81cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff820: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1ff820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1ff824: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ff824u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff828: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1ff828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1ff82c: 0xc081710  jal         func_205C40
    ctx->pc = 0x1FF82Cu;
    SET_GPR_U32(ctx, 31, 0x1FF834u);
    ctx->pc = 0x1FF830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF82Cu;
    // 0x1ff830: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205C40u, 0x1FF82Cu, 0x1FF834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF834u;
label_1ff834:
    // 0x1ff834: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ff834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff838: 0xc0817fa  jal         func_205FE8
    ctx->pc = 0x1FF838u;
    SET_GPR_U32(ctx, 31, 0x1FF840u);
    ctx->pc = 0x1FF83Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF838u;
    // 0x1ff83c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205FE8u, 0x1FF838u, 0x1FF840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF840u;
label_1ff840:
    // 0x1ff840: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x1ff840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1ff844: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FF844u;
    {
        const bool branch_taken_0x1ff844 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF844u;
        // 0x1ff848: 0x26450004  addiu       $a1, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff844) {
            ctx->pc = 0x1FF854u;
            goto label_1ff854;
        }
    }
    ctx->pc = 0x1FF84Cu;
    // 0x1ff84c: 0xc0816e6  jal         func_205B98
    ctx->pc = 0x1FF84Cu;
    SET_GPR_U32(ctx, 31, 0x1FF854u);
    ctx->pc = 0x1FF850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF84Cu;
    // 0x1ff850: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205B98u, 0x1FF84Cu, 0x1FF854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF854u;
label_1ff854:
    // 0x1ff854: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ff854u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ff858: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ff858u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ff85c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ff85cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ff860: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1ff860u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ff864: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF864u;
        // 0x1ff868: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF864u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FF86Cu;
    // 0x1ff86c: 0x0  nop
    ctx->pc = 0x1ff86cu;
    // NOP
    ctx->pc = 0x1ff870u;
}
