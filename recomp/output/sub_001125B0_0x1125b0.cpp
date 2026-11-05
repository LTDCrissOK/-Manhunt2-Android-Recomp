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

// Function: sub_001125B0
// Address: 0x1125b0 - 0x1125f0
void sub_001125B0_0x1125b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001125B0_0x1125b0");
#endif

    switch (ctx->pc) {
        case 0x1125ccu: goto label_1125cc;
        case 0x1125dcu: goto label_1125dc;
        default: break;
    }

    ctx->pc = 0x1125b0u;

    // 0x1125b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1125b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1125b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1125b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1125b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1125b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1125bc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1125bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1125c0: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1125c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x1125c4: 0xc041e74  jal         func_1079D0
    ctx->pc = 0x1125C4u;
    SET_GPR_U32(ctx, 31, 0x1125CCu);
    ctx->pc = 0x1125C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1125C4u;
    // 0x1125c8: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1079D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1079D0u, 0x1125C4u, 0x1125CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1125CCu;
label_1125cc:
    // 0x1125cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1125ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1125d0: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x1125d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x1125d4: 0xc04ca12  jal         func_132848
    ctx->pc = 0x1125D4u;
    SET_GPR_U32(ctx, 31, 0x1125DCu);
    ctx->pc = 0x1125D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1125D4u;
    // 0x1125d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132848u, 0x1125D4u, 0x1125DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1125DCu;
label_1125dc:
    // 0x1125dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1125dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1125e0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1125e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1125e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1125E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1125E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1125E4u;
        // 0x1125e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1125E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1125ECu;
    // 0x1125ec: 0x0  nop
    ctx->pc = 0x1125ecu;
    // NOP
    ctx->pc = 0x1125f0u;
}
