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

// Function: sub_0025D660
// Address: 0x25d660 - 0x25da08
void sub_0025D660_0x25d660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025D660_0x25d660");
#endif

    switch (ctx->pc) {
        case 0x25d680u: goto label_25d680;
        case 0x25d6e4u: goto label_25d6e4;
        case 0x25d73cu: goto label_25d73c;
        case 0x25d784u: goto label_25d784;
        case 0x25d7e0u: goto label_25d7e0;
        case 0x25d810u: goto label_25d810;
        case 0x25d81cu: goto label_25d81c;
        case 0x25d824u: goto label_25d824;
        case 0x25d830u: goto label_25d830;
        case 0x25d848u: goto label_25d848;
        case 0x25d858u: goto label_25d858;
        case 0x25d88cu: goto label_25d88c;
        case 0x25d8ccu: goto label_25d8cc;
        case 0x25d978u: goto label_25d978;
        case 0x25d9e0u: goto label_25d9e0;
        default: break;
    }

    ctx->pc = 0x25d660u;

    // 0x25d660: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25d660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25d664: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x25d664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25d668: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x25d668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x25d66c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x25d66cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d670: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x25d670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x25d674: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x25d674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x25d678: 0xc08731e  jal         func_21CC78
    ctx->pc = 0x25D678u;
    SET_GPR_U32(ctx, 31, 0x25D680u);
    ctx->pc = 0x25D67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D678u;
    // 0x25d67c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21CC78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21CC78u, 0x25D678u, 0x25D680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D680u;
label_25d680:
    // 0x25d680: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x25d680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x25d684: 0x3c010080  lui         $at, 0x80
    ctx->pc = 0x25d684u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)128 << 16));
    // 0x25d688: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25d688u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25d68c: 0x24422400  addiu       $v0, $v0, 0x2400
    ctx->pc = 0x25d68cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9216));
    // 0x25d690: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x25d690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x25d694: 0xae220218  sw          $v0, 0x218($s1)
    ctx->pc = 0x25d694u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 536), GPR_U32(ctx, 2));
    // 0x25d698: 0xe6200244  swc1        $f0, 0x244($s1)
    ctx->pc = 0x25d698u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 580), bits); }
    // 0x25d69c: 0xae230230  sw          $v1, 0x230($s1)
    ctx->pc = 0x25d69cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 560), GPR_U32(ctx, 3));
    // 0x25d6a0: 0xae200234  sw          $zero, 0x234($s1)
    ctx->pc = 0x25d6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 564), GPR_U32(ctx, 0));
    // 0x25d6a4: 0xae200238  sw          $zero, 0x238($s1)
    ctx->pc = 0x25d6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 568), GPR_U32(ctx, 0));
    // 0x25d6a8: 0xae200240  sw          $zero, 0x240($s1)
    ctx->pc = 0x25d6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 576), GPR_U32(ctx, 0));
    // 0x25d6ac: 0xae200248  sw          $zero, 0x248($s1)
    ctx->pc = 0x25d6acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 0));
    // 0x25d6b0: 0xae20024c  sw          $zero, 0x24C($s1)
    ctx->pc = 0x25d6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 588), GPR_U32(ctx, 0));
    // 0x25d6b4: 0xae200250  sw          $zero, 0x250($s1)
    ctx->pc = 0x25d6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 0));
    // 0x25d6b8: 0xae200254  sw          $zero, 0x254($s1)
    ctx->pc = 0x25d6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 596), GPR_U32(ctx, 0));
    // 0x25d6bc: 0xae20025c  sw          $zero, 0x25C($s1)
    ctx->pc = 0x25d6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 604), GPR_U32(ctx, 0));
    // 0x25d6c0: 0xae200260  sw          $zero, 0x260($s1)
    ctx->pc = 0x25d6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 608), GPR_U32(ctx, 0));
    // 0x25d6c4: 0xae200264  sw          $zero, 0x264($s1)
    ctx->pc = 0x25d6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 612), GPR_U32(ctx, 0));
    // 0x25d6c8: 0xae200268  sw          $zero, 0x268($s1)
    ctx->pc = 0x25d6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 616), GPR_U32(ctx, 0));
    // 0x25d6cc: 0xae20026c  sw          $zero, 0x26C($s1)
    ctx->pc = 0x25d6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 620), GPR_U32(ctx, 0));
    // 0x25d6d0: 0x8e0402ec  lw          $a0, 0x2EC($s0)
    ctx->pc = 0x25d6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 748)));
    // 0x25d6d4: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25D6D4u;
    {
        const bool branch_taken_0x25d6d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D6D4u;
        // 0x25d6d8: 0x8e3200b8  lw          $s2, 0xB8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d6d4) {
            ctx->pc = 0x25D6ECu;
            goto label_25d6ec;
        }
    }
    ctx->pc = 0x25D6DCu;
    // 0x25d6dc: 0xc0c31d0  jal         func_30C740
    ctx->pc = 0x25D6DCu;
    SET_GPR_U32(ctx, 31, 0x25D6E4u);
    ctx->pc = 0x30C740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C740u, 0x25D6DCu, 0x25D6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D6E4u;
label_25d6e4:
    // 0x25d6e4: 0xae220238  sw          $v0, 0x238($s1)
    ctx->pc = 0x25d6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 568), GPR_U32(ctx, 2));
    // 0x25d6e8: 0xac510008  sw          $s1, 0x8($v0)
    ctx->pc = 0x25d6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 17));
label_25d6ec:
    // 0x25d6ec: 0x8e220104  lw          $v0, 0x104($s1)
    ctx->pc = 0x25d6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x25d6f0: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x25d6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x25d6f4: 0x1060003b  beqz        $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x25D6F4u;
    {
        const bool branch_taken_0x25d6f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D6F4u;
        // 0x25d6f8: 0x26430234  addiu       $v1, $s2, 0x234 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 564));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d6f4) {
            ctx->pc = 0x25D7E4u;
            goto label_25d7e4;
        }
    }
    ctx->pc = 0x25D6FCu;
    // 0x25d6fc: 0x84620004  lh          $v0, 0x4($v1)
    ctx->pc = 0x25d6fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x25d700: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25D700u;
    {
        const bool branch_taken_0x25d700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D700u;
        // 0x25d704: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d700) {
            ctx->pc = 0x25D710u;
            goto label_25d710;
        }
    }
    ctx->pc = 0x25D708u;
    // 0x25d708: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x25D708u;
    {
        const bool branch_taken_0x25d708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D708u;
        // 0x25d70c: 0x8e420234  lw          $v0, 0x234($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 564)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d708) {
            ctx->pc = 0x25D714u;
            goto label_25d714;
        }
    }
    ctx->pc = 0x25D710u;
label_25d710:
    // 0x25d710: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x25d710u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25d714:
    // 0x25d714: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x25D714u;
    {
        const bool branch_taken_0x25d714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D714u;
        // 0x25d718: 0x26430254  addiu       $v1, $s2, 0x254 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 596));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d714) {
            ctx->pc = 0x25D744u;
            goto label_25d744;
        }
    }
    ctx->pc = 0x25D71Cu;
    // 0x25d71c: 0x84820004  lh          $v0, 0x4($a0)
    ctx->pc = 0x25d71cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x25d720: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x25D720u;
    {
        const bool branch_taken_0x25d720 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D720u;
        // 0x25d724: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d720) {
            ctx->pc = 0x25D72Cu;
            goto label_25d72c;
        }
    }
    ctx->pc = 0x25D728u;
    // 0x25d728: 0x8e440234  lw          $a0, 0x234($s2)
    ctx->pc = 0x25d728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 564)));
label_25d72c:
    // 0x25d72c: 0x8e2200b8  lw          $v0, 0xB8($s1)
    ctx->pc = 0x25d72cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
    // 0x25d730: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x25d730u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d734: 0xc075272  jal         func_1D49C8
    ctx->pc = 0x25D734u;
    SET_GPR_U32(ctx, 31, 0x25D73Cu);
    ctx->pc = 0x25D738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D734u;
    // 0x25d738: 0x8c450030  lw          $a1, 0x30($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D49C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D49C8u, 0x25D734u, 0x25D73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D73Cu;
label_25d73c:
    // 0x25d73c: 0xae220260  sw          $v0, 0x260($s1)
    ctx->pc = 0x25d73cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 608), GPR_U32(ctx, 2));
    // 0x25d740: 0x26430254  addiu       $v1, $s2, 0x254
    ctx->pc = 0x25d740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 596));
label_25d744:
    // 0x25d744: 0x84620004  lh          $v0, 0x4($v1)
    ctx->pc = 0x25d744u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x25d748: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25D748u;
    {
        const bool branch_taken_0x25d748 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D748u;
        // 0x25d74c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d748) {
            ctx->pc = 0x25D758u;
            goto label_25d758;
        }
    }
    ctx->pc = 0x25D750u;
    // 0x25d750: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x25D750u;
    {
        const bool branch_taken_0x25d750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D750u;
        // 0x25d754: 0x8e420254  lw          $v0, 0x254($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 596)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d750) {
            ctx->pc = 0x25D75Cu;
            goto label_25d75c;
        }
    }
    ctx->pc = 0x25D758u;
label_25d758:
    // 0x25d758: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x25d758u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25d75c:
    // 0x25d75c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x25D75Cu;
    {
        const bool branch_taken_0x25d75c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D75Cu;
        // 0x25d760: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d75c) {
            ctx->pc = 0x25D78Cu;
            goto label_25d78c;
        }
    }
    ctx->pc = 0x25D764u;
    // 0x25d764: 0x84820004  lh          $v0, 0x4($a0)
    ctx->pc = 0x25d764u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x25d768: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x25D768u;
    {
        const bool branch_taken_0x25d768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D768u;
        // 0x25d76c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d768) {
            ctx->pc = 0x25D774u;
            goto label_25d774;
        }
    }
    ctx->pc = 0x25D770u;
    // 0x25d770: 0x8e440254  lw          $a0, 0x254($s2)
    ctx->pc = 0x25d770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 596)));
label_25d774:
    // 0x25d774: 0x8e2200b8  lw          $v0, 0xB8($s1)
    ctx->pc = 0x25d774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
    // 0x25d778: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x25d778u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d77c: 0xc075272  jal         func_1D49C8
    ctx->pc = 0x25D77Cu;
    SET_GPR_U32(ctx, 31, 0x25D784u);
    ctx->pc = 0x25D780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D77Cu;
    // 0x25d780: 0x8c450030  lw          $a1, 0x30($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D49C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D49C8u, 0x25D77Cu, 0x25D784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D784u;
label_25d784:
    // 0x25d784: 0xae220264  sw          $v0, 0x264($s1)
    ctx->pc = 0x25d784u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 612), GPR_U32(ctx, 2));
    // 0x25d788: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x25d788u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_25d78c:
    // 0x25d78c: 0x8c62bd70  lw          $v0, -0x4290($v1)
    ctx->pc = 0x25d78cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950256)));
    // 0x25d790: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x25d790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x25d794: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x25D794u;
    {
        const bool branch_taken_0x25d794 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25d794) {
            ctx->pc = 0x25D798u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25D794u;
            // 0x25d798: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25D7E8u;
            goto label_25d7e8;
        }
    }
    ctx->pc = 0x25D79Cu;
    // 0x25d79c: 0x26430314  addiu       $v1, $s2, 0x314
    ctx->pc = 0x25d79cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 788));
    // 0x25d7a0: 0x84620004  lh          $v0, 0x4($v1)
    ctx->pc = 0x25d7a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x25d7a4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25D7A4u;
    {
        const bool branch_taken_0x25d7a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D7A4u;
        // 0x25d7a8: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d7a4) {
            ctx->pc = 0x25D7B4u;
            goto label_25d7b4;
        }
    }
    ctx->pc = 0x25D7ACu;
    // 0x25d7ac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x25D7ACu;
    {
        const bool branch_taken_0x25d7ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D7ACu;
        // 0x25d7b0: 0x8e420314  lw          $v0, 0x314($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 788)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d7ac) {
            ctx->pc = 0x25D7B8u;
            goto label_25d7b8;
        }
    }
    ctx->pc = 0x25D7B4u;
label_25d7b4:
    // 0x25d7b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x25d7b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25d7b8:
    // 0x25d7b8: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x25D7B8u;
    {
        const bool branch_taken_0x25d7b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d7b8) {
            ctx->pc = 0x25D7BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25D7B8u;
            // 0x25d7bc: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25D7E8u;
            goto label_25d7e8;
        }
    }
    ctx->pc = 0x25D7C0u;
    // 0x25d7c0: 0x84820004  lh          $v0, 0x4($a0)
    ctx->pc = 0x25d7c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x25d7c4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x25D7C4u;
    {
        const bool branch_taken_0x25d7c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D7C4u;
        // 0x25d7c8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d7c4) {
            ctx->pc = 0x25D7D0u;
            goto label_25d7d0;
        }
    }
    ctx->pc = 0x25D7CCu;
    // 0x25d7cc: 0x8e440314  lw          $a0, 0x314($s2)
    ctx->pc = 0x25d7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 788)));
label_25d7d0:
    // 0x25d7d0: 0x8e2200b8  lw          $v0, 0xB8($s1)
    ctx->pc = 0x25d7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
    // 0x25d7d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x25d7d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d7d8: 0xc075272  jal         func_1D49C8
    ctx->pc = 0x25D7D8u;
    SET_GPR_U32(ctx, 31, 0x25D7E0u);
    ctx->pc = 0x25D7DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D7D8u;
    // 0x25d7dc: 0x8c450030  lw          $a1, 0x30($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D49C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D49C8u, 0x25D7D8u, 0x25D7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D7E0u;
label_25d7e0:
    // 0x25d7e0: 0xae220268  sw          $v0, 0x268($s1)
    ctx->pc = 0x25d7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 616), GPR_U32(ctx, 2));
label_25d7e4:
    // 0x25d7e4: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x25d7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_25d7e8:
    // 0x25d7e8: 0x38423001  xori        $v0, $v0, 0x3001
    ctx->pc = 0x25d7e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)12289);
    // 0x25d7ec: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x25D7ECu;
    {
        const bool branch_taken_0x25d7ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25d7ec) {
            ctx->pc = 0x25D7F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25D7ECu;
            // 0x25d7f0: 0x8e240104  lw          $a0, 0x104($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25D834u;
            goto label_25d834;
        }
    }
    ctx->pc = 0x25D7F4u;
    // 0x25d7f4: 0x8e2200b8  lw          $v0, 0xB8($s1)
    ctx->pc = 0x25d7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
    // 0x25d7f8: 0x8c4302e0  lw          $v1, 0x2E0($v0)
    ctx->pc = 0x25d7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 736)));
    // 0x25d7fc: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x25D7FCu;
    {
        const bool branch_taken_0x25d7fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D7FCu;
        // 0x25d800: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d7fc) {
            ctx->pc = 0x25D830u;
            goto label_25d830;
        }
    }
    ctx->pc = 0x25D804u;
    // 0x25d804: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x25d804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x25d808: 0xc0b2af0  jal         func_2CABC0
    ctx->pc = 0x25D808u;
    SET_GPR_U32(ctx, 31, 0x25D810u);
    ctx->pc = 0x25D80Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D808u;
    // 0x25d80c: 0x24845ad0  addiu       $a0, $a0, 0x5AD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CABC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CABC0u, 0x25D808u, 0x25D810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D810u;
label_25d810:
    // 0x25d810: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25d810u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d814: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x25D814u;
    SET_GPR_U32(ctx, 31, 0x25D81Cu);
    ctx->pc = 0x25D818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D814u;
    // 0x25d818: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x25D814u, 0x25D81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D81Cu;
label_25d81c:
    // 0x25d81c: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x25D81Cu;
    SET_GPR_U32(ctx, 31, 0x25D824u);
    ctx->pc = 0x25D820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D81Cu;
    // 0x25d820: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x25D81Cu, 0x25D824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D824u;
label_25d824:
    // 0x25d824: 0xae30024c  sw          $s0, 0x24C($s1)
    ctx->pc = 0x25d824u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 588), GPR_U32(ctx, 16));
    // 0x25d828: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x25D828u;
    SET_GPR_U32(ctx, 31, 0x25D830u);
    ctx->pc = 0x25D82Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D828u;
    // 0x25d82c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x25D828u, 0x25D830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D830u;
label_25d830:
    // 0x25d830: 0x8e240104  lw          $a0, 0x104($s1)
    ctx->pc = 0x25d830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_25d834:
    // 0x25d834: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x25d834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x25d838: 0x50400022  beql        $v0, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x25D838u;
    {
        const bool branch_taken_0x25d838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d838) {
            ctx->pc = 0x25D83Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25D838u;
            // 0x25d83c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25D8C4u;
            goto label_25d8c4;
        }
    }
    ctx->pc = 0x25D840u;
    // 0x25d840: 0xc0c3264  jal         func_30C990
    ctx->pc = 0x25D840u;
    SET_GPR_U32(ctx, 31, 0x25D848u);
    ctx->pc = 0x25D844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D840u;
    // 0x25d844: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C990u, 0x25D840u, 0x25D848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D848u;
label_25d848:
    // 0x25d848: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x25D848u;
    {
        const bool branch_taken_0x25d848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D848u;
        // 0x25d84c: 0xae220254  sw          $v0, 0x254($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 596), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d848) {
            ctx->pc = 0x25D8C0u;
            goto label_25d8c0;
        }
    }
    ctx->pc = 0x25D850u;
    // 0x25d850: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x25D850u;
    SET_GPR_U32(ctx, 31, 0x25D858u);
    ctx->pc = 0x25D854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D850u;
    // 0x25d854: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x25D850u, 0x25D858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D858u;
label_25d858:
    // 0x25d858: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25d858u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d85c: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x25d85cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x25d860: 0x24625b00  addiu       $v0, $v1, 0x5B00
    ctx->pc = 0x25d860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 23296));
    // 0x25d864: 0xc4625b00  lwc1        $f2, 0x5B00($v1)
    ctx->pc = 0x25d864u;
    { uint32_t bits = FAST_READ32(0x575B00u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25d868: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x25d868u;
    { uint32_t bits = FAST_READ32(0x575B04u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d86c: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x25d86cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x25d870: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x25d870u;
    { uint32_t bits = FAST_READ32(0x575B08u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25d874: 0xc443000c  lwc1        $f3, 0xC($v0)
    ctx->pc = 0x25d874u;
    { uint32_t bits = FAST_READ32(0x575B0Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x25d878: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x25d878u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x25d87c: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x25d87cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x25d880: 0xe6020000  swc1        $f2, 0x0($s0)
    ctx->pc = 0x25d880u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x25d884: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x25D884u;
    SET_GPR_U32(ctx, 31, 0x25D88Cu);
    ctx->pc = 0x25D888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D884u;
    // 0x25d888: 0xe603000c  swc1        $f3, 0xC($s0) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x25D884u, 0x25D88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D88Cu;
label_25d88c:
    // 0x25d88c: 0x8e220254  lw          $v0, 0x254($s1)
    ctx->pc = 0x25d88cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 596)));
    // 0x25d890: 0xae300258  sw          $s0, 0x258($s1)
    ctx->pc = 0x25d890u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 600), GPR_U32(ctx, 16));
    // 0x25d894: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x25d894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x25d898: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x25d898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d89c: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x25d89cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x25d8a0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x25d8a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25d8a4: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x25d8a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x25d8a8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x25d8a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d8ac: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x25d8acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x25d8b0: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x25d8b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25d8b4: 0xe601000c  swc1        $f1, 0xC($s0)
    ctx->pc = 0x25d8b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x25d8b8: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x25d8b8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25d8bc: 0xfa010010  sqc2        $vf1, 0x10($s0)
    ctx->pc = 0x25d8bcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_25d8c0:
    // 0x25d8c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25d8c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25d8c4:
    // 0x25d8c4: 0xc097f26  jal         func_25FC98
    ctx->pc = 0x25D8C4u;
    SET_GPR_U32(ctx, 31, 0x25D8CCu);
    ctx->pc = 0x25D8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D8C4u;
    // 0x25d8c8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x25D8C4u, 0x25D8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D8CCu;
label_25d8cc:
    // 0x25d8cc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x25d8ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d8d0: 0x2862006e  slti        $v0, $v1, 0x6E
    ctx->pc = 0x25d8d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)110) ? 1 : 0);
    // 0x25d8d4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x25D8D4u;
    {
        const bool branch_taken_0x25d8d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D8D4u;
        // 0x25d8d8: 0x28620068  slti        $v0, $v1, 0x68 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)104) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d8d4) {
            ctx->pc = 0x25D920u;
            goto label_25d920;
        }
    }
    ctx->pc = 0x25D8DCu;
    // 0x25d8dc: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x25D8DCu;
    {
        const bool branch_taken_0x25d8dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D8DCu;
        // 0x25d8e0: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d8dc) {
            ctx->pc = 0x25D968u;
            goto label_25d968;
        }
    }
    ctx->pc = 0x25D8E4u;
    // 0x25d8e4: 0x1062001e  beq         $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x25D8E4u;
    {
        const bool branch_taken_0x25d8e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x25D8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D8E4u;
        // 0x25d8e8: 0x28620011  slti        $v0, $v1, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d8e4) {
            ctx->pc = 0x25D960u;
            goto label_25d960;
        }
    }
    ctx->pc = 0x25D8ECu;
    // 0x25d8ec: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x25D8ECu;
    {
        const bool branch_taken_0x25d8ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D8ECu;
        // 0x25d8f0: 0x2862000b  slti        $v0, $v1, 0xB (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)11) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d8ec) {
            ctx->pc = 0x25D90Cu;
            goto label_25d90c;
        }
    }
    ctx->pc = 0x25D8F4u;
    // 0x25d8f4: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x25D8F4u;
    {
        const bool branch_taken_0x25d8f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D8F4u;
        // 0x25d8f8: 0x28620008  slti        $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d8f4) {
            ctx->pc = 0x25D970u;
            goto label_25d970;
        }
    }
    ctx->pc = 0x25D8FCu;
    // 0x25d8fc: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x25D8FCu;
    {
        const bool branch_taken_0x25d8fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25d8fc) {
            ctx->pc = 0x25D970u;
            goto label_25d970;
        }
    }
    ctx->pc = 0x25D904u;
    // 0x25d904: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x25D904u;
    {
        const bool branch_taken_0x25d904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D904u;
        // 0x25d908: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d904) {
            ctx->pc = 0x25D9C4u;
            goto label_25d9c4;
        }
    }
    ctx->pc = 0x25D90Cu;
label_25d90c:
    // 0x25d90c: 0x24020048  addiu       $v0, $zero, 0x48
    ctx->pc = 0x25d90cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x25d910: 0x5062002c  beql        $v1, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x25D910u;
    {
        const bool branch_taken_0x25d910 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x25d910) {
            ctx->pc = 0x25D914u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25D910u;
            // 0x25d914: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25D9C4u;
            goto label_25d9c4;
        }
    }
    ctx->pc = 0x25D918u;
    // 0x25d918: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x25D918u;
    {
        const bool branch_taken_0x25d918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d918) {
            ctx->pc = 0x25D970u;
            goto label_25d970;
        }
    }
    ctx->pc = 0x25D920u;
label_25d920:
    // 0x25d920: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x25d920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x25d924: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x25D924u;
    {
        const bool branch_taken_0x25d924 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x25D928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D924u;
        // 0x25d928: 0x28620081  slti        $v0, $v1, 0x81 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)129) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d924) {
            ctx->pc = 0x25D968u;
            goto label_25d968;
        }
    }
    ctx->pc = 0x25D92Cu;
    // 0x25d92c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25D92Cu;
    {
        const bool branch_taken_0x25d92c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D92Cu;
        // 0x25d930: 0x2402006f  addiu       $v0, $zero, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d92c) {
            ctx->pc = 0x25D944u;
            goto label_25d944;
        }
    }
    ctx->pc = 0x25D934u;
    // 0x25d934: 0x50620023  beql        $v1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x25D934u;
    {
        const bool branch_taken_0x25d934 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x25d934) {
            ctx->pc = 0x25D938u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25D934u;
            // 0x25d938: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25D9C4u;
            goto label_25d9c4;
        }
    }
    ctx->pc = 0x25D93Cu;
    // 0x25d93c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x25D93Cu;
    {
        const bool branch_taken_0x25d93c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d93c) {
            ctx->pc = 0x25D970u;
            goto label_25d970;
        }
    }
    ctx->pc = 0x25D944u;
label_25d944:
    // 0x25d944: 0x28620086  slti        $v0, $v1, 0x86
    ctx->pc = 0x25d944u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)134) ? 1 : 0);
    // 0x25d948: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x25D948u;
    {
        const bool branch_taken_0x25d948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D948u;
        // 0x25d94c: 0x28620084  slti        $v0, $v1, 0x84 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)132) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d948) {
            ctx->pc = 0x25D970u;
            goto label_25d970;
        }
    }
    ctx->pc = 0x25D950u;
    // 0x25d950: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x25D950u;
    {
        const bool branch_taken_0x25d950 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25d950) {
            ctx->pc = 0x25D970u;
            goto label_25d970;
        }
    }
    ctx->pc = 0x25D958u;
    // 0x25d958: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x25D958u;
    {
        const bool branch_taken_0x25d958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D958u;
        // 0x25d95c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d958) {
            ctx->pc = 0x25D9C4u;
            goto label_25d9c4;
        }
    }
    ctx->pc = 0x25D960u;
label_25d960:
    // 0x25d960: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x25D960u;
    {
        const bool branch_taken_0x25d960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D960u;
        // 0x25d964: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d960) {
            ctx->pc = 0x25D9C4u;
            goto label_25d9c4;
        }
    }
    ctx->pc = 0x25D968u;
label_25d968:
    // 0x25d968: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x25D968u;
    {
        const bool branch_taken_0x25d968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D968u;
        // 0x25d96c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d968) {
            ctx->pc = 0x25D9C4u;
            goto label_25d9c4;
        }
    }
    ctx->pc = 0x25D970u;
label_25d970:
    // 0x25d970: 0xc097f2a  jal         func_25FCA8
    ctx->pc = 0x25D970u;
    SET_GPR_U32(ctx, 31, 0x25D978u);
    ctx->pc = 0x25D974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D970u;
    // 0x25d974: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FCA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FCA8u, 0x25D970u, 0x25D978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D978u;
label_25d978:
    // 0x25d978: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x25d978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x25d97c: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x25d97cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x25d980: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x25D980u;
    {
        const bool branch_taken_0x25d980 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D980u;
        // 0x25d984: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d980) {
            ctx->pc = 0x25D9C4u;
            goto label_25d9c4;
        }
    }
    ctx->pc = 0x25D988u;
    // 0x25d988: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x25d988u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x25d98c: 0x24425a80  addiu       $v0, $v0, 0x5A80
    ctx->pc = 0x25d98cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23168));
    // 0x25d990: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x25d990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25d994: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x25d994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25d998: 0x800008  jr          $a0
    ctx->pc = 0x25D998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25D9A0u: goto label_25d9a0;
            case 0x25D9A8u: goto label_25d9a8;
            case 0x25D9B0u: goto label_25d9b0;
            case 0x25D9B8u: goto label_25d9b8;
            case 0x25D9C0u: goto label_25d9c0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D998u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x25D9A0u;
label_25d9a0:
    // 0x25d9a0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x25D9A0u;
    {
        const bool branch_taken_0x25d9a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D9A0u;
        // 0x25d9a4: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d9a0) {
            ctx->pc = 0x25D9C4u;
            goto label_25d9c4;
        }
    }
    ctx->pc = 0x25D9A8u;
label_25d9a8:
    // 0x25d9a8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x25D9A8u;
    {
        const bool branch_taken_0x25d9a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D9A8u;
        // 0x25d9ac: 0x24120003  addiu       $s2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d9a8) {
            ctx->pc = 0x25D9C4u;
            goto label_25d9c4;
        }
    }
    ctx->pc = 0x25D9B0u;
label_25d9b0:
    // 0x25d9b0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x25D9B0u;
    {
        const bool branch_taken_0x25d9b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D9B0u;
        // 0x25d9b4: 0x24120004  addiu       $s2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d9b0) {
            ctx->pc = 0x25D9C4u;
            goto label_25d9c4;
        }
    }
    ctx->pc = 0x25D9B8u;
label_25d9b8:
    // 0x25d9b8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x25D9B8u;
    {
        const bool branch_taken_0x25d9b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D9B8u;
        // 0x25d9bc: 0x24120005  addiu       $s2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d9b8) {
            ctx->pc = 0x25D9C4u;
            goto label_25d9c4;
        }
    }
    ctx->pc = 0x25D9C0u;
label_25d9c0:
    // 0x25d9c0: 0x24120006  addiu       $s2, $zero, 0x6
    ctx->pc = 0x25d9c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_25d9c4:
    // 0x25d9c4: 0x24100018  addiu       $s0, $zero, 0x18
    ctx->pc = 0x25d9c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x25d9c8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x25d9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x25d9cc: 0x2508018  mult        $s0, $s2, $s0
    ctx->pc = 0x25d9ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x25d9d0: 0x24429d08  addiu       $v0, $v0, -0x62F8
    ctx->pc = 0x25d9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941960));
    // 0x25d9d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25d9d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d9d8: 0xc08736e  jal         func_21CDB8
    ctx->pc = 0x25D9D8u;
    SET_GPR_U32(ctx, 31, 0x25D9E0u);
    ctx->pc = 0x25D9DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D9D8u;
    // 0x25d9dc: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21CDB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21CDB8u, 0x25D9D8u, 0x25D9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D9E0u;
label_25d9e0:
    // 0x25d9e0: 0x8e230220  lw          $v1, 0x220($s1)
    ctx->pc = 0x25d9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 544)));
    // 0x25d9e4: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x25d9e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x25d9e8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x25d9e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d9ec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x25d9ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25d9f0: 0xac700008  sw          $s0, 0x8($v1)
    ctx->pc = 0x25d9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 16));
    // 0x25d9f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x25d9f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25d9f8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x25d9f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25d9fc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x25d9fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x25da00: 0x3e00008  jr          $ra
    ctx->pc = 0x25DA00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25DA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DA00u;
        // 0x25da04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25DA00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25DA08u;
}
