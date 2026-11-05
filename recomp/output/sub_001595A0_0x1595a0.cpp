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

// Function: sub_001595A0
// Address: 0x1595a0 - 0x159760
void sub_001595A0_0x1595a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001595A0_0x1595a0");
#endif

    switch (ctx->pc) {
        case 0x1595f0u: goto label_1595f0;
        case 0x159650u: goto label_159650;
        case 0x159668u: goto label_159668;
        case 0x1596b4u: goto label_1596b4;
        case 0x159714u: goto label_159714;
        case 0x15971cu: goto label_15971c;
        case 0x15972cu: goto label_15972c;
        default: break;
    }

    ctx->pc = 0x1595a0u;

    // 0x1595a0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1595a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x1595a4: 0x3c070049  lui         $a3, 0x49
    ctx->pc = 0x1595a4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)73 << 16));
    // 0x1595a8: 0xffb300a8  sd          $s3, 0xA8($sp)
    ctx->pc = 0x1595a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 19));
    // 0x1595ac: 0x24e78738  addiu       $a3, $a3, -0x78C8
    ctx->pc = 0x1595acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294936376));
    // 0x1595b0: 0xffb400b0  sd          $s4, 0xB0($sp)
    ctx->pc = 0x1595b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 20));
    // 0x1595b4: 0xffb00090  sd          $s0, 0x90($sp)
    ctx->pc = 0x1595b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 16));
    // 0x1595b8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1595b8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1595bc: 0xffb10098  sd          $s1, 0x98($sp)
    ctx->pc = 0x1595bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 17));
    // 0x1595c0: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1595c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x1595c4: 0xffb200a0  sd          $s2, 0xA0($sp)
    ctx->pc = 0x1595c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 18));
    // 0x1595c8: 0x2484b060  addiu       $a0, $a0, -0x4FA0
    ctx->pc = 0x1595c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946912));
    // 0x1595cc: 0xffb500b8  sd          $s5, 0xB8($sp)
    ctx->pc = 0x1595ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 21));
    // 0x1595d0: 0xffb600c0  sd          $s6, 0xC0($sp)
    ctx->pc = 0x1595d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 22));
    // 0x1595d4: 0xffb700c8  sd          $s7, 0xC8($sp)
    ctx->pc = 0x1595d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 23));
    // 0x1595d8: 0xffbe00d0  sd          $fp, 0xD0($sp)
    ctx->pc = 0x1595d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 30));
    // 0x1595dc: 0xffbf00d8  sd          $ra, 0xD8($sp)
    ctx->pc = 0x1595dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 31));
    // 0x1595e0: 0x8e820214  lw          $v0, 0x214($s4)
    ctx->pc = 0x1595e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 532)));
    // 0x1595e4: 0x8e8602e4  lw          $a2, 0x2E4($s4)
    ctx->pc = 0x1595e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 740)));
    // 0x1595e8: 0xc04ae84  jal         func_12BA10
    ctx->pc = 0x1595E8u;
    SET_GPR_U32(ctx, 31, 0x1595F0u);
    ctx->pc = 0x1595ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1595E8u;
    // 0x1595ec: 0x8c450010  lw          $a1, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BA10u, 0x1595E8u, 0x1595F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1595F0u;
label_1595f0:
    // 0x1595f0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1595f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1595f4: 0x1260004d  beqz        $s3, . + 4 + (0x4D << 2)
    ctx->pc = 0x1595F4u;
    {
        const bool branch_taken_0x1595f4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1595F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1595F4u;
        // 0x1595f8: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1595f4) {
            ctx->pc = 0x15972Cu;
            goto label_15972c;
        }
    }
    ctx->pc = 0x1595FCu;
    // 0x1595fc: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x1595fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x159600: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x159600u;
    {
        const bool branch_taken_0x159600 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x159604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159600u;
        // 0x159604: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159600) {
            ctx->pc = 0x159610u;
            goto label_159610;
        }
    }
    ctx->pc = 0x159608u;
    // 0x159608: 0x1c400007  bgtz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x159608u;
    {
        const bool branch_taken_0x159608 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x159608) {
            ctx->pc = 0x159628u;
            goto label_159628;
        }
    }
    ctx->pc = 0x159610u;
label_159610:
    // 0x159610: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x159610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x159614: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x159614u;
    {
        const bool branch_taken_0x159614 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x159618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159614u;
        // 0x159618: 0x28420002  slti        $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x159614) {
            ctx->pc = 0x159624u;
            goto label_159624;
        }
    }
    ctx->pc = 0x15961Cu;
    // 0x15961c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x15961Cu;
    {
        const bool branch_taken_0x15961c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15961c) {
            ctx->pc = 0x159628u;
            goto label_159628;
        }
    }
    ctx->pc = 0x159624u;
label_159624:
    // 0x159624: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x159624u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_159628:
    // 0x159628: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x159628u;
    {
        const bool branch_taken_0x159628 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x15962Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159628u;
        // 0x15962c: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159628) {
            ctx->pc = 0x159638u;
            goto label_159638;
        }
    }
    ctx->pc = 0x159630u;
    // 0x159630: 0x8e770010  lw          $s7, 0x10($s3)
    ctx->pc = 0x159630u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x159634: 0x17900a  movz        $s2, $zero, $s7
    ctx->pc = 0x159634u;
    if (GPR_U64(ctx, 23) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 0));
label_159638:
    // 0x159638: 0x12400036  beqz        $s2, . + 4 + (0x36 << 2)
    ctx->pc = 0x159638u;
    {
        const bool branch_taken_0x159638 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x15963Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159638u;
        // 0x15963c: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159638) {
            ctx->pc = 0x159714u;
            goto label_159714;
        }
    }
    ctx->pc = 0x159640u;
    // 0x159640: 0x8e840218  lw          $a0, 0x218($s4)
    ctx->pc = 0x159640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 536)));
    // 0x159644: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x159644u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159648: 0xc04f872  jal         func_13E1C8
    ctx->pc = 0x159648u;
    SET_GPR_U32(ctx, 31, 0x159650u);
    ctx->pc = 0x15964Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159648u;
    // 0x15964c: 0x2c0802d  daddu       $s0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E1C8u, 0x159648u, 0x159650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159650u;
label_159650:
    // 0x159650: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x159650u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159654: 0x1220002a  beqz        $s1, . + 4 + (0x2A << 2)
    ctx->pc = 0x159654u;
    {
        const bool branch_taken_0x159654 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x159658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159654u;
        // 0x159658: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159654) {
            ctx->pc = 0x159700u;
            goto label_159700;
        }
    }
    ctx->pc = 0x15965Cu;
    // 0x15965c: 0x24559c14  addiu       $s5, $v0, -0x63EC
    ctx->pc = 0x15965cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941716));
    // 0x159660: 0x26befefc  addiu       $fp, $s5, -0x104
    ctx->pc = 0x159660u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967036));
    // 0x159664: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x159664u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_159668:
    // 0x159668: 0x3a32021  addu        $a0, $sp, $v1
    ctx->pc = 0x159668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x15966c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x15966cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x159670: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x159670u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x159674: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x159674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x159678: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x159678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15967c: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x15967cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x159680: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x159680u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x159684: 0x7e1821  addu        $v1, $v1, $fp
    ctx->pc = 0x159684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x159688: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x159688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15968c: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x15968Cu;
    {
        const bool branch_taken_0x15968c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15968c) {
            ctx->pc = 0x159690u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15968Cu;
            // 0x159690: 0x8c620104  lw          $v0, 0x104($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15969Cu;
            goto label_15969c;
        }
    }
    ctx->pc = 0x159694u;
    // 0x159694: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x159694u;
    {
        const bool branch_taken_0x159694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159694u;
        // 0x159698: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159694) {
            ctx->pc = 0x1596A4u;
            goto label_1596a4;
        }
    }
    ctx->pc = 0x15969Cu;
label_15969c:
    // 0x15969c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x15969cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1596a0: 0x24650070  addiu       $a1, $v1, 0x70
    ctx->pc = 0x1596a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_1596a4:
    // 0x1596a4: 0x10a00011  beqz        $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1596A4u;
    {
        const bool branch_taken_0x1596a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1596A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1596A4u;
        // 0x1596a8: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1596a4) {
            ctx->pc = 0x1596ECu;
            goto label_1596ec;
        }
    }
    ctx->pc = 0x1596ACu;
    // 0x1596ac: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x1596ACu;
    SET_GPR_U32(ctx, 31, 0x1596B4u);
    ctx->pc = 0x1596B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1596ACu;
    // 0x1596b0: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x1596ACu, 0x1596B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1596B4u;
label_1596b4:
    // 0x1596b4: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x1596b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1596b8: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1596b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1596bc: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x1596bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1596c0: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x1596c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1596c4: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1596c4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1596c8: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1596c8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1596cc: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x1596ccu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1596d0: 0xc68002f0  lwc1        $f0, 0x2F0($s4)
    ctx->pc = 0x1596d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1596d4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1596d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1596d8: 0x0  nop
    ctx->pc = 0x1596d8u;
    // NOP
    // 0x1596dc: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1596DCu;
    {
        const bool branch_taken_0x1596dc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1596E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1596DCu;
        // 0x1596e0: 0x26020001  addiu       $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1596dc) {
            ctx->pc = 0x1596F0u;
            goto label_1596f0;
        }
    }
    ctx->pc = 0x1596E4u;
    // 0x1596e4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1596E4u;
    {
        const bool branch_taken_0x1596e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1596E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1596E4u;
        // 0x1596e8: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1596e4) {
            ctx->pc = 0x159700u;
            goto label_159700;
        }
    }
    ctx->pc = 0x1596ECu;
label_1596ec:
    // 0x1596ec: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x1596ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1596f0:
    // 0x1596f0: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x1596f0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1596f4: 0x211182b  sltu        $v1, $s0, $s1
    ctx->pc = 0x1596f4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1596f8: 0x1460ffdb  bnez        $v1, . + 4 + (-0x25 << 2)
    ctx->pc = 0x1596F8u;
    {
        const bool branch_taken_0x1596f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1596FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1596F8u;
        // 0x1596fc: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1596f8) {
            ctx->pc = 0x159668u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_159668;
        }
    }
    ctx->pc = 0x159700u;
label_159700:
    // 0x159700: 0x16900a  movz        $s2, $zero, $s6
    ctx->pc = 0x159700u;
    if (GPR_U64(ctx, 22) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 0));
    // 0x159704: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x159704u;
    {
        const bool branch_taken_0x159704 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x159704) {
            ctx->pc = 0x159714u;
            goto label_159714;
        }
    }
    ctx->pc = 0x15970Cu;
    // 0x15970c: 0xc056658  jal         func_159960
    ctx->pc = 0x15970Cu;
    SET_GPR_U32(ctx, 31, 0x159714u);
    ctx->pc = 0x159710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15970Cu;
    // 0x159710: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x159960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159960u, 0x15970Cu, 0x159714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159714u;
label_159714:
    // 0x159714: 0xc045e9c  jal         func_117A70
    ctx->pc = 0x159714u;
    SET_GPR_U32(ctx, 31, 0x15971Cu);
    ctx->pc = 0x159718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159714u;
    // 0x159718: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117A70u, 0x159714u, 0x15971Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15971Cu;
label_15971c:
    // 0x15971c: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x15971cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x159720: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x159720u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159724: 0xc042128  jal         func_1084A0
    ctx->pc = 0x159724u;
    SET_GPR_U32(ctx, 31, 0x15972Cu);
    ctx->pc = 0x159728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159724u;
    // 0x159728: 0x24448758  addiu       $a0, $v0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084A0u, 0x159724u, 0x15972Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15972Cu;
label_15972c:
    // 0x15972c: 0xdfb00090  ld          $s0, 0x90($sp)
    ctx->pc = 0x15972cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x159730: 0xdfb10098  ld          $s1, 0x98($sp)
    ctx->pc = 0x159730u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x159734: 0xdfb200a0  ld          $s2, 0xA0($sp)
    ctx->pc = 0x159734u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x159738: 0xdfb300a8  ld          $s3, 0xA8($sp)
    ctx->pc = 0x159738u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x15973c: 0xdfb400b0  ld          $s4, 0xB0($sp)
    ctx->pc = 0x15973cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x159740: 0xdfb500b8  ld          $s5, 0xB8($sp)
    ctx->pc = 0x159740u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x159744: 0xdfb600c0  ld          $s6, 0xC0($sp)
    ctx->pc = 0x159744u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x159748: 0xdfb700c8  ld          $s7, 0xC8($sp)
    ctx->pc = 0x159748u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x15974c: 0xdfbe00d0  ld          $fp, 0xD0($sp)
    ctx->pc = 0x15974cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x159750: 0xdfbf00d8  ld          $ra, 0xD8($sp)
    ctx->pc = 0x159750u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x159754: 0x3e00008  jr          $ra
    ctx->pc = 0x159754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x159758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159754u;
        // 0x159758: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159754u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15975Cu;
    // 0x15975c: 0x0  nop
    ctx->pc = 0x15975cu;
    // NOP
    ctx->pc = 0x159760u;
}
