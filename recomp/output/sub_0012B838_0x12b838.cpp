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

// Function: sub_0012B838
// Address: 0x12b838 - 0x12b880
void sub_0012B838_0x12b838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012B838_0x12b838");
#endif

    switch (ctx->pc) {
        case 0x12b854u: goto label_12b854;
        case 0x12b86cu: goto label_12b86c;
        default: break;
    }

    ctx->pc = 0x12b838u;

    // 0x12b838: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12b838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12b83c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12b83cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12b840: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12b840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12b844: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12b844u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b848: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12b848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12b84c: 0xc04b19a  jal         func_12C668
    ctx->pc = 0x12B84Cu;
    SET_GPR_U32(ctx, 31, 0x12B854u);
    ctx->pc = 0x12B850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B84Cu;
    // 0x12b850: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C668u, 0x12B84Cu, 0x12B854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B854u;
label_12b854:
    // 0x12b854: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x12b854u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x12b858: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12b858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b85c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x12b85cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x12b860: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x12b860u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b864: 0xc04b052  jal         func_12C148
    ctx->pc = 0x12B864u;
    SET_GPR_U32(ctx, 31, 0x12B86Cu);
    ctx->pc = 0x12B868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B864u;
    // 0x12b868: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C148u, 0x12B864u, 0x12B86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B86Cu;
label_12b86c:
    // 0x12b86c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12b86cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12b870: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12b870u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12b874: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12b874u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12b878: 0x3e00008  jr          $ra
    ctx->pc = 0x12B878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12B87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B878u;
        // 0x12b87c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12B878u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12B880u;
}
