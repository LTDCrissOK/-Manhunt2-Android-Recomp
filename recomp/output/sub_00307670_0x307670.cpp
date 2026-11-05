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

// Function: sub_00307670
// Address: 0x307670 - 0x3076e0
void sub_00307670_0x307670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00307670_0x307670");
#endif

    switch (ctx->pc) {
        case 0x307688u: goto label_307688;
        case 0x3076c0u: goto label_3076c0;
        case 0x3076d0u: goto label_3076d0;
        default: break;
    }

    ctx->pc = 0x307670u;

    // 0x307670: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x307670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x307674: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x307674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x307678: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x307678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x30767c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x30767cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x307680: 0xc08dc16  jal         func_237058
    ctx->pc = 0x307680u;
    SET_GPR_U32(ctx, 31, 0x307688u);
    ctx->pc = 0x307684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307680u;
    // 0x307684: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237058u, 0x307680u, 0x307688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307688u;
label_307688:
    // 0x307688: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x307688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x30768c: 0xc60012a0  lwc1        $f0, 0x12A0($s0)
    ctx->pc = 0x30768cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x307690: 0xc4412b30  lwc1        $f1, 0x2B30($v0)
    ctx->pc = 0x307690u;
    { uint32_t bits = FAST_READ32(0x482B30u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x307694: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x307694u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x307698: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x307698u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x30769c: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x30769cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3076a0: 0x0  nop
    ctx->pc = 0x3076a0u;
    // NOP
    // 0x3076a4: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x3076A4u;
    {
        const bool branch_taken_0x3076a4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3076A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3076A4u;
        // 0x3076a8: 0xe60012a0  swc1        $f0, 0x12A0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4768), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3076a4) {
            ctx->pc = 0x3076D0u;
            goto label_3076d0;
        }
    }
    ctx->pc = 0x3076ACu;
    // 0x3076ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3076acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3076b0: 0x24050400  addiu       $a1, $zero, 0x400
    ctx->pc = 0x3076b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x3076b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3076b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3076b8: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x3076B8u;
    SET_GPR_U32(ctx, 31, 0x3076C0u);
    ctx->pc = 0x3076BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3076B8u;
    // 0x3076bc: 0xe60212a0  swc1        $f2, 0x12A0($s0) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4768), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x3076B8u, 0x3076C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3076C0u;
label_3076c0:
    // 0x3076c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3076c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3076c4: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x3076c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x3076c8: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x3076C8u;
    SET_GPR_U32(ctx, 31, 0x3076D0u);
    ctx->pc = 0x3076CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3076C8u;
    // 0x3076cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x3076C8u, 0x3076D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3076D0u;
label_3076d0:
    // 0x3076d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3076d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3076d4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3076d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3076d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3076D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3076DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3076D8u;
        // 0x3076dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3076D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3076E0u;
}
