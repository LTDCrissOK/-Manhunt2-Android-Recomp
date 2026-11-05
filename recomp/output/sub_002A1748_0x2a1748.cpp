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

// Function: sub_002A1748
// Address: 0x2a1748 - 0x2a1980
void sub_002A1748_0x2a1748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A1748_0x2a1748");
#endif

    switch (ctx->pc) {
        case 0x2a177cu: goto label_2a177c;
        case 0x2a1790u: goto label_2a1790;
        case 0x2a179cu: goto label_2a179c;
        case 0x2a17c8u: goto label_2a17c8;
        case 0x2a17e8u: goto label_2a17e8;
        case 0x2a17fcu: goto label_2a17fc;
        case 0x2a1814u: goto label_2a1814;
        case 0x2a1828u: goto label_2a1828;
        case 0x2a1840u: goto label_2a1840;
        case 0x2a1854u: goto label_2a1854;
        case 0x2a1860u: goto label_2a1860;
        case 0x2a1880u: goto label_2a1880;
        case 0x2a1890u: goto label_2a1890;
        case 0x2a18a4u: goto label_2a18a4;
        case 0x2a18b4u: goto label_2a18b4;
        case 0x2a18c0u: goto label_2a18c0;
        case 0x2a18ccu: goto label_2a18cc;
        case 0x2a18e0u: goto label_2a18e0;
        case 0x2a18f0u: goto label_2a18f0;
        case 0x2a18fcu: goto label_2a18fc;
        case 0x2a1910u: goto label_2a1910;
        case 0x2a191cu: goto label_2a191c;
        case 0x2a192cu: goto label_2a192c;
        case 0x2a193cu: goto label_2a193c;
        case 0x2a195cu: goto label_2a195c;
        default: break;
    }

    ctx->pc = 0x2a1748u;

    // 0x2a1748: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2a1748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2a174c: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x2a174cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x2a1750: 0xffb30068  sd          $s3, 0x68($sp)
    ctx->pc = 0x2a1750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
    // 0x2a1754: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2a1754u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1758: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2a1758u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a175c: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x2a175cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x2a1760: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x2a1760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
    // 0x2a1764: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2a1764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1768: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x2a1768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x2a176c: 0xffb50078  sd          $s5, 0x78($sp)
    ctx->pc = 0x2a176cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 21));
    // 0x2a1770: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2a1770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2a1774: 0xc0d7384  jal         func_35CE10
    ctx->pc = 0x2A1774u;
    SET_GPR_U32(ctx, 31, 0x2A177Cu);
    ctx->pc = 0x2A1778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1774u;
    // 0x2a1778: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE10u, 0x2A1774u, 0x2A177Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A177Cu;
label_2a177c:
    // 0x2a177c: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x2a177cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x2a1780: 0x27b40010  addiu       $s4, $sp, 0x10
    ctx->pc = 0x2a1780u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2a1784: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x2A1784u;
    {
        const bool branch_taken_0x2a1784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1784u;
        // 0x2a1788: 0x3c150047  lui         $s5, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1784) {
            ctx->pc = 0x2A18F0u;
            goto label_2a18f0;
        }
    }
    ctx->pc = 0x2A178Cu;
    // 0x2a178c: 0x0  nop
    ctx->pc = 0x2a178cu;
    // NOP
label_2a1790:
    // 0x2a1790: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2a1790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1794: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2A1794u;
    SET_GPR_U32(ctx, 31, 0x2A179Cu);
    ctx->pc = 0x2A1798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1794u;
    // 0x2a1798: 0x24a5c890  addiu       $a1, $a1, -0x3770 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2A1794u, 0x2A179Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A179Cu;
label_2a179c:
    // 0x2a179c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a179cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a17a0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2A17A0u;
    {
        const bool branch_taken_0x2a17a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A17A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A17A0u;
        // 0x2a17a4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a17a0) {
            ctx->pc = 0x2A17D8u;
            goto label_2a17d8;
        }
    }
    ctx->pc = 0x2A17A8u;
    // 0x2a17a8: 0x8e450318  lw          $a1, 0x318($s2)
    ctx->pc = 0x2a17a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 792)));
    // 0x2a17ac: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2a17acu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x2a17b0: 0x24a5031c  addiu       $a1, $a1, 0x31C
    ctx->pc = 0x2a17b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 796));
    // 0x2a17b4: 0x2452821  addu        $a1, $s2, $a1
    ctx->pc = 0x2a17b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x2a17b8: 0x24a60010  addiu       $a2, $a1, 0x10
    ctx->pc = 0x2a17b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x2a17bc: 0x24a70018  addiu       $a3, $a1, 0x18
    ctx->pc = 0x2a17bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
    // 0x2a17c0: 0xc09e40a  jal         func_279028
    ctx->pc = 0x2A17C0u;
    SET_GPR_U32(ctx, 31, 0x2A17C8u);
    ctx->pc = 0x2A17C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A17C0u;
    // 0x2a17c4: 0x24a80008  addiu       $t0, $a1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x279028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279028u, 0x2A17C0u, 0x2A17C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A17C8u;
label_2a17c8:
    // 0x2a17c8: 0x8e420318  lw          $v0, 0x318($s2)
    ctx->pc = 0x2a17c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 792)));
    // 0x2a17cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2a17ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2a17d0: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x2A17D0u;
    {
        const bool branch_taken_0x2a17d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A17D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A17D0u;
        // 0x2a17d4: 0xae420318  sw          $v0, 0x318($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 792), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a17d0) {
            ctx->pc = 0x2A18F0u;
            goto label_2a18f0;
        }
    }
    ctx->pc = 0x2A17D8u;
label_2a17d8:
    // 0x2a17d8: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2a17d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2a17dc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2a17dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a17e0: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2A17E0u;
    SET_GPR_U32(ctx, 31, 0x2A17E8u);
    ctx->pc = 0x2A17E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A17E0u;
    // 0x2a17e4: 0x24a5c8a8  addiu       $a1, $a1, -0x3758 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2A17E0u, 0x2A17E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A17E8u;
label_2a17e8:
    // 0x2a17e8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a17e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a17ec: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A17ECu;
    {
        const bool branch_taken_0x2a17ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A17F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A17ECu;
        // 0x2a17f0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a17ec) {
            ctx->pc = 0x2A1804u;
            goto label_2a1804;
        }
    }
    ctx->pc = 0x2A17F4u;
    // 0x2a17f4: 0xc09e2c2  jal         func_278B08
    ctx->pc = 0x2A17F4u;
    SET_GPR_U32(ctx, 31, 0x2A17FCu);
    ctx->pc = 0x2A17F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A17F4u;
    // 0x2a17f8: 0x26450308  addiu       $a1, $s2, 0x308 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278B08u, 0x2A17F4u, 0x2A17FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A17FCu;
label_2a17fc:
    // 0x2a17fc: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x2A17FCu;
    {
        const bool branch_taken_0x2a17fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A17FCu;
        // 0x2a1800: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a17fc) {
            ctx->pc = 0x2A18F4u;
            goto label_2a18f4;
        }
    }
    ctx->pc = 0x2A1804u;
label_2a1804:
    // 0x2a1804: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2a1804u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2a1808: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2a1808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a180c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2A180Cu;
    SET_GPR_U32(ctx, 31, 0x2A1814u);
    ctx->pc = 0x2A1810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A180Cu;
    // 0x2a1810: 0x24a5c8c0  addiu       $a1, $a1, -0x3740 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2A180Cu, 0x2A1814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1814u;
label_2a1814:
    // 0x2a1814: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a1814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a1818: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A1818u;
    {
        const bool branch_taken_0x2a1818 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A181Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1818u;
        // 0x2a181c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1818) {
            ctx->pc = 0x2A1830u;
            goto label_2a1830;
        }
    }
    ctx->pc = 0x2A1820u;
    // 0x2a1820: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x2A1820u;
    SET_GPR_U32(ctx, 31, 0x2A1828u);
    ctx->pc = 0x2A1824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1820u;
    // 0x2a1824: 0x26450310  addiu       $a1, $s2, 0x310 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x2A1820u, 0x2A1828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1828u;
label_2a1828:
    // 0x2a1828: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x2A1828u;
    {
        const bool branch_taken_0x2a1828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A182Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1828u;
        // 0x2a182c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1828) {
            ctx->pc = 0x2A18F4u;
            goto label_2a18f4;
        }
    }
    ctx->pc = 0x2A1830u;
label_2a1830:
    // 0x2a1830: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2a1830u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2a1834: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2a1834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1838: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2A1838u;
    SET_GPR_U32(ctx, 31, 0x2A1840u);
    ctx->pc = 0x2A183Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1838u;
    // 0x2a183c: 0x24a5c8d8  addiu       $a1, $a1, -0x3728 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2A1838u, 0x2A1840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1840u;
label_2a1840:
    // 0x2a1840: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a1840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a1844: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2A1844u;
    {
        const bool branch_taken_0x2a1844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1844u;
        // 0x2a1848: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1844) {
            ctx->pc = 0x2A18D4u;
            goto label_2a18d4;
        }
    }
    ctx->pc = 0x2A184Cu;
    // 0x2a184c: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x2A184Cu;
    SET_GPR_U32(ctx, 31, 0x2A1854u);
    ctx->pc = 0x2A1850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A184Cu;
    // 0x2a1850: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x2A184Cu, 0x2A1854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1854u;
label_2a1854:
    // 0x2a1854: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x2a1854u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a1858: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x2A1858u;
    SET_GPR_U32(ctx, 31, 0x2A1860u);
    ctx->pc = 0x2A185Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1858u;
    // 0x2a185c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x2A1858u, 0x2A1860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1860u;
label_2a1860:
    // 0x2a1860: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x2a1860u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a1864: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x2a1864u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x2a1868: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2a1868u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a186c: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x2a186cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x2a1870: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2a1870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1874: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2a1874u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1878: 0xc09e32a  jal         func_278CA8
    ctx->pc = 0x2A1878u;
    SET_GPR_U32(ctx, 31, 0x2A1880u);
    ctx->pc = 0x2A187Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1878u;
    // 0x2a187c: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278CA8u, 0x2A1878u, 0x2A1880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1880u;
label_2a1880:
    // 0x2a1880: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2a1880u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1884: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2a1884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1888: 0xc0a83f4  jal         func_2A0FD0
    ctx->pc = 0x2A1888u;
    SET_GPR_U32(ctx, 31, 0x2A1890u);
    ctx->pc = 0x2A188Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1888u;
    // 0x2a188c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0FD0u, 0x2A1888u, 0x2A1890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1890u;
label_2a1890:
    // 0x2a1890: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a1890u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1894: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A1894u;
    {
        const bool branch_taken_0x2a1894 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1894u;
        // 0x2a1898: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1894) {
            ctx->pc = 0x2A18A4u;
            goto label_2a18a4;
        }
    }
    ctx->pc = 0x2A189Cu;
    // 0x2a189c: 0xc0a76c4  jal         func_29DB10
    ctx->pc = 0x2A189Cu;
    SET_GPR_U32(ctx, 31, 0x2A18A4u);
    ctx->pc = 0x2A18A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A189Cu;
    // 0x2a18a0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29DB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29DB10u, 0x2A189Cu, 0x2A18A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A18A4u;
label_2a18a4:
    // 0x2a18a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2a18a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a18a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a18a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a18ac: 0xc0a849e  jal         func_2A1278
    ctx->pc = 0x2A18ACu;
    SET_GPR_U32(ctx, 31, 0x2A18B4u);
    ctx->pc = 0x2A18B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A18ACu;
    // 0x2a18b0: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A1278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A1278u, 0x2A18ACu, 0x2A18B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A18B4u;
label_2a18b4:
    // 0x2a18b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a18b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a18b8: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x2A18B8u;
    SET_GPR_U32(ctx, 31, 0x2A18C0u);
    ctx->pc = 0x2A18BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A18B8u;
    // 0x2a18bc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2A18B8u, 0x2A18C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A18C0u;
label_2a18c0:
    // 0x2a18c0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2a18c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a18c4: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x2A18C4u;
    SET_GPR_U32(ctx, 31, 0x2A18CCu);
    ctx->pc = 0x2A18C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A18C4u;
    // 0x2a18c8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2A18C4u, 0x2A18CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A18CCu;
label_2a18cc:
    // 0x2a18cc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2A18CCu;
    {
        const bool branch_taken_0x2a18cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A18D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A18CCu;
        // 0x2a18d0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a18cc) {
            ctx->pc = 0x2A18F4u;
            goto label_2a18f4;
        }
    }
    ctx->pc = 0x2A18D4u;
label_2a18d4:
    // 0x2a18d4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2a18d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a18d8: 0xc0a80dc  jal         func_2A0370
    ctx->pc = 0x2A18D8u;
    SET_GPR_U32(ctx, 31, 0x2A18E0u);
    ctx->pc = 0x2A18DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A18D8u;
    // 0x2a18dc: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0370u, 0x2A18D8u, 0x2A18E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A18E0u;
label_2a18e0:
    // 0x2a18e0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a18e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a18e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a18e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a18e8: 0xc0a849e  jal         func_2A1278
    ctx->pc = 0x2A18E8u;
    SET_GPR_U32(ctx, 31, 0x2A18F0u);
    ctx->pc = 0x2A18ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A18E8u;
    // 0x2a18ec: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A1278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A1278u, 0x2A18E8u, 0x2A18F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A18F0u;
label_2a18f0:
    // 0x2a18f0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2a18f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2a18f4:
    // 0x2a18f4: 0xc09de68  jal         func_2779A0
    ctx->pc = 0x2A18F4u;
    SET_GPR_U32(ctx, 31, 0x2A18FCu);
    ctx->pc = 0x2A18F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A18F4u;
    // 0x2a18f8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2779A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2779A0u, 0x2A18F4u, 0x2A18FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A18FCu;
label_2a18fc:
    // 0x2a18fc: 0x5440ffa4  bnel        $v0, $zero, . + 4 + (-0x5C << 2)
    ctx->pc = 0x2A18FCu;
    {
        const bool branch_taken_0x2a18fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a18fc) {
            ctx->pc = 0x2A1900u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A18FCu;
            // 0x2a1900: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A1790u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a1790;
        }
    }
    ctx->pc = 0x2A1904u;
    // 0x2a1904: 0x26a5c8e0  addiu       $a1, $s5, -0x3720
    ctx->pc = 0x2a1904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294953184));
    // 0x2a1908: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x2A1908u;
    SET_GPR_U32(ctx, 31, 0x2A1910u);
    ctx->pc = 0x2A190Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1908u;
    // 0x2a190c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x2A1908u, 0x2A1910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1910u;
label_2a1910:
    // 0x2a1910: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a1910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1914: 0xc0a7ab0  jal         func_29EAC0
    ctx->pc = 0x2A1914u;
    SET_GPR_U32(ctx, 31, 0x2A191Cu);
    ctx->pc = 0x2A1918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1914u;
    // 0x2a1918: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29EAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29EAC0u, 0x2A1914u, 0x2A191Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A191Cu;
label_2a191c:
    // 0x2a191c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2a191cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1920: 0xae420f9c  sw          $v0, 0xF9C($s2)
    ctx->pc = 0x2a1920u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3996), GPR_U32(ctx, 2));
    // 0x2a1924: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x2A1924u;
    SET_GPR_U32(ctx, 31, 0x2A192Cu);
    ctx->pc = 0x2A1928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1924u;
    // 0x2a1928: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2A1924u, 0x2A192Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A192Cu;
label_2a192c:
    // 0x2a192c: 0x8e440f9c  lw          $a0, 0xF9C($s2)
    ctx->pc = 0x2a192cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3996)));
    // 0x2a1930: 0x2645032c  addiu       $a1, $s2, 0x32C
    ctx->pc = 0x2a1930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 812));
    // 0x2a1934: 0xc0d745c  jal         func_35D170
    ctx->pc = 0x2A1934u;
    SET_GPR_U32(ctx, 31, 0x2A193Cu);
    ctx->pc = 0x2A1938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1934u;
    // 0x2a1938: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D170u, 0x2A1934u, 0x2A193Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A193Cu;
label_2a193c:
    // 0x2a193c: 0x8e460f9c  lw          $a2, 0xF9C($s2)
    ctx->pc = 0x2a193cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3996)));
    // 0x2a1940: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a1940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a1944: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2a1944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1948: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2a1948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a194c: 0xa0c3006d  sb          $v1, 0x6D($a2)
    ctx->pc = 0x2a194cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 109), (uint8_t)GPR_U32(ctx, 3));
    // 0x2a1950: 0x8e420f9c  lw          $v0, 0xF9C($s2)
    ctx->pc = 0x2a1950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3996)));
    // 0x2a1954: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x2A1954u;
    SET_GPR_U32(ctx, 31, 0x2A195Cu);
    ctx->pc = 0x2A1958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1954u;
    // 0x2a1958: 0xae42029c  sw          $v0, 0x29C($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 668), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2A1954u, 0x2A195Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A195Cu;
label_2a195c:
    // 0x2a195c: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x2a195cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a1960: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x2a1960u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2a1964: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x2a1964u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a1968: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x2a1968u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a196c: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x2a196cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a1970: 0xdfb50078  ld          $s5, 0x78($sp)
    ctx->pc = 0x2a1970u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2a1974: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2a1974u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2a1978: 0x3e00008  jr          $ra
    ctx->pc = 0x2A1978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A197Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1978u;
        // 0x2a197c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A1978u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A1980u;
}
