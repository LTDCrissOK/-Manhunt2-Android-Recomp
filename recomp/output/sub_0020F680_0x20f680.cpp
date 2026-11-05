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

// Function: sub_0020F680
// Address: 0x20f680 - 0x20f7d8
void sub_0020F680_0x20f680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020F680_0x20f680");
#endif

    switch (ctx->pc) {
        case 0x20f680u: goto label_20f680;
        case 0x20f684u: goto label_20f684;
        case 0x20f688u: goto label_20f688;
        case 0x20f68cu: goto label_20f68c;
        case 0x20f690u: goto label_20f690;
        case 0x20f694u: goto label_20f694;
        case 0x20f698u: goto label_20f698;
        case 0x20f69cu: goto label_20f69c;
        case 0x20f6a0u: goto label_20f6a0;
        case 0x20f6a4u: goto label_20f6a4;
        case 0x20f6a8u: goto label_20f6a8;
        case 0x20f6acu: goto label_20f6ac;
        case 0x20f6b0u: goto label_20f6b0;
        case 0x20f6b4u: goto label_20f6b4;
        case 0x20f6b8u: goto label_20f6b8;
        case 0x20f6bcu: goto label_20f6bc;
        case 0x20f6c0u: goto label_20f6c0;
        case 0x20f6c4u: goto label_20f6c4;
        case 0x20f6c8u: goto label_20f6c8;
        case 0x20f6ccu: goto label_20f6cc;
        case 0x20f6d0u: goto label_20f6d0;
        case 0x20f6d4u: goto label_20f6d4;
        case 0x20f6d8u: goto label_20f6d8;
        case 0x20f6dcu: goto label_20f6dc;
        case 0x20f6e0u: goto label_20f6e0;
        case 0x20f6e4u: goto label_20f6e4;
        case 0x20f6e8u: goto label_20f6e8;
        case 0x20f6ecu: goto label_20f6ec;
        case 0x20f6f0u: goto label_20f6f0;
        case 0x20f6f4u: goto label_20f6f4;
        case 0x20f6f8u: goto label_20f6f8;
        case 0x20f6fcu: goto label_20f6fc;
        case 0x20f700u: goto label_20f700;
        case 0x20f704u: goto label_20f704;
        case 0x20f708u: goto label_20f708;
        case 0x20f70cu: goto label_20f70c;
        case 0x20f710u: goto label_20f710;
        case 0x20f714u: goto label_20f714;
        case 0x20f718u: goto label_20f718;
        case 0x20f71cu: goto label_20f71c;
        case 0x20f720u: goto label_20f720;
        case 0x20f724u: goto label_20f724;
        case 0x20f728u: goto label_20f728;
        case 0x20f72cu: goto label_20f72c;
        case 0x20f730u: goto label_20f730;
        case 0x20f734u: goto label_20f734;
        case 0x20f738u: goto label_20f738;
        case 0x20f73cu: goto label_20f73c;
        case 0x20f740u: goto label_20f740;
        case 0x20f744u: goto label_20f744;
        case 0x20f748u: goto label_20f748;
        case 0x20f74cu: goto label_20f74c;
        case 0x20f750u: goto label_20f750;
        case 0x20f754u: goto label_20f754;
        case 0x20f758u: goto label_20f758;
        case 0x20f75cu: goto label_20f75c;
        case 0x20f760u: goto label_20f760;
        case 0x20f764u: goto label_20f764;
        case 0x20f768u: goto label_20f768;
        case 0x20f76cu: goto label_20f76c;
        case 0x20f770u: goto label_20f770;
        case 0x20f774u: goto label_20f774;
        case 0x20f778u: goto label_20f778;
        case 0x20f77cu: goto label_20f77c;
        case 0x20f780u: goto label_20f780;
        case 0x20f784u: goto label_20f784;
        case 0x20f788u: goto label_20f788;
        case 0x20f78cu: goto label_20f78c;
        case 0x20f790u: goto label_20f790;
        case 0x20f794u: goto label_20f794;
        case 0x20f798u: goto label_20f798;
        case 0x20f79cu: goto label_20f79c;
        case 0x20f7a0u: goto label_20f7a0;
        case 0x20f7a4u: goto label_20f7a4;
        case 0x20f7a8u: goto label_20f7a8;
        case 0x20f7acu: goto label_20f7ac;
        case 0x20f7b0u: goto label_20f7b0;
        case 0x20f7b4u: goto label_20f7b4;
        case 0x20f7b8u: goto label_20f7b8;
        case 0x20f7bcu: goto label_20f7bc;
        case 0x20f7c0u: goto label_20f7c0;
        case 0x20f7c4u: goto label_20f7c4;
        case 0x20f7c8u: goto label_20f7c8;
        case 0x20f7ccu: goto label_20f7cc;
        case 0x20f7d0u: goto label_20f7d0;
        case 0x20f7d4u: goto label_20f7d4;
        default: break;
    }

    ctx->pc = 0x20f680u;

label_20f680:
    // 0x20f680: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x20f680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
label_20f684:
    // 0x20f684: 0xffb000d0  sd          $s0, 0xD0($sp)
    ctx->pc = 0x20f684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 16));
label_20f688:
    // 0x20f688: 0xffb200e0  sd          $s2, 0xE0($sp)
    ctx->pc = 0x20f688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 18));
label_20f68c:
    // 0x20f68c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20f68cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20f690:
    // 0x20f690: 0xffb300e8  sd          $s3, 0xE8($sp)
    ctx->pc = 0x20f690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 19));
label_20f694:
    // 0x20f694: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x20f694u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_20f698:
    // 0x20f698: 0xffb100d8  sd          $s1, 0xD8($sp)
    ctx->pc = 0x20f698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 17));
label_20f69c:
    // 0x20f69c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x20f69cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_20f6a0:
    // 0x20f6a0: 0xffb400f0  sd          $s4, 0xF0($sp)
    ctx->pc = 0x20f6a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 20));
label_20f6a4:
    // 0x20f6a4: 0xffb500f8  sd          $s5, 0xF8($sp)
    ctx->pc = 0x20f6a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 21));
label_20f6a8:
    // 0x20f6a8: 0xffb60100  sd          $s6, 0x100($sp)
    ctx->pc = 0x20f6a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 22));
label_20f6ac:
    // 0x20f6ac: 0xffb70108  sd          $s7, 0x108($sp)
    ctx->pc = 0x20f6acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 23));
label_20f6b0:
    // 0x20f6b0: 0xffbf0110  sd          $ra, 0x110($sp)
    ctx->pc = 0x20f6b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 31));
label_20f6b4:
    // 0x20f6b4: 0xc079582  jal         func_1E5608
label_20f6b8:
    if (ctx->pc == 0x20F6B8u) {
        ctx->pc = 0x20F6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F6B4u;
        // 0x20f6b8: 0xe7b40120  swc1        $f20, 0x120($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F6BCu;
        goto label_20f6bc;
    }
    ctx->pc = 0x20F6B4u;
    SET_GPR_U32(ctx, 31, 0x20F6BCu);
    ctx->pc = 0x20F6B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F6B4u;
    // 0x20f6b8: 0xe7b40120  swc1        $f20, 0x120($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E5608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5608u, 0x20F6B4u, 0x20F6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F6BCu;
label_20f6bc:
    // 0x20f6bc: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
label_20f6c0:
    if (ctx->pc == 0x20F6C0u) {
        ctx->pc = 0x20F6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F6BCu;
        // 0x20f6c0: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F6C4u;
        goto label_20f6c4;
    }
    ctx->pc = 0x20F6BCu;
    {
        const bool branch_taken_0x20f6bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F6BCu;
        // 0x20f6c0: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f6bc) {
            ctx->pc = 0x20F7A4u;
            goto label_20f7a4;
        }
    }
    ctx->pc = 0x20F6C4u;
label_20f6c4:
    // 0x20f6c4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x20f6c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20f6c8:
    // 0x20f6c8: 0x8c6291d8  lw          $v0, -0x6E28($v1)
    ctx->pc = 0x20f6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294939096)));
label_20f6cc:
    // 0x20f6cc: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
label_20f6d0:
    if (ctx->pc == 0x20F6D0u) {
        ctx->pc = 0x20F6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F6CCu;
        // 0x20f6d0: 0x60b82d  daddu       $s7, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F6D4u;
        goto label_20f6d4;
    }
    ctx->pc = 0x20F6CCu;
    {
        const bool branch_taken_0x20f6cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F6CCu;
        // 0x20f6d0: 0x60b82d  daddu       $s7, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f6cc) {
            ctx->pc = 0x20F7A4u;
            goto label_20f7a4;
        }
    }
    ctx->pc = 0x20F6D4u;
label_20f6d4:
    // 0x20f6d4: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x20f6d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_20f6d8:
    // 0x20f6d8: 0x3c160040  lui         $s6, 0x40
    ctx->pc = 0x20f6d8u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)64 << 16));
label_20f6dc:
    // 0x20f6dc: 0x3c150040  lui         $s5, 0x40
    ctx->pc = 0x20f6dcu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)64 << 16));
label_20f6e0:
    // 0x20f6e0: 0x3c140046  lui         $s4, 0x46
    ctx->pc = 0x20f6e0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)70 << 16));
label_20f6e4:
    // 0x20f6e4: 0x8ec291d4  lw          $v0, -0x6E2C($s6)
    ctx->pc = 0x20f6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294939092)));
label_20f6e8:
    // 0x20f6e8: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x20f6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_20f6ec:
    // 0x20f6ec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x20f6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_20f6f0:
    // 0x20f6f0: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x20f6f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_20f6f4:
    // 0x20f6f4: 0x8ca20030  lw          $v0, 0x30($a1)
    ctx->pc = 0x20f6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
label_20f6f8:
    // 0x20f6f8: 0x3842000c  xori        $v0, $v0, 0xC
    ctx->pc = 0x20f6f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)12);
label_20f6fc:
    // 0x20f6fc: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
label_20f700:
    if (ctx->pc == 0x20F700u) {
        ctx->pc = 0x20F700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F6FCu;
        // 0x20f700: 0x8ee291d8  lw          $v0, -0x6E28($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294939096)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F704u;
        goto label_20f704;
    }
    ctx->pc = 0x20F6FCu;
    {
        const bool branch_taken_0x20f6fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F6FCu;
        // 0x20f700: 0x8ee291d8  lw          $v0, -0x6E28($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294939096)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f6fc) {
            ctx->pc = 0x20F794u;
            goto label_20f794;
        }
    }
    ctx->pc = 0x20F704u;
label_20f704:
    // 0x20f704: 0x8ca2003c  lw          $v0, 0x3C($a1)
    ctx->pc = 0x20f704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
label_20f708:
    // 0x20f708: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_20f70c:
    if (ctx->pc == 0x20F70Cu) {
        ctx->pc = 0x20F70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F708u;
        // 0x20f70c: 0x8e04010c  lw          $a0, 0x10C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F710u;
        goto label_20f710;
    }
    ctx->pc = 0x20F708u;
    {
        const bool branch_taken_0x20f708 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F708u;
        // 0x20f70c: 0x8e04010c  lw          $a0, 0x10C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f708) {
            ctx->pc = 0x20F76Cu;
            goto label_20f76c;
        }
    }
    ctx->pc = 0x20F710u;
label_20f710:
    // 0x20f710: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x20f710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_20f714:
    // 0x20f714: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x20f714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_20f718:
    // 0x20f718: 0x40f809  jalr        $v0
label_20f71c:
    if (ctx->pc == 0x20F71Cu) {
        ctx->pc = 0x20F71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F718u;
        // 0x20f71c: 0x8e660000  lw          $a2, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F720u;
        goto label_20f720;
    }
    ctx->pc = 0x20F718u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20F720u);
        ctx->pc = 0x20F71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F718u;
        // 0x20f71c: 0x8e660000  lw          $a2, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20F718u, 0x20F720u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20F720u;
label_20f720:
    // 0x20f720: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x20f720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_20f724:
    // 0x20f724: 0x8e0200b8  lw          $v0, 0xB8($s0)
    ctx->pc = 0x20f724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
label_20f728:
    // 0x20f728: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x20f728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20f72c:
    // 0x20f72c: 0xc44000ac  lwc1        $f0, 0xAC($v0)
    ctx->pc = 0x20f72cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20f730:
    // 0x20f730: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x20f730u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_20f734:
    // 0x20f734: 0x460ca034  c.lt.s      $f20, $f12
    ctx->pc = 0x20f734u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20f738:
    // 0x20f738: 0x0  nop
    ctx->pc = 0x20f738u;
    // NOP
label_20f73c:
    // 0x20f73c: 0x45000014  bc1f        . + 4 + (0x14 << 2)
label_20f740:
    if (ctx->pc == 0x20F740u) {
        ctx->pc = 0x20F740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F73Cu;
        // 0x20f740: 0x8ea2bd50  lw          $v0, -0x42B0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294950224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F744u;
        goto label_20f744;
    }
    ctx->pc = 0x20F73Cu;
    {
        const bool branch_taken_0x20f73c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20F740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F73Cu;
        // 0x20f740: 0x8ea2bd50  lw          $v0, -0x42B0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294950224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f73c) {
            ctx->pc = 0x20F790u;
            goto label_20f790;
        }
    }
    ctx->pc = 0x20F744u;
label_20f744:
    // 0x20f744: 0x16020013  bne         $s0, $v0, . + 4 + (0x13 << 2)
label_20f748:
    if (ctx->pc == 0x20F748u) {
        ctx->pc = 0x20F748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F744u;
        // 0x20f748: 0x8ee291d8  lw          $v0, -0x6E28($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294939096)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F74Cu;
        goto label_20f74c;
    }
    ctx->pc = 0x20F744u;
    {
        const bool branch_taken_0x20f744 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x20F748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F744u;
        // 0x20f748: 0x8ee291d8  lw          $v0, -0x6E28($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294939096)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f744) {
            ctx->pc = 0x20F794u;
            goto label_20f794;
        }
    }
    ctx->pc = 0x20F74Cu;
label_20f74c:
    // 0x20f74c: 0xc0f5212  jal         func_3D4848
label_20f750:
    if (ctx->pc == 0x20F750u) {
        ctx->pc = 0x20F754u;
        goto label_20f754;
    }
    ctx->pc = 0x20F74Cu;
    SET_GPR_U32(ctx, 31, 0x20F754u);
    ctx->pc = 0x3D4848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4848u, 0x20F74Cu, 0x20F754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F754u;
label_20f754:
    // 0x20f754: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x20f754u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20f758:
    // 0x20f758: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x20f758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_20f75c:
    // 0x20f75c: 0xc0efefa  jal         func_3BFBE8
label_20f760:
    if (ctx->pc == 0x20F760u) {
        ctx->pc = 0x20F760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F75Cu;
        // 0x20f760: 0x26851450  addiu       $a1, $s4, 0x1450 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 5200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F764u;
        goto label_20f764;
    }
    ctx->pc = 0x20F75Cu;
    SET_GPR_U32(ctx, 31, 0x20F764u);
    ctx->pc = 0x20F760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F75Cu;
    // 0x20f760: 0x26851450  addiu       $a1, $s4, 0x1450 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 5200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x20F75Cu, 0x20F764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F764u;
label_20f764:
    // 0x20f764: 0x1000000b  b           . + 4 + (0xB << 2)
label_20f768:
    if (ctx->pc == 0x20F768u) {
        ctx->pc = 0x20F768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F764u;
        // 0x20f768: 0x8ee291d8  lw          $v0, -0x6E28($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294939096)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F76Cu;
        goto label_20f76c;
    }
    ctx->pc = 0x20F764u;
    {
        const bool branch_taken_0x20f764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F764u;
        // 0x20f768: 0x8ee291d8  lw          $v0, -0x6E28($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294939096)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f764) {
            ctx->pc = 0x20F794u;
            goto label_20f794;
        }
    }
    ctx->pc = 0x20F76Cu;
label_20f76c:
    // 0x20f76c: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x20f76cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_20f770:
    // 0x20f770: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x20f770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_20f774:
    // 0x20f774: 0x40f809  jalr        $v0
label_20f778:
    if (ctx->pc == 0x20F778u) {
        ctx->pc = 0x20F778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F774u;
        // 0x20f778: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F77Cu;
        goto label_20f77c;
    }
    ctx->pc = 0x20F774u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20F77Cu);
        ctx->pc = 0x20F778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F774u;
        // 0x20f778: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20F774u, 0x20F77Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20F77Cu;
label_20f77c:
    // 0x20f77c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_20f780:
    if (ctx->pc == 0x20F780u) {
        ctx->pc = 0x20F780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F77Cu;
        // 0x20f780: 0x8ee291d8  lw          $v0, -0x6E28($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294939096)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F784u;
        goto label_20f784;
    }
    ctx->pc = 0x20F77Cu;
    {
        const bool branch_taken_0x20f77c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20F780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F77Cu;
        // 0x20f780: 0x8ee291d8  lw          $v0, -0x6E28($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294939096)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f77c) {
            ctx->pc = 0x20F794u;
            goto label_20f794;
        }
    }
    ctx->pc = 0x20F784u;
label_20f784:
    // 0x20f784: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x20f784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_20f788:
    // 0x20f788: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x20f788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_20f78c:
    // 0x20f78c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x20f78cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_20f790:
    // 0x20f790: 0x8ee291d8  lw          $v0, -0x6E28($s7)
    ctx->pc = 0x20f790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294939096)));
label_20f794:
    // 0x20f794: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x20f794u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_20f798:
    // 0x20f798: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x20f798u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_20f79c:
    // 0x20f79c: 0x1440ffd2  bnez        $v0, . + 4 + (-0x2E << 2)
label_20f7a0:
    if (ctx->pc == 0x20F7A0u) {
        ctx->pc = 0x20F7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F79Cu;
        // 0x20f7a0: 0x8ec291d4  lw          $v0, -0x6E2C($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294939092)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F7A4u;
        goto label_20f7a4;
    }
    ctx->pc = 0x20F79Cu;
    {
        const bool branch_taken_0x20f79c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20F7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F79Cu;
        // 0x20f7a0: 0x8ec291d4  lw          $v0, -0x6E2C($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294939092)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f79c) {
            ctx->pc = 0x20F6E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20f6e8;
        }
    }
    ctx->pc = 0x20F7A4u;
label_20f7a4:
    // 0x20f7a4: 0xdfb000d0  ld          $s0, 0xD0($sp)
    ctx->pc = 0x20f7a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_20f7a8:
    // 0x20f7a8: 0xdfb100d8  ld          $s1, 0xD8($sp)
    ctx->pc = 0x20f7a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 216)));
label_20f7ac:
    // 0x20f7ac: 0xdfb200e0  ld          $s2, 0xE0($sp)
    ctx->pc = 0x20f7acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 224)));
label_20f7b0:
    // 0x20f7b0: 0xdfb300e8  ld          $s3, 0xE8($sp)
    ctx->pc = 0x20f7b0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 232)));
label_20f7b4:
    // 0x20f7b4: 0xdfb400f0  ld          $s4, 0xF0($sp)
    ctx->pc = 0x20f7b4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 240)));
label_20f7b8:
    // 0x20f7b8: 0xdfb500f8  ld          $s5, 0xF8($sp)
    ctx->pc = 0x20f7b8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 248)));
label_20f7bc:
    // 0x20f7bc: 0xdfb60100  ld          $s6, 0x100($sp)
    ctx->pc = 0x20f7bcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 256)));
label_20f7c0:
    // 0x20f7c0: 0xdfb70108  ld          $s7, 0x108($sp)
    ctx->pc = 0x20f7c0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 264)));
label_20f7c4:
    // 0x20f7c4: 0xdfbf0110  ld          $ra, 0x110($sp)
    ctx->pc = 0x20f7c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 272)));
label_20f7c8:
    // 0x20f7c8: 0xc7b40120  lwc1        $f20, 0x120($sp)
    ctx->pc = 0x20f7c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_20f7cc:
    // 0x20f7cc: 0x3e00008  jr          $ra
label_20f7d0:
    if (ctx->pc == 0x20F7D0u) {
        ctx->pc = 0x20F7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F7CCu;
        // 0x20f7d0: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F7D4u;
        goto label_20f7d4;
    }
    ctx->pc = 0x20F7CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20F7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F7CCu;
        // 0x20f7d0: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20F7CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20F7D4u;
label_20f7d4:
    // 0x20f7d4: 0x0  nop
    ctx->pc = 0x20f7d4u;
    // NOP
    ctx->pc = 0x20f7d8u;
}
