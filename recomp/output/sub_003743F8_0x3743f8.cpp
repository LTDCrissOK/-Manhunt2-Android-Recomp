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

// Function: sub_003743F8
// Address: 0x3743f8 - 0x374440
void sub_003743F8_0x3743f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003743F8_0x3743f8");
#endif

    switch (ctx->pc) {
        case 0x374434u: goto label_374434;
        default: break;
    }

    ctx->pc = 0x3743f8u;

    // 0x3743f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3743f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3743fc: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3743fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x374400: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x374400u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x374404: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x374404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x374408: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x374408u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x37440c: 0xe44ccd24  swc1        $f12, -0x32DC($v0)
    ctx->pc = 0x37440cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3FCD24u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FCD24u, _value); } while (0); }
    // 0x374410: 0xe46dcd2c  swc1        $f13, -0x32D4($v1)
    ctx->pc = 0x374410u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3FCD2Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FCD2Cu, _value); } while (0); }
    // 0x374414: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x374414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x374418: 0x24832d48  addiu       $v1, $a0, 0x2D48
    ctx->pc = 0x374418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 11592));
    // 0x37441c: 0xc48c2d48  lwc1        $f12, 0x2D48($a0)
    ctx->pc = 0x37441cu;
    { uint32_t bits = FAST_READ32(0x482D48u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x374420: 0x8c452d50  lw          $a1, 0x2D50($v0)
    ctx->pc = 0x374420u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x482D50u));
    // 0x374424: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x374424u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x374428: 0xc46d0004  lwc1        $f13, 0x4($v1)
    ctx->pc = 0x374428u;
    { uint32_t bits = FAST_READ32(0x482D4Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x37442c: 0xc0dd076  jal         func_3741D8
    ctx->pc = 0x37442Cu;
    SET_GPR_U32(ctx, 31, 0x374434u);
    ctx->pc = 0x374430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37442Cu;
    // 0x374430: 0x24846038  addiu       $a0, $a0, 0x6038 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3741D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3741D8u, 0x37442Cu, 0x374434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374434u;
label_374434:
    // 0x374434: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x374434u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x374438: 0x3e00008  jr          $ra
    ctx->pc = 0x374438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37443Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374438u;
        // 0x37443c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x374438u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x374440u;
}
