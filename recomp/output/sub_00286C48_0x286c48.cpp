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

// Function: sub_00286C48
// Address: 0x286c48 - 0x286cb0
void sub_00286C48_0x286c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00286C48_0x286c48");
#endif

    ctx->pc = 0x286c48u;

    // 0x286c48: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x286c48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x286c4c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x286c4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x286c50: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x286c50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x286c54: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x286c54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x286c58: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x286c58u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x286c5c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x286c5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x286c60: 0x2462c660  addiu       $v0, $v1, -0x39A0
    ctx->pc = 0x286c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952544));
    // 0x286c64: 0x3c013d75  lui         $at, 0x3D75
    ctx->pc = 0x286c64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15733 << 16));
    // 0x286c68: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x286c68u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x286c6c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x286c6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286c70: 0x3c013b03  lui         $at, 0x3B03
    ctx->pc = 0x286c70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15107 << 16));
    // 0x286c74: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x286c74u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x286c78: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x286c78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x286c7c: 0xe4420010  swc1        $f2, 0x10($v0)
    ctx->pc = 0x286c7cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6BC670u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BC670u, _value); } while (0); }
    // 0x286c80: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x286c80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6BC67Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BC67Cu, _value); } while (0); }
    // 0x286c84: 0xe4410020  swc1        $f1, 0x20($v0)
    ctx->pc = 0x286c84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6BC680u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BC680u, _value); } while (0); }
    // 0x286c88: 0xe4430028  swc1        $f3, 0x28($v0)
    ctx->pc = 0x286c88u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6BC688u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BC688u, _value); } while (0); }
    // 0x286c8c: 0xac60c660  sw          $zero, -0x39A0($v1)
    ctx->pc = 0x286c8cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6BC660u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BC660u, _value); } while (0);
    // 0x286c90: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x286c90u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6BC664u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BC664u, _value); } while (0);
    // 0x286c94: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x286c94u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6BC668u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BC668u, _value); } while (0);
    // 0x286c98: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x286c98u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6BC66Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BC66Cu, _value); } while (0);
    // 0x286c9c: 0xe4410014  swc1        $f1, 0x14($v0)
    ctx->pc = 0x286c9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6BC674u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BC674u, _value); } while (0); }
    // 0x286ca0: 0x3e00008  jr          $ra
    ctx->pc = 0x286CA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x286CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286CA0u;
        // 0x286ca4: 0xe4410018  swc1        $f1, 0x18($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x286CA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x286CA8u;
    // 0x286ca8: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x286ca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x286cac: 0x0  nop
    ctx->pc = 0x286cacu;
    // NOP
    ctx->pc = 0x286cb0u;
}
