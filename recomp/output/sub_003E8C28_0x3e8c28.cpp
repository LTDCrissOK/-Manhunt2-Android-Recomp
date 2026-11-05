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

// Function: sub_003E8C28
// Address: 0x3e8c28 - 0x3e8c70
void sub_003E8C28_0x3e8c28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E8C28_0x3e8c28");
#endif

    switch (ctx->pc) {
        case 0x3e8c4cu: goto label_3e8c4c;
        case 0x3e8c58u: goto label_3e8c58;
        default: break;
    }

    ctx->pc = 0x3e8c28u;

    // 0x3e8c28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3e8c28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3e8c2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3e8c2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3e8c30: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3e8c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3e8c34: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3e8c34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8c38: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3e8c38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8c3c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3e8c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3e8c40: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x3e8c40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x3e8c44: 0xc0b0336  jal         func_2C0CD8
    ctx->pc = 0x3E8C44u;
    SET_GPR_U32(ctx, 31, 0x3E8C4Cu);
    ctx->pc = 0x3E8C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E8C44u;
    // 0x3e8c48: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0CD8u, 0x3E8C44u, 0x3E8C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E8C4Cu;
label_3e8c4c:
    // 0x3e8c4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e8c4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8c50: 0xc0af77e  jal         func_2BDDF8
    ctx->pc = 0x3E8C50u;
    SET_GPR_U32(ctx, 31, 0x3E8C58u);
    ctx->pc = 0x3E8C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E8C50u;
    // 0x3e8c54: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BDDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BDDF8u, 0x3E8C50u, 0x3E8C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E8C58u;
label_3e8c58:
    // 0x3e8c58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3e8c58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e8c5c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3e8c5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3e8c60: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3e8c60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e8c64: 0x3e00008  jr          $ra
    ctx->pc = 0x3E8C64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E8C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8C64u;
        // 0x3e8c68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E8C64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E8C6Cu;
    // 0x3e8c6c: 0x0  nop
    ctx->pc = 0x3e8c6cu;
    // NOP
    ctx->pc = 0x3e8c70u;
}
