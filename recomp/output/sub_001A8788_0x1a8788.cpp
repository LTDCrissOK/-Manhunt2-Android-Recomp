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

// Function: sub_001A8788
// Address: 0x1a8788 - 0x1a8828
void sub_001A8788_0x1a8788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A8788_0x1a8788");
#endif

    switch (ctx->pc) {
        case 0x1a879cu: goto label_1a879c;
        case 0x1a8818u: goto label_1a8818;
        default: break;
    }

    ctx->pc = 0x1a8788u;

    // 0x1a8788: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a8788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a878c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a878cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a8790: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1a8790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1a8794: 0xc06a328  jal         func_1A8CA0
    ctx->pc = 0x1A8794u;
    SET_GPR_U32(ctx, 31, 0x1A879Cu);
    ctx->pc = 0x1A8798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8794u;
    // 0x1a8798: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8CA0u, 0x1A8794u, 0x1A879Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A879Cu;
label_1a879c:
    // 0x1a879c: 0xc6010168  lwc1        $f1, 0x168($s0)
    ctx->pc = 0x1a879cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a87a0: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1a87a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1a87a4: 0x0  nop
    ctx->pc = 0x1a87a4u;
    // NOP
    // 0x1a87a8: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x1a87a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a87ac: 0x0  nop
    ctx->pc = 0x1a87acu;
    // NOP
    // 0x1a87b0: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1A87B0u;
    {
        const bool branch_taken_0x1a87b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A87B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A87B0u;
        // 0x1a87b4: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a87b0) {
            ctx->pc = 0x1A87D4u;
            goto label_1a87d4;
        }
    }
    ctx->pc = 0x1A87B8u;
    // 0x1a87b8: 0xc4402b30  lwc1        $f0, 0x2B30($v0)
    ctx->pc = 0x1a87b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a87bc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1a87bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1a87c0: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1a87c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a87c4: 0x0  nop
    ctx->pc = 0x1a87c4u;
    // NOP
    // 0x1a87c8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1A87C8u;
    {
        const bool branch_taken_0x1a87c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A87CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A87C8u;
        // 0x1a87cc: 0xe6000168  swc1        $f0, 0x168($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 360), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a87c8) {
            ctx->pc = 0x1A87D4u;
            goto label_1a87d4;
        }
    }
    ctx->pc = 0x1A87D0u;
    // 0x1a87d0: 0xe6020168  swc1        $f2, 0x168($s0)
    ctx->pc = 0x1a87d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 360), bits); }
label_1a87d4:
    // 0x1a87d4: 0xc60101bc  lwc1        $f1, 0x1BC($s0)
    ctx->pc = 0x1a87d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a87d8: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1a87d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1a87dc: 0x0  nop
    ctx->pc = 0x1a87dcu;
    // NOP
    // 0x1a87e0: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x1a87e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a87e4: 0x0  nop
    ctx->pc = 0x1a87e4u;
    // NOP
    // 0x1a87e8: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1A87E8u;
    {
        const bool branch_taken_0x1a87e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A87ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A87E8u;
        // 0x1a87ec: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a87e8) {
            ctx->pc = 0x1A880Cu;
            goto label_1a880c;
        }
    }
    ctx->pc = 0x1A87F0u;
    // 0x1a87f0: 0xc4402b30  lwc1        $f0, 0x2B30($v0)
    ctx->pc = 0x1a87f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a87f4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1a87f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1a87f8: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1a87f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a87fc: 0x0  nop
    ctx->pc = 0x1a87fcu;
    // NOP
    // 0x1a8800: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1A8800u;
    {
        const bool branch_taken_0x1a8800 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A8804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8800u;
        // 0x1a8804: 0xe60001bc  swc1        $f0, 0x1BC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 444), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8800) {
            ctx->pc = 0x1A880Cu;
            goto label_1a880c;
        }
    }
    ctx->pc = 0x1A8808u;
    // 0x1a8808: 0xe60201bc  swc1        $f2, 0x1BC($s0)
    ctx->pc = 0x1a8808u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 444), bits); }
label_1a880c:
    // 0x1a880c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a880cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8810: 0xc06a23e  jal         func_1A88F8
    ctx->pc = 0x1A8810u;
    SET_GPR_U32(ctx, 31, 0x1A8818u);
    ctx->pc = 0x1A8814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8810u;
    // 0x1a8814: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A88F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A88F8u, 0x1A8810u, 0x1A8818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8818u;
label_1a8818:
    // 0x1a8818: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a8818u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a881c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1a881cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a8820: 0x3e00008  jr          $ra
    ctx->pc = 0x1A8820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8820u;
        // 0x1a8824: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8820u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A8828u;
}
