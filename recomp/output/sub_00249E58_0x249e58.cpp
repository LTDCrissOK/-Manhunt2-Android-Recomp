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

// Function: sub_00249E58
// Address: 0x249e58 - 0x249ea0
void sub_00249E58_0x249e58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00249E58_0x249e58");
#endif

    switch (ctx->pc) {
        case 0x249e78u: goto label_249e78;
        case 0x249e84u: goto label_249e84;
        default: break;
    }

    ctx->pc = 0x249e58u;

    // 0x249e58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x249e58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x249e5c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x249e5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249e60: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x249e60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x249e64: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x249e64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x249e68: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x249e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x249e6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x249e6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249e70: 0xc06b964  jal         func_1AE590
    ctx->pc = 0x249E70u;
    SET_GPR_U32(ctx, 31, 0x249E78u);
    ctx->pc = 0x249E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249E70u;
    // 0x249e74: 0x8e040338  lw          $a0, 0x338($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE590u, 0x249E70u, 0x249E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249E78u;
label_249e78:
    // 0x249e78: 0x8e040338  lw          $a0, 0x338($s0)
    ctx->pc = 0x249e78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
    // 0x249e7c: 0xc06c546  jal         func_1B1518
    ctx->pc = 0x249E7Cu;
    SET_GPR_U32(ctx, 31, 0x249E84u);
    ctx->pc = 0x249E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249E7Cu;
    // 0x249e80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1518u, 0x249E7Cu, 0x249E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249E84u;
label_249e84:
    // 0x249e84: 0xae000554  sw          $zero, 0x554($s0)
    ctx->pc = 0x249e84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1364), GPR_U32(ctx, 0));
    // 0x249e88: 0xae000550  sw          $zero, 0x550($s0)
    ctx->pc = 0x249e88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 0));
    // 0x249e8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x249e8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x249e90: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x249e90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x249e94: 0x3e00008  jr          $ra
    ctx->pc = 0x249E94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x249E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249E94u;
        // 0x249e98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x249E94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x249E9Cu;
    // 0x249e9c: 0x0  nop
    ctx->pc = 0x249e9cu;
    // NOP
    ctx->pc = 0x249ea0u;
}
