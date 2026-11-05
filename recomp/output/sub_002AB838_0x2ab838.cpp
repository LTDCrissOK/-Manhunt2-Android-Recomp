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

// Function: sub_002AB838
// Address: 0x2ab838 - 0x2ab8a8
void sub_002AB838_0x2ab838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AB838_0x2ab838");
#endif

    switch (ctx->pc) {
        case 0x2ab85cu: goto label_2ab85c;
        case 0x2ab868u: goto label_2ab868;
        default: break;
    }

    ctx->pc = 0x2ab838u;

    // 0x2ab838: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ab838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ab83c: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x2ab83cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2ab840: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ab840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ab844: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2ab844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2ab848: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ab848u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab84c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2ab84cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab850: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ab850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ab854: 0xc0aae2a  jal         func_2AB8A8
    ctx->pc = 0x2AB854u;
    SET_GPR_U32(ctx, 31, 0x2AB85Cu);
    ctx->pc = 0x2AB858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB854u;
    // 0x2ab858: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AB8A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AB8A8u, 0x2AB854u, 0x2AB85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB85Cu;
label_2ab85c:
    // 0x2ab85c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ab85cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab860: 0xc0aaf4c  jal         func_2ABD30
    ctx->pc = 0x2AB860u;
    SET_GPR_U32(ctx, 31, 0x2AB868u);
    ctx->pc = 0x2AB864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB860u;
    // 0x2ab864: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABD30u, 0x2AB860u, 0x2AB868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB868u;
label_2ab868:
    // 0x2ab868: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ab868u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ab86c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ab86cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ab870: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ab870u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ab874: 0x3e00008  jr          $ra
    ctx->pc = 0x2AB874u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AB878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB874u;
        // 0x2ab878: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AB874u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AB87Cu;
    // 0x2ab87c: 0x0  nop
    ctx->pc = 0x2ab87cu;
    // NOP
    // 0x2ab880: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2ab880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2ab884: 0x0  nop
    ctx->pc = 0x2ab884u;
    // NOP
    // 0x2ab888: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2ab888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2ab88c: 0x0  nop
    ctx->pc = 0x2ab88cu;
    // NOP
    // 0x2ab890: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2ab890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2ab894: 0x0  nop
    ctx->pc = 0x2ab894u;
    // NOP
    // 0x2ab898: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2ab898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2ab89c: 0x0  nop
    ctx->pc = 0x2ab89cu;
    // NOP
    // 0x2ab8a0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2ab8a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2ab8a4: 0x0  nop
    ctx->pc = 0x2ab8a4u;
    // NOP
    ctx->pc = 0x2ab8a8u;
}
