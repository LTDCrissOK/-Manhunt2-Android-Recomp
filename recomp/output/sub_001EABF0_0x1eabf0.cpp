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

// Function: sub_001EABF0
// Address: 0x1eabf0 - 0x1eac80
void sub_001EABF0_0x1eabf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EABF0_0x1eabf0");
#endif

    ctx->pc = 0x1eabf0u;

    // 0x1eabf0: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x1eabf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x1eabf4: 0x246203a0  addiu       $v0, $v1, 0x3A0
    ctx->pc = 0x1eabf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 928));
    // 0x1eabf8: 0x7c6003a0  sq          $zero, 0x3A0($v1)
    ctx->pc = 0x1eabf8u;
    do { __m128i _value = (GPR_VEC(ctx, 0)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x4903A0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x4903A0u, _value); } while (0);
    // 0x1eabfc: 0x7c400010  sq          $zero, 0x10($v0)
    ctx->pc = 0x1eabfcu;
    do { __m128i _value = (GPR_VEC(ctx, 0)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x4903B0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x4903B0u, _value); } while (0);
    // 0x1eac00: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x1eac00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x1eac04: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1eac04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1eac08: 0xc460da0c  lwc1        $f0, -0x25F4($v1)
    ctx->pc = 0x1eac08u;
    { uint32_t bits = FAST_READ32(0x45DA0Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eac0c: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1eac0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x1eac10: 0x24830400  addiu       $v1, $a0, 0x400
    ctx->pc = 0x1eac10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1024));
    // 0x1eac14: 0xac400048  sw          $zero, 0x48($v0)
    ctx->pc = 0x1eac14u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4903E8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4903E8u, _value); } while (0);
    // 0x1eac18: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x1eac18u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4903C4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4903C4u, _value); } while (0);
    // 0x1eac1c: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x1eac1cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4903CCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4903CCu, _value); } while (0);
    // 0x1eac20: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x1eac20u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4903D4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4903D4u, _value); } while (0);
    // 0x1eac24: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x1eac24u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4903C8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4903C8u, _value); } while (0);
    // 0x1eac28: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x1eac28u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4903D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4903D0u, _value); } while (0);
    // 0x1eac2c: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x1eac2cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4903D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4903D8u, _value); } while (0);
    // 0x1eac30: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x1eac30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x4903C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4903C0u, _value); } while (0); }
    // 0x1eac34: 0xac40003c  sw          $zero, 0x3C($v0)
    ctx->pc = 0x1eac34u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4903DCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4903DCu, _value); } while (0);
    // 0x1eac38: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x1eac38u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4903E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4903E0u, _value); } while (0);
    // 0x1eac3c: 0xac450044  sw          $a1, 0x44($v0)
    ctx->pc = 0x1eac3cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x4903E4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4903E4u, _value); } while (0);
    // 0x1eac40: 0xac400050  sw          $zero, 0x50($v0)
    ctx->pc = 0x1eac40u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4903F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4903F0u, _value); } while (0);
    // 0x1eac44: 0x7c800400  sq          $zero, 0x400($a0)
    ctx->pc = 0x1eac44u;
    do { __m128i _value = (GPR_VEC(ctx, 0)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x490400u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x490400u, _value); } while (0);
    // 0x1eac48: 0x7c600010  sq          $zero, 0x10($v1)
    ctx->pc = 0x1eac48u;
    do { __m128i _value = (GPR_VEC(ctx, 0)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x490410u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x490410u, _value); } while (0);
    // 0x1eac4c: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x1eac4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x490420u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x490420u, _value); } while (0); }
    // 0x1eac50: 0xac650044  sw          $a1, 0x44($v1)
    ctx->pc = 0x1eac50u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x490444u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x490444u, _value); } while (0);
    // 0x1eac54: 0xac600048  sw          $zero, 0x48($v1)
    ctx->pc = 0x1eac54u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x490448u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x490448u, _value); } while (0);
    // 0x1eac58: 0xac600024  sw          $zero, 0x24($v1)
    ctx->pc = 0x1eac58u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x490424u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x490424u, _value); } while (0);
    // 0x1eac5c: 0xac60002c  sw          $zero, 0x2C($v1)
    ctx->pc = 0x1eac5cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x49042Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x49042Cu, _value); } while (0);
    // 0x1eac60: 0xac600034  sw          $zero, 0x34($v1)
    ctx->pc = 0x1eac60u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x490434u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x490434u, _value); } while (0);
    // 0x1eac64: 0xac600028  sw          $zero, 0x28($v1)
    ctx->pc = 0x1eac64u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x490428u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x490428u, _value); } while (0);
    // 0x1eac68: 0xac600030  sw          $zero, 0x30($v1)
    ctx->pc = 0x1eac68u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x490430u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x490430u, _value); } while (0);
    // 0x1eac6c: 0xac600038  sw          $zero, 0x38($v1)
    ctx->pc = 0x1eac6cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x490438u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x490438u, _value); } while (0);
    // 0x1eac70: 0xac60003c  sw          $zero, 0x3C($v1)
    ctx->pc = 0x1eac70u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x49043Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x49043Cu, _value); } while (0);
    // 0x1eac74: 0xac600040  sw          $zero, 0x40($v1)
    ctx->pc = 0x1eac74u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x490440u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x490440u, _value); } while (0);
    // 0x1eac78: 0x3e00008  jr          $ra
    ctx->pc = 0x1EAC78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EAC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAC78u;
        // 0x1eac7c: 0xac600050  sw          $zero, 0x50($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EAC78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EAC80u;
}
