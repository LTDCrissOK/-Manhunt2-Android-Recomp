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

// Function: sub_0012D7B8
// Address: 0x12d7b8 - 0x12d7f8
void sub_0012D7B8_0x12d7b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012D7B8_0x12d7b8");
#endif

    switch (ctx->pc) {
        case 0x12d7d4u: goto label_12d7d4;
        case 0x12d7e0u: goto label_12d7e0;
        default: break;
    }

    ctx->pc = 0x12d7b8u;

    // 0x12d7b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12d7b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12d7bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12d7bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12d7c0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12d7c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12d7c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12d7c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d7c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12d7c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12d7cc: 0xc04b6e2  jal         func_12DB88
    ctx->pc = 0x12D7CCu;
    SET_GPR_U32(ctx, 31, 0x12D7D4u);
    ctx->pc = 0x12D7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D7CCu;
    // 0x12d7d0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12DB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DB88u, 0x12D7CCu, 0x12D7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D7D4u;
label_12d7d4:
    // 0x12d7d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12d7d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d7d8: 0xc04b686  jal         func_12DA18
    ctx->pc = 0x12D7D8u;
    SET_GPR_U32(ctx, 31, 0x12D7E0u);
    ctx->pc = 0x12D7DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D7D8u;
    // 0x12d7dc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12DA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DA18u, 0x12D7D8u, 0x12D7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D7E0u;
label_12d7e0:
    // 0x12d7e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12d7e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12d7e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12d7e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12d7e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12d7e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12d7ec: 0x3e00008  jr          $ra
    ctx->pc = 0x12D7ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12D7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D7ECu;
        // 0x12d7f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12D7ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12D7F4u;
    // 0x12d7f4: 0x0  nop
    ctx->pc = 0x12d7f4u;
    // NOP
    ctx->pc = 0x12d7f8u;
}
