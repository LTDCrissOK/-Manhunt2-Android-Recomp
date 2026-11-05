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

// Function: sub_0025BEF8
// Address: 0x25bef8 - 0x25bf38
void sub_0025BEF8_0x25bef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025BEF8_0x25bef8");
#endif

    switch (ctx->pc) {
        case 0x25bf18u: goto label_25bf18;
        default: break;
    }

    ctx->pc = 0x25bef8u;

    // 0x25bef8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25bef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25befc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x25befcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25bf00: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25bf00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25bf04: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x25bf04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x25bf08: 0xa2000004  sb          $zero, 0x4($s0)
    ctx->pc = 0x25bf08u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x25bf0c: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x25bf0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x25bf10: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x25BF10u;
    SET_GPR_U32(ctx, 31, 0x25BF18u);
    ctx->pc = 0x25BF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BF10u;
    // 0x25bf14: 0xae050000  sw          $a1, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x25BF10u, 0x25BF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BF18u;
label_25bf18:
    // 0x25bf18: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x25bf18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x25bf1c: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x25bf1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x25bf20: 0x7e000010  sq          $zero, 0x10($s0)
    ctx->pc = 0x25bf20u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 0));
    // 0x25bf24: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x25bf24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25bf28: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x25bf28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25bf2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x25bf2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25bf30: 0x3e00008  jr          $ra
    ctx->pc = 0x25BF30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25BF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BF30u;
        // 0x25bf34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25BF30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25BF38u;
}
