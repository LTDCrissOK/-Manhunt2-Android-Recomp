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

// Function: sub_002C39F8
// Address: 0x2c39f8 - 0x2c3a38
void sub_002C39F8_0x2c39f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C39F8_0x2c39f8");
#endif

    switch (ctx->pc) {
        case 0x2c3a0cu: goto label_2c3a0c;
        case 0x2c3a14u: goto label_2c3a14;
        case 0x2c3a1cu: goto label_2c3a1c;
        default: break;
    }

    ctx->pc = 0x2c39f8u;

    // 0x2c39f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c39f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c39fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c39fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c3a00: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2c3a00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2c3a04: 0xc0b0578  jal         func_2C15E0
    ctx->pc = 0x2C3A04u;
    SET_GPR_U32(ctx, 31, 0x2C3A0Cu);
    ctx->pc = 0x2C3A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3A04u;
    // 0x2c3a08: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C15E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C15E0u, 0x2C3A04u, 0x2C3A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3A0Cu;
label_2c3a0c:
    // 0x2c3a0c: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x2C3A0Cu;
    SET_GPR_U32(ctx, 31, 0x2C3A14u);
    ctx->pc = 0x2C3A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3A0Cu;
    // 0x2c3a10: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x2C3A0Cu, 0x2C3A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3A14u;
label_2c3a14:
    // 0x2c3a14: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2C3A14u;
    SET_GPR_U32(ctx, 31, 0x2C3A1Cu);
    ctx->pc = 0x2C3A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3A14u;
    // 0x2c3a18: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2C3A14u, 0x2C3A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3A1Cu;
label_2c3a1c:
    // 0x2c3a1c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c3a1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3a20: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x2c3a20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x2c3a24: 0xae000080  sw          $zero, 0x80($s0)
    ctx->pc = 0x2c3a24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
    // 0x2c3a28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c3a28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c3a2c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2c3a2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c3a30: 0x3e00008  jr          $ra
    ctx->pc = 0x2C3A30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C3A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3A30u;
        // 0x2c3a34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C3A30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C3A38u;
}
