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

// Function: sub_00111738
// Address: 0x111738 - 0x111bc0
void sub_00111738_0x111738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00111738_0x111738");
#endif

    switch (ctx->pc) {
        case 0x111784u: goto label_111784;
        case 0x111794u: goto label_111794;
        case 0x1117c4u: goto label_1117c4;
        case 0x11180cu: goto label_11180c;
        case 0x111828u: goto label_111828;
        case 0x1118c8u: goto label_1118c8;
        case 0x11190cu: goto label_11190c;
        case 0x111994u: goto label_111994;
        case 0x1119a8u: goto label_1119a8;
        case 0x1119c0u: goto label_1119c0;
        case 0x111a34u: goto label_111a34;
        case 0x111a54u: goto label_111a54;
        case 0x111a68u: goto label_111a68;
        case 0x111aa0u: goto label_111aa0;
        case 0x111ab0u: goto label_111ab0;
        case 0x111ab8u: goto label_111ab8;
        case 0x111ac4u: goto label_111ac4;
        case 0x111ad0u: goto label_111ad0;
        case 0x111ae4u: goto label_111ae4;
        case 0x111af0u: goto label_111af0;
        case 0x111afcu: goto label_111afc;
        case 0x111b08u: goto label_111b08;
        case 0x111b14u: goto label_111b14;
        case 0x111b2cu: goto label_111b2c;
        case 0x111b40u: goto label_111b40;
        case 0x111b58u: goto label_111b58;
        case 0x111b68u: goto label_111b68;
        default: break;
    }

    ctx->pc = 0x111738u;

    // 0x111738: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x111738u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x11173c: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x11173cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x111740: 0xffb200d0  sd          $s2, 0xD0($sp)
    ctx->pc = 0x111740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 18));
    // 0x111744: 0x8c62b044  lw          $v0, -0x4FBC($v1)
    ctx->pc = 0x111744u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x48B044u));
    // 0x111748: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x111748u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11174c: 0xffb000c0  sd          $s0, 0xC0($sp)
    ctx->pc = 0x11174cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 16));
    // 0x111750: 0xffb100c8  sd          $s1, 0xC8($sp)
    ctx->pc = 0x111750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 17));
    // 0x111754: 0xffb300d8  sd          $s3, 0xD8($sp)
    ctx->pc = 0x111754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 19));
    // 0x111758: 0xffb400e0  sd          $s4, 0xE0($sp)
    ctx->pc = 0x111758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 20));
    // 0x11175c: 0xffb500e8  sd          $s5, 0xE8($sp)
    ctx->pc = 0x11175cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 21));
    // 0x111760: 0xffb600f0  sd          $s6, 0xF0($sp)
    ctx->pc = 0x111760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 22));
    // 0x111764: 0xffb700f8  sd          $s7, 0xF8($sp)
    ctx->pc = 0x111764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 23));
    // 0x111768: 0xffbe0100  sd          $fp, 0x100($sp)
    ctx->pc = 0x111768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 30));
    // 0x11176c: 0xffbf0108  sd          $ra, 0x108($sp)
    ctx->pc = 0x11176cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 31));
    // 0x111770: 0xe7b50118  swc1        $f21, 0x118($sp)
    ctx->pc = 0x111770u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x111774: 0x14400104  bnez        $v0, . + 4 + (0x104 << 2)
    ctx->pc = 0x111774u;
    {
        const bool branch_taken_0x111774 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x111778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111774u;
        // 0x111778: 0xe7b40110  swc1        $f20, 0x110($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x111774) {
            ctx->pc = 0x111B88u;
            goto label_111b88;
        }
    }
    ctx->pc = 0x11177Cu;
    // 0x11177c: 0xc0443e2  jal         func_110F88
    ctx->pc = 0x11177Cu;
    SET_GPR_U32(ctx, 31, 0x111784u);
    ctx->pc = 0x110F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110F88u, 0x11177Cu, 0x111784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111784u;
label_111784:
    // 0x111784: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x111784u;
    {
        const bool branch_taken_0x111784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x111784) {
            ctx->pc = 0x111788u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x111784u;
            // 0x111788: 0x8e4201ec  lw          $v0, 0x1EC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 492)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11179Cu;
            goto label_11179c;
        }
    }
    ctx->pc = 0x11178Cu;
    // 0x11178c: 0xc044b6c  jal         func_112DB0
    ctx->pc = 0x11178Cu;
    SET_GPR_U32(ctx, 31, 0x111794u);
    ctx->pc = 0x111790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11178Cu;
    // 0x111790: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112DB0u, 0x11178Cu, 0x111794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111794u;
label_111794:
    // 0x111794: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x111794u;
    {
        const bool branch_taken_0x111794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x111794) {
            ctx->pc = 0x111804u;
            goto label_111804;
        }
    }
    ctx->pc = 0x11179Cu;
label_11179c:
    // 0x11179c: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x11179Cu;
    {
        const bool branch_taken_0x11179c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11179c) {
            ctx->pc = 0x111804u;
            goto label_111804;
        }
    }
    ctx->pc = 0x1117A4u;
    // 0x1117a4: 0x8e4200b0  lw          $v0, 0xB0($s2)
    ctx->pc = 0x1117a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
    // 0x1117a8: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1117A8u;
    {
        const bool branch_taken_0x1117a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1117ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1117A8u;
        // 0x1117ac: 0xafa200b4  sw          $v0, 0xB4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1117a8) {
            ctx->pc = 0x111804u;
            goto label_111804;
        }
    }
    ctx->pc = 0x1117B0u;
    // 0x1117b0: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1117b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x1117b4: 0x8fa500b4  lw          $a1, 0xB4($sp)
    ctx->pc = 0x1117b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x1117b8: 0x2484b060  addiu       $a0, $a0, -0x4FA0
    ctx->pc = 0x1117b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946912));
    // 0x1117bc: 0xc04ae56  jal         func_12B958
    ctx->pc = 0x1117BCu;
    SET_GPR_U32(ctx, 31, 0x1117C4u);
    ctx->pc = 0x1117C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1117BCu;
    // 0x1117c0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B958u, 0x1117BCu, 0x1117C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1117C4u;
label_1117c4:
    // 0x1117c4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1117C4u;
    {
        const bool branch_taken_0x1117c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1117C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1117C4u;
        // 0x1117c8: 0xafa200b0  sw          $v0, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1117c4) {
            ctx->pc = 0x111804u;
            goto label_111804;
        }
    }
    ctx->pc = 0x1117CCu;
    // 0x1117cc: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x1117ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1117d0: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x1117d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x1117d4: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x1117d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x1117d8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1117d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1117dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1117dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1117e0: 0x8c420108  lw          $v0, 0x108($v0)
    ctx->pc = 0x1117e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x1117e4: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1117E4u;
    {
        const bool branch_taken_0x1117e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1117e4) {
            ctx->pc = 0x1117E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1117E4u;
            // 0x1117e8: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1117F4u;
            goto label_1117f4;
        }
    }
    ctx->pc = 0x1117ECu;
    // 0x1117ec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1117ECu;
    {
        const bool branch_taken_0x1117ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1117F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1117ECu;
        // 0x1117f0: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1117ec) {
            ctx->pc = 0x1117FCu;
            goto label_1117fc;
        }
    }
    ctx->pc = 0x1117F4u;
label_1117f4:
    // 0x1117f4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1117f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1117f8: 0x247e0070  addiu       $fp, $v1, 0x70
    ctx->pc = 0x1117f8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_1117fc:
    // 0x1117fc: 0x17c00005  bnez        $fp, . + 4 + (0x5 << 2)
    ctx->pc = 0x1117FCu;
    {
        const bool branch_taken_0x1117fc = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x111800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1117FCu;
        // 0x111800: 0x8fa300b0  lw          $v1, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1117fc) {
            ctx->pc = 0x111814u;
            goto label_111814;
        }
    }
    ctx->pc = 0x111804u;
label_111804:
    // 0x111804: 0xc044cd8  jal         func_113360
    ctx->pc = 0x111804u;
    SET_GPR_U32(ctx, 31, 0x11180Cu);
    ctx->pc = 0x111808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111804u;
    // 0x111808: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113360u, 0x111804u, 0x11180Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11180Cu;
label_11180c:
    // 0x11180c: 0x100000df  b           . + 4 + (0xDF << 2)
    ctx->pc = 0x11180Cu;
    {
        const bool branch_taken_0x11180c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11180Cu;
        // 0x111810: 0xdfb000c0  ld          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11180c) {
            ctx->pc = 0x111B8Cu;
            goto label_111b8c;
        }
    }
    ctx->pc = 0x111814u;
label_111814:
    // 0x111814: 0x106000dc  beqz        $v1, . + 4 + (0xDC << 2)
    ctx->pc = 0x111814u;
    {
        const bool branch_taken_0x111814 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x111818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111814u;
        // 0x111818: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111814) {
            ctx->pc = 0x111B88u;
            goto label_111b88;
        }
    }
    ctx->pc = 0x11181Cu;
    // 0x11181c: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x11181cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x111820: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x111820u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x111824: 0x171080  sll         $v0, $s7, 2
    ctx->pc = 0x111824u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
label_111828:
    // 0x111828: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x111828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x11182c: 0x8c730000  lw          $s3, 0x0($v1)
    ctx->pc = 0x11182cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x111830: 0x126000cf  beqz        $s3, . + 4 + (0xCF << 2)
    ctx->pc = 0x111830u;
    {
        const bool branch_taken_0x111830 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x111834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111830u;
        // 0x111834: 0x3c030049  lui         $v1, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111830) {
            ctx->pc = 0x111B70u;
            goto label_111b70;
        }
    }
    ctx->pc = 0x111838u;
    // 0x111838: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x111838u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x11183c: 0x24639c14  addiu       $v1, $v1, -0x63EC
    ctx->pc = 0x11183cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941716));
    // 0x111840: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x111840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x111844: 0x8c550000  lw          $s5, 0x0($v0)
    ctx->pc = 0x111844u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x111848: 0x12a000c9  beqz        $s5, . + 4 + (0xC9 << 2)
    ctx->pc = 0x111848u;
    {
        const bool branch_taken_0x111848 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x11184Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111848u;
        // 0x11184c: 0x3c030049  lui         $v1, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111848) {
            ctx->pc = 0x111B70u;
            goto label_111b70;
        }
    }
    ctx->pc = 0x111850u;
    // 0x111850: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x111850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x111854: 0x24639b10  addiu       $v1, $v1, -0x64F0
    ctx->pc = 0x111854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941456));
    // 0x111858: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x111858u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11185c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x11185cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x111860: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x111860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x111864: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x111864u;
    {
        const bool branch_taken_0x111864 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x111864) {
            ctx->pc = 0x111868u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x111864u;
            // 0x111868: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x111874u;
            goto label_111874;
        }
    }
    ctx->pc = 0x11186Cu;
    // 0x11186c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11186Cu;
    {
        const bool branch_taken_0x11186c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11186Cu;
        // 0x111870: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11186c) {
            ctx->pc = 0x11187Cu;
            goto label_11187c;
        }
    }
    ctx->pc = 0x111874u;
label_111874:
    // 0x111874: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x111874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x111878: 0x24740070  addiu       $s4, $v1, 0x70
    ctx->pc = 0x111878u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_11187c:
    // 0x11187c: 0x128000bc  beqz        $s4, . + 4 + (0xBC << 2)
    ctx->pc = 0x11187Cu;
    {
        const bool branch_taken_0x11187c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x111880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11187Cu;
        // 0x111880: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11187c) {
            ctx->pc = 0x111B70u;
            goto label_111b70;
        }
    }
    ctx->pc = 0x111884u;
    // 0x111884: 0x1662000e  bne         $s3, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x111884u;
    {
        const bool branch_taken_0x111884 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x111888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111884u;
        // 0x111888: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111884) {
            ctx->pc = 0x1118C0u;
            goto label_1118c0;
        }
    }
    ctx->pc = 0x11188Cu;
    // 0x11188c: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x11188cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x111890: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x111890u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x111894: 0x24639b10  addiu       $v1, $v1, -0x64F0
    ctx->pc = 0x111894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941456));
    // 0x111898: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x111898u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11189c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x11189cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1118a0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1118a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1118a4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1118A4u;
    {
        const bool branch_taken_0x1118a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1118a4) {
            ctx->pc = 0x1118C0u;
            goto label_1118c0;
        }
    }
    ctx->pc = 0x1118ACu;
    // 0x1118ac: 0xdc421020  ld          $v0, 0x1020($v0)
    ctx->pc = 0x1118acu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 4128)));
    // 0x1118b0: 0x215b8  dsll        $v0, $v0, 22
    ctx->pc = 0x1118b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 22);
    // 0x1118b4: 0x217ff  dsra32      $v0, $v0, 31
    ctx->pc = 0x1118b4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 31));
    // 0x1118b8: 0x2803c  dsll32      $s0, $v0, 0
    ctx->pc = 0x1118b8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1118bc: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x1118bcu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
label_1118c0:
    // 0x1118c0: 0xc043e50  jal         func_10F940
    ctx->pc = 0x1118C0u;
    SET_GPR_U32(ctx, 31, 0x1118C8u);
    ctx->pc = 0x1118C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1118C0u;
    // 0x1118c4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F940u, 0x1118C0u, 0x1118C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1118C8u;
label_1118c8:
    // 0x1118c8: 0x16000079  bnez        $s0, . + 4 + (0x79 << 2)
    ctx->pc = 0x1118C8u;
    {
        const bool branch_taken_0x1118c8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1118CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1118C8u;
        // 0x1118cc: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1118c8) {
            ctx->pc = 0x111AB0u;
            goto label_111ab0;
        }
    }
    ctx->pc = 0x1118D0u;
    // 0x1118d0: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x1118d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x1118d4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1118d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1118d8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1118d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1118dc: 0x56620007  bnel        $s3, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1118DCu;
    {
        const bool branch_taken_0x1118dc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x1118dc) {
            ctx->pc = 0x1118E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1118DCu;
            // 0x1118e0: 0x4614a502  mul.s       $f20, $f20, $f20 (Delay Slot)
            ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1118FCu;
            goto label_1118fc;
        }
    }
    ctx->pc = 0x1118E4u;
    // 0x1118e4: 0x52c00005  beql        $s6, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1118E4u;
    {
        const bool branch_taken_0x1118e4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x1118e4) {
            ctx->pc = 0x1118E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1118E4u;
            // 0x1118e8: 0x4614a502  mul.s       $f20, $f20, $f20 (Delay Slot)
            ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1118FCu;
            goto label_1118fc;
        }
    }
    ctx->pc = 0x1118ECu;
    // 0x1118ec: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x1118ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x1118f0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1118f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1118f4: 0x0  nop
    ctx->pc = 0x1118f4u;
    // NOP
    // 0x1118f8: 0x4614a502  mul.s       $f20, $f20, $f20
    ctx->pc = 0x1118f8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
label_1118fc:
    // 0x1118fc: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1118fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x111900: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x111900u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111904: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x111904u;
    SET_GPR_U32(ctx, 31, 0x11190Cu);
    ctx->pc = 0x111908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111904u;
    // 0x111908: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x111904u, 0x11190Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11190Cu;
label_11190c:
    // 0x11190c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x11190cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x111910: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x111910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x111914: 0xc4830004  lwc1        $f3, 0x4($a0)
    ctx->pc = 0x111914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x111918: 0xc4840008  lwc1        $f4, 0x8($a0)
    ctx->pc = 0x111918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x11191c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x11191cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x111920: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x111920u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x111924: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x111924u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x111928: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x111928u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11192c: 0x0  nop
    ctx->pc = 0x11192cu;
    // NOP
    // 0x111930: 0x45010090  bc1t        . + 4 + (0x90 << 2)
    ctx->pc = 0x111930u;
    {
        const bool branch_taken_0x111930 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x111934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111930u;
        // 0x111934: 0x26e20001  addiu       $v0, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111930) {
            ctx->pc = 0x111B74u;
            goto label_111b74;
        }
    }
    ctx->pc = 0x111938u;
    // 0x111938: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x111938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11193c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x11193cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x111940: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x111940u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111944: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x111944u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x111948: 0xc6810004  lwc1        $f1, 0x4($s4)
    ctx->pc = 0x111948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11194c: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x11194cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x111950: 0x46150840  add.s       $f1, $f1, $f21
    ctx->pc = 0x111950u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[21]);
    // 0x111954: 0xc6800008  lwc1        $f0, 0x8($s4)
    ctx->pc = 0x111954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x111958: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x111958u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x11195c: 0xc682000c  lwc1        $f2, 0xC($s4)
    ctx->pc = 0x11195cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x111960: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x111960u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x111964: 0xe7a2008c  swc1        $f2, 0x8C($sp)
    ctx->pc = 0x111964u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x111968: 0xc7c00000  lwc1        $f0, 0x0($fp)
    ctx->pc = 0x111968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11196c: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x11196cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x111970: 0xc7c10004  lwc1        $f1, 0x4($fp)
    ctx->pc = 0x111970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x111974: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x111974u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x111978: 0x46150840  add.s       $f1, $f1, $f21
    ctx->pc = 0x111978u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[21]);
    // 0x11197c: 0xc7c00008  lwc1        $f0, 0x8($fp)
    ctx->pc = 0x11197cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x111980: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x111980u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x111984: 0xc7c2000c  lwc1        $f2, 0xC($fp)
    ctx->pc = 0x111984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x111988: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x111988u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x11198c: 0xc041032  jal         func_1040C8
    ctx->pc = 0x11198Cu;
    SET_GPR_U32(ctx, 31, 0x111994u);
    ctx->pc = 0x111990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11198Cu;
    // 0x111990: 0xe7a2009c  swc1        $f2, 0x9C($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1040C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1040C8u, 0x11198Cu, 0x111994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111994u;
label_111994:
    // 0x111994: 0x14400077  bnez        $v0, . + 4 + (0x77 << 2)
    ctx->pc = 0x111994u;
    {
        const bool branch_taken_0x111994 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x111998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111994u;
        // 0x111998: 0x26e20001  addiu       $v0, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111994) {
            ctx->pc = 0x111B74u;
            goto label_111b74;
        }
    }
    ctx->pc = 0x11199Cu;
    // 0x11199c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x11199cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1119a0: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x1119A0u;
    SET_GPR_U32(ctx, 31, 0x1119A8u);
    ctx->pc = 0x1119A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1119A0u;
    // 0x1119a4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x1119A0u, 0x1119A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1119A8u;
label_1119a8:
    // 0x1119a8: 0x8e450134  lw          $a1, 0x134($s2)
    ctx->pc = 0x1119a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 308)));
    // 0x1119ac: 0x14a00018  bnez        $a1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1119ACu;
    {
        const bool branch_taken_0x1119ac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1119B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1119ACu;
        // 0x1119b0: 0x3c100040  lui         $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1119ac) {
            ctx->pc = 0x111A10u;
            goto label_111a10;
        }
    }
    ctx->pc = 0x1119B4u;
    // 0x1119b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1119b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1119b8: 0xc0aafc8  jal         func_2ABF20
    ctx->pc = 0x1119B8u;
    SET_GPR_U32(ctx, 31, 0x1119C0u);
    ctx->pc = 0x1119BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1119B8u;
    // 0x1119bc: 0x2405fffb  addiu       $a1, $zero, -0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF20u, 0x1119B8u, 0x1119C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1119C0u;
label_1119c0:
    // 0x1119c0: 0xae420134  sw          $v0, 0x134($s2)
    ctx->pc = 0x1119c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 308), GPR_U32(ctx, 2));
    // 0x1119c4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1119c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1119c8: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x1119c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1119cc: 0x8c44a9d4  lw          $a0, -0x562C($v0)
    ctx->pc = 0x1119ccu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3FA9D4u));
    // 0x1119d0: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x1119d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x1119d4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1119d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1119d8: 0xae440130  sw          $a0, 0x130($s2)
    ctx->pc = 0x1119d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 304), GPR_U32(ctx, 4));
    // 0x1119dc: 0x24429b10  addiu       $v0, $v0, -0x64F0
    ctx->pc = 0x1119dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941456));
    // 0x1119e0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1119e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1119e4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1119e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1119e8: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1119E8u;
    {
        const bool branch_taken_0x1119e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1119e8) {
            ctx->pc = 0x1119ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1119E8u;
            // 0x1119ec: 0x8c620104  lw          $v0, 0x104($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1119F8u;
            goto label_1119f8;
        }
    }
    ctx->pc = 0x1119F0u;
    // 0x1119f0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1119F0u;
    {
        const bool branch_taken_0x1119f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1119F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1119F0u;
        // 0x1119f4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1119f0) {
            ctx->pc = 0x111A00u;
            goto label_111a00;
        }
    }
    ctx->pc = 0x1119F8u;
label_1119f8:
    // 0x1119f8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1119f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1119fc: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x1119fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_111a00:
    // 0x111a00: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x111a00u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x111a04: 0xfa410140  sqc2        $vf1, 0x140($s2)
    ctx->pc = 0x111a04u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 320), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x111a08: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x111A08u;
    {
        const bool branch_taken_0x111a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111A08u;
        // 0x111a0c: 0xa2400150  sb          $zero, 0x150($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 336), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111a08) {
            ctx->pc = 0x111A94u;
            goto label_111a94;
        }
    }
    ctx->pc = 0x111A10u;
label_111a10:
    // 0x111a10: 0x8e430130  lw          $v1, 0x130($s2)
    ctx->pc = 0x111a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 304)));
    // 0x111a14: 0x8e04a9d4  lw          $a0, -0x562C($s0)
    ctx->pc = 0x111a14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945236)));
    // 0x111a18: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x111a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x111a1c: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x111a1cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x111a20: 0x5060000a  beql        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x111A20u;
    {
        const bool branch_taken_0x111a20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x111a20) {
            ctx->pc = 0x111A24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x111A20u;
            // 0x111a24: 0xae440130  sw          $a0, 0x130($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 304), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x111A4Cu;
            goto label_111a4c;
        }
    }
    ctx->pc = 0x111A28u;
    // 0x111a28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x111a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111a2c: 0xc0aafc8  jal         func_2ABF20
    ctx->pc = 0x111A2Cu;
    SET_GPR_U32(ctx, 31, 0x111A34u);
    ctx->pc = 0x111A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111A2Cu;
    // 0x111a30: 0x2405fffb  addiu       $a1, $zero, -0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF20u, 0x111A2Cu, 0x111A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111A34u;
label_111a34:
    // 0x111a34: 0xae420134  sw          $v0, 0x134($s2)
    ctx->pc = 0x111a34u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 308), GPR_U32(ctx, 2));
    // 0x111a38: 0x8e02a9d4  lw          $v0, -0x562C($s0)
    ctx->pc = 0x111a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945236)));
    // 0x111a3c: 0xae420130  sw          $v0, 0x130($s2)
    ctx->pc = 0x111a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 304), GPR_U32(ctx, 2));
    // 0x111a40: 0x7e400140  sq          $zero, 0x140($s2)
    ctx->pc = 0x111a40u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 320), GPR_VEC(ctx, 0));
    // 0x111a44: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x111A44u;
    {
        const bool branch_taken_0x111a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111A44u;
        // 0x111a48: 0xa2400150  sb          $zero, 0x150($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 336), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111a44) {
            ctx->pc = 0x111A94u;
            goto label_111a94;
        }
    }
    ctx->pc = 0x111A4Cu;
label_111a4c:
    // 0x111a4c: 0xc0aafd2  jal         func_2ABF48
    ctx->pc = 0x111A4Cu;
    SET_GPR_U32(ctx, 31, 0x111A54u);
    ctx->pc = 0x111A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111A4Cu;
    // 0x111a50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF48u, 0x111A4Cu, 0x111A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111A54u;
label_111a54:
    // 0x111a54: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x111a54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111a58: 0x16c00005  bnez        $s6, . + 4 + (0x5 << 2)
    ctx->pc = 0x111A58u;
    {
        const bool branch_taken_0x111a58 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x111A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111A58u;
        // 0x111a5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111a58) {
            ctx->pc = 0x111A70u;
            goto label_111a70;
        }
    }
    ctx->pc = 0x111A60u;
    // 0x111a60: 0xc044cde  jal         func_113378
    ctx->pc = 0x111A60u;
    SET_GPR_U32(ctx, 31, 0x111A68u);
    ctx->pc = 0x111A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111A60u;
    // 0x111a64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113378u, 0x111A60u, 0x111A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111A68u;
label_111a68:
    // 0x111a68: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x111A68u;
    {
        const bool branch_taken_0x111a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111A68u;
        // 0x111a6c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111a68) {
            ctx->pc = 0x111A7Cu;
            goto label_111a7c;
        }
    }
    ctx->pc = 0x111A70u;
label_111a70:
    // 0x111a70: 0x7e400140  sq          $zero, 0x140($s2)
    ctx->pc = 0x111a70u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 320), GPR_VEC(ctx, 0));
    // 0x111a74: 0xa2400150  sb          $zero, 0x150($s2)
    ctx->pc = 0x111a74u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 336), (uint8_t)GPR_U32(ctx, 0));
    // 0x111a78: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x111a78u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_111a7c:
    // 0x111a7c: 0x56000003  bnel        $s0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x111A7Cu;
    {
        const bool branch_taken_0x111a7c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x111a7c) {
            ctx->pc = 0x111A80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x111A7Cu;
            // 0x111a80: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x111A8Cu;
            goto label_111a8c;
        }
    }
    ctx->pc = 0x111A84u;
    // 0x111a84: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x111A84u;
    {
        const bool branch_taken_0x111a84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x111a84) {
            ctx->pc = 0x111A88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x111A84u;
            // 0x111a88: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x111A8Cu;
            goto label_111a8c;
        }
    }
    ctx->pc = 0x111A8Cu;
label_111a8c:
    // 0x111a8c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x111A8Cu;
    {
        const bool branch_taken_0x111a8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x111A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111A8Cu;
        // 0x111a90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111a8c) {
            ctx->pc = 0x111AA8u;
            goto label_111aa8;
        }
    }
    ctx->pc = 0x111A94u;
label_111a94:
    // 0x111a94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x111a94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111a98: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x111A98u;
    SET_GPR_U32(ctx, 31, 0x111AA0u);
    ctx->pc = 0x111A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111A98u;
    // 0x111a9c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x111A98u, 0x111AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111AA0u;
label_111aa0:
    // 0x111aa0: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x111AA0u;
    {
        const bool branch_taken_0x111aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111AA0u;
        // 0x111aa4: 0x26e20001  addiu       $v0, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111aa0) {
            ctx->pc = 0x111B74u;
            goto label_111b74;
        }
    }
    ctx->pc = 0x111AA8u;
label_111aa8:
    // 0x111aa8: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x111AA8u;
    SET_GPR_U32(ctx, 31, 0x111AB0u);
    ctx->pc = 0x111AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111AA8u;
    // 0x111aac: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x111AA8u, 0x111AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111AB0u;
label_111ab0:
    // 0x111ab0: 0xc044cd8  jal         func_113360
    ctx->pc = 0x111AB0u;
    SET_GPR_U32(ctx, 31, 0x111AB8u);
    ctx->pc = 0x111AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111AB0u;
    // 0x111ab4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113360u, 0x111AB0u, 0x111AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111AB8u;
label_111ab8:
    // 0x111ab8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x111ab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111abc: 0xc0449d6  jal         func_112758
    ctx->pc = 0x111ABCu;
    SET_GPR_U32(ctx, 31, 0x111AC4u);
    ctx->pc = 0x111AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111ABCu;
    // 0x111ac0: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112758u, 0x111ABCu, 0x111AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111AC4u;
label_111ac4:
    // 0x111ac4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x111ac4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111ac8: 0xc04393c  jal         func_10E4F0
    ctx->pc = 0x111AC8u;
    SET_GPR_U32(ctx, 31, 0x111AD0u);
    ctx->pc = 0x111ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111AC8u;
    // 0x111acc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E4F0u, 0x111AC8u, 0x111AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111AD0u;
label_111ad0:
    // 0x111ad0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x111ad0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111ad4: 0x12200026  beqz        $s1, . + 4 + (0x26 << 2)
    ctx->pc = 0x111AD4u;
    {
        const bool branch_taken_0x111ad4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x111AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111AD4u;
        // 0x111ad8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111ad4) {
            ctx->pc = 0x111B70u;
            goto label_111b70;
        }
    }
    ctx->pc = 0x111ADCu;
    // 0x111adc: 0xc0462e4  jal         func_118B90
    ctx->pc = 0x111ADCu;
    SET_GPR_U32(ctx, 31, 0x111AE4u);
    ctx->pc = 0x111AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111ADCu;
    // 0x111ae0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118B90u, 0x111ADCu, 0x111AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111AE4u;
label_111ae4:
    // 0x111ae4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x111ae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111ae8: 0xc046190  jal         func_118640
    ctx->pc = 0x111AE8u;
    SET_GPR_U32(ctx, 31, 0x111AF0u);
    ctx->pc = 0x111AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111AE8u;
    // 0x111aec: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118640u, 0x111AE8u, 0x111AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111AF0u;
label_111af0:
    // 0x111af0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x111af0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111af4: 0xc045fea  jal         func_117FA8
    ctx->pc = 0x111AF4u;
    SET_GPR_U32(ctx, 31, 0x111AFCu);
    ctx->pc = 0x111AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111AF4u;
    // 0x111af8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117FA8u, 0x111AF4u, 0x111AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111AFCu;
label_111afc:
    // 0x111afc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x111afcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111b00: 0xc046058  jal         func_118160
    ctx->pc = 0x111B00u;
    SET_GPR_U32(ctx, 31, 0x111B08u);
    ctx->pc = 0x111B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111B00u;
    // 0x111b04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118160u, 0x111B00u, 0x111B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111B08u;
label_111b08:
    // 0x111b08: 0x8e450010  lw          $a1, 0x10($s2)
    ctx->pc = 0x111b08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x111b0c: 0xc0461e8  jal         func_1187A0
    ctx->pc = 0x111B0Cu;
    SET_GPR_U32(ctx, 31, 0x111B14u);
    ctx->pc = 0x111B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111B0Cu;
    // 0x111b10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1187A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1187A0u, 0x111B0Cu, 0x111B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111B14u;
label_111b14:
    // 0x111b14: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x111b14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x111b18: 0x8fa500b4  lw          $a1, 0xB4($sp)
    ctx->pc = 0x111b18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x111b1c: 0x2464b060  addiu       $a0, $v1, -0x4FA0
    ctx->pc = 0x111b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946912));
    // 0x111b20: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x111b20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111b24: 0xc04adbe  jal         func_12B6F8
    ctx->pc = 0x111B24u;
    SET_GPR_U32(ctx, 31, 0x111B2Cu);
    ctx->pc = 0x111B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111B24u;
    // 0x111b28: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B6F8u, 0x111B24u, 0x111B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111B2Cu;
label_111b2c:
    // 0x111b2c: 0x8e4200c0  lw          $v0, 0xC0($s2)
    ctx->pc = 0x111b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 192)));
    // 0x111b30: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x111B30u;
    {
        const bool branch_taken_0x111b30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x111B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111B30u;
        // 0x111b34: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111b30) {
            ctx->pc = 0x111B50u;
            goto label_111b50;
        }
    }
    ctx->pc = 0x111B38u;
    // 0x111b38: 0xc044ae4  jal         func_112B90
    ctx->pc = 0x111B38u;
    SET_GPR_U32(ctx, 31, 0x111B40u);
    ctx->pc = 0x111B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111B38u;
    // 0x111b3c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112B90u, 0x111B38u, 0x111B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111B40u;
label_111b40:
    // 0x111b40: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x111B40u;
    {
        const bool branch_taken_0x111b40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x111B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111B40u;
        // 0x111b44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111b40) {
            ctx->pc = 0x111B50u;
            goto label_111b50;
        }
    }
    ctx->pc = 0x111B48u;
    // 0x111b48: 0xae5300c4  sw          $s3, 0xC4($s2)
    ctx->pc = 0x111b48u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 196), GPR_U32(ctx, 19));
    // 0x111b4c: 0xae4200bc  sw          $v0, 0xBC($s2)
    ctx->pc = 0x111b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 188), GPR_U32(ctx, 2));
label_111b50:
    // 0x111b50: 0xc044b6c  jal         func_112DB0
    ctx->pc = 0x111B50u;
    SET_GPR_U32(ctx, 31, 0x111B58u);
    ctx->pc = 0x111B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111B50u;
    // 0x111b54: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112DB0u, 0x111B50u, 0x111B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111B58u;
label_111b58:
    // 0x111b58: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x111b58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111b5c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x111b5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111b60: 0xc04445e  jal         func_111178
    ctx->pc = 0x111B60u;
    SET_GPR_U32(ctx, 31, 0x111B68u);
    ctx->pc = 0x111B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111B60u;
    // 0x111b64: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111178u, 0x111B60u, 0x111B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111B68u;
label_111b68:
    // 0x111b68: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x111B68u;
    {
        const bool branch_taken_0x111b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111B68u;
        // 0x111b6c: 0xdfb000c0  ld          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111b68) {
            ctx->pc = 0x111B8Cu;
            goto label_111b8c;
        }
    }
    ctx->pc = 0x111B70u;
label_111b70:
    // 0x111b70: 0x26e20001  addiu       $v0, $s7, 0x1
    ctx->pc = 0x111b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_111b74:
    // 0x111b74: 0x305700ff  andi        $s7, $v0, 0xFF
    ctx->pc = 0x111b74u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x111b78: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x111b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x111b7c: 0x2e2182b  sltu        $v1, $s7, $v0
    ctx->pc = 0x111b7cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x111b80: 0x1460ff29  bnez        $v1, . + 4 + (-0xD7 << 2)
    ctx->pc = 0x111B80u;
    {
        const bool branch_taken_0x111b80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x111B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111B80u;
        // 0x111b84: 0x171080  sll         $v0, $s7, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111b80) {
            ctx->pc = 0x111828u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_111828;
        }
    }
    ctx->pc = 0x111B88u;
label_111b88:
    // 0x111b88: 0xdfb000c0  ld          $s0, 0xC0($sp)
    ctx->pc = 0x111b88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_111b8c:
    // 0x111b8c: 0xdfb100c8  ld          $s1, 0xC8($sp)
    ctx->pc = 0x111b8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x111b90: 0xdfb200d0  ld          $s2, 0xD0($sp)
    ctx->pc = 0x111b90u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x111b94: 0xdfb300d8  ld          $s3, 0xD8($sp)
    ctx->pc = 0x111b94u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x111b98: 0xdfb400e0  ld          $s4, 0xE0($sp)
    ctx->pc = 0x111b98u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x111b9c: 0xdfb500e8  ld          $s5, 0xE8($sp)
    ctx->pc = 0x111b9cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x111ba0: 0xdfb600f0  ld          $s6, 0xF0($sp)
    ctx->pc = 0x111ba0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x111ba4: 0xdfb700f8  ld          $s7, 0xF8($sp)
    ctx->pc = 0x111ba4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x111ba8: 0xdfbe0100  ld          $fp, 0x100($sp)
    ctx->pc = 0x111ba8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x111bac: 0xdfbf0108  ld          $ra, 0x108($sp)
    ctx->pc = 0x111bacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x111bb0: 0xc7b50118  lwc1        $f21, 0x118($sp)
    ctx->pc = 0x111bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x111bb4: 0xc7b40110  lwc1        $f20, 0x110($sp)
    ctx->pc = 0x111bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x111bb8: 0x3e00008  jr          $ra
    ctx->pc = 0x111BB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x111BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111BB8u;
        // 0x111bbc: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111BB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x111BC0u;
}
