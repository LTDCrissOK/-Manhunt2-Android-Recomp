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

// Function: sub_003E7F18
// Address: 0x3e7f18 - 0x3e7f60
void sub_003E7F18_0x3e7f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E7F18_0x3e7f18");
#endif

    switch (ctx->pc) {
        case 0x3e7f3cu: goto label_3e7f3c;
        case 0x3e7f48u: goto label_3e7f48;
        default: break;
    }

    ctx->pc = 0x3e7f18u;

    // 0x3e7f18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3e7f18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3e7f1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3e7f1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3e7f20: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3e7f20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3e7f24: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3e7f24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e7f28: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3e7f28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e7f2c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3e7f2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3e7f30: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x3e7f30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x3e7f34: 0xc0b0336  jal         func_2C0CD8
    ctx->pc = 0x3E7F34u;
    SET_GPR_U32(ctx, 31, 0x3E7F3Cu);
    ctx->pc = 0x3E7F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7F34u;
    // 0x3e7f38: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0CD8u, 0x3E7F34u, 0x3E7F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7F3Cu;
label_3e7f3c:
    // 0x3e7f3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e7f3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e7f40: 0xc0af77e  jal         func_2BDDF8
    ctx->pc = 0x3E7F40u;
    SET_GPR_U32(ctx, 31, 0x3E7F48u);
    ctx->pc = 0x3E7F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7F40u;
    // 0x3e7f44: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BDDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BDDF8u, 0x3E7F40u, 0x3E7F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7F48u;
label_3e7f48:
    // 0x3e7f48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3e7f48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e7f4c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3e7f4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3e7f50: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3e7f50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e7f54: 0x3e00008  jr          $ra
    ctx->pc = 0x3E7F54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E7F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7F54u;
        // 0x3e7f58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E7F54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E7F5Cu;
    // 0x3e7f5c: 0x0  nop
    ctx->pc = 0x3e7f5cu;
    // NOP
    ctx->pc = 0x3e7f60u;
}
