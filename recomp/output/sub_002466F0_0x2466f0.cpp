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

// Function: sub_002466F0
// Address: 0x2466f0 - 0x2467c8
void sub_002466F0_0x2466f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002466F0_0x2466f0");
#endif

    switch (ctx->pc) {
        case 0x2466f0u: goto label_2466f0;
        case 0x2466f4u: goto label_2466f4;
        case 0x2466f8u: goto label_2466f8;
        case 0x2466fcu: goto label_2466fc;
        case 0x246700u: goto label_246700;
        case 0x246704u: goto label_246704;
        case 0x246708u: goto label_246708;
        case 0x24670cu: goto label_24670c;
        case 0x246710u: goto label_246710;
        case 0x246714u: goto label_246714;
        case 0x246718u: goto label_246718;
        case 0x24671cu: goto label_24671c;
        case 0x246720u: goto label_246720;
        case 0x246724u: goto label_246724;
        case 0x246728u: goto label_246728;
        case 0x24672cu: goto label_24672c;
        case 0x246730u: goto label_246730;
        case 0x246734u: goto label_246734;
        case 0x246738u: goto label_246738;
        case 0x24673cu: goto label_24673c;
        case 0x246740u: goto label_246740;
        case 0x246744u: goto label_246744;
        case 0x246748u: goto label_246748;
        case 0x24674cu: goto label_24674c;
        case 0x246750u: goto label_246750;
        case 0x246754u: goto label_246754;
        case 0x246758u: goto label_246758;
        case 0x24675cu: goto label_24675c;
        case 0x246760u: goto label_246760;
        case 0x246764u: goto label_246764;
        case 0x246768u: goto label_246768;
        case 0x24676cu: goto label_24676c;
        case 0x246770u: goto label_246770;
        case 0x246774u: goto label_246774;
        case 0x246778u: goto label_246778;
        case 0x24677cu: goto label_24677c;
        case 0x246780u: goto label_246780;
        case 0x246784u: goto label_246784;
        case 0x246788u: goto label_246788;
        case 0x24678cu: goto label_24678c;
        case 0x246790u: goto label_246790;
        case 0x246794u: goto label_246794;
        case 0x246798u: goto label_246798;
        case 0x24679cu: goto label_24679c;
        case 0x2467a0u: goto label_2467a0;
        case 0x2467a4u: goto label_2467a4;
        case 0x2467a8u: goto label_2467a8;
        case 0x2467acu: goto label_2467ac;
        case 0x2467b0u: goto label_2467b0;
        case 0x2467b4u: goto label_2467b4;
        case 0x2467b8u: goto label_2467b8;
        case 0x2467bcu: goto label_2467bc;
        case 0x2467c0u: goto label_2467c0;
        case 0x2467c4u: goto label_2467c4;
        default: break;
    }

    ctx->pc = 0x2466f0u;

label_2466f0:
    // 0x2466f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2466f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2466f4:
    // 0x2466f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2466f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2466f8:
    // 0x2466f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2466f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2466fc:
    // 0x2466fc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2466fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_246700:
    // 0x246700: 0xc481001c  lwc1        $f1, 0x1C($a0)
    ctx->pc = 0x246700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_246704:
    // 0x246704: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x246704u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_246708:
    // 0x246708: 0x0  nop
    ctx->pc = 0x246708u;
    // NOP
label_24670c:
    // 0x24670c: 0x45000029  bc1f        . + 4 + (0x29 << 2)
label_246710:
    if (ctx->pc == 0x246710u) {
        ctx->pc = 0x246710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24670Cu;
        // 0x246710: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246714u;
        goto label_246714;
    }
    ctx->pc = 0x24670Cu;
    {
        const bool branch_taken_0x24670c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x246710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24670Cu;
        // 0x246710: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24670c) {
            ctx->pc = 0x2467B4u;
            goto label_2467b4;
        }
    }
    ctx->pc = 0x246714u;
label_246714:
    // 0x246714: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x246714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_246718:
    // 0x246718: 0x8c6201cc  lw          $v0, 0x1CC($v1)
    ctx->pc = 0x246718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 460)));
label_24671c:
    // 0x24671c: 0x40f809  jalr        $v0
label_246720:
    if (ctx->pc == 0x246720u) {
        ctx->pc = 0x246720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24671Cu;
        // 0x246720: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246724u;
        goto label_246724;
    }
    ctx->pc = 0x24671Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x246724u);
        ctx->pc = 0x246720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24671Cu;
        // 0x246720: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24671Cu, 0x246724u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x246724u;
label_246724:
    // 0x246724: 0x8e04036c  lw          $a0, 0x36C($s0)
    ctx->pc = 0x246724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
label_246728:
    // 0x246728: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x246728u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_24672c:
    // 0x24672c: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x24672cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_246730:
    // 0x246730: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
label_246734:
    if (ctx->pc == 0x246734u) {
        ctx->pc = 0x246734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246730u;
        // 0x246734: 0x3c032000  lui         $v1, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246738u;
        goto label_246738;
    }
    ctx->pc = 0x246730u;
    {
        const bool branch_taken_0x246730 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x246734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246730u;
        // 0x246734: 0x3c032000  lui         $v1, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246730) {
            ctx->pc = 0x24674Cu;
            goto label_24674c;
        }
    }
    ctx->pc = 0x246738u;
label_246738:
    // 0x246738: 0x8e040338  lw          $a0, 0x338($s0)
    ctx->pc = 0x246738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
label_24673c:
    // 0x24673c: 0xc06bb88  jal         func_1AEE20
label_246740:
    if (ctx->pc == 0x246740u) {
        ctx->pc = 0x246740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24673Cu;
        // 0x246740: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246744u;
        goto label_246744;
    }
    ctx->pc = 0x24673Cu;
    SET_GPR_U32(ctx, 31, 0x246744u);
    ctx->pc = 0x246740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24673Cu;
    // 0x246740: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEE20u, 0x24673Cu, 0x246744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246744u;
label_246744:
    // 0x246744: 0x1000000b  b           . + 4 + (0xB << 2)
label_246748:
    if (ctx->pc == 0x246748u) {
        ctx->pc = 0x24674Cu;
        goto label_24674c;
    }
    ctx->pc = 0x246744u;
    {
        const bool branch_taken_0x246744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x246744) {
            ctx->pc = 0x246774u;
            goto label_246774;
        }
    }
    ctx->pc = 0x24674Cu;
label_24674c:
    // 0x24674c: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x24674cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_246750:
    // 0x246750: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
label_246754:
    if (ctx->pc == 0x246754u) {
        ctx->pc = 0x246754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246750u;
        // 0x246754: 0x8e040338  lw          $a0, 0x338($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246758u;
        goto label_246758;
    }
    ctx->pc = 0x246750u;
    {
        const bool branch_taken_0x246750 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x246754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246750u;
        // 0x246754: 0x8e040338  lw          $a0, 0x338($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246750) {
            ctx->pc = 0x246768u;
            goto label_246768;
        }
    }
    ctx->pc = 0x246758u;
label_246758:
    // 0x246758: 0xc06bbb6  jal         func_1AEED8
label_24675c:
    if (ctx->pc == 0x24675Cu) {
        ctx->pc = 0x24675Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246758u;
        // 0x24675c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246760u;
        goto label_246760;
    }
    ctx->pc = 0x246758u;
    SET_GPR_U32(ctx, 31, 0x246760u);
    ctx->pc = 0x24675Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246758u;
    // 0x24675c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEED8u, 0x246758u, 0x246760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246760u;
label_246760:
    // 0x246760: 0x10000004  b           . + 4 + (0x4 << 2)
label_246764:
    if (ctx->pc == 0x246764u) {
        ctx->pc = 0x246768u;
        goto label_246768;
    }
    ctx->pc = 0x246760u;
    {
        const bool branch_taken_0x246760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x246760) {
            ctx->pc = 0x246774u;
            goto label_246774;
        }
    }
    ctx->pc = 0x246768u;
label_246768:
    // 0x246768: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x246768u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24676c:
    // 0x24676c: 0xc06bb4e  jal         func_1AED38
label_246770:
    if (ctx->pc == 0x246770u) {
        ctx->pc = 0x246770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24676Cu;
        // 0x246770: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246774u;
        goto label_246774;
    }
    ctx->pc = 0x24676Cu;
    SET_GPR_U32(ctx, 31, 0x246774u);
    ctx->pc = 0x246770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24676Cu;
    // 0x246770: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AED38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AED38u, 0x24676Cu, 0x246774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246774u;
label_246774:
    // 0x246774: 0xc08dab6  jal         func_236AD8
label_246778:
    if (ctx->pc == 0x246778u) {
        ctx->pc = 0x246778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246774u;
        // 0x246778: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24677Cu;
        goto label_24677c;
    }
    ctx->pc = 0x246774u;
    SET_GPR_U32(ctx, 31, 0x24677Cu);
    ctx->pc = 0x246778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246774u;
    // 0x246778: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236AD8u, 0x246774u, 0x24677Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24677Cu;
label_24677c:
    // 0x24677c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_246780:
    if (ctx->pc == 0x246780u) {
        ctx->pc = 0x246780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24677Cu;
        // 0x246780: 0x8e040110  lw          $a0, 0x110($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246784u;
        goto label_246784;
    }
    ctx->pc = 0x24677Cu;
    {
        const bool branch_taken_0x24677c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24677c) {
            ctx->pc = 0x246780u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24677Cu;
            // 0x246780: 0x8e040110  lw          $a0, 0x110($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2467ACu;
            goto label_2467ac;
        }
    }
    ctx->pc = 0x246784u;
label_246784:
    // 0x246784: 0xc0899bc  jal         func_2266F0
label_246788:
    if (ctx->pc == 0x246788u) {
        ctx->pc = 0x246788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246784u;
        // 0x246788: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24678Cu;
        goto label_24678c;
    }
    ctx->pc = 0x246784u;
    SET_GPR_U32(ctx, 31, 0x24678Cu);
    ctx->pc = 0x246788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246784u;
    // 0x246788: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x246784u, 0x24678Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24678Cu;
label_24678c:
    // 0x24678c: 0xc097f26  jal         func_25FC98
label_246790:
    if (ctx->pc == 0x246790u) {
        ctx->pc = 0x246790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24678Cu;
        // 0x246790: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246794u;
        goto label_246794;
    }
    ctx->pc = 0x24678Cu;
    SET_GPR_U32(ctx, 31, 0x246794u);
    ctx->pc = 0x246790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24678Cu;
    // 0x246790: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x24678Cu, 0x246794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246794u;
label_246794:
    // 0x246794: 0x2403006e  addiu       $v1, $zero, 0x6E
    ctx->pc = 0x246794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
label_246798:
    // 0x246798: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
label_24679c:
    if (ctx->pc == 0x24679Cu) {
        ctx->pc = 0x24679Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246798u;
        // 0x24679c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2467A0u;
        goto label_2467a0;
    }
    ctx->pc = 0x246798u;
    {
        const bool branch_taken_0x246798 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x24679Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246798u;
        // 0x24679c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246798) {
            ctx->pc = 0x2467A8u;
            goto label_2467a8;
        }
    }
    ctx->pc = 0x2467A0u;
label_2467a0:
    // 0x2467a0: 0x8e030338  lw          $v1, 0x338($s0)
    ctx->pc = 0x2467a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
label_2467a4:
    // 0x2467a4: 0xac6200b0  sw          $v0, 0xB0($v1)
    ctx->pc = 0x2467a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 176), GPR_U32(ctx, 2));
label_2467a8:
    // 0x2467a8: 0x8e040110  lw          $a0, 0x110($s0)
    ctx->pc = 0x2467a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_2467ac:
    // 0x2467ac: 0xc0757d2  jal         func_1D5F48
label_2467b0:
    if (ctx->pc == 0x2467B0u) {
        ctx->pc = 0x2467B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2467ACu;
        // 0x2467b0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2467B4u;
        goto label_2467b4;
    }
    ctx->pc = 0x2467ACu;
    SET_GPR_U32(ctx, 31, 0x2467B4u);
    ctx->pc = 0x2467B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2467ACu;
    // 0x2467b0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5F48u, 0x2467ACu, 0x2467B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2467B4u;
label_2467b4:
    // 0x2467b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2467b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2467b8:
    // 0x2467b8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2467b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2467bc:
    // 0x2467bc: 0x3e00008  jr          $ra
label_2467c0:
    if (ctx->pc == 0x2467C0u) {
        ctx->pc = 0x2467C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2467BCu;
        // 0x2467c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2467C4u;
        goto label_2467c4;
    }
    ctx->pc = 0x2467BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2467C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2467BCu;
        // 0x2467c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2467BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2467C4u;
label_2467c4:
    // 0x2467c4: 0x0  nop
    ctx->pc = 0x2467c4u;
    // NOP
    ctx->pc = 0x2467c8u;
}
