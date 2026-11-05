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

// Function: sub_003E83D8
// Address: 0x3e83d8 - 0x3e8420
void sub_003E83D8_0x3e83d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E83D8_0x3e83d8");
#endif

    switch (ctx->pc) {
        case 0x3e83fcu: goto label_3e83fc;
        case 0x3e8408u: goto label_3e8408;
        default: break;
    }

    ctx->pc = 0x3e83d8u;

    // 0x3e83d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3e83d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3e83dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3e83dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3e83e0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3e83e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3e83e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3e83e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e83e8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3e83e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e83ec: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3e83ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3e83f0: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x3e83f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x3e83f4: 0xc0b0336  jal         func_2C0CD8
    ctx->pc = 0x3E83F4u;
    SET_GPR_U32(ctx, 31, 0x3E83FCu);
    ctx->pc = 0x3E83F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E83F4u;
    // 0x3e83f8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0CD8u, 0x3E83F4u, 0x3E83FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E83FCu;
label_3e83fc:
    // 0x3e83fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e83fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8400: 0xc0af77e  jal         func_2BDDF8
    ctx->pc = 0x3E8400u;
    SET_GPR_U32(ctx, 31, 0x3E8408u);
    ctx->pc = 0x3E8404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E8400u;
    // 0x3e8404: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BDDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BDDF8u, 0x3E8400u, 0x3E8408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E8408u;
label_3e8408:
    // 0x3e8408: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3e8408u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e840c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3e840cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3e8410: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3e8410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e8414: 0x3e00008  jr          $ra
    ctx->pc = 0x3E8414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E8418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8414u;
        // 0x3e8418: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E8414u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E841Cu;
    // 0x3e841c: 0x0  nop
    ctx->pc = 0x3e841cu;
    // NOP
    ctx->pc = 0x3e8420u;
}
