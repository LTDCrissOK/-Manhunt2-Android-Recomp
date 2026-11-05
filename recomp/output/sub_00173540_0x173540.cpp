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

// Function: sub_00173540
// Address: 0x173540 - 0x173570
void sub_00173540_0x173540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00173540_0x173540");
#endif

    switch (ctx->pc) {
        case 0x173560u: goto label_173560;
        default: break;
    }

    ctx->pc = 0x173540u;

    // 0x173540: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x173540u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x173544: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x173544u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173548: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x173548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17354c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x17354cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x173550: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x173550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x173554: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x173554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x173558: 0xc04f8da  jal         func_13E368
    ctx->pc = 0x173558u;
    SET_GPR_U32(ctx, 31, 0x173560u);
    ctx->pc = 0x17355Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173558u;
    // 0x17355c: 0xac400070  sw          $zero, 0x70($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 112), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E368u, 0x173558u, 0x173560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173560u;
label_173560:
    // 0x173560: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x173560u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173564: 0x3e00008  jr          $ra
    ctx->pc = 0x173564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173564u;
        // 0x173568: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x173564u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17356Cu;
    // 0x17356c: 0x0  nop
    ctx->pc = 0x17356cu;
    // NOP
    ctx->pc = 0x173570u;
}
