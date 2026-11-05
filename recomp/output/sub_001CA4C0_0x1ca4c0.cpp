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

// Function: sub_001CA4C0
// Address: 0x1ca4c0 - 0x1ca4f8
void sub_001CA4C0_0x1ca4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CA4C0_0x1ca4c0");
#endif

    ctx->pc = 0x1ca4c0u;

    // 0x1ca4c0: 0x8c8200a4  lw          $v0, 0xA4($a0)
    ctx->pc = 0x1ca4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 164)));
    // 0x1ca4c4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CA4C4u;
    {
        const bool branch_taken_0x1ca4c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA4C4u;
        // 0x1ca4c8: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca4c4) {
            ctx->pc = 0x1CA4DCu;
            goto label_1ca4dc;
        }
    }
    ctx->pc = 0x1CA4CCu;
    // 0x1ca4cc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1ca4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1ca4d0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1ca4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1ca4d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA4D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA4D4u;
        // 0x1ca4d8: 0xc4400008  lwc1        $f0, 0x8($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CA4D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CA4DCu;
label_1ca4dc:
    // 0x1ca4dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA4DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA4DCu;
        // 0x1ca4e0: 0xc48000a0  lwc1        $f0, 0xA0($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CA4DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CA4E4u;
    // 0x1ca4e4: 0x0  nop
    ctx->pc = 0x1ca4e4u;
    // NOP
    // 0x1ca4e8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1ca4e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1ca4ec: 0x0  nop
    ctx->pc = 0x1ca4ecu;
    // NOP
    // 0x1ca4f0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1ca4f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ca4f4: 0x0  nop
    ctx->pc = 0x1ca4f4u;
    // NOP
    ctx->pc = 0x1ca4f8u;
}
