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

// Function: sub_00249D80
// Address: 0x249d80 - 0x249dc0
void sub_00249D80_0x249d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00249D80_0x249d80");
#endif

    ctx->pc = 0x249d80u;

    // 0x249d80: 0x8c8200bc  lw          $v0, 0xBC($a0)
    ctx->pc = 0x249d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
    // 0x249d84: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x249d84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x249d88: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x249D88u;
    {
        const bool branch_taken_0x249d88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x249d88) {
            ctx->pc = 0x249DB4u;
            goto label_249db4;
        }
    }
    ctx->pc = 0x249D90u;
    // 0x249d90: 0x8c8205b0  lw          $v0, 0x5B0($a0)
    ctx->pc = 0x249d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1456)));
    // 0x249d94: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x249D94u;
    {
        const bool branch_taken_0x249d94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x249D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249D94u;
        // 0x249d98: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249d94) {
            ctx->pc = 0x249DB4u;
            goto label_249db4;
        }
    }
    ctx->pc = 0x249D9Cu;
    // 0x249d9c: 0x54a20005  bnel        $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x249D9Cu;
    {
        const bool branch_taken_0x249d9c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x249d9c) {
            ctx->pc = 0x249DA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x249D9Cu;
            // 0x249da0: 0xac8010c0  sw          $zero, 0x10C0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 4288), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x249DB4u;
            goto label_249db4;
        }
    }
    ctx->pc = 0x249DA4u;
    // 0x249da4: 0x8c8200b8  lw          $v0, 0xB8($a0)
    ctx->pc = 0x249da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 184)));
    // 0x249da8: 0xc4401500  lwc1        $f0, 0x1500($v0)
    ctx->pc = 0x249da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x249dac: 0x3e00008  jr          $ra
    ctx->pc = 0x249DACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x249DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249DACu;
        // 0x249db0: 0xe48010c0  swc1        $f0, 0x10C0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4288), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x249DACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x249DB4u;
label_249db4:
    // 0x249db4: 0x3e00008  jr          $ra
    ctx->pc = 0x249DB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x249DB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x249DBCu;
    // 0x249dbc: 0x0  nop
    ctx->pc = 0x249dbcu;
    // NOP
    ctx->pc = 0x249dc0u;
}
