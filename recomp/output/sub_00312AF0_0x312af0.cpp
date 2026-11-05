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

// Function: sub_00312AF0
// Address: 0x312af0 - 0x312b18
void sub_00312AF0_0x312af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00312AF0_0x312af0");
#endif

    switch (ctx->pc) {
        case 0x312b08u: goto label_312b08;
        default: break;
    }

    ctx->pc = 0x312af0u;

    // 0x312af0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x312af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x312af4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x312af4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312af8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x312AF8u;
    {
        const bool branch_taken_0x312af8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x312AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312AF8u;
        // 0x312afc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312af8) {
            ctx->pc = 0x312B08u;
            goto label_312b08;
        }
    }
    ctx->pc = 0x312B00u;
    // 0x312b00: 0xc0c49f6  jal         func_3127D8
    ctx->pc = 0x312B00u;
    SET_GPR_U32(ctx, 31, 0x312B08u);
    ctx->pc = 0x3127D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3127D8u, 0x312B00u, 0x312B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312B08u;
label_312b08:
    // 0x312b08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x312b08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x312b0c: 0x3e00008  jr          $ra
    ctx->pc = 0x312B0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x312B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312B0Cu;
        // 0x312b10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x312B0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x312B14u;
    // 0x312b14: 0x0  nop
    ctx->pc = 0x312b14u;
    // NOP
    ctx->pc = 0x312b18u;
}
