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

// Function: sub_003B1CF8
// Address: 0x3b1cf8 - 0x3b1d30
void sub_003B1CF8_0x3b1cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B1CF8_0x3b1cf8");
#endif

    switch (ctx->pc) {
        case 0x3b1d14u: goto label_3b1d14;
        default: break;
    }

    ctx->pc = 0x3b1cf8u;

    // 0x3b1cf8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3b1cf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3b1cfc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3b1cfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3b1d00: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3b1d00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1d04: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3b1d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3b1d08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3b1d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3b1d0c: 0xc0ec70c  jal         func_3B1C30
    ctx->pc = 0x3B1D0Cu;
    SET_GPR_U32(ctx, 31, 0x3B1D14u);
    ctx->pc = 0x3B1D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1D0Cu;
    // 0x3b1d10: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1C30u, 0x3B1D0Cu, 0x3B1D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1D14u;
label_3b1d14:
    // 0x3b1d14: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3b1d14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b1d18: 0xae1101ac  sw          $s1, 0x1AC($s0)
    ctx->pc = 0x3b1d18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 428), GPR_U32(ctx, 17));
    // 0x3b1d1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b1d1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b1d20: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3b1d20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3b1d24: 0x3e00008  jr          $ra
    ctx->pc = 0x3B1D24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B1D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1D24u;
        // 0x3b1d28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B1D24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B1D2Cu;
    // 0x3b1d2c: 0x0  nop
    ctx->pc = 0x3b1d2cu;
    // NOP
    ctx->pc = 0x3b1d30u;
}
