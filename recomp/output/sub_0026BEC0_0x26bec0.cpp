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

// Function: sub_0026BEC0
// Address: 0x26bec0 - 0x26bf00
void sub_0026BEC0_0x26bec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026BEC0_0x26bec0");
#endif

    switch (ctx->pc) {
        case 0x26bedcu: goto label_26bedc;
        case 0x26bee4u: goto label_26bee4;
        default: break;
    }

    ctx->pc = 0x26bec0u;

    // 0x26bec0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26bec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26bec4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x26bec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x26bec8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x26bec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x26becc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x26beccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bed0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x26bed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x26bed4: 0xc09aff2  jal         func_26BFC8
    ctx->pc = 0x26BED4u;
    SET_GPR_U32(ctx, 31, 0x26BEDCu);
    ctx->pc = 0x26BED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BED4u;
    // 0x26bed8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BFC8u, 0x26BED4u, 0x26BEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BEDCu;
label_26bedc:
    // 0x26bedc: 0xc09af6c  jal         func_26BDB0
    ctx->pc = 0x26BEDCu;
    SET_GPR_U32(ctx, 31, 0x26BEE4u);
    ctx->pc = 0x26BEE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BEDCu;
    // 0x26bee0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26BDB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BDB0u, 0x26BEDCu, 0x26BEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BEE4u;
label_26bee4:
    // 0x26bee4: 0xae110254  sw          $s1, 0x254($s0)
    ctx->pc = 0x26bee4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 596), GPR_U32(ctx, 17));
    // 0x26bee8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x26bee8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26beec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x26beecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x26bef0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26bef0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26bef4: 0x3e00008  jr          $ra
    ctx->pc = 0x26BEF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26BEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BEF4u;
        // 0x26bef8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26BEF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26BEFCu;
    // 0x26befc: 0x0  nop
    ctx->pc = 0x26befcu;
    // NOP
    ctx->pc = 0x26bf00u;
}
