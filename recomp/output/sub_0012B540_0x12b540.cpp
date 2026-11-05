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

// Function: sub_0012B540
// Address: 0x12b540 - 0x12b588
void sub_0012B540_0x12b540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012B540_0x12b540");
#endif

    switch (ctx->pc) {
        case 0x12b55cu: goto label_12b55c;
        case 0x12b564u: goto label_12b564;
        case 0x12b574u: goto label_12b574;
        default: break;
    }

    ctx->pc = 0x12b540u;

    // 0x12b540: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12b540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12b544: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12b544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12b548: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12b548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12b54c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12b54cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b550: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12b550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12b554: 0xc04b19a  jal         func_12C668
    ctx->pc = 0x12B554u;
    SET_GPR_U32(ctx, 31, 0x12B55Cu);
    ctx->pc = 0x12B558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B554u;
    // 0x12b558: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C668u, 0x12B554u, 0x12B55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B55Cu;
label_12b55c:
    // 0x12b55c: 0xc04af80  jal         func_12BE00
    ctx->pc = 0x12B55Cu;
    SET_GPR_U32(ctx, 31, 0x12B564u);
    ctx->pc = 0x12B560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B55Cu;
    // 0x12b560: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BE00u, 0x12B55Cu, 0x12B564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B564u;
label_12b564:
    // 0x12b564: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12b564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b568: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x12b568u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x12b56c: 0xc04b178  jal         func_12C5E0
    ctx->pc = 0x12B56Cu;
    SET_GPR_U32(ctx, 31, 0x12B574u);
    ctx->pc = 0x12B570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B56Cu;
    // 0x12b570: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C5E0u, 0x12B56Cu, 0x12B574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B574u;
label_12b574:
    // 0x12b574: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12b574u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12b578: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12b578u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12b57c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12b57cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12b580: 0x3e00008  jr          $ra
    ctx->pc = 0x12B580u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12B584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B580u;
        // 0x12b584: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12B580u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12B588u;
}
