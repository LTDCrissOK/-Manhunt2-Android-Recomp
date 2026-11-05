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

// Function: sub_002C6DD8
// Address: 0x2c6dd8 - 0x2c6e60
void sub_002C6DD8_0x2c6dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C6DD8_0x2c6dd8");
#endif

    ctx->pc = 0x2c6dd8u;

    // 0x2c6dd8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2c6dd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2c6ddc: 0x14a2001d  bne         $a1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2C6DDCu;
    {
        const bool branch_taken_0x2c6ddc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c6ddc) {
            ctx->pc = 0x2C6E54u;
            goto label_2c6e54;
        }
    }
    ctx->pc = 0x2C6DE4u;
    // 0x2c6de4: 0x1080001b  beqz        $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2C6DE4u;
    {
        const bool branch_taken_0x2c6de4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6DE4u;
        // 0x2c6de8: 0x3c090057  lui         $t1, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6de4) {
            ctx->pc = 0x2C6E54u;
            goto label_2c6e54;
        }
    }
    ctx->pc = 0x2C6DECu;
    // 0x2c6dec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c6decu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c6df0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c6df0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c6df4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c6df4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c6df8: 0x25255b60  addiu       $a1, $t1, 0x5B60
    ctx->pc = 0x2c6df8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 23392));
    // 0x2c6dfc: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x2c6dfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x2c6e00: 0x3c060057  lui         $a2, 0x57
    ctx->pc = 0x2c6e00u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)87 << 16));
    // 0x2c6e04: 0xe4c15b30  swc1        $f1, 0x5B30($a2)
    ctx->pc = 0x2c6e04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x575B30u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x575B30u, _value); } while (0); }
    // 0x2c6e08: 0x24c25b30  addiu       $v0, $a2, 0x5B30
    ctx->pc = 0x2c6e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 23344));
    // 0x2c6e0c: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x2c6e0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x575B3Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x575B3Cu, _value); } while (0); }
    // 0x2c6e10: 0x3c070057  lui         $a3, 0x57
    ctx->pc = 0x2c6e10u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)87 << 16));
    // 0x2c6e14: 0xe4e05b40  swc1        $f0, 0x5B40($a3)
    ctx->pc = 0x2c6e14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x575B40u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x575B40u, _value); } while (0); }
    // 0x2c6e18: 0x24e35b40  addiu       $v1, $a3, 0x5B40
    ctx->pc = 0x2c6e18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 23360));
    // 0x2c6e1c: 0x3c080057  lui         $t0, 0x57
    ctx->pc = 0x2c6e1cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)87 << 16));
    // 0x2c6e20: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x2c6e20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x575B4Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x575B4Cu, _value); } while (0); }
    // 0x2c6e24: 0xe5005b50  swc1        $f0, 0x5B50($t0)
    ctx->pc = 0x2c6e24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x575B50u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x575B50u, _value); } while (0); }
    // 0x2c6e28: 0x25045b50  addiu       $a0, $t0, 0x5B50
    ctx->pc = 0x2c6e28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 23376));
    // 0x2c6e2c: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x2c6e2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x575B58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x575B58u, _value); } while (0); }
    // 0x2c6e30: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x2c6e30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x575B5Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x575B5Cu, _value); } while (0); }
    // 0x2c6e34: 0xe5205b60  swc1        $f0, 0x5B60($t1)
    ctx->pc = 0x2c6e34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 23392), bits); }
    // 0x2c6e38: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2c6e38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x575B34u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x575B34u, _value); } while (0); }
    // 0x2c6e3c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2c6e3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x575B38u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x575B38u, _value); } while (0); }
    // 0x2c6e40: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x2c6e40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x575B44u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x575B44u, _value); } while (0); }
    // 0x2c6e44: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2c6e44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x575B48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x575B48u, _value); } while (0); }
    // 0x2c6e48: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x2c6e48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x575B54u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x575B54u, _value); } while (0); }
    // 0x2c6e4c: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x2c6e4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x2c6e50: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x2c6e50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_2c6e54:
    // 0x2c6e54: 0x3e00008  jr          $ra
    ctx->pc = 0x2C6E54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C6E54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C6E5Cu;
    // 0x2c6e5c: 0x0  nop
    ctx->pc = 0x2c6e5cu;
    // NOP
    ctx->pc = 0x2c6e60u;
}
