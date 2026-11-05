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

// Function: sub_001D5C20
// Address: 0x1d5c20 - 0x1d5c58
void sub_001D5C20_0x1d5c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D5C20_0x1d5c20");
#endif

    ctx->pc = 0x1d5c20u;

    // 0x1d5c20: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d5c20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1d5c24: 0x14a20009  bne         $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D5C24u;
    {
        const bool branch_taken_0x1d5c24 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d5c24) {
            ctx->pc = 0x1D5C4Cu;
            goto label_1d5c4c;
        }
    }
    ctx->pc = 0x1D5C2Cu;
    // 0x1d5c2c: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D5C2Cu;
    {
        const bool branch_taken_0x1d5c2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5C2Cu;
        // 0x1d5c30: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5c2c) {
            ctx->pc = 0x1D5C4Cu;
            goto label_1d5c4c;
        }
    }
    ctx->pc = 0x1D5C34u;
    // 0x1d5c34: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1d5c34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1d5c38: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d5c38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d5c3c: 0xc4418ec0  lwc1        $f1, -0x7140($v0)
    ctx->pc = 0x1d5c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294938304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d5c40: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x1d5c40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x1d5c44: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1d5c44u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1d5c48: 0xe460f2f0  swc1        $f0, -0xD10($v1)
    ctx->pc = 0x1d5c48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x48F2F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x48F2F0u, _value); } while (0); }
label_1d5c4c:
    // 0x1d5c4c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5C4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5C4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5C54u;
    // 0x1d5c54: 0x0  nop
    ctx->pc = 0x1d5c54u;
    // NOP
    ctx->pc = 0x1d5c58u;
}
