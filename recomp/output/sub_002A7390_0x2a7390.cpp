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

// Function: sub_002A7390
// Address: 0x2a7390 - 0x2a7438
void sub_002A7390_0x2a7390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A7390_0x2a7390");
#endif

    switch (ctx->pc) {
        case 0x2a73acu: goto label_2a73ac;
        case 0x2a73e0u: goto label_2a73e0;
        default: break;
    }

    ctx->pc = 0x2a7390u;

    // 0x2a7390: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a7390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a7394: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2a7394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2a7398: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x2a7398u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2a739c: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x2a739cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2a73a0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2a73a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2a73a4: 0xc0dc10e  jal         func_370438
    ctx->pc = 0x2A73A4u;
    SET_GPR_U32(ctx, 31, 0x2A73ACu);
    ctx->pc = 0x2A73A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A73A4u;
    // 0x2a73a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x370438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370438u, 0x2A73A4u, 0x2A73ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A73ACu;
label_2a73ac:
    // 0x2a73ac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a73acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a73b0: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2a73b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2a73b4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2a73b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2a73b8: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2a73b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2a73bc: 0x46150036  c.le.s      $f0, $f21
    ctx->pc = 0x2a73bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a73c0: 0x0  nop
    ctx->pc = 0x2a73c0u;
    // NOP
    // 0x2a73c4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2A73C4u;
    {
        const bool branch_taken_0x2a73c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a73c4) {
            ctx->pc = 0x2A73D8u;
            goto label_2a73d8;
        }
    }
    ctx->pc = 0x2A73CCu;
    // 0x2a73cc: 0x3c013acc  lui         $at, 0x3ACC
    ctx->pc = 0x2a73ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15052 << 16));
    // 0x2a73d0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2a73d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2a73d4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2a73d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2a73d8:
    // 0x2a73d8: 0xc0dc10e  jal         func_370438
    ctx->pc = 0x2A73D8u;
    SET_GPR_U32(ctx, 31, 0x2A73E0u);
    ctx->pc = 0x370438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370438u, 0x2A73D8u, 0x2A73E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A73E0u;
label_2a73e0:
    // 0x2a73e0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2a73e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2a73e4: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2a73e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2a73e8: 0x46150036  c.le.s      $f0, $f21
    ctx->pc = 0x2a73e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a73ec: 0x0  nop
    ctx->pc = 0x2a73ecu;
    // NOP
    // 0x2a73f0: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2A73F0u;
    {
        const bool branch_taken_0x2a73f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A73F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A73F0u;
        // 0x2a73f4: 0xc6000000  lwc1        $f0, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a73f0) {
            ctx->pc = 0x2A7404u;
            goto label_2a7404;
        }
    }
    ctx->pc = 0x2A73F8u;
    // 0x2a73f8: 0x3c013acc  lui         $at, 0x3ACC
    ctx->pc = 0x2a73f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15052 << 16));
    // 0x2a73fc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2a73fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2a7400: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2a7400u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2a7404:
    // 0x2a7404: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x2a7404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a7408: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x2a7408u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x2a740c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2a740cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2a7410: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2a7410u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2a7414: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x2a7414u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2a7418: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2a7418u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a741c: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x2a741cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2a7420: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x2a7420u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2a7424: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2a7424u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a7428: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x2a7428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2a742c: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x2a742cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2a7430: 0x3e00008  jr          $ra
    ctx->pc = 0x2A7430u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A7434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7430u;
        // 0x2a7434: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A7430u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A7438u;
}
