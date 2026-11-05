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

// Function: sub_002162A0
// Address: 0x2162a0 - 0x216300
void sub_002162A0_0x2162a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002162A0_0x2162a0");
#endif

    ctx->pc = 0x2162a0u;

    // 0x2162a0: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x2162a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x2162a4: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x2162a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2162a8: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x2162a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2162ac: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2162acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2162b0: 0x3c014200  lui         $at, 0x4200
    ctx->pc = 0x2162b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16896 << 16));
    // 0x2162b4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2162b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2162b8: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2162b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2162bc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2162bcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2162c0: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x2162c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
    // 0x2162c4: 0x3c070048  lui         $a3, 0x48
    ctx->pc = 0x2162c4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)72 << 16));
    // 0x2162c8: 0x0  nop
    ctx->pc = 0x2162c8u;
    // NOP
    // 0x2162cc: 0x0  nop
    ctx->pc = 0x2162ccu;
    // NOP
    // 0x2162d0: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x2162d0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x2162d4: 0xe4612b88  swc1        $f1, 0x2B88($v1)
    ctx->pc = 0x2162d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x482B88u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x482B88u, _value); } while (0); }
    // 0x2162d8: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2162d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2162dc: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x2162dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2162e0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2162e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2162e4: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x2162e4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x2162e8: 0xe4a22b80  swc1        $f2, 0x2B80($a1)
    ctx->pc = 0x2162e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x482B80u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x482B80u, _value); } while (0); }
    // 0x2162ec: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x2162ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2162f0: 0xe4c02b8c  swc1        $f0, 0x2B8C($a2)
    ctx->pc = 0x2162f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x482B8Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x482B8Cu, _value); } while (0); }
    // 0x2162f4: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2162f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2162f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2162F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2162FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2162F8u;
        // 0x2162fc: 0xe4e12b84  swc1        $f1, 0x2B84($a3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 11140), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2162F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x216300u;
}
