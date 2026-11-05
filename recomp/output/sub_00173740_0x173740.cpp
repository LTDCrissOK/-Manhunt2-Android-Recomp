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

// Function: sub_00173740
// Address: 0x173740 - 0x173800
void sub_00173740_0x173740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00173740_0x173740");
#endif

    switch (ctx->pc) {
        case 0x173740u: goto label_173740;
        case 0x173744u: goto label_173744;
        case 0x173748u: goto label_173748;
        case 0x17374cu: goto label_17374c;
        case 0x173750u: goto label_173750;
        case 0x173754u: goto label_173754;
        case 0x173758u: goto label_173758;
        case 0x17375cu: goto label_17375c;
        case 0x173760u: goto label_173760;
        case 0x173764u: goto label_173764;
        case 0x173768u: goto label_173768;
        case 0x17376cu: goto label_17376c;
        case 0x173770u: goto label_173770;
        case 0x173774u: goto label_173774;
        case 0x173778u: goto label_173778;
        case 0x17377cu: goto label_17377c;
        case 0x173780u: goto label_173780;
        case 0x173784u: goto label_173784;
        case 0x173788u: goto label_173788;
        case 0x17378cu: goto label_17378c;
        case 0x173790u: goto label_173790;
        case 0x173794u: goto label_173794;
        case 0x173798u: goto label_173798;
        case 0x17379cu: goto label_17379c;
        case 0x1737a0u: goto label_1737a0;
        case 0x1737a4u: goto label_1737a4;
        case 0x1737a8u: goto label_1737a8;
        case 0x1737acu: goto label_1737ac;
        case 0x1737b0u: goto label_1737b0;
        case 0x1737b4u: goto label_1737b4;
        case 0x1737b8u: goto label_1737b8;
        case 0x1737bcu: goto label_1737bc;
        case 0x1737c0u: goto label_1737c0;
        case 0x1737c4u: goto label_1737c4;
        case 0x1737c8u: goto label_1737c8;
        case 0x1737ccu: goto label_1737cc;
        case 0x1737d0u: goto label_1737d0;
        case 0x1737d4u: goto label_1737d4;
        case 0x1737d8u: goto label_1737d8;
        case 0x1737dcu: goto label_1737dc;
        case 0x1737e0u: goto label_1737e0;
        case 0x1737e4u: goto label_1737e4;
        case 0x1737e8u: goto label_1737e8;
        case 0x1737ecu: goto label_1737ec;
        case 0x1737f0u: goto label_1737f0;
        case 0x1737f4u: goto label_1737f4;
        case 0x1737f8u: goto label_1737f8;
        case 0x1737fcu: goto label_1737fc;
        default: break;
    }

    ctx->pc = 0x173740u;

label_173740:
    // 0x173740: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x173740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_173744:
    // 0x173744: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x173744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_173748:
    // 0x173748: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x173748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_17374c:
    // 0x17374c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17374cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_173750:
    // 0x173750: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x173750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_173754:
    // 0x173754: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x173754u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_173758:
    // 0x173758: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x173758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_17375c:
    // 0x17375c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x17375cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_173760:
    // 0x173760: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x173760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_173764:
    // 0x173764: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x173764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_173768:
    // 0x173768: 0xc04f954  jal         func_13E550
label_17376c:
    if (ctx->pc == 0x17376Cu) {
        ctx->pc = 0x17376Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173768u;
        // 0x17376c: 0xe0a02d  daddu       $s4, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173770u;
        goto label_173770;
    }
    ctx->pc = 0x173768u;
    SET_GPR_U32(ctx, 31, 0x173770u);
    ctx->pc = 0x17376Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173768u;
    // 0x17376c: 0xe0a02d  daddu       $s4, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E550u, 0x173768u, 0x173770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173770u;
label_173770:
    // 0x173770: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x173770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_173774:
    // 0x173774: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x173774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_173778:
    // 0x173778: 0xae0300b4  sw          $v1, 0xB4($s0)
    ctx->pc = 0x173778u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 3));
label_17377c:
    // 0x17377c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17377cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_173780:
    // 0x173780: 0xc04f8fc  jal         func_13E3F0
label_173784:
    if (ctx->pc == 0x173784u) {
        ctx->pc = 0x173784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173780u;
        // 0x173784: 0xae0200b0  sw          $v0, 0xB0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173788u;
        goto label_173788;
    }
    ctx->pc = 0x173780u;
    SET_GPR_U32(ctx, 31, 0x173788u);
    ctx->pc = 0x173784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173780u;
    // 0x173784: 0xae0200b0  sw          $v0, 0xB0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E3F0u, 0x173780u, 0x173788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173788u;
label_173788:
    // 0x173788: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x173788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_17378c:
    // 0x17378c: 0xc05a5fe  jal         func_1697F8
label_173790:
    if (ctx->pc == 0x173790u) {
        ctx->pc = 0x173790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17378Cu;
        // 0x173790: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173794u;
        goto label_173794;
    }
    ctx->pc = 0x17378Cu;
    SET_GPR_U32(ctx, 31, 0x173794u);
    ctx->pc = 0x173790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17378Cu;
    // 0x173790: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1697F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1697F8u, 0x17378Cu, 0x173794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173794u;
label_173794:
    // 0x173794: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x173794u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_173798:
    // 0x173798: 0xc0461e8  jal         func_1187A0
label_17379c:
    if (ctx->pc == 0x17379Cu) {
        ctx->pc = 0x17379Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173798u;
        // 0x17379c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1737A0u;
        goto label_1737a0;
    }
    ctx->pc = 0x173798u;
    SET_GPR_U32(ctx, 31, 0x1737A0u);
    ctx->pc = 0x17379Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173798u;
    // 0x17379c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1187A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1187A0u, 0x173798u, 0x1737A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1737A0u;
label_1737a0:
    // 0x1737a0: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x1737a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_1737a4:
    // 0x1737a4: 0xc045fea  jal         func_117FA8
label_1737a8:
    if (ctx->pc == 0x1737A8u) {
        ctx->pc = 0x1737A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1737A4u;
        // 0x1737a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1737ACu;
        goto label_1737ac;
    }
    ctx->pc = 0x1737A4u;
    SET_GPR_U32(ctx, 31, 0x1737ACu);
    ctx->pc = 0x1737A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1737A4u;
    // 0x1737a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117FA8u, 0x1737A4u, 0x1737ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1737ACu;
label_1737ac:
    // 0x1737ac: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1737acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1737b0:
    // 0x1737b0: 0xc0462d4  jal         func_118B50
label_1737b4:
    if (ctx->pc == 0x1737B4u) {
        ctx->pc = 0x1737B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1737B0u;
        // 0x1737b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1737B8u;
        goto label_1737b8;
    }
    ctx->pc = 0x1737B0u;
    SET_GPR_U32(ctx, 31, 0x1737B8u);
    ctx->pc = 0x1737B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1737B0u;
    // 0x1737b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118B50u, 0x1737B0u, 0x1737B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1737B8u;
label_1737b8:
    // 0x1737b8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1737b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1737bc:
    // 0x1737bc: 0xc0460c4  jal         func_118310
label_1737c0:
    if (ctx->pc == 0x1737C0u) {
        ctx->pc = 0x1737C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1737BCu;
        // 0x1737c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1737C4u;
        goto label_1737c4;
    }
    ctx->pc = 0x1737BCu;
    SET_GPR_U32(ctx, 31, 0x1737C4u);
    ctx->pc = 0x1737C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1737BCu;
    // 0x1737c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118310u, 0x1737BCu, 0x1737C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1737C4u;
label_1737c4:
    // 0x1737c4: 0x8e0400b0  lw          $a0, 0xB0($s0)
    ctx->pc = 0x1737c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_1737c8:
    // 0x1737c8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1737c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1737cc:
    // 0x1737cc: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1737ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1737d0:
    // 0x1737d0: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x1737d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_1737d4:
    // 0x1737d4: 0x40f809  jalr        $v0
label_1737d8:
    if (ctx->pc == 0x1737D8u) {
        ctx->pc = 0x1737D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1737D4u;
        // 0x1737d8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1737DCu;
        goto label_1737dc;
    }
    ctx->pc = 0x1737D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1737DCu);
        ctx->pc = 0x1737D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1737D4u;
        // 0x1737d8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1737D4u, 0x1737DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1737DCu;
label_1737dc:
    // 0x1737dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1737dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1737e0:
    // 0x1737e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1737e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1737e4:
    // 0x1737e4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1737e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1737e8:
    // 0x1737e8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1737e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1737ec:
    // 0x1737ec: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1737ecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1737f0:
    // 0x1737f0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1737f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1737f4:
    // 0x1737f4: 0x3e00008  jr          $ra
label_1737f8:
    if (ctx->pc == 0x1737F8u) {
        ctx->pc = 0x1737F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1737F4u;
        // 0x1737f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1737FCu;
        goto label_1737fc;
    }
    ctx->pc = 0x1737F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1737F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1737F4u;
        // 0x1737f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1737F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1737FCu;
label_1737fc:
    // 0x1737fc: 0x0  nop
    ctx->pc = 0x1737fcu;
    // NOP
    ctx->pc = 0x173800u;
}
