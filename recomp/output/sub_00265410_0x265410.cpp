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

// Function: sub_00265410
// Address: 0x265410 - 0x2654e8
void sub_00265410_0x265410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00265410_0x265410");
#endif

    switch (ctx->pc) {
        case 0x265434u: goto label_265434;
        case 0x265448u: goto label_265448;
        case 0x26545cu: goto label_26545c;
        case 0x265478u: goto label_265478;
        case 0x2654a4u: goto label_2654a4;
        case 0x2654ccu: goto label_2654cc;
        default: break;
    }

    ctx->pc = 0x265410u;

    // 0x265410: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x265410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x265414: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x265414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x265418: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x265418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x26541c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x26541cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265420: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x265420u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x265424: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x265424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x265428: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x265428u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x26542c: 0xc0837d8  jal         func_20DF60
    ctx->pc = 0x26542Cu;
    SET_GPR_U32(ctx, 31, 0x265434u);
    ctx->pc = 0x265430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26542Cu;
    // 0x265430: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DF60u, 0x26542Cu, 0x265434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265434u;
label_265434:
    // 0x265434: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x265434u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x265438: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x265438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26543c: 0x24a57820  addiu       $a1, $a1, 0x7820
    ctx->pc = 0x26543cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30752));
    // 0x265440: 0xc0b5d8e  jal         func_2D7638
    ctx->pc = 0x265440u;
    SET_GPR_U32(ctx, 31, 0x265448u);
    ctx->pc = 0x265444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265440u;
    // 0x265444: 0x260602bc  addiu       $a2, $s0, 0x2BC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 700));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7638u, 0x265440u, 0x265448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265448u;
label_265448:
    // 0x265448: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x265448u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x26544c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26544cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265450: 0x24a57828  addiu       $a1, $a1, 0x7828
    ctx->pc = 0x265450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30760));
    // 0x265454: 0xc0b5d8e  jal         func_2D7638
    ctx->pc = 0x265454u;
    SET_GPR_U32(ctx, 31, 0x26545Cu);
    ctx->pc = 0x265458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265454u;
    // 0x265458: 0x26060320  addiu       $a2, $s0, 0x320 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7638u, 0x265454u, 0x26545Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26545Cu;
label_26545c:
    // 0x26545c: 0xa2000320  sb          $zero, 0x320($s0)
    ctx->pc = 0x26545cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 800), (uint8_t)GPR_U32(ctx, 0));
    // 0x265460: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x265460u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x265464: 0x24a57838  addiu       $a1, $a1, 0x7838
    ctx->pc = 0x265464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30776));
    // 0x265468: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x265468u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x26546c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26546cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265470: 0xc0b5df8  jal         func_2D77E0
    ctx->pc = 0x265470u;
    SET_GPR_U32(ctx, 31, 0x265478u);
    ctx->pc = 0x265474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265470u;
    // 0x265474: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D77E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D77E0u, 0x265470u, 0x265478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265478u;
label_265478:
    // 0x265478: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x265478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26547c: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x26547cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x265480: 0x0  nop
    ctx->pc = 0x265480u;
    // NOP
    // 0x265484: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x265484u;
    {
        const bool branch_taken_0x265484 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x265484) {
            ctx->pc = 0x265488u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x265484u;
            // 0x265488: 0xe60002c0  swc1        $f0, 0x2C0($s0) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 704), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x26548Cu;
            goto label_26548c;
        }
    }
    ctx->pc = 0x26548Cu;
label_26548c:
    // 0x26548c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x26548cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x265490: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x265490u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x265494: 0x24a57848  addiu       $a1, $a1, 0x7848
    ctx->pc = 0x265494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30792));
    // 0x265498: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x265498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26549c: 0xc0b5df8  jal         func_2D77E0
    ctx->pc = 0x26549Cu;
    SET_GPR_U32(ctx, 31, 0x2654A4u);
    ctx->pc = 0x2654A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26549Cu;
    // 0x2654a0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D77E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D77E0u, 0x26549Cu, 0x2654A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2654A4u;
label_2654a4:
    // 0x2654a4: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2654a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2654a8: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x2654a8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2654ac: 0x0  nop
    ctx->pc = 0x2654acu;
    // NOP
    // 0x2654b0: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2654B0u;
    {
        const bool branch_taken_0x2654b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2654b0) {
            ctx->pc = 0x2654B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2654B0u;
            // 0x2654b4: 0xe60002c4  swc1        $f0, 0x2C4($s0) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 708), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2654B8u;
            goto label_2654b8;
        }
    }
    ctx->pc = 0x2654B8u;
label_2654b8:
    // 0x2654b8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2654b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2654bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2654bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2654c0: 0x26060324  addiu       $a2, $s0, 0x324
    ctx->pc = 0x2654c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 804));
    // 0x2654c4: 0xc0b5e2c  jal         func_2D78B0
    ctx->pc = 0x2654C4u;
    SET_GPR_U32(ctx, 31, 0x2654CCu);
    ctx->pc = 0x2654C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2654C4u;
    // 0x2654c8: 0x24a57858  addiu       $a1, $a1, 0x7858 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D78B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D78B0u, 0x2654C4u, 0x2654CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2654CCu;
label_2654cc:
    // 0x2654cc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2654ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2654d0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2654d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2654d4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2654d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2654d8: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x2654d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2654dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2654DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2654E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2654DCu;
        // 0x2654e0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2654DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2654E4u;
    // 0x2654e4: 0x0  nop
    ctx->pc = 0x2654e4u;
    // NOP
    ctx->pc = 0x2654e8u;
}
