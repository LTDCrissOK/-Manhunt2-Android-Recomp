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

// Function: sub_003267B0
// Address: 0x3267b0 - 0x326860
void sub_003267B0_0x3267b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003267B0_0x3267b0");
#endif

    ctx->pc = 0x3267b0u;

    // 0x3267b0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3267b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3267b4: 0x14a20028  bne         $a1, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x3267B4u;
    {
        const bool branch_taken_0x3267b4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x3267b4) {
            ctx->pc = 0x326858u;
            goto label_326858;
        }
    }
    ctx->pc = 0x3267BCu;
    // 0x3267bc: 0x10800026  beqz        $a0, . + 4 + (0x26 << 2)
    ctx->pc = 0x3267BCu;
    {
        const bool branch_taken_0x3267bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3267C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3267BCu;
        // 0x3267c0: 0x3c0d005b  lui         $t5, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)91 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3267bc) {
            ctx->pc = 0x326858u;
            goto label_326858;
        }
    }
    ctx->pc = 0x3267C4u;
    // 0x3267c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3267c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3267c8: 0x25a66df0  addiu       $a2, $t5, 0x6DF0
    ctx->pc = 0x3267c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 13), 28144));
    // 0x3267cc: 0x3c07005b  lui         $a3, 0x5B
    ctx->pc = 0x3267ccu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)91 << 16));
    // 0x3267d0: 0xe4c0000c  swc1        $f0, 0xC($a2)
    ctx->pc = 0x3267d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
    // 0x3267d4: 0x24e26d80  addiu       $v0, $a3, 0x6D80
    ctx->pc = 0x3267d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 28032));
    // 0x3267d8: 0xe4e06d80  swc1        $f0, 0x6D80($a3)
    ctx->pc = 0x3267d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B6D80u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B6D80u, _value); } while (0); }
    // 0x3267dc: 0x3c08005b  lui         $t0, 0x5B
    ctx->pc = 0x3267dcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)91 << 16));
    // 0x3267e0: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x3267e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B6D8Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B6D8Cu, _value); } while (0); }
    // 0x3267e4: 0x3c09005b  lui         $t1, 0x5B
    ctx->pc = 0x3267e4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)91 << 16));
    // 0x3267e8: 0xe5006d90  swc1        $f0, 0x6D90($t0)
    ctx->pc = 0x3267e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B6D90u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B6D90u, _value); } while (0); }
    // 0x3267ec: 0x25036d90  addiu       $v1, $t0, 0x6D90
    ctx->pc = 0x3267ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 28048));
    // 0x3267f0: 0xe5206dc0  swc1        $f0, 0x6DC0($t1)
    ctx->pc = 0x3267f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B6DC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B6DC0u, _value); } while (0); }
    // 0x3267f4: 0x3c0a005b  lui         $t2, 0x5B
    ctx->pc = 0x3267f4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)91 << 16));
    // 0x3267f8: 0x252c6dc0  addiu       $t4, $t1, 0x6DC0
    ctx->pc = 0x3267f8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 9), 28096));
    // 0x3267fc: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x3267fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B6D9Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B6D9Cu, _value); } while (0); }
    // 0x326800: 0xa1800008  sb          $zero, 0x8($t4)
    ctx->pc = 0x326800u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5B6DC8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5B6DC8u, _value); } while (0);
    // 0x326804: 0x25446dd0  addiu       $a0, $t2, 0x6DD0
    ctx->pc = 0x326804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), 28112));
    // 0x326808: 0xe5406dd0  swc1        $f0, 0x6DD0($t2)
    ctx->pc = 0x326808u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B6DD0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B6DD0u, _value); } while (0); }
    // 0x32680c: 0x3c0b005b  lui         $t3, 0x5B
    ctx->pc = 0x32680cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)91 << 16));
    // 0x326810: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x326810u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B6DDCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B6DDCu, _value); } while (0); }
    // 0x326814: 0x25656de0  addiu       $a1, $t3, 0x6DE0
    ctx->pc = 0x326814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), 28128));
    // 0x326818: 0xe5606de0  swc1        $f0, 0x6DE0($t3)
    ctx->pc = 0x326818u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B6DE0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B6DE0u, _value); } while (0); }
    // 0x32681c: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x32681cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B6DECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B6DECu, _value); } while (0); }
    // 0x326820: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x326820u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x326824: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x326824u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x326828: 0xe5a06df0  swc1        $f0, 0x6DF0($t5)
    ctx->pc = 0x326828u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 28144), bits); }
    // 0x32682c: 0xe4c10004  swc1        $f1, 0x4($a2)
    ctx->pc = 0x32682cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x326830: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x326830u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B6D84u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B6D84u, _value); } while (0); }
    // 0x326834: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x326834u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B6D88u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B6D88u, _value); } while (0); }
    // 0x326838: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x326838u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B6D94u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B6D94u, _value); } while (0); }
    // 0x32683c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x32683cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B6D98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B6D98u, _value); } while (0); }
    // 0x326840: 0xe5800004  swc1        $f0, 0x4($t4)
    ctx->pc = 0x326840u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B6DC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B6DC4u, _value); } while (0); }
    // 0x326844: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x326844u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B6DD4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B6DD4u, _value); } while (0); }
    // 0x326848: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x326848u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B6DD8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B6DD8u, _value); } while (0); }
    // 0x32684c: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x32684cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B6DE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B6DE4u, _value); } while (0); }
    // 0x326850: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x326850u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B6DE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B6DE8u, _value); } while (0); }
    // 0x326854: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x326854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
label_326858:
    // 0x326858: 0x3e00008  jr          $ra
    ctx->pc = 0x326858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326858u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x326860u;
}
