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

// Function: sub_00365438
// Address: 0x365438 - 0x3654d8
void sub_00365438_0x365438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00365438_0x365438");
#endif

    switch (ctx->pc) {
        case 0x36544cu: goto label_36544c;
        default: break;
    }

    ctx->pc = 0x365438u;

    // 0x365438: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x365438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36543c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36543cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x365440: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x365440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x365444: 0xc0d8ef0  jal         func_363BC0
    ctx->pc = 0x365444u;
    SET_GPR_U32(ctx, 31, 0x36544Cu);
    ctx->pc = 0x365448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365444u;
    // 0x365448: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363BC0u, 0x365444u, 0x36544Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36544Cu;
label_36544c:
    // 0x36544c: 0xc601007c  lwc1        $f1, 0x7C($s0)
    ctx->pc = 0x36544cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x365450: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x365450u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x365454: 0x0  nop
    ctx->pc = 0x365454u;
    // NOP
    // 0x365458: 0x46020832  c.eq.s      $f1, $f2
    ctx->pc = 0x365458u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x36545c: 0x0  nop
    ctx->pc = 0x36545cu;
    // NOP
    // 0x365460: 0x4503000b  bc1tl       . + 4 + (0xB << 2)
    ctx->pc = 0x365460u;
    {
        const bool branch_taken_0x365460 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x365460) {
            ctx->pc = 0x365464u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x365460u;
            // 0x365464: 0xc6010080  lwc1        $f1, 0x80($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x365490u;
            goto label_365490;
        }
    }
    ctx->pc = 0x365468u;
    // 0x365468: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x365468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x36546c: 0xc4402b30  lwc1        $f0, 0x2B30($v0)
    ctx->pc = 0x36546cu;
    { uint32_t bits = FAST_READ32(0x482B30u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x365470: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x365470u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x365474: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x365474u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x365478: 0x0  nop
    ctx->pc = 0x365478u;
    // NOP
    // 0x36547c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x36547Cu;
    {
        const bool branch_taken_0x36547c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x365480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36547Cu;
        // 0x365480: 0xe600007c  swc1        $f0, 0x7C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 124), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x36547c) {
            ctx->pc = 0x365488u;
            goto label_365488;
        }
    }
    ctx->pc = 0x365484u;
    // 0x365484: 0xe602007c  swc1        $f2, 0x7C($s0)
    ctx->pc = 0x365484u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 124), bits); }
label_365488:
    // 0x365488: 0xc6010080  lwc1        $f1, 0x80($s0)
    ctx->pc = 0x365488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36548c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x36548cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_365490:
    // 0x365490: 0x0  nop
    ctx->pc = 0x365490u;
    // NOP
    // 0x365494: 0x46020832  c.eq.s      $f1, $f2
    ctx->pc = 0x365494u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x365498: 0x0  nop
    ctx->pc = 0x365498u;
    // NOP
    // 0x36549c: 0x4503000a  bc1tl       . + 4 + (0xA << 2)
    ctx->pc = 0x36549Cu;
    {
        const bool branch_taken_0x36549c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x36549c) {
            ctx->pc = 0x3654A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36549Cu;
            // 0x3654a0: 0xae0000a8  sw          $zero, 0xA8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3654C8u;
            goto label_3654c8;
        }
    }
    ctx->pc = 0x3654A4u;
    // 0x3654a4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3654a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x3654a8: 0xc4402b30  lwc1        $f0, 0x2B30($v0)
    ctx->pc = 0x3654a8u;
    { uint32_t bits = FAST_READ32(0x482B30u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3654ac: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3654acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3654b0: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x3654b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3654b4: 0x0  nop
    ctx->pc = 0x3654b4u;
    // NOP
    // 0x3654b8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x3654B8u;
    {
        const bool branch_taken_0x3654b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3654BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3654B8u;
        // 0x3654bc: 0xe6000080  swc1        $f0, 0x80($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3654b8) {
            ctx->pc = 0x3654C4u;
            goto label_3654c4;
        }
    }
    ctx->pc = 0x3654C0u;
    // 0x3654c0: 0xe6020080  swc1        $f2, 0x80($s0)
    ctx->pc = 0x3654c0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
label_3654c4:
    // 0x3654c4: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x3654c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
label_3654c8:
    // 0x3654c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3654c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3654cc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3654ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3654d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3654D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3654D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3654D0u;
        // 0x3654d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3654D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3654D8u;
}
