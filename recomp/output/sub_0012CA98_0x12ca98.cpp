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

// Function: sub_0012CA98
// Address: 0x12ca98 - 0x12cad8
void sub_0012CA98_0x12ca98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012CA98_0x12ca98");
#endif

    switch (ctx->pc) {
        case 0x12cab4u: goto label_12cab4;
        case 0x12cac0u: goto label_12cac0;
        default: break;
    }

    ctx->pc = 0x12ca98u;

    // 0x12ca98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12ca98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12ca9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12ca9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12caa0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12caa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12caa4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12caa4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12caa8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12caa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12caac: 0xc04b33c  jal         func_12CCF0
    ctx->pc = 0x12CAACu;
    SET_GPR_U32(ctx, 31, 0x12CAB4u);
    ctx->pc = 0x12CAB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CAACu;
    // 0x12cab0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12CCF0u, 0x12CAACu, 0x12CAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CAB4u;
label_12cab4:
    // 0x12cab4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12cab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cab8: 0xc04b2ee  jal         func_12CBB8
    ctx->pc = 0x12CAB8u;
    SET_GPR_U32(ctx, 31, 0x12CAC0u);
    ctx->pc = 0x12CABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CAB8u;
    // 0x12cabc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12CBB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12CBB8u, 0x12CAB8u, 0x12CAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CAC0u;
label_12cac0:
    // 0x12cac0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12cac0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12cac4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12cac4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12cac8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12cac8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12cacc: 0x3e00008  jr          $ra
    ctx->pc = 0x12CACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12CAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CACCu;
        // 0x12cad0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12CACCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12CAD4u;
    // 0x12cad4: 0x0  nop
    ctx->pc = 0x12cad4u;
    // NOP
    ctx->pc = 0x12cad8u;
}
