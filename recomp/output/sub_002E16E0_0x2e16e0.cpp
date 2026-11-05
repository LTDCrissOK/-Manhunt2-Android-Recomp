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

// Function: sub_002E16E0
// Address: 0x2e16e0 - 0x2e1778
void sub_002E16E0_0x2e16e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E16E0_0x2e16e0");
#endif

    switch (ctx->pc) {
        case 0x2e16e0u: goto label_2e16e0;
        case 0x2e16e4u: goto label_2e16e4;
        case 0x2e16e8u: goto label_2e16e8;
        case 0x2e16ecu: goto label_2e16ec;
        case 0x2e16f0u: goto label_2e16f0;
        case 0x2e16f4u: goto label_2e16f4;
        case 0x2e16f8u: goto label_2e16f8;
        case 0x2e16fcu: goto label_2e16fc;
        case 0x2e1700u: goto label_2e1700;
        case 0x2e1704u: goto label_2e1704;
        case 0x2e1708u: goto label_2e1708;
        case 0x2e170cu: goto label_2e170c;
        case 0x2e1710u: goto label_2e1710;
        case 0x2e1714u: goto label_2e1714;
        case 0x2e1718u: goto label_2e1718;
        case 0x2e171cu: goto label_2e171c;
        case 0x2e1720u: goto label_2e1720;
        case 0x2e1724u: goto label_2e1724;
        case 0x2e1728u: goto label_2e1728;
        case 0x2e172cu: goto label_2e172c;
        case 0x2e1730u: goto label_2e1730;
        case 0x2e1734u: goto label_2e1734;
        case 0x2e1738u: goto label_2e1738;
        case 0x2e173cu: goto label_2e173c;
        case 0x2e1740u: goto label_2e1740;
        case 0x2e1744u: goto label_2e1744;
        case 0x2e1748u: goto label_2e1748;
        case 0x2e174cu: goto label_2e174c;
        case 0x2e1750u: goto label_2e1750;
        case 0x2e1754u: goto label_2e1754;
        case 0x2e1758u: goto label_2e1758;
        case 0x2e175cu: goto label_2e175c;
        case 0x2e1760u: goto label_2e1760;
        case 0x2e1764u: goto label_2e1764;
        case 0x2e1768u: goto label_2e1768;
        case 0x2e176cu: goto label_2e176c;
        case 0x2e1770u: goto label_2e1770;
        case 0x2e1774u: goto label_2e1774;
        default: break;
    }

    ctx->pc = 0x2e16e0u;

label_2e16e0:
    // 0x2e16e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e16e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2e16e4:
    // 0x2e16e4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2e16e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e16e8:
    // 0x2e16e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e16e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2e16ec:
    // 0x2e16ec: 0x8ca20020  lw          $v0, 0x20($a1)
    ctx->pc = 0x2e16ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
label_2e16f0:
    // 0x2e16f0: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x2e16f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_2e16f4:
    // 0x2e16f4: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
label_2e16f8:
    if (ctx->pc == 0x2E16F8u) {
        ctx->pc = 0x2E16F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E16F4u;
        // 0x2e16f8: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E16FCu;
        goto label_2e16fc;
    }
    ctx->pc = 0x2E16F4u;
    {
        const bool branch_taken_0x2e16f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E16F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E16F4u;
        // 0x2e16f8: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e16f4) {
            ctx->pc = 0x2E1764u;
            goto label_2e1764;
        }
    }
    ctx->pc = 0x2E16FCu;
label_2e16fc:
    // 0x2e16fc: 0xc4a10044  lwc1        $f1, 0x44($a1)
    ctx->pc = 0x2e16fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e1700:
    // 0x2e1700: 0xc4a000f4  lwc1        $f0, 0xF4($a1)
    ctx->pc = 0x2e1700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e1704:
    // 0x2e1704: 0x90a20048  lbu         $v0, 0x48($a1)
    ctx->pc = 0x2e1704u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 72)));
label_2e1708:
    // 0x2e1708: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2e1708u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2e170c:
    // 0x2e170c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e170cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2e1710:
    // 0x2e1710: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2e1710u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2e1714:
    // 0x2e1714: 0xa0a20048  sb          $v0, 0x48($a1)
    ctx->pc = 0x2e1714u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 72), (uint8_t)GPR_U32(ctx, 2));
label_2e1718:
    // 0x2e1718: 0x14640012  bne         $v1, $a0, . + 4 + (0x12 << 2)
label_2e171c:
    if (ctx->pc == 0x2E171Cu) {
        ctx->pc = 0x2E171Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1718u;
        // 0x2e171c: 0xe4a10044  swc1        $f1, 0x44($a1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 68), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E1720u;
        goto label_2e1720;
    }
    ctx->pc = 0x2E1718u;
    {
        const bool branch_taken_0x2e1718 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2E171Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1718u;
        // 0x2e171c: 0xe4a10044  swc1        $f1, 0x44($a1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1718) {
            ctx->pc = 0x2E1764u;
            goto label_2e1764;
        }
    }
    ctx->pc = 0x2E1720u;
label_2e1720:
    // 0x2e1720: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2e1720u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_2e1724:
    // 0x2e1724: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2e1724u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2e1728:
    // 0x2e1728: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e1728u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e172c:
    // 0x2e172c: 0x0  nop
    ctx->pc = 0x2e172cu;
    // NOP
label_2e1730:
    // 0x2e1730: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2e1730u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2e1734:
    // 0x2e1734: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2e1734u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e1738:
    // 0x2e1738: 0x0  nop
    ctx->pc = 0x2e1738u;
    // NOP
label_2e173c:
    // 0x2e173c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_2e1740:
    if (ctx->pc == 0x2E1740u) {
        ctx->pc = 0x2E1740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E173Cu;
        // 0x2e1740: 0xe4a10044  swc1        $f1, 0x44($a1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 68), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E1744u;
        goto label_2e1744;
    }
    ctx->pc = 0x2E173Cu;
    {
        const bool branch_taken_0x2e173c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E1740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E173Cu;
        // 0x2e1740: 0xe4a10044  swc1        $f1, 0x44($a1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e173c) {
            ctx->pc = 0x2E175Cu;
            goto label_2e175c;
        }
    }
    ctx->pc = 0x2E1744u;
label_2e1744:
    // 0x2e1744: 0x8ca30070  lw          $v1, 0x70($a1)
    ctx->pc = 0x2e1744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 112)));
label_2e1748:
    // 0x2e1748: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x2e1748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_2e174c:
    // 0x2e174c: 0x40f809  jalr        $v0
label_2e1750:
    if (ctx->pc == 0x2E1750u) {
        ctx->pc = 0x2E1750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E174Cu;
        // 0x2e1750: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E1754u;
        goto label_2e1754;
    }
    ctx->pc = 0x2E174Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2E1754u);
        ctx->pc = 0x2E1750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E174Cu;
        // 0x2e1750: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E174Cu, 0x2E1754u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E1754u;
label_2e1754:
    // 0x2e1754: 0x10000004  b           . + 4 + (0x4 << 2)
label_2e1758:
    if (ctx->pc == 0x2E1758u) {
        ctx->pc = 0x2E1758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1754u;
        // 0x2e1758: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E175Cu;
        goto label_2e175c;
    }
    ctx->pc = 0x2E1754u;
    {
        const bool branch_taken_0x2e1754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1754u;
        // 0x2e1758: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1754) {
            ctx->pc = 0x2E1768u;
            goto label_2e1768;
        }
    }
    ctx->pc = 0x2E175Cu;
label_2e175c:
    // 0x2e175c: 0xa0a00048  sb          $zero, 0x48($a1)
    ctx->pc = 0x2e175cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 72), (uint8_t)GPR_U32(ctx, 0));
label_2e1760:
    // 0x2e1760: 0xaca00044  sw          $zero, 0x44($a1)
    ctx->pc = 0x2e1760u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 68), GPR_U32(ctx, 0));
label_2e1764:
    // 0x2e1764: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e1764u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e1768:
    // 0x2e1768: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e1768u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2e176c:
    // 0x2e176c: 0x3e00008  jr          $ra
label_2e1770:
    if (ctx->pc == 0x2E1770u) {
        ctx->pc = 0x2E1770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E176Cu;
        // 0x2e1770: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E1774u;
        goto label_2e1774;
    }
    ctx->pc = 0x2E176Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E1770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E176Cu;
        // 0x2e1770: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E176Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E1774u;
label_2e1774:
    // 0x2e1774: 0x0  nop
    ctx->pc = 0x2e1774u;
    // NOP
    ctx->pc = 0x2e1778u;
}
