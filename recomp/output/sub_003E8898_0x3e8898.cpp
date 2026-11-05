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

// Function: sub_003E8898
// Address: 0x3e8898 - 0x3e88e0
void sub_003E8898_0x3e8898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E8898_0x3e8898");
#endif

    switch (ctx->pc) {
        case 0x3e88bcu: goto label_3e88bc;
        case 0x3e88c8u: goto label_3e88c8;
        default: break;
    }

    ctx->pc = 0x3e8898u;

    // 0x3e8898: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3e8898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3e889c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3e889cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3e88a0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3e88a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3e88a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3e88a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e88a8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3e88a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e88ac: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3e88acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3e88b0: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x3e88b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x3e88b4: 0xc0b0450  jal         func_2C1140
    ctx->pc = 0x3E88B4u;
    SET_GPR_U32(ctx, 31, 0x3E88BCu);
    ctx->pc = 0x3E88B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E88B4u;
    // 0x3e88b8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C1140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1140u, 0x3E88B4u, 0x3E88BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E88BCu;
label_3e88bc:
    // 0x3e88bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e88bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e88c0: 0xc0af77e  jal         func_2BDDF8
    ctx->pc = 0x3E88C0u;
    SET_GPR_U32(ctx, 31, 0x3E88C8u);
    ctx->pc = 0x3E88C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E88C0u;
    // 0x3e88c4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BDDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BDDF8u, 0x3E88C0u, 0x3E88C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E88C8u;
label_3e88c8:
    // 0x3e88c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3e88c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e88cc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3e88ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3e88d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3e88d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e88d4: 0x3e00008  jr          $ra
    ctx->pc = 0x3E88D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E88D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E88D4u;
        // 0x3e88d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E88D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E88DCu;
    // 0x3e88dc: 0x0  nop
    ctx->pc = 0x3e88dcu;
    // NOP
    ctx->pc = 0x3e88e0u;
}
