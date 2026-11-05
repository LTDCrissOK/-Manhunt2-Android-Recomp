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

// Function: sub_0028CB48
// Address: 0x28cb48 - 0x28cb78
void sub_0028CB48_0x28cb48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028CB48_0x28cb48");
#endif

    ctx->pc = 0x28cb48u;

    // 0x28cb48: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x28cb48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x28cb4c: 0x2462c9f0  addiu       $v0, $v1, -0x3610
    ctx->pc = 0x28cb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953456));
    // 0x28cb50: 0xac64c9f0  sw          $a0, -0x3610($v1)
    ctx->pc = 0x28cb50u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6BC9F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BC9F0u, _value); } while (0);
    // 0x28cb54: 0xe452001c  swc1        $f18, 0x1C($v0)
    ctx->pc = 0x28cb54u;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6BCA0Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BCA0Cu, _value); } while (0); }
    // 0x28cb58: 0xe44c0004  swc1        $f12, 0x4($v0)
    ctx->pc = 0x28cb58u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6BC9F4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BC9F4u, _value); } while (0); }
    // 0x28cb5c: 0xe44d0008  swc1        $f13, 0x8($v0)
    ctx->pc = 0x28cb5cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6BC9F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BC9F8u, _value); } while (0); }
    // 0x28cb60: 0xe44e000c  swc1        $f14, 0xC($v0)
    ctx->pc = 0x28cb60u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6BC9FCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BC9FCu, _value); } while (0); }
    // 0x28cb64: 0xe44f0010  swc1        $f15, 0x10($v0)
    ctx->pc = 0x28cb64u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6BCA00u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BCA00u, _value); } while (0); }
    // 0x28cb68: 0xe4500014  swc1        $f16, 0x14($v0)
    ctx->pc = 0x28cb68u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6BCA04u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BCA04u, _value); } while (0); }
    // 0x28cb6c: 0x3e00008  jr          $ra
    ctx->pc = 0x28CB6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28CB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CB6Cu;
        // 0x28cb70: 0xe4510018  swc1        $f17, 0x18($v0) (Delay Slot)
        { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28CB6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28CB74u;
    // 0x28cb74: 0x0  nop
    ctx->pc = 0x28cb74u;
    // NOP
    ctx->pc = 0x28cb78u;
}
