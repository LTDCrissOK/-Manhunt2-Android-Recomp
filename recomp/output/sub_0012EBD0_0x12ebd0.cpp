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

// Function: sub_0012EBD0
// Address: 0x12ebd0 - 0x12ec10
void sub_0012EBD0_0x12ebd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012EBD0_0x12ebd0");
#endif

    switch (ctx->pc) {
        case 0x12ebfcu: goto label_12ebfc;
        default: break;
    }

    ctx->pc = 0x12ebd0u;

    // 0x12ebd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12ebd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12ebd4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12ebd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12ebd8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x12ebd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x12ebdc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12ebdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ebe0: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x12ebe0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x12ebe4: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x12ebe4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x12ebe8: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x12ebe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x12ebec: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x12ebecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x12ebf0: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x12ebf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x12ebf4: 0xc04bc6a  jal         func_12F1A8
    ctx->pc = 0x12EBF4u;
    SET_GPR_U32(ctx, 31, 0x12EBFCu);
    ctx->pc = 0x12EBF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EBF4u;
    // 0x12ebf8: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F1A8u, 0x12EBF4u, 0x12EBFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EBFCu;
label_12ebfc:
    // 0x12ebfc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x12ebfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ec00: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x12ec00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12ec04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12ec04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12ec08: 0x3e00008  jr          $ra
    ctx->pc = 0x12EC08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12EC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EC08u;
        // 0x12ec0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12EC08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12EC10u;
}
