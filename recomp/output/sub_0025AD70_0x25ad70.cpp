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

// Function: sub_0025AD70
// Address: 0x25ad70 - 0x25ad98
void sub_0025AD70_0x25ad70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025AD70_0x25ad70");
#endif

    switch (ctx->pc) {
        case 0x25ad7cu: goto label_25ad7c;
        default: break;
    }

    ctx->pc = 0x25ad70u;

    // 0x25ad70: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x25ad70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x25ad74: 0x3e00008  jr          $ra
    ctx->pc = 0x25AD74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25AD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AD74u;
        // 0x25ad78: 0xc44057f0  lwc1        $f0, 0x57F0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 22512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25AD74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25AD7Cu;
label_25ad7c:
    // 0x25ad7c: 0x3c013d08  lui         $at, 0x3D08
    ctx->pc = 0x25ad7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15624 << 16));
    // 0x25ad80: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x25ad80u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
    // 0x25ad84: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25ad84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25ad88: 0x3e00008  jr          $ra
    ctx->pc = 0x25AD88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25AD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AD88u;
        // 0x25ad8c: 0x46000802  mul.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25AD88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25AD90u;
    // 0x25ad90: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x25ad90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x25ad94: 0x0  nop
    ctx->pc = 0x25ad94u;
    // NOP
    ctx->pc = 0x25ad98u;
}
