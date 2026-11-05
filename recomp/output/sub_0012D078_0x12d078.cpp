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

// Function: sub_0012D078
// Address: 0x12d078 - 0x12d0a8
void sub_0012D078_0x12d078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012D078_0x12d078");
#endif

    switch (ctx->pc) {
        case 0x12d090u: goto label_12d090;
        default: break;
    }

    ctx->pc = 0x12d078u;

    // 0x12d078: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12d078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12d07c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12d07cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12d080: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x12d080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x12d084: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12d084u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d088: 0xc04b4e4  jal         func_12D390
    ctx->pc = 0x12D088u;
    SET_GPR_U32(ctx, 31, 0x12D090u);
    ctx->pc = 0x12D08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D088u;
    // 0x12d08c: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D390u, 0x12D088u, 0x12D090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D090u;
label_12d090:
    // 0x12d090: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x12d090u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d094: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x12d094u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12d098: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12d098u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12d09c: 0x3e00008  jr          $ra
    ctx->pc = 0x12D09Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12D0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D09Cu;
        // 0x12d0a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12D09Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12D0A4u;
    // 0x12d0a4: 0x0  nop
    ctx->pc = 0x12d0a4u;
    // NOP
    ctx->pc = 0x12d0a8u;
}
