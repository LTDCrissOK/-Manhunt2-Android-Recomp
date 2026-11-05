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

// Function: sub_0036EB10
// Address: 0x36eb10 - 0x36eb50
void sub_0036EB10_0x36eb10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036EB10_0x36eb10");
#endif

    ctx->pc = 0x36eb10u;

    // 0x36eb10: 0x3e00008  jr          $ra
    ctx->pc = 0x36EB10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36EB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EB10u;
        // 0x36eb14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36EB10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36EB18u;
    // 0x36eb18: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x36eb18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x36eb1c: 0x0  nop
    ctx->pc = 0x36eb1cu;
    // NOP
    // 0x36eb20: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x36eb20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x36eb24: 0x0  nop
    ctx->pc = 0x36eb24u;
    // NOP
    // 0x36eb28: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x36eb28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x36eb2c: 0x0  nop
    ctx->pc = 0x36eb2cu;
    // NOP
    // 0x36eb30: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x36eb30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36eb34: 0x0  nop
    ctx->pc = 0x36eb34u;
    // NOP
    // 0x36eb38: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x36eb38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x36eb3c: 0x0  nop
    ctx->pc = 0x36eb3cu;
    // NOP
    // 0x36eb40: 0xe4880038  swc1        $f8, 0x38($a0)
    ctx->pc = 0x36eb40u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
    // 0x36eb44: 0x0  nop
    ctx->pc = 0x36eb44u;
    // NOP
    // 0x36eb48: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x36eb48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x36eb4c: 0x0  nop
    ctx->pc = 0x36eb4cu;
    // NOP
    ctx->pc = 0x36eb50u;
}
