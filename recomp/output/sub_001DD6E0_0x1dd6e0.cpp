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

// Function: sub_001DD6E0
// Address: 0x1dd6e0 - 0x1dd8b0
void sub_001DD6E0_0x1dd6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DD6E0_0x1dd6e0");
#endif

    switch (ctx->pc) {
        case 0x1dd748u: goto label_1dd748;
        case 0x1dd780u: goto label_1dd780;
        case 0x1dd7c4u: goto label_1dd7c4;
        case 0x1dd7ecu: goto label_1dd7ec;
        case 0x1dd80cu: goto label_1dd80c;
        case 0x1dd83cu: goto label_1dd83c;
        default: break;
    }

    ctx->pc = 0x1dd6e0u;

    // 0x1dd6e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1dd6e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1dd6e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dd6e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dd6e8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1dd6e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1dd6ec: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1dd6ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd6f0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1dd6f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1dd6f4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1dd6f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd6f8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1dd6f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1dd6fc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1dd6fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd700: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1dd700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1dd704: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1dd704u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd708: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1dd708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1dd70c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1dd70cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd710: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1dd710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1dd714: 0x8e4200c4  lw          $v0, 0xC4($s2)
    ctx->pc = 0x1dd714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
    // 0x1dd718: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x1dd718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1dd71c: 0x8c450014  lw          $a1, 0x14($v0)
    ctx->pc = 0x1dd71cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1dd720: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1dd720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1dd724: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DD724u;
    {
        const bool branch_taken_0x1dd724 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DD728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD724u;
        // 0x1dd728: 0x8cb3000c  lw          $s3, 0xC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd724) {
            ctx->pc = 0x1DD73Cu;
            goto label_1dd73c;
        }
    }
    ctx->pc = 0x1DD72Cu;
    // 0x1dd72c: 0x1260003f  beqz        $s3, . + 4 + (0x3F << 2)
    ctx->pc = 0x1DD72Cu;
    {
        const bool branch_taken_0x1dd72c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD72Cu;
        // 0x1dd730: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd72c) {
            ctx->pc = 0x1DD82Cu;
            goto label_1dd82c;
        }
    }
    ctx->pc = 0x1DD734u;
    // 0x1dd734: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x1DD734u;
    {
        const bool branch_taken_0x1dd734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd734) {
            ctx->pc = 0x1DD7E4u;
            goto label_1dd7e4;
        }
    }
    ctx->pc = 0x1DD73Cu;
label_1dd73c:
    // 0x1dd73c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1dd73cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1dd740: 0xc078668  jal         func_1E19A0
    ctx->pc = 0x1DD740u;
    SET_GPR_U32(ctx, 31, 0x1DD748u);
    ctx->pc = 0x1DD744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD740u;
    // 0x1dd744: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E19A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E19A0u, 0x1DD740u, 0x1DD748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD748u;
label_1dd748:
    // 0x1dd748: 0x10400050  beqz        $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x1DD748u;
    {
        const bool branch_taken_0x1dd748 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD748u;
        // 0x1dd74c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd748) {
            ctx->pc = 0x1DD88Cu;
            goto label_1dd88c;
        }
    }
    ctx->pc = 0x1DD750u;
    // 0x1dd750: 0x8e4200c0  lw          $v0, 0xC0($s2)
    ctx->pc = 0x1dd750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 192)));
    // 0x1dd754: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1dd754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x1dd758: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1DD758u;
    {
        const bool branch_taken_0x1dd758 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD758u;
        // 0x1dd75c: 0x8e4300c4  lw          $v1, 0xC4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd758) {
            ctx->pc = 0x1DD7A0u;
            goto label_1dd7a0;
        }
    }
    ctx->pc = 0x1DD760u;
    // 0x1dd760: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x1dd760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x1dd764: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x1dd764u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1dd768: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x1DD768u;
    {
        const bool branch_taken_0x1dd768 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD768u;
        // 0x1dd76c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd768) {
            ctx->pc = 0x1DD7A0u;
            goto label_1dd7a0;
        }
    }
    ctx->pc = 0x1DD770u;
    // 0x1dd770: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1dd770u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd774: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1dd774u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd778: 0xc0774f2  jal         func_1DD3C8
    ctx->pc = 0x1DD778u;
    SET_GPR_U32(ctx, 31, 0x1DD780u);
    ctx->pc = 0x1DD77Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD778u;
    // 0x1dd77c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD3C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD3C8u, 0x1DD778u, 0x1DD780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD780u;
label_1dd780:
    // 0x1dd780: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x1DD780u;
    {
        const bool branch_taken_0x1dd780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD780u;
        // 0x1dd784: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd780) {
            ctx->pc = 0x1DD888u;
            goto label_1dd888;
        }
    }
    ctx->pc = 0x1DD788u;
    // 0x1dd788: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1dd788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1dd78c: 0xae110024  sw          $s1, 0x24($s0)
    ctx->pc = 0x1dd78cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 17));
    // 0x1dd790: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x1dd790u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dd794: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x1dd794u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x1dd798: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x1DD798u;
    {
        const bool branch_taken_0x1dd798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD798u;
        // 0x1dd79c: 0xae030038  sw          $v1, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd798) {
            ctx->pc = 0x1DD86Cu;
            goto label_1dd86c;
        }
    }
    ctx->pc = 0x1DD7A0u;
label_1dd7a0:
    // 0x1dd7a0: 0x8e420104  lw          $v0, 0x104($s2)
    ctx->pc = 0x1dd7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
    // 0x1dd7a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dd7a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd7a8: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x1dd7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1dd7ac: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1dd7acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd7b0: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x1dd7b0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dd7b4: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1dd7b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd7b8: 0x8c650010  lw          $a1, 0x10($v1)
    ctx->pc = 0x1dd7b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1dd7bc: 0xc0774f2  jal         func_1DD3C8
    ctx->pc = 0x1DD7BCu;
    SET_GPR_U32(ctx, 31, 0x1DD7C4u);
    ctx->pc = 0x1DD7C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD7BCu;
    // 0x1dd7c0: 0x25080040  addiu       $t0, $t0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD3C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD3C8u, 0x1DD7BCu, 0x1DD7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD7C4u;
label_1dd7c4:
    // 0x1dd7c4: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x1DD7C4u;
    {
        const bool branch_taken_0x1dd7c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD7C4u;
        // 0x1dd7c8: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd7c4) {
            ctx->pc = 0x1DD888u;
            goto label_1dd888;
        }
    }
    ctx->pc = 0x1DD7CCu;
    // 0x1dd7cc: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1dd7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1dd7d0: 0xae110024  sw          $s1, 0x24($s0)
    ctx->pc = 0x1dd7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 17));
    // 0x1dd7d4: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x1dd7d4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dd7d8: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x1dd7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x1dd7dc: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1DD7DCu;
    {
        const bool branch_taken_0x1dd7dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD7DCu;
        // 0x1dd7e0: 0xae030038  sw          $v1, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd7dc) {
            ctx->pc = 0x1DD86Cu;
            goto label_1dd86c;
        }
    }
    ctx->pc = 0x1DD7E4u;
label_1dd7e4:
    // 0x1dd7e4: 0xc078668  jal         func_1E19A0
    ctx->pc = 0x1DD7E4u;
    SET_GPR_U32(ctx, 31, 0x1DD7ECu);
    ctx->pc = 0x1DD7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD7E4u;
    // 0x1dd7e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E19A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E19A0u, 0x1DD7E4u, 0x1DD7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD7ECu;
label_1dd7ec:
    // 0x1dd7ec: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DD7ECu;
    {
        const bool branch_taken_0x1dd7ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DD7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD7ECu;
        // 0x1dd7f0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd7ec) {
            ctx->pc = 0x1DD7FCu;
            goto label_1dd7fc;
        }
    }
    ctx->pc = 0x1DD7F4u;
    // 0x1dd7f4: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1DD7F4u;
    {
        const bool branch_taken_0x1dd7f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD7F4u;
        // 0x1dd7f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd7f4) {
            ctx->pc = 0x1DD88Cu;
            goto label_1dd88c;
        }
    }
    ctx->pc = 0x1DD7FCu;
label_1dd7fc:
    // 0x1dd7fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dd7fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd800: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1dd800u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd804: 0xc077410  jal         func_1DD040
    ctx->pc = 0x1DD804u;
    SET_GPR_U32(ctx, 31, 0x1DD80Cu);
    ctx->pc = 0x1DD808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD804u;
    // 0x1dd808: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD040u, 0x1DD804u, 0x1DD80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD80Cu;
label_1dd80c:
    // 0x1dd80c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1DD80Cu;
    {
        const bool branch_taken_0x1dd80c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD80Cu;
        // 0x1dd810: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd80c) {
            ctx->pc = 0x1DD888u;
            goto label_1dd888;
        }
    }
    ctx->pc = 0x1DD814u;
    // 0x1dd814: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1dd814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1dd818: 0xae110024  sw          $s1, 0x24($s0)
    ctx->pc = 0x1dd818u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 17));
    // 0x1dd81c: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x1dd81cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dd820: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x1dd820u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x1dd824: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1DD824u;
    {
        const bool branch_taken_0x1dd824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD824u;
        // 0x1dd828: 0xae030038  sw          $v1, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd824) {
            ctx->pc = 0x1DD86Cu;
            goto label_1dd86c;
        }
    }
    ctx->pc = 0x1DD82Cu;
label_1dd82c:
    // 0x1dd82c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dd82cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd830: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1dd830u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd834: 0xc0789d6  jal         func_1E2758
    ctx->pc = 0x1DD834u;
    SET_GPR_U32(ctx, 31, 0x1DD83Cu);
    ctx->pc = 0x1DD838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD834u;
    // 0x1dd838: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2758u, 0x1DD834u, 0x1DD83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD83Cu;
label_1dd83c:
    // 0x1dd83c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1DD83Cu;
    {
        const bool branch_taken_0x1dd83c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD83Cu;
        // 0x1dd840: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd83c) {
            ctx->pc = 0x1DD888u;
            goto label_1dd888;
        }
    }
    ctx->pc = 0x1DD844u;
    // 0x1dd844: 0xae110024  sw          $s1, 0x24($s0)
    ctx->pc = 0x1dd844u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 17));
    // 0x1dd848: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x1dd848u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x1dd84c: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x1dd84cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dd850: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1dd850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1dd854: 0x8e4200c4  lw          $v0, 0xC4($s2)
    ctx->pc = 0x1dd854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
    // 0x1dd858: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x1dd858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1dd85c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1dd85cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1dd860: 0xae050038  sw          $a1, 0x38($s0)
    ctx->pc = 0x1dd860u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 5));
    // 0x1dd864: 0xae04002c  sw          $a0, 0x2C($s0)
    ctx->pc = 0x1dd864u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 4));
    // 0x1dd868: 0xae150030  sw          $s5, 0x30($s0)
    ctx->pc = 0x1dd868u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 21));
label_1dd86c:
    // 0x1dd86c: 0xae120034  sw          $s2, 0x34($s0)
    ctx->pc = 0x1dd86cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 18));
    // 0x1dd870: 0x8e4200c0  lw          $v0, 0xC0($s2)
    ctx->pc = 0x1dd870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 192)));
    // 0x1dd874: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1dd874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x1dd878: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1dd878u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1dd87c: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x1dd87cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x1dd880: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x1dd880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dd884: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x1dd884u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
label_1dd888:
    // 0x1dd888: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x1dd888u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1dd88c:
    // 0x1dd88c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dd88cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd890: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1dd890u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dd894: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1dd894u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dd898: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1dd898u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1dd89c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1dd89cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dd8a0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1dd8a0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1dd8a4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1dd8a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dd8a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD8A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD8A8u;
        // 0x1dd8ac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD8A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD8B0u;
}
