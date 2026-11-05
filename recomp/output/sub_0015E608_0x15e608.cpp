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

// Function: sub_0015E608
// Address: 0x15e608 - 0x15e720
void sub_0015E608_0x15e608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015E608_0x15e608");
#endif

    switch (ctx->pc) {
        case 0x15e63cu: goto label_15e63c;
        case 0x15e668u: goto label_15e668;
        case 0x15e690u: goto label_15e690;
        case 0x15e6acu: goto label_15e6ac;
        case 0x15e6c8u: goto label_15e6c8;
        case 0x15e6e0u: goto label_15e6e0;
        default: break;
    }

    ctx->pc = 0x15e608u;

    // 0x15e608: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x15e608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x15e60c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x15e60cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x15e610: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x15e610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x15e614: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x15e614u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e618: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x15e618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x15e61c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x15e61cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x15e620: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x15e620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x15e624: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x15e624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x15e628: 0x92020a20  lbu         $v0, 0xA20($s0)
    ctx->pc = 0x15e628u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2592)));
    // 0x15e62c: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x15E62Cu;
    {
        const bool branch_taken_0x15e62c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E62Cu;
        // 0x15e630: 0x30a500ff  andi        $a1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e62c) {
            ctx->pc = 0x15E6F8u;
            goto label_15e6f8;
        }
    }
    ctx->pc = 0x15E634u;
    // 0x15e634: 0xc04f130  jal         func_13C4C0
    ctx->pc = 0x15E634u;
    SET_GPR_U32(ctx, 31, 0x15E63Cu);
    ctx->pc = 0x15E638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E634u;
    // 0x15e638: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C4C0u, 0x15E634u, 0x15E63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E63Cu;
label_15e63c:
    // 0x15e63c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x15e63cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e640: 0x10a0002e  beqz        $a1, . + 4 + (0x2E << 2)
    ctx->pc = 0x15E640u;
    {
        const bool branch_taken_0x15e640 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E640u;
        // 0x15e644: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e640) {
            ctx->pc = 0x15E6FCu;
            goto label_15e6fc;
        }
    }
    ctx->pc = 0x15E648u;
    // 0x15e648: 0x92020a20  lbu         $v0, 0xA20($s0)
    ctx->pc = 0x15e648u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2592)));
    // 0x15e64c: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x15E64Cu;
    {
        const bool branch_taken_0x15e64c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E64Cu;
        // 0x15e650: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e64c) {
            ctx->pc = 0x15E6F8u;
            goto label_15e6f8;
        }
    }
    ctx->pc = 0x15E654u;
    // 0x15e654: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x15e654u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e658: 0x24070070  addiu       $a3, $zero, 0x70
    ctx->pc = 0x15e658u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x15e65c: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x15e65cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15e660: 0x871018  mult        $v0, $a0, $a3
    ctx->pc = 0x15e660u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x15e664: 0x0  nop
    ctx->pc = 0x15e664u;
    // NOP
label_15e668:
    // 0x15e668: 0x509021  addu        $s2, $v0, $s0
    ctx->pc = 0x15e668u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x15e66c: 0x8e42032c  lw          $v0, 0x32C($s2)
    ctx->pc = 0x15e66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 812)));
    // 0x15e670: 0x1445001d  bne         $v0, $a1, . + 4 + (0x1D << 2)
    ctx->pc = 0x15E670u;
    {
        const bool branch_taken_0x15e670 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x15E674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E670u;
        // 0x15e674: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e670) {
            ctx->pc = 0x15E6E8u;
            goto label_15e6e8;
        }
    }
    ctx->pc = 0x15E678u;
    // 0x15e678: 0x8e420340  lw          $v0, 0x340($s2)
    ctx->pc = 0x15e678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 832)));
    // 0x15e67c: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x15E67Cu;
    {
        const bool branch_taken_0x15e67c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15E680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E67Cu;
        // 0x15e680: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e67c) {
            ctx->pc = 0x15E6FCu;
            goto label_15e6fc;
        }
    }
    ctx->pc = 0x15E684u;
    // 0x15e684: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x15e684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e688: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x15E688u;
    SET_GPR_U32(ctx, 31, 0x15E690u);
    ctx->pc = 0x15E68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E688u;
    // 0x15e68c: 0x24130fa0  addiu       $s3, $zero, 0xFA0 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x15E688u, 0x15E690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E690u;
label_15e690:
    // 0x15e690: 0x8e430384  lw          $v1, 0x384($s2)
    ctx->pc = 0x15e690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 900)));
    // 0x15e694: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15E694u;
    {
        const bool branch_taken_0x15e694 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E694u;
        // 0x15e698: 0x24101770  addiu       $s0, $zero, 0x1770 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 6000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e694) {
            ctx->pc = 0x15E6A4u;
            goto label_15e6a4;
        }
    }
    ctx->pc = 0x15E69Cu;
    // 0x15e69c: 0x24132710  addiu       $s3, $zero, 0x2710
    ctx->pc = 0x15e69cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    // 0x15e6a0: 0x241036b0  addiu       $s0, $zero, 0x36B0
    ctx->pc = 0x15e6a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 14000));
label_15e6a4:
    // 0x15e6a4: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x15E6A4u;
    SET_GPR_U32(ctx, 31, 0x15E6ACu);
    ctx->pc = 0x15E6A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E6A4u;
    // 0x15e6a8: 0x2138023  subu        $s0, $s0, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x15E6A4u, 0x15E6ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E6ACu;
label_15e6ac:
    // 0x15e6ac: 0x50001b  divu        $zero, $v0, $s0
    ctx->pc = 0x15e6acu;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x15e6b0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x15e6b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e6b4: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x15E6B4u;
    {
        const bool branch_taken_0x15e6b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e6b4) {
            ctx->pc = 0x15E6B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15E6B4u;
            // 0x15e6b8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x15E6BCu;
            goto label_15e6bc;
        }
    }
    ctx->pc = 0x15E6BCu;
label_15e6bc:
    // 0x15e6bc: 0x8810  mfhi        $s1
    ctx->pc = 0x15e6bcu;
    SET_GPR_U64(ctx, 17, ctx->hi);
    // 0x15e6c0: 0xc0aafc4  jal         func_2ABF10
    ctx->pc = 0x15E6C0u;
    SET_GPR_U32(ctx, 31, 0x15E6C8u);
    ctx->pc = 0x15E6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E6C0u;
    // 0x15e6c4: 0x2338821  addu        $s1, $s1, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF10u, 0x15E6C0u, 0x15E6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E6C8u;
label_15e6c8:
    // 0x15e6c8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x15e6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x15e6cc: 0xae540340  sw          $s4, 0x340($s2)
    ctx->pc = 0x15e6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 832), GPR_U32(ctx, 20));
    // 0x15e6d0: 0xae42033c  sw          $v0, 0x33C($s2)
    ctx->pc = 0x15e6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 828), GPR_U32(ctx, 2));
    // 0x15e6d4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x15e6d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e6d8: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x15E6D8u;
    SET_GPR_U32(ctx, 31, 0x15E6E0u);
    ctx->pc = 0x15E6DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E6D8u;
    // 0x15e6dc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x15E6D8u, 0x15E6E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E6E0u;
label_15e6e0:
    // 0x15e6e0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x15E6E0u;
    {
        const bool branch_taken_0x15e6e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E6E0u;
        // 0x15e6e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e6e0) {
            ctx->pc = 0x15E6FCu;
            goto label_15e6fc;
        }
    }
    ctx->pc = 0x15E6E8u;
label_15e6e8:
    // 0x15e6e8: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x15e6e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15e6ec: 0x86182b  sltu        $v1, $a0, $a2
    ctx->pc = 0x15e6ecu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x15e6f0: 0x1460ffdd  bnez        $v1, . + 4 + (-0x23 << 2)
    ctx->pc = 0x15E6F0u;
    {
        const bool branch_taken_0x15e6f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15E6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E6F0u;
        // 0x15e6f4: 0x871018  mult        $v0, $a0, $a3 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e6f0) {
            ctx->pc = 0x15E668u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15e668;
        }
    }
    ctx->pc = 0x15E6F8u;
label_15e6f8:
    // 0x15e6f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x15e6f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15e6fc:
    // 0x15e6fc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x15e6fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15e700: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x15e700u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15e704: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x15e704u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15e708: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x15e708u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x15e70c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x15e70cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15e710: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x15e710u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15e714: 0x3e00008  jr          $ra
    ctx->pc = 0x15E714u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15E718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E714u;
        // 0x15e718: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E714u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15E71Cu;
    // 0x15e71c: 0x0  nop
    ctx->pc = 0x15e71cu;
    // NOP
    ctx->pc = 0x15e720u;
}
