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

// Function: sub_002C1100
// Address: 0x2c1100 - 0x2c1140
void sub_002C1100_0x2c1100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C1100_0x2c1100");
#endif

    switch (ctx->pc) {
        case 0x2c1114u: goto label_2c1114;
        default: break;
    }

    ctx->pc = 0x2c1100u;

    // 0x2c1100: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c1100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c1104: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c1104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c1108: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2c1108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2c110c: 0xc0b0018  jal         func_2C0060
    ctx->pc = 0x2C110Cu;
    SET_GPR_U32(ctx, 31, 0x2C1114u);
    ctx->pc = 0x2C1110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C110Cu;
    // 0x2c1110: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0060u, 0x2C110Cu, 0x2C1114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1114u;
label_2c1114:
    // 0x2c1114: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x2c1114u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x2c1118: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c1118u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c111c: 0x24633cc8  addiu       $v1, $v1, 0x3CC8
    ctx->pc = 0x2c111cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15560));
    // 0x2c1120: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x2c1120u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x2c1124: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x2c1124u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x2c1128: 0xa2000006  sb          $zero, 0x6($s0)
    ctx->pc = 0x2c1128u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c112c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c112cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c1130: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2c1130u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c1134: 0x3e00008  jr          $ra
    ctx->pc = 0x2C1134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C1138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1134u;
        // 0x2c1138: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C1134u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C113Cu;
    // 0x2c113c: 0x0  nop
    ctx->pc = 0x2c113cu;
    // NOP
    ctx->pc = 0x2c1140u;
}
