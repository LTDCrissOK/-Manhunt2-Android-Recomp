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

// Function: sub_002D7100
// Address: 0x2d7100 - 0x2d7140
void sub_002D7100_0x2d7100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D7100_0x2d7100");
#endif

    switch (ctx->pc) {
        case 0x2d7124u: goto label_2d7124;
        default: break;
    }

    ctx->pc = 0x2d7100u;

    // 0x2d7100: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d7100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d7104: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d7104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d7108: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2d7108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2d710c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d710cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7110: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x2d7110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2d7114: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D7114u;
    {
        const bool branch_taken_0x2d7114 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d7114) {
            ctx->pc = 0x2D7118u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D7114u;
            // 0x2d7118: 0xa2000014  sb          $zero, 0x14($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 20), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D712Cu;
            goto label_2d712c;
        }
    }
    ctx->pc = 0x2D711Cu;
    // 0x2d711c: 0xc0c7a32  jal         func_31E8C8
    ctx->pc = 0x2D711Cu;
    SET_GPR_U32(ctx, 31, 0x2D7124u);
    ctx->pc = 0x2D7120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D711Cu;
    // 0x2d7120: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E8C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E8C8u, 0x2D711Cu, 0x2D7124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7124u;
label_2d7124:
    // 0x2d7124: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x2d7124u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x2d7128: 0xa2000014  sb          $zero, 0x14($s0)
    ctx->pc = 0x2d7128u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 20), (uint8_t)GPR_U32(ctx, 0));
label_2d712c:
    // 0x2d712c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d712cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d7130: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2d7130u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d7134: 0x3e00008  jr          $ra
    ctx->pc = 0x2D7134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D7138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7134u;
        // 0x2d7138: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D7134u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D713Cu;
    // 0x2d713c: 0x0  nop
    ctx->pc = 0x2d713cu;
    // NOP
    ctx->pc = 0x2d7140u;
}
