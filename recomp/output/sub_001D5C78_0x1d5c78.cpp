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

// Function: sub_001D5C78
// Address: 0x1d5c78 - 0x1d5cf8
void sub_001D5C78_0x1d5c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D5C78_0x1d5c78");
#endif

    switch (ctx->pc) {
        case 0x1d5ca0u: goto label_1d5ca0;
        case 0x1d5ca8u: goto label_1d5ca8;
        case 0x1d5cb0u: goto label_1d5cb0;
        default: break;
    }

    ctx->pc = 0x1d5c78u;

    // 0x1d5c78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d5c78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d5c7c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1d5c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1d5c80: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d5c80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d5c84: 0x244214b8  addiu       $v0, $v0, 0x14B8
    ctx->pc = 0x1d5c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5304));
    // 0x1d5c88: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d5c88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5c8c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d5c8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d5c90: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d5c90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d5c94: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1d5c94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5c98: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1D5C98u;
    SET_GPR_U32(ctx, 31, 0x1D5CA0u);
    ctx->pc = 0x1D5C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5C98u;
    // 0x1d5c9c: 0xae020040  sw          $v0, 0x40($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1D5C98u, 0x1D5CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5CA0u;
label_1d5ca0:
    // 0x1d5ca0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1D5CA0u;
    SET_GPR_U32(ctx, 31, 0x1D5CA8u);
    ctx->pc = 0x1D5CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5CA0u;
    // 0x1d5ca4: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1D5CA0u, 0x1D5CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5CA8u;
label_1d5ca8:
    // 0x1d5ca8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1D5CA8u;
    SET_GPR_U32(ctx, 31, 0x1D5CB0u);
    ctx->pc = 0x1D5CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5CA8u;
    // 0x1d5cac: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1D5CA8u, 0x1D5CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5CB0u;
label_1d5cb0:
    // 0x1d5cb0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d5cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5cb4: 0xa2000031  sb          $zero, 0x31($s0)
    ctx->pc = 0x1d5cb4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 49), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d5cb8: 0xa2020030  sb          $v0, 0x30($s0)
    ctx->pc = 0x1d5cb8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 48), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d5cbc: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x1d5cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x1d5cc0: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x1d5cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x1d5cc4: 0xae11003c  sw          $s1, 0x3C($s0)
    ctx->pc = 0x1d5cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 17));
    // 0x1d5cc8: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1d5cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1d5ccc: 0xac500008  sw          $s0, 0x8($v0)
    ctx->pc = 0x1d5cccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 16));
    // 0x1d5cd0: 0x7e000000  sq          $zero, 0x0($s0)
    ctx->pc = 0x1d5cd0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 0));
    // 0x1d5cd4: 0x7e000010  sq          $zero, 0x10($s0)
    ctx->pc = 0x1d5cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 0));
    // 0x1d5cd8: 0x7e000020  sq          $zero, 0x20($s0)
    ctx->pc = 0x1d5cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 0));
    // 0x1d5cdc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1d5cdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5ce0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d5ce0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d5ce4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d5ce4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d5ce8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d5ce8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d5cec: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5CECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5CECu;
        // 0x1d5cf0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5CECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5CF4u;
    // 0x1d5cf4: 0x0  nop
    ctx->pc = 0x1d5cf4u;
    // NOP
    ctx->pc = 0x1d5cf8u;
}
