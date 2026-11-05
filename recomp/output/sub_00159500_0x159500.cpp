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

// Function: sub_00159500
// Address: 0x159500 - 0x159550
void sub_00159500_0x159500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00159500_0x159500");
#endif

    switch (ctx->pc) {
        case 0x159518u: goto label_159518;
        case 0x159530u: goto label_159530;
        case 0x159540u: goto label_159540;
        default: break;
    }

    ctx->pc = 0x159500u;

    // 0x159500: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x159500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x159504: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x159504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x159508: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x159508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x15950c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x15950cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x159510: 0xc04f43a  jal         func_13D0E8
    ctx->pc = 0x159510u;
    SET_GPR_U32(ctx, 31, 0x159518u);
    ctx->pc = 0x159514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159510u;
    // 0x159514: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13D0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D0E8u, 0x159510u, 0x159518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159518u;
label_159518:
    // 0x159518: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x159518u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15951c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x15951cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x159520: 0x14a20005  bne         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x159520u;
    {
        const bool branch_taken_0x159520 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x159520) {
            ctx->pc = 0x159538u;
            goto label_159538;
        }
    }
    ctx->pc = 0x159528u;
    // 0x159528: 0xc056568  jal         func_1595A0
    ctx->pc = 0x159528u;
    SET_GPR_U32(ctx, 31, 0x159530u);
    ctx->pc = 0x15952Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159528u;
    // 0x15952c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595A0u, 0x159528u, 0x159530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159530u;
label_159530:
    // 0x159530: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x159530u;
    {
        const bool branch_taken_0x159530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159530u;
        // 0x159534: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159530) {
            ctx->pc = 0x159544u;
            goto label_159544;
        }
    }
    ctx->pc = 0x159538u;
label_159538:
    // 0x159538: 0xc0565d8  jal         func_159760
    ctx->pc = 0x159538u;
    SET_GPR_U32(ctx, 31, 0x159540u);
    ctx->pc = 0x15953Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159538u;
    // 0x15953c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x159760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159760u, 0x159538u, 0x159540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159540u;
label_159540:
    // 0x159540: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x159540u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_159544:
    // 0x159544: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x159544u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x159548: 0x3e00008  jr          $ra
    ctx->pc = 0x159548u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15954Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159548u;
        // 0x15954c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159548u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x159550u;
}
