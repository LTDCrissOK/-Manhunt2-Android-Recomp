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

// Function: sub_003B2E20
// Address: 0x3b2e20 - 0x3b2e80
void sub_003B2E20_0x3b2e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B2E20_0x3b2e20");
#endif

    switch (ctx->pc) {
        case 0x3b2e3cu: goto label_3b2e3c;
        default: break;
    }

    ctx->pc = 0x3b2e20u;

    // 0x3b2e20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3b2e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3b2e24: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x3b2e24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b2e28: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3b2e28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b2e2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3b2e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3b2e30: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3b2e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3b2e34: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x3B2E34u;
    SET_GPR_U32(ctx, 31, 0x3B2E3Cu);
    ctx->pc = 0x3B2E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2E34u;
    // 0x3b2e38: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x3B2E34u, 0x3B2E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2E3Cu;
label_3b2e3c:
    // 0x3b2e3c: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x3b2e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x3b2e40: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x3b2e40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x3b2e44: 0x3c040042  lui         $a0, 0x42
    ctx->pc = 0x3b2e44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)66 << 16));
    // 0x3b2e48: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x3b2e48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x3b2e4c: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x3b2e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x3b2e50: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3b2e50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b2e54: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3b2e54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b2e58: 0x8c834e58  lw          $v1, 0x4E58($a0)
    ctx->pc = 0x3b2e58u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x424E58u));
    // 0x3b2e5c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3b2e5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3b2e60: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x3b2e60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x3b2e64: 0x8ca44e54  lw          $a0, 0x4E54($a1)
    ctx->pc = 0x3b2e64u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x424E54u));
    // 0x3b2e68: 0xa2060000  sb          $a2, 0x0($s0)
    ctx->pc = 0x3b2e68u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x3b2e6c: 0xae04000c  sw          $a0, 0xC($s0)
    ctx->pc = 0x3b2e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 4));
    // 0x3b2e70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b2e70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b2e74: 0x3e00008  jr          $ra
    ctx->pc = 0x3B2E74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B2E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2E74u;
        // 0x3b2e78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B2E74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B2E7Cu;
    // 0x3b2e7c: 0x0  nop
    ctx->pc = 0x3b2e7cu;
    // NOP
    ctx->pc = 0x3b2e80u;
}
