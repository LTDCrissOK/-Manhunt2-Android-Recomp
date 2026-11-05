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

// Function: sub_003AC578
// Address: 0x3ac578 - 0x3ac710
void sub_003AC578_0x3ac578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AC578_0x3ac578");
#endif

    switch (ctx->pc) {
        case 0x3ac5c8u: goto label_3ac5c8;
        case 0x3ac5d0u: goto label_3ac5d0;
        case 0x3ac5f8u: goto label_3ac5f8;
        case 0x3ac60cu: goto label_3ac60c;
        case 0x3ac610u: goto label_3ac610;
        case 0x3ac660u: goto label_3ac660;
        case 0x3ac674u: goto label_3ac674;
        case 0x3ac678u: goto label_3ac678;
        case 0x3ac6b0u: goto label_3ac6b0;
        case 0x3ac6c4u: goto label_3ac6c4;
        case 0x3ac6dcu: goto label_3ac6dc;
        default: break;
    }

    ctx->pc = 0x3ac578u;

    // 0x3ac578: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3ac578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3ac57c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x3ac57cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x3ac580: 0x3c150042  lui         $s5, 0x42
    ctx->pc = 0x3ac580u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)66 << 16));
    // 0x3ac584: 0x8ea22794  lw          $v0, 0x2794($s5)
    ctx->pc = 0x3ac584u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x422794u));
    // 0x3ac588: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3ac588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3ac58c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3ac58cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3ac590: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3ac590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3ac594: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3ac594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3ac598: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x3ac598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x3ac59c: 0x1440004f  bnez        $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x3AC59Cu;
    {
        const bool branch_taken_0x3ac59c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AC5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC59Cu;
        // 0x3ac5a0: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac59c) {
            ctx->pc = 0x3AC6DCu;
            goto label_3ac6dc;
        }
    }
    ctx->pc = 0x3AC5A4u;
    // 0x3ac5a4: 0x3c100042  lui         $s0, 0x42
    ctx->pc = 0x3ac5a4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)66 << 16));
    // 0x3ac5a8: 0x3c140042  lui         $s4, 0x42
    ctx->pc = 0x3ac5a8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)66 << 16));
    // 0x3ac5ac: 0x26102a30  addiu       $s0, $s0, 0x2A30
    ctx->pc = 0x3ac5acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 10800));
    // 0x3ac5b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3ac5b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ac5b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ac5b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ac5b8: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x3ac5b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x3ac5bc: 0x240608d0  addiu       $a2, $zero, 0x8D0
    ctx->pc = 0x3ac5bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2256));
    // 0x3ac5c0: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x3AC5C0u;
    SET_GPR_U32(ctx, 31, 0x3AC5C8u);
    ctx->pc = 0x3AC5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AC5C0u;
    // 0x3ac5c4: 0x2693279c  addiu       $s3, $s4, 0x279C (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 10140));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x3AC5C0u, 0x3AC5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AC5C8u;
label_3ac5c8:
    // 0x3ac5c8: 0xc0e8f30  jal         func_3A3CC0
    ctx->pc = 0x3AC5C8u;
    SET_GPR_U32(ctx, 31, 0x3AC5D0u);
    ctx->pc = 0x3AC5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AC5C8u;
    // 0x3ac5cc: 0x3c120042  lui         $s2, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)66 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3CC0u, 0x3AC5C8u, 0x3AC5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AC5D0u;
label_3ac5d0:
    // 0x3ac5d0: 0x2402ffc0  addiu       $v0, $zero, -0x40
    ctx->pc = 0x3ac5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x3ac5d4: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3ac5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3ac5d8: 0x24040880  addiu       $a0, $zero, 0x880
    ctx->pc = 0x3ac5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2176));
    // 0x3ac5dc: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x3ac5dcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x3ac5e0: 0x3c110042  lui         $s1, 0x42
    ctx->pc = 0x3ac5e0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)66 << 16));
    // 0x3ac5e4: 0xae442a2c  sw          $a0, 0x2A2C($s2)
    ctx->pc = 0x3ac5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 10796), GPR_U32(ctx, 4));
    // 0x3ac5e8: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x3AC5E8u;
    {
        const bool branch_taken_0x3ac5e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AC5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC5E8u;
        // 0x3ac5ec: 0xae302798  sw          $s0, 0x2798($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 10136), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac5e8) {
            ctx->pc = 0x3AC630u;
            goto label_3ac630;
        }
    }
    ctx->pc = 0x3AC5F0u;
    // 0x3ac5f0: 0xc0f3e00  jal         func_3CF800
    ctx->pc = 0x3AC5F0u;
    SET_GPR_U32(ctx, 31, 0x3AC5F8u);
    ctx->pc = 0x3AC5F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AC5F0u;
    // 0x3ac5f4: 0x240408d0  addiu       $a0, $zero, 0x8D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CF800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CF800u, 0x3AC5F0u, 0x3AC5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AC5F8u;
label_3ac5f8:
    // 0x3ac5f8: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3AC5F8u;
    {
        const bool branch_taken_0x3ac5f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AC5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC5F8u;
        // 0x3ac5fc: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac5f8) {
            ctx->pc = 0x3AC630u;
            goto label_3ac630;
        }
    }
    ctx->pc = 0x3AC600u;
    // 0x3ac600: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3ac600u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3ac604: 0xc0e5ebe  jal         func_397AF8
    ctx->pc = 0x3AC604u;
    SET_GPR_U32(ctx, 31, 0x3AC60Cu);
    ctx->pc = 0x3AC608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AC604u;
    // 0x3ac608: 0x2484f288  addiu       $a0, $a0, -0xD78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397AF8u, 0x3AC604u, 0x3AC60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AC60Cu;
label_3ac60c:
    // 0x3ac60c: 0x0  nop
    ctx->pc = 0x3ac60cu;
    // NOP
label_3ac610:
    // 0x3ac610: 0x0  nop
    ctx->pc = 0x3ac610u;
    // NOP
    // 0x3ac614: 0x0  nop
    ctx->pc = 0x3ac614u;
    // NOP
    // 0x3ac618: 0x0  nop
    ctx->pc = 0x3ac618u;
    // NOP
    // 0x3ac61c: 0x0  nop
    ctx->pc = 0x3ac61cu;
    // NOP
    // 0x3ac620: 0x0  nop
    ctx->pc = 0x3ac620u;
    // NOP
    // 0x3ac624: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x3AC624u;
    {
        const bool branch_taken_0x3ac624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ac624) {
            ctx->pc = 0x3AC610u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ac610;
        }
    }
    ctx->pc = 0x3AC62Cu;
    // 0x3ac62c: 0x0  nop
    ctx->pc = 0x3ac62cu;
    // NOP
label_3ac630:
    // 0x3ac630: 0x8e82279c  lw          $v0, 0x279C($s4)
    ctx->pc = 0x3ac630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10140)));
    // 0x3ac634: 0x2403ffc0  addiu       $v1, $zero, -0x40
    ctx->pc = 0x3ac634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x3ac638: 0x8e252798  lw          $a1, 0x2798($s1)
    ctx->pc = 0x3ac638u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10136)));
    // 0x3ac63c: 0x3c080042  lui         $t0, 0x42
    ctx->pc = 0x3ac63cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)66 << 16));
    // 0x3ac640: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x3ac640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3ac644: 0x8e472a2c  lw          $a3, 0x2A2C($s2)
    ctx->pc = 0x3ac644u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10796)));
    // 0x3ac648: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3ac648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3ac64c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3ac64cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ac650: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3ac650u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ac654: 0xad0227a0  sw          $v0, 0x27A0($t0)
    ctx->pc = 0x3ac654u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 10144), GPR_U32(ctx, 2));
    // 0x3ac658: 0xc0e8e4c  jal         func_3A3930
    ctx->pc = 0x3AC658u;
    SET_GPR_U32(ctx, 31, 0x3AC660u);
    ctx->pc = 0x3AC65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AC658u;
    // 0x3ac65c: 0x3c100042  lui         $s0, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)66 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3930u, 0x3AC658u, 0x3AC660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AC660u;
label_3ac660:
    // 0x3ac660: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3AC660u;
    {
        const bool branch_taken_0x3ac660 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AC664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC660u;
        // 0x3ac664: 0xae022a28  sw          $v0, 0x2A28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 10792), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac660) {
            ctx->pc = 0x3AC698u;
            goto label_3ac698;
        }
    }
    ctx->pc = 0x3AC668u;
    // 0x3ac668: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3ac668u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3ac66c: 0xc0e5ebe  jal         func_397AF8
    ctx->pc = 0x3AC66Cu;
    SET_GPR_U32(ctx, 31, 0x3AC674u);
    ctx->pc = 0x3AC670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AC66Cu;
    // 0x3ac670: 0x2484f2b8  addiu       $a0, $a0, -0xD48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397AF8u, 0x3AC66Cu, 0x3AC674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AC674u;
label_3ac674:
    // 0x3ac674: 0x0  nop
    ctx->pc = 0x3ac674u;
    // NOP
label_3ac678:
    // 0x3ac678: 0x0  nop
    ctx->pc = 0x3ac678u;
    // NOP
    // 0x3ac67c: 0x0  nop
    ctx->pc = 0x3ac67cu;
    // NOP
    // 0x3ac680: 0x0  nop
    ctx->pc = 0x3ac680u;
    // NOP
    // 0x3ac684: 0x0  nop
    ctx->pc = 0x3ac684u;
    // NOP
    // 0x3ac688: 0x0  nop
    ctx->pc = 0x3ac688u;
    // NOP
    // 0x3ac68c: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x3AC68Cu;
    {
        const bool branch_taken_0x3ac68c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ac68c) {
            ctx->pc = 0x3AC678u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ac678;
        }
    }
    ctx->pc = 0x3AC694u;
    // 0x3ac694: 0x0  nop
    ctx->pc = 0x3ac694u;
    // NOP
label_3ac698:
    // 0x3ac698: 0x26102a28  addiu       $s0, $s0, 0x2A28
    ctx->pc = 0x3ac698u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 10792));
    // 0x3ac69c: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x3ac69cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x3ac6a0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3ac6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3ac6a4: 0x24a5c3b0  addiu       $a1, $a1, -0x3C50
    ctx->pc = 0x3ac6a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951856));
    // 0x3ac6a8: 0xc0e8ecc  jal         func_3A3B30
    ctx->pc = 0x3AC6A8u;
    SET_GPR_U32(ctx, 31, 0x3AC6B0u);
    ctx->pc = 0x3AC6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AC6A8u;
    // 0x3ac6ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3B30u, 0x3AC6A8u, 0x3AC6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AC6B0u;
label_3ac6b0:
    // 0x3ac6b0: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x3ac6b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x3ac6b4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3ac6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3ac6b8: 0x24a5c450  addiu       $a1, $a1, -0x3BB0
    ctx->pc = 0x3ac6b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952016));
    // 0x3ac6bc: 0xc0e8ed0  jal         func_3A3B40
    ctx->pc = 0x3AC6BCu;
    SET_GPR_U32(ctx, 31, 0x3AC6C4u);
    ctx->pc = 0x3AC6C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AC6BCu;
    // 0x3ac6c0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3B40u, 0x3AC6BCu, 0x3AC6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AC6C4u;
label_3ac6c4:
    // 0x3ac6c4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3ac6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3ac6c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3ac6c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ac6cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3ac6ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ac6d0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3ac6d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ac6d4: 0xc0e8f8a  jal         func_3A3E28
    ctx->pc = 0x3AC6D4u;
    SET_GPR_U32(ctx, 31, 0x3AC6DCu);
    ctx->pc = 0x3AC6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AC6D4u;
    // 0x3ac6d8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3E28u, 0x3AC6D4u, 0x3AC6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AC6DCu;
label_3ac6dc:
    // 0x3ac6dc: 0x26a32794  addiu       $v1, $s5, 0x2794
    ctx->pc = 0x3ac6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 10132));
    // 0x3ac6e0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x3ac6e0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3ac6e4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3ac6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3ac6e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3ac6e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ac6ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3ac6ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3ac6f0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3ac6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3ac6f4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3ac6f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ac6f8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3ac6f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3ac6fc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x3ac6fcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3ac700: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3ac700u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3ac704: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3ac704u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x3ac708: 0x3e00008  jr          $ra
    ctx->pc = 0x3AC708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AC70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC708u;
        // 0x3ac70c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AC708u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AC710u;
}
