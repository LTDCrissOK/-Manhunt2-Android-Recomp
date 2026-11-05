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

// Function: sub_0025D410
// Address: 0x25d410 - 0x25d508
void sub_0025D410_0x25d410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025D410_0x25d410");
#endif

    switch (ctx->pc) {
        case 0x25d42cu: goto label_25d42c;
        case 0x25d438u: goto label_25d438;
        case 0x25d450u: goto label_25d450;
        case 0x25d464u: goto label_25d464;
        case 0x25d47cu: goto label_25d47c;
        case 0x25d494u: goto label_25d494;
        case 0x25d4a8u: goto label_25d4a8;
        default: break;
    }

    ctx->pc = 0x25d410u;

    // 0x25d410: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x25d410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25d414: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x25d414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x25d418: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x25d418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x25d41c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x25d41cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d420: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x25d420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x25d424: 0xc097330  jal         func_25CCC0
    ctx->pc = 0x25D424u;
    SET_GPR_U32(ctx, 31, 0x25D42Cu);
    ctx->pc = 0x25D428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D424u;
    // 0x25d428: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CCC0u, 0x25D424u, 0x25D42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D42Cu;
label_25d42c:
    // 0x25d42c: 0x8e240224  lw          $a0, 0x224($s1)
    ctx->pc = 0x25d42cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 548)));
    // 0x25d430: 0xc097484  jal         func_25D210
    ctx->pc = 0x25D430u;
    SET_GPR_U32(ctx, 31, 0x25D438u);
    ctx->pc = 0x25D434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D430u;
    // 0x25d434: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D210u, 0x25D430u, 0x25D438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D438u;
label_25d438:
    // 0x25d438: 0x8e260224  lw          $a2, 0x224($s1)
    ctx->pc = 0x25d438u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 548)));
    // 0x25d43c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25d43cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25d440: 0x24a55958  addiu       $a1, $a1, 0x5958
    ctx->pc = 0x25d440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22872));
    // 0x25d444: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25d444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d448: 0xc0b5d8e  jal         func_2D7638
    ctx->pc = 0x25D448u;
    SET_GPR_U32(ctx, 31, 0x25D450u);
    ctx->pc = 0x25D44Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D448u;
    // 0x25d44c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7638u, 0x25D448u, 0x25D450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D450u;
label_25d450:
    // 0x25d450: 0x8e260224  lw          $a2, 0x224($s1)
    ctx->pc = 0x25d450u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 548)));
    // 0x25d454: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25d454u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25d458: 0x24a55968  addiu       $a1, $a1, 0x5968
    ctx->pc = 0x25d458u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22888));
    // 0x25d45c: 0xc0b5d8e  jal         func_2D7638
    ctx->pc = 0x25D45Cu;
    SET_GPR_U32(ctx, 31, 0x25D464u);
    ctx->pc = 0x25D460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D45Cu;
    // 0x25d460: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7638u, 0x25D45Cu, 0x25D464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D464u;
label_25d464:
    // 0x25d464: 0x8e260224  lw          $a2, 0x224($s1)
    ctx->pc = 0x25d464u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 548)));
    // 0x25d468: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25d468u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25d46c: 0x24a55978  addiu       $a1, $a1, 0x5978
    ctx->pc = 0x25d46cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22904));
    // 0x25d470: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25d470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d474: 0xc0b5df8  jal         func_2D77E0
    ctx->pc = 0x25D474u;
    SET_GPR_U32(ctx, 31, 0x25D47Cu);
    ctx->pc = 0x25D478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D474u;
    // 0x25d478: 0x24c60024  addiu       $a2, $a2, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D77E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D77E0u, 0x25D474u, 0x25D47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D47Cu;
label_25d47c:
    // 0x25d47c: 0x8e260224  lw          $a2, 0x224($s1)
    ctx->pc = 0x25d47cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 548)));
    // 0x25d480: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25d480u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25d484: 0x24a55988  addiu       $a1, $a1, 0x5988
    ctx->pc = 0x25d484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22920));
    // 0x25d488: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25d488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d48c: 0xc0b5df8  jal         func_2D77E0
    ctx->pc = 0x25D48Cu;
    SET_GPR_U32(ctx, 31, 0x25D494u);
    ctx->pc = 0x25D490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D48Cu;
    // 0x25d490: 0x24c60028  addiu       $a2, $a2, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D77E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D77E0u, 0x25D48Cu, 0x25D494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D494u;
label_25d494:
    // 0x25d494: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25d494u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25d498: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25d498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d49c: 0x24a55998  addiu       $a1, $a1, 0x5998
    ctx->pc = 0x25d49cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22936));
    // 0x25d4a0: 0xc0b5dc4  jal         func_2D7710
    ctx->pc = 0x25D4A0u;
    SET_GPR_U32(ctx, 31, 0x25D4A8u);
    ctx->pc = 0x25D4A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D4A0u;
    // 0x25d4a4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7710u, 0x25D4A0u, 0x25D4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D4A8u;
label_25d4a8:
    // 0x25d4a8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x25d4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25d4ac: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x25D4ACu;
    {
        const bool branch_taken_0x25d4ac = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x25D4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D4ACu;
        // 0x25d4b0: 0x8e240224  lw          $a0, 0x224($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 548)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d4ac) {
            ctx->pc = 0x25D4C8u;
            goto label_25d4c8;
        }
    }
    ctx->pc = 0x25D4B4u;
    // 0x25d4b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25d4b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25d4b8: 0x0  nop
    ctx->pc = 0x25d4b8u;
    // NOP
    // 0x25d4bc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x25d4bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x25d4c0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x25D4C0u;
    {
        const bool branch_taken_0x25d4c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D4C0u;
        // 0x25d4c4: 0xe4800030  swc1        $f0, 0x30($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d4c0) {
            ctx->pc = 0x25D4E8u;
            goto label_25d4e8;
        }
    }
    ctx->pc = 0x25D4C8u;
label_25d4c8:
    // 0x25d4c8: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x25d4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x25d4cc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x25d4ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x25d4d0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x25d4d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x25d4d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25d4d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25d4d8: 0x0  nop
    ctx->pc = 0x25d4d8u;
    // NOP
    // 0x25d4dc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x25d4dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x25d4e0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x25d4e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x25d4e4: 0xe4800030  swc1        $f0, 0x30($a0)
    ctx->pc = 0x25d4e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
label_25d4e8:
    // 0x25d4e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25d4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25d4ec: 0xa2220220  sb          $v0, 0x220($s1)
    ctx->pc = 0x25d4ecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 544), (uint8_t)GPR_U32(ctx, 2));
    // 0x25d4f0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x25d4f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25d4f4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x25d4f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x25d4f8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x25d4f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25d4fc: 0x3e00008  jr          $ra
    ctx->pc = 0x25D4FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25D500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D4FCu;
        // 0x25d500: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D4FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25D504u;
    // 0x25d504: 0x0  nop
    ctx->pc = 0x25d504u;
    // NOP
    ctx->pc = 0x25d508u;
}
