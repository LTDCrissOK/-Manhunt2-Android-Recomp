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

// Function: sub_00319C78
// Address: 0x319c78 - 0x319cc0
void sub_00319C78_0x319c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00319C78_0x319c78");
#endif

    ctx->pc = 0x319c78u;

    // 0x319c78: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x319c78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x319c7c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x319c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x319c80: 0xc443bd08  lwc1        $f3, -0x42F8($v0)
    ctx->pc = 0x319c80u;
    { uint32_t bits = FAST_READ32(0x3FBD08u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x319c84: 0x3c04005b  lui         $a0, 0x5B
    ctx->pc = 0x319c84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)91 << 16));
    // 0x319c88: 0xc462bd0c  lwc1        $f2, -0x42F4($v1)
    ctx->pc = 0x319c88u;
    { uint32_t bits = FAST_READ32(0x3FBD0Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x319c8c: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x319c8cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x319c90: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x319c90u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x319c94: 0xc4c1bd18  lwc1        $f1, -0x42E8($a2)
    ctx->pc = 0x319c94u;
    { uint32_t bits = FAST_READ32(0x3FBD18u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x319c98: 0xc4e0bd1c  lwc1        $f0, -0x42E4($a3)
    ctx->pc = 0x319c98u;
    { uint32_t bits = FAST_READ32(0x3FBD1Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x319c9c: 0x248222a0  addiu       $v0, $a0, 0x22A0
    ctx->pc = 0x319c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8864));
    // 0x319ca0: 0xe48322a0  swc1        $f3, 0x22A0($a0)
    ctx->pc = 0x319ca0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B22A0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B22A0u, _value); } while (0); }
    // 0x319ca4: 0x3c05005b  lui         $a1, 0x5B
    ctx->pc = 0x319ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)91 << 16));
    // 0x319ca8: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x319ca8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B22A4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B22A4u, _value); } while (0); }
    // 0x319cac: 0x24a322a8  addiu       $v1, $a1, 0x22A8
    ctx->pc = 0x319cacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 8872));
    // 0x319cb0: 0xe4a122a8  swc1        $f1, 0x22A8($a1)
    ctx->pc = 0x319cb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B22A8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B22A8u, _value); } while (0); }
    // 0x319cb4: 0x3e00008  jr          $ra
    ctx->pc = 0x319CB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x319CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319CB4u;
        // 0x319cb8: 0xe4600004  swc1        $f0, 0x4($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x319CB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x319CBCu;
    // 0x319cbc: 0x0  nop
    ctx->pc = 0x319cbcu;
    // NOP
    ctx->pc = 0x319cc0u;
}
