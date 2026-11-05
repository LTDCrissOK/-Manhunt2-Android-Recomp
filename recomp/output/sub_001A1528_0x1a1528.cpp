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

// Function: sub_001A1528
// Address: 0x1a1528 - 0x1a1798
void sub_001A1528_0x1a1528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A1528_0x1a1528");
#endif

    switch (ctx->pc) {
        case 0x1a1544u: goto label_1a1544;
        case 0x1a1554u: goto label_1a1554;
        case 0x1a155cu: goto label_1a155c;
        case 0x1a1570u: goto label_1a1570;
        case 0x1a1580u: goto label_1a1580;
        case 0x1a1590u: goto label_1a1590;
        case 0x1a15a8u: goto label_1a15a8;
        case 0x1a15b8u: goto label_1a15b8;
        case 0x1a15ecu: goto label_1a15ec;
        case 0x1a15fcu: goto label_1a15fc;
        case 0x1a1604u: goto label_1a1604;
        case 0x1a1614u: goto label_1a1614;
        case 0x1a162cu: goto label_1a162c;
        case 0x1a163cu: goto label_1a163c;
        case 0x1a1654u: goto label_1a1654;
        case 0x1a167cu: goto label_1a167c;
        case 0x1a1694u: goto label_1a1694;
        case 0x1a16d8u: goto label_1a16d8;
        case 0x1a16e4u: goto label_1a16e4;
        case 0x1a16f4u: goto label_1a16f4;
        case 0x1a1710u: goto label_1a1710;
        case 0x1a1750u: goto label_1a1750;
        case 0x1a1758u: goto label_1a1758;
        case 0x1a1768u: goto label_1a1768;
        case 0x1a1778u: goto label_1a1778;
        default: break;
    }

    ctx->pc = 0x1a1528u;

    // 0x1a1528: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a1528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a152c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a152cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a1530: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x1a1530u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1a1534: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a1534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a1538: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a1538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a153c: 0xc061a1e  jal         func_186878
    ctx->pc = 0x1A153Cu;
    SET_GPR_U32(ctx, 31, 0x1A1544u);
    ctx->pc = 0x1A1540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A153Cu;
    // 0x1a1540: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x1A153Cu, 0x1A1544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1544u;
label_1a1544:
    // 0x1a1544: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1a1544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a1548: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a1548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a154c: 0xc06cdda  jal         func_1B3768
    ctx->pc = 0x1A154Cu;
    SET_GPR_U32(ctx, 31, 0x1A1554u);
    ctx->pc = 0x1A1550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A154Cu;
    // 0x1a1550: 0x8c651004  lw          $a1, 0x1004($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4100)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3768u, 0x1A154Cu, 0x1A1554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1554u;
label_1a1554:
    // 0x1a1554: 0xc061a26  jal         func_186898
    ctx->pc = 0x1A1554u;
    SET_GPR_U32(ctx, 31, 0x1A155Cu);
    ctx->pc = 0x1A1558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1554u;
    // 0x1a1558: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186898u, 0x1A1554u, 0x1A155Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A155Cu;
label_1a155c:
    // 0x1a155c: 0x3c014140  lui         $at, 0x4140
    ctx->pc = 0x1a155cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16704 << 16));
    // 0x1a1560: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1a1560u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a1564: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a1564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1568: 0xc068766  jal         func_1A1D98
    ctx->pc = 0x1A1568u;
    SET_GPR_U32(ctx, 31, 0x1A1570u);
    ctx->pc = 0x1A156Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1568u;
    // 0x1a156c: 0xc4540138  lwc1        $f20, 0x138($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1D98u, 0x1A1568u, 0x1A1570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1570u;
label_1a1570:
    // 0x1a1570: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A1570u;
    {
        const bool branch_taken_0x1a1570 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a1570) {
            ctx->pc = 0x1A1574u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A1570u;
            // 0x1a1574: 0x8e02001c  lw          $v0, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A1598u;
            goto label_1a1598;
        }
    }
    ctx->pc = 0x1A1578u;
    // 0x1a1578: 0xc064c8e  jal         func_193238
    ctx->pc = 0x1A1578u;
    SET_GPR_U32(ctx, 31, 0x1A1580u);
    ctx->pc = 0x1A157Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1578u;
    // 0x1a157c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193238u, 0x1A1578u, 0x1A1580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1580u;
label_1a1580:
    // 0x1a1580: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A1580u;
    {
        const bool branch_taken_0x1a1580 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1580) {
            ctx->pc = 0x1A1584u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A1580u;
            // 0x1a1584: 0x8e02001c  lw          $v0, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A1598u;
            goto label_1a1598;
        }
    }
    ctx->pc = 0x1A1588u;
    // 0x1a1588: 0xc068eb8  jal         func_1A3AE0
    ctx->pc = 0x1A1588u;
    SET_GPR_U32(ctx, 31, 0x1A1590u);
    ctx->pc = 0x1A158Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1588u;
    // 0x1a158c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3AE0u, 0x1A1588u, 0x1A1590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1590u;
label_1a1590:
    // 0x1a1590: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x1A1590u;
    {
        const bool branch_taken_0x1a1590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1590u;
        // 0x1a1594: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1590) {
            ctx->pc = 0x1A177Cu;
            goto label_1a177c;
        }
    }
    ctx->pc = 0x1A1598u;
label_1a1598:
    // 0x1a1598: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A1598u;
    {
        const bool branch_taken_0x1a1598 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1598) {
            ctx->pc = 0x1A15C0u;
            goto label_1a15c0;
        }
    }
    ctx->pc = 0x1A15A0u;
    // 0x1a15a0: 0xc064cfe  jal         func_1933F8
    ctx->pc = 0x1A15A0u;
    SET_GPR_U32(ctx, 31, 0x1A15A8u);
    ctx->pc = 0x1A15A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A15A0u;
    // 0x1a15a4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1933F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1933F8u, 0x1A15A0u, 0x1A15A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A15A8u;
label_1a15a8:
    // 0x1a15a8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A15A8u;
    {
        const bool branch_taken_0x1a15a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a15a8) {
            ctx->pc = 0x1A15C0u;
            goto label_1a15c0;
        }
    }
    ctx->pc = 0x1A15B0u;
    // 0x1a15b0: 0xc068ede  jal         func_1A3B78
    ctx->pc = 0x1A15B0u;
    SET_GPR_U32(ctx, 31, 0x1A15B8u);
    ctx->pc = 0x1A15B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A15B0u;
    // 0x1a15b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3B78u, 0x1A15B0u, 0x1A15B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A15B8u;
label_1a15b8:
    // 0x1a15b8: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x1A15B8u;
    {
        const bool branch_taken_0x1a15b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A15BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A15B8u;
        // 0x1a15bc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a15b8) {
            ctx->pc = 0x1A177Cu;
            goto label_1a177c;
        }
    }
    ctx->pc = 0x1A15C0u;
label_1a15c0:
    // 0x1a15c0: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x1a15c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x1a15c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a15c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a15c8: 0x0  nop
    ctx->pc = 0x1a15c8u;
    // NOP
    // 0x1a15cc: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1a15ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a15d0: 0x0  nop
    ctx->pc = 0x1a15d0u;
    // NOP
    // 0x1a15d4: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x1A15D4u;
    {
        const bool branch_taken_0x1a15d4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A15D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A15D4u;
        // 0x1a15d8: 0x3c110049  lui         $s1, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a15d4) {
            ctx->pc = 0x1A161Cu;
            goto label_1a161c;
        }
    }
    ctx->pc = 0x1A15DCu;
    // 0x1a15dc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1a15dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a15e0: 0x2625f010  addiu       $a1, $s1, -0xFF0
    ctx->pc = 0x1a15e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294963216));
    // 0x1a15e4: 0xc064dc2  jal         func_193708
    ctx->pc = 0x1A15E4u;
    SET_GPR_U32(ctx, 31, 0x1A15ECu);
    ctx->pc = 0x1A15E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A15E4u;
    // 0x1a15e8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193708u, 0x1A15E4u, 0x1A15ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A15ECu;
label_1a15ec:
    // 0x1a15ec: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1A15ECu;
    {
        const bool branch_taken_0x1a15ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a15ec) {
            ctx->pc = 0x1A15F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A15ECu;
            // 0x1a15f0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A1620u;
            goto label_1a1620;
        }
    }
    ctx->pc = 0x1A15F4u;
    // 0x1a15f4: 0xc061a1e  jal         func_186878
    ctx->pc = 0x1A15F4u;
    SET_GPR_U32(ctx, 31, 0x1A15FCu);
    ctx->pc = 0x1A15F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A15F4u;
    // 0x1a15f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x1A15F4u, 0x1A15FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A15FCu;
label_1a15fc:
    // 0x1a15fc: 0xc06df10  jal         func_1B7C40
    ctx->pc = 0x1A15FCu;
    SET_GPR_U32(ctx, 31, 0x1A1604u);
    ctx->pc = 0x1A1600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A15FCu;
    // 0x1a1600: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7C40u, 0x1A15FCu, 0x1A1604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1604u;
label_1a1604:
    // 0x1a1604: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A1604u;
    {
        const bool branch_taken_0x1a1604 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a1604) {
            ctx->pc = 0x1A1608u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A1604u;
            // 0x1a1608: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A1620u;
            goto label_1a1620;
        }
    }
    ctx->pc = 0x1A160Cu;
    // 0x1a160c: 0xc06916a  jal         func_1A45A8
    ctx->pc = 0x1A160Cu;
    SET_GPR_U32(ctx, 31, 0x1A1614u);
    ctx->pc = 0x1A1610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A160Cu;
    // 0x1a1610: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A45A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A45A8u, 0x1A160Cu, 0x1A1614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1614u;
label_1a1614:
    // 0x1a1614: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x1A1614u;
    {
        const bool branch_taken_0x1a1614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1614u;
        // 0x1a1618: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1614) {
            ctx->pc = 0x1A177Cu;
            goto label_1a177c;
        }
    }
    ctx->pc = 0x1A161Cu;
label_1a161c:
    // 0x1a161c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1a161cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a1620:
    // 0x1a1620: 0x2625f010  addiu       $a1, $s1, -0xFF0
    ctx->pc = 0x1a1620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294963216));
    // 0x1a1624: 0xc064dc2  jal         func_193708
    ctx->pc = 0x1A1624u;
    SET_GPR_U32(ctx, 31, 0x1A162Cu);
    ctx->pc = 0x1A1628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1624u;
    // 0x1a1628: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193708u, 0x1A1624u, 0x1A162Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A162Cu;
label_1a162c:
    // 0x1a162c: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1A162Cu;
    {
        const bool branch_taken_0x1a162c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a162c) {
            ctx->pc = 0x1A16A4u;
            goto label_1a16a4;
        }
    }
    ctx->pc = 0x1A1634u;
    // 0x1a1634: 0xc061a26  jal         func_186898
    ctx->pc = 0x1A1634u;
    SET_GPR_U32(ctx, 31, 0x1A163Cu);
    ctx->pc = 0x1A1638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1634u;
    // 0x1a1638: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186898u, 0x1A1634u, 0x1A163Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A163Cu;
label_1a163c:
    // 0x1a163c: 0x90430111  lbu         $v1, 0x111($v0)
    ctx->pc = 0x1a163cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 273)));
    // 0x1a1640: 0x319fa  dsrl        $v1, $v1, 7
    ctx->pc = 0x1a1640u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 7);
    // 0x1a1644: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1A1644u;
    {
        const bool branch_taken_0x1a1644 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1644) {
            ctx->pc = 0x1A168Cu;
            goto label_1a168c;
        }
    }
    ctx->pc = 0x1A164Cu;
    // 0x1a164c: 0xc061a26  jal         func_186898
    ctx->pc = 0x1A164Cu;
    SET_GPR_U32(ctx, 31, 0x1A1654u);
    ctx->pc = 0x1A1650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A164Cu;
    // 0x1a1650: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186898u, 0x1A164Cu, 0x1A1654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1654u;
label_1a1654:
    // 0x1a1654: 0xc4410138  lwc1        $f1, 0x138($v0)
    ctx->pc = 0x1a1654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a1658: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x1a1658u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
    // 0x1a165c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a165cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a1660: 0x0  nop
    ctx->pc = 0x1a1660u;
    // NOP
    // 0x1a1664: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a1664u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a1668: 0x0  nop
    ctx->pc = 0x1a1668u;
    // NOP
    // 0x1a166c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1A166Cu;
    {
        const bool branch_taken_0x1a166c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a166c) {
            ctx->pc = 0x1A168Cu;
            goto label_1a168c;
        }
    }
    ctx->pc = 0x1A1674u;
    // 0x1a1674: 0xc061a16  jal         func_186858
    ctx->pc = 0x1A1674u;
    SET_GPR_U32(ctx, 31, 0x1A167Cu);
    ctx->pc = 0x1A1678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1674u;
    // 0x1a1678: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x1A1674u, 0x1A167Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A167Cu;
label_1a167c:
    // 0x1a167c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1a167cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1a1680: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a1680u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a1684: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x1A1684u;
    {
        const bool branch_taken_0x1a1684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1684u;
        // 0x1a1688: 0xe4400028  swc1        $f0, 0x28($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1684) {
            ctx->pc = 0x1A1778u;
            goto label_1a1778;
        }
    }
    ctx->pc = 0x1A168Cu;
label_1a168c:
    // 0x1a168c: 0xc061a16  jal         func_186858
    ctx->pc = 0x1A168Cu;
    SET_GPR_U32(ctx, 31, 0x1A1694u);
    ctx->pc = 0x1A1690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A168Cu;
    // 0x1a1690: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x1A168Cu, 0x1A1694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1694u;
label_1a1694:
    // 0x1a1694: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1a1694u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1a1698: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a1698u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a169c: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x1A169Cu;
    {
        const bool branch_taken_0x1a169c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A16A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A169Cu;
        // 0x1a16a0: 0xe4400028  swc1        $f0, 0x28($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a169c) {
            ctx->pc = 0x1A1778u;
            goto label_1a1778;
        }
    }
    ctx->pc = 0x1A16A4u;
label_1a16a4:
    // 0x1a16a4: 0x3c013fe6  lui         $at, 0x3FE6
    ctx->pc = 0x1a16a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16358 << 16));
    // 0x1a16a8: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1a16a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x1a16ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a16acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a16b0: 0x0  nop
    ctx->pc = 0x1a16b0u;
    // NOP
    // 0x1a16b4: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1a16b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a16b8: 0x0  nop
    ctx->pc = 0x1a16b8u;
    // NOP
    // 0x1a16bc: 0x4500002e  bc1f        . + 4 + (0x2E << 2)
    ctx->pc = 0x1A16BCu;
    {
        const bool branch_taken_0x1a16bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A16C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A16BCu;
        // 0x1a16c0: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a16bc) {
            ctx->pc = 0x1A1778u;
            goto label_1a1778;
        }
    }
    ctx->pc = 0x1A16C4u;
    // 0x1a16c4: 0x8c430924  lw          $v1, 0x924($v0)
    ctx->pc = 0x1a16c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2340)));
    // 0x1a16c8: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A16C8u;
    {
        const bool branch_taken_0x1a16c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a16c8) {
            ctx->pc = 0x1A16ECu;
            goto label_1a16ec;
        }
    }
    ctx->pc = 0x1A16D0u;
    // 0x1a16d0: 0xc061a26  jal         func_186898
    ctx->pc = 0x1A16D0u;
    SET_GPR_U32(ctx, 31, 0x1A16D8u);
    ctx->pc = 0x1A16D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A16D0u;
    // 0x1a16d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186898u, 0x1A16D0u, 0x1A16D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A16D8u;
label_1a16d8:
    // 0x1a16d8: 0x24440018  addiu       $a0, $v0, 0x18
    ctx->pc = 0x1a16d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x1a16dc: 0xc0f6da6  jal         func_3DB698
    ctx->pc = 0x1A16DCu;
    SET_GPR_U32(ctx, 31, 0x1A16E4u);
    ctx->pc = 0x1A16E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A16DCu;
    // 0x1a16e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DB698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB698u, 0x1A16DCu, 0x1A16E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A16E4u;
label_1a16e4:
    // 0x1a16e4: 0x50400025  beql        $v0, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x1A16E4u;
    {
        const bool branch_taken_0x1a16e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a16e4) {
            ctx->pc = 0x1A16E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A16E4u;
            // 0x1a16e8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A177Cu;
            goto label_1a177c;
        }
    }
    ctx->pc = 0x1A16ECu;
label_1a16ec:
    // 0x1a16ec: 0xc061a26  jal         func_186898
    ctx->pc = 0x1A16ECu;
    SET_GPR_U32(ctx, 31, 0x1A16F4u);
    ctx->pc = 0x1A16F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A16ECu;
    // 0x1a16f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186898u, 0x1A16ECu, 0x1A16F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A16F4u;
label_1a16f4:
    // 0x1a16f4: 0x8c430110  lw          $v1, 0x110($v0)
    ctx->pc = 0x1a16f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
    // 0x1a16f8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1a16f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1a16fc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1a16fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1a1700: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1A1700u;
    {
        const bool branch_taken_0x1a1700 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a1700) {
            ctx->pc = 0x1A1748u;
            goto label_1a1748;
        }
    }
    ctx->pc = 0x1A1708u;
    // 0x1a1708: 0xc061a26  jal         func_186898
    ctx->pc = 0x1A1708u;
    SET_GPR_U32(ctx, 31, 0x1A1710u);
    ctx->pc = 0x1A170Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1708u;
    // 0x1a170c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186898u, 0x1A1708u, 0x1A1710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1710u;
label_1a1710:
    // 0x1a1710: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x1a1710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a1714: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a1714u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a1718: 0x0  nop
    ctx->pc = 0x1a1718u;
    // NOP
    // 0x1a171c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1a171cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a1720: 0x0  nop
    ctx->pc = 0x1a1720u;
    // NOP
    // 0x1a1724: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1A1724u;
    {
        const bool branch_taken_0x1a1724 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A1728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1724u;
        // 0x1a1728: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1724) {
            ctx->pc = 0x1A1730u;
            goto label_1a1730;
        }
    }
    ctx->pc = 0x1A172Cu;
    // 0x1a172c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a172cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a1730:
    // 0x1a1730: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a1730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a1734: 0x41823  negu        $v1, $a0
    ctx->pc = 0x1a1734u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x1a1738: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x1a1738u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1a173c: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x1a173cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x1a1740: 0x5060000e  beql        $v1, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x1A1740u;
    {
        const bool branch_taken_0x1a1740 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1740) {
            ctx->pc = 0x1A1744u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A1740u;
            // 0x1a1744: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A177Cu;
            goto label_1a177c;
        }
    }
    ctx->pc = 0x1A1748u;
label_1a1748:
    // 0x1a1748: 0xc061a1e  jal         func_186878
    ctx->pc = 0x1A1748u;
    SET_GPR_U32(ctx, 31, 0x1A1750u);
    ctx->pc = 0x1A174Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1748u;
    // 0x1a174c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x1A1748u, 0x1A1750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1750u;
label_1a1750:
    // 0x1a1750: 0xc06df10  jal         func_1B7C40
    ctx->pc = 0x1A1750u;
    SET_GPR_U32(ctx, 31, 0x1A1758u);
    ctx->pc = 0x1A1754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1750u;
    // 0x1a1754: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7C40u, 0x1A1750u, 0x1A1758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1758u;
label_1a1758:
    // 0x1a1758: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A1758u;
    {
        const bool branch_taken_0x1a1758 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a1758) {
            ctx->pc = 0x1A175Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A1758u;
            // 0x1a175c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A177Cu;
            goto label_1a177c;
        }
    }
    ctx->pc = 0x1A1760u;
    // 0x1a1760: 0xc064d62  jal         func_193588
    ctx->pc = 0x1A1760u;
    SET_GPR_U32(ctx, 31, 0x1A1768u);
    ctx->pc = 0x1A1764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1760u;
    // 0x1a1764: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193588u, 0x1A1760u, 0x1A1768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1768u;
label_1a1768:
    // 0x1a1768: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A1768u;
    {
        const bool branch_taken_0x1a1768 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a1768) {
            ctx->pc = 0x1A176Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A1768u;
            // 0x1a176c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A177Cu;
            goto label_1a177c;
        }
    }
    ctx->pc = 0x1A1770u;
    // 0x1a1770: 0xc068f12  jal         func_1A3C48
    ctx->pc = 0x1A1770u;
    SET_GPR_U32(ctx, 31, 0x1A1778u);
    ctx->pc = 0x1A1774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1770u;
    // 0x1a1774: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3C48u, 0x1A1770u, 0x1A1778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1778u;
label_1a1778:
    // 0x1a1778: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a1778u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a177c:
    // 0x1a177c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a177cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1780: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a1780u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a1784: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a1784u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a1788: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x1a1788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a178c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A178Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A178Cu;
        // 0x1a1790: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A178Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A1794u;
    // 0x1a1794: 0x0  nop
    ctx->pc = 0x1a1794u;
    // NOP
    ctx->pc = 0x1a1798u;
}
