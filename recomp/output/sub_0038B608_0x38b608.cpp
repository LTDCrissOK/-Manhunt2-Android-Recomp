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

// Function: sub_0038B608
// Address: 0x38b608 - 0x38b848
void sub_0038B608_0x38b608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038B608_0x38b608");
#endif

    switch (ctx->pc) {
        case 0x38b64cu: goto label_38b64c;
        case 0x38b660u: goto label_38b660;
        case 0x38b664u: goto label_38b664;
        case 0x38b66cu: goto label_38b66c;
        case 0x38b688u: goto label_38b688;
        case 0x38b690u: goto label_38b690;
        case 0x38b6acu: goto label_38b6ac;
        case 0x38b6d8u: goto label_38b6d8;
        case 0x38b6fcu: goto label_38b6fc;
        case 0x38b754u: goto label_38b754;
        case 0x38b770u: goto label_38b770;
        case 0x38b7a0u: goto label_38b7a0;
        case 0x38b7d0u: goto label_38b7d0;
        case 0x38b804u: goto label_38b804;
        case 0x38b81cu: goto label_38b81c;
        default: break;
    }

    ctx->pc = 0x38b608u;

    // 0x38b608: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x38b608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x38b60c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x38b60cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x38b610: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x38b610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x38b614: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x38b614u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38b618: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x38b618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x38b61c: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x38b61cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x38b620: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x38b620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x38b624: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x38b624u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38b628: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x38b628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x38b62c: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x38b62cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x38b630: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x38b630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x38b634: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x38b634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x38b638: 0xae200820  sw          $zero, 0x820($s1)
    ctx->pc = 0x38b638u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2080), GPR_U32(ctx, 0));
    // 0x38b63c: 0x8e220140  lw          $v0, 0x140($s1)
    ctx->pc = 0x38b63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 320)));
    // 0x38b640: 0x8e24013c  lw          $a0, 0x13C($s1)
    ctx->pc = 0x38b640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 316)));
    // 0x38b644: 0x8e230184  lw          $v1, 0x184($s1)
    ctx->pc = 0x38b644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
    // 0x38b648: 0x828018  mult        $s0, $a0, $v0
    ctx->pc = 0x38b648u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_38b64c:
    // 0x38b64c: 0xae200824  sw          $zero, 0x824($s1)
    ctx->pc = 0x38b64cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2084), GPR_U32(ctx, 0));
    // 0x38b650: 0x38630003  xori        $v1, $v1, 0x3
    ctx->pc = 0x38b650u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)3);
    // 0x38b654: 0x101043  sra         $v0, $s0, 1
    ctx->pc = 0x38b654u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 16), 1));
    // 0x38b658: 0x43800b  movn        $s0, $v0, $v1
    ctx->pc = 0x38b658u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    // 0x38b65c: 0x0  nop
    ctx->pc = 0x38b65cu;
    // NOP
label_38b660:
    // 0x38b660: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38b660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38b664:
    // 0x38b664: 0xc0e2e12  jal         func_38B848
    ctx->pc = 0x38B664u;
    SET_GPR_U32(ctx, 31, 0x38B66Cu);
    ctx->pc = 0x38B668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38B664u;
    // 0x38b668: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38B848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38B848u, 0x38B664u, 0x38B66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38B66Cu;
label_38b66c:
    // 0x38b66c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x38b66cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38b670: 0x12b3fffc  beq         $s5, $s3, . + 4 + (-0x4 << 2)
    ctx->pc = 0x38B670u;
    {
        const bool branch_taken_0x38b670 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 19));
        ctx->pc = 0x38B674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B670u;
        // 0x38b674: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b670) {
            ctx->pc = 0x38B664u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38b664;
        }
    }
    ctx->pc = 0x38B678u;
    // 0x38b678: 0x12b2fff9  beq         $s5, $s2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x38B678u;
    {
        const bool branch_taken_0x38b678 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 18));
        if (branch_taken_0x38b678) {
            ctx->pc = 0x38B660u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38b660;
        }
    }
    ctx->pc = 0x38B680u;
    // 0x38b680: 0xc0e3342  jal         func_38CD08
    ctx->pc = 0x38B680u;
    SET_GPR_U32(ctx, 31, 0x38B688u);
    ctx->pc = 0x38B684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38B680u;
    // 0x38b684: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CD08u, 0x38B680u, 0x38B688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38B688u;
label_38b688:
    // 0x38b688: 0xc0e3342  jal         func_38CD08
    ctx->pc = 0x38B688u;
    SET_GPR_U32(ctx, 31, 0x38B690u);
    ctx->pc = 0x38B68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38B688u;
    // 0x38b68c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CD08u, 0x38B688u, 0x38B690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38B690u;
label_38b690:
    // 0x38b690: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x38b690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x38b694: 0x3442b020  ori         $v0, $v0, 0xB020
    ctx->pc = 0x38b694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45088);
    // 0x38b698: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x38b698u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000B020u)); // MMIO: 0x1000b020
    // 0x38b69c: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x38B69Cu;
    {
        const bool branch_taken_0x38b69c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B69Cu;
        // 0x38b6a0: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b69c) {
            ctx->pc = 0x38B724u;
            goto label_38b724;
        }
    }
    ctx->pc = 0x38B6A4u;
    // 0x38b6a4: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x38b6a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x38b6a8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x38b6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10002010
label_38b6ac:
    // 0x38b6ac: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x38b6acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x38b6b0: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x38B6B0u;
    {
        const bool branch_taken_0x38b6b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x38B6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B6B0u;
        // 0x38b6b4: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b6b0) {
            ctx->pc = 0x38B728u;
            goto label_38b728;
        }
    }
    ctx->pc = 0x38B6B8u;
    // 0x38b6b8: 0x3c141000  lui         $s4, 0x1000
    ctx->pc = 0x38b6b8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)4096 << 16));
    // 0x38b6bc: 0x3c131000  lui         $s3, 0x1000
    ctx->pc = 0x38b6bcu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)4096 << 16));
    // 0x38b6c0: 0x3c121000  lui         $s2, 0x1000
    ctx->pc = 0x38b6c0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)4096 << 16));
    // 0x38b6c4: 0x3c101000  lui         $s0, 0x1000
    ctx->pc = 0x38b6c4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)4096 << 16));
    // 0x38b6c8: 0x3694b420  ori         $s4, $s4, 0xB420
    ctx->pc = 0x38b6c8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)46112);
    // 0x38b6cc: 0x3673b400  ori         $s3, $s3, 0xB400
    ctx->pc = 0x38b6ccu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)46080);
    // 0x38b6d0: 0x3652b020  ori         $s2, $s2, 0xB020
    ctx->pc = 0x38b6d0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)45088);
    // 0x38b6d4: 0x36102010  ori         $s0, $s0, 0x2010
    ctx->pc = 0x38b6d4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)8208);
label_38b6d8:
    // 0x38b6d8: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x38b6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 20), 0))); // MMIO: 0x1000b420
    // 0x38b6dc: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x38B6DCu;
    {
        const bool branch_taken_0x38b6dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38b6dc) {
            ctx->pc = 0x38B6E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38B6DCu;
            // 0x38b6e0: 0x8e220878  lw          $v0, 0x878($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2168)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38B700u;
            goto label_38b700;
        }
    }
    ctx->pc = 0x38B6E4u;
    // 0x38b6e4: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x38b6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x38b6e8: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x38b6e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x38b6ec: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x38B6ECu;
    {
        const bool branch_taken_0x38b6ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38b6ec) {
            ctx->pc = 0x38B6F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38B6ECu;
            // 0x38b6f0: 0x8e220878  lw          $v0, 0x878($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2168)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38B700u;
            goto label_38b700;
        }
    }
    ctx->pc = 0x38B6F4u;
    // 0x38b6f4: 0xc0e182c  jal         func_3860B0
    ctx->pc = 0x38B6F4u;
    SET_GPR_U32(ctx, 31, 0x38B6FCu);
    ctx->pc = 0x38B6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38B6F4u;
    // 0x38b6f8: 0x8e240868  lw          $a0, 0x868($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2152)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3860B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3860B0u, 0x38B6F4u, 0x38B6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38B6FCu;
label_38b6fc:
    // 0x38b6fc: 0x8e220878  lw          $v0, 0x878($s1)
    ctx->pc = 0x38b6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2168)));
label_38b700:
    // 0x38b700: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x38B700u;
    {
        const bool branch_taken_0x38b700 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38b700) {
            ctx->pc = 0x38B768u;
            goto label_38b768;
        }
    }
    ctx->pc = 0x38B708u;
    // 0x38b708: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x38b708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x38b70c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x38B70Cu;
    {
        const bool branch_taken_0x38b70c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B70Cu;
        // 0x38b710: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b70c) {
            ctx->pc = 0x38B728u;
            goto label_38b728;
        }
    }
    ctx->pc = 0x38B714u;
    // 0x38b714: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x38b714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x38b718: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x38b718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x38b71c: 0x1040ffee  beqz        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x38B71Cu;
    {
        const bool branch_taken_0x38b71c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38b71c) {
            ctx->pc = 0x38B6D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38b6d8;
        }
    }
    ctx->pc = 0x38B724u;
label_38b724:
    // 0x38b724: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x38b724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_38b728:
    // 0x38b728: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x38b728u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x38b72c: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x38b72cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x38b730: 0x34632030  ori         $v1, $v1, 0x2030
    ctx->pc = 0x38b730u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8240);
    // 0x38b734: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x38b734u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10002020
    // 0x38b738: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x38b738u;
    SET_GPR_U64(ctx, 4, runtime->Load64(rdram, ctx, 0x10002030u));
    // 0x38b73c: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x38b73cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x38b740: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x38b740u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x38b744: 0x481000c  bgez        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x38B744u;
    {
        const bool branch_taken_0x38b744 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x38B748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B744u;
        // 0x38b748: 0xae220848  sw          $v0, 0x848($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b744) {
            ctx->pc = 0x38B778u;
            goto label_38b778;
        }
    }
    ctx->pc = 0x38B74Cu;
    // 0x38b74c: 0x30a3001f  andi        $v1, $a1, 0x1F
    ctx->pc = 0x38b74cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x38b750: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_38b754:
    if (ctx->pc == 0x38B754u) {
        ctx->pc = 0x38B754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B750u;
        // 0x38b754: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B758u;
        goto label_fallthrough_0x38b750;
    }
    ctx->pc = 0x38B750u;
    {
        const bool branch_taken_0x38b750 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B750u;
        // 0x38b754: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b750) {
            ctx->pc = 0x38B760u;
            goto label_38b760;
        }
    }
label_fallthrough_0x38b750:
    ctx->pc = 0x38B758u;
    // 0x38b758: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x38B758u;
    {
        const bool branch_taken_0x38b758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B758u;
        // 0x38b75c: 0x431023  subu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b758) {
            ctx->pc = 0x38B77Cu;
            goto label_38b77c;
        }
    }
    ctx->pc = 0x38B760u;
label_38b760:
    // 0x38b760: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x38B760u;
    {
        const bool branch_taken_0x38b760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B760u;
        // 0x38b764: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b760) {
            ctx->pc = 0x38B77Cu;
            goto label_38b77c;
        }
    }
    ctx->pc = 0x38B768u;
label_38b768:
    // 0x38b768: 0xc0e289e  jal         func_38A278
    ctx->pc = 0x38B768u;
    SET_GPR_U32(ctx, 31, 0x38B770u);
    ctx->pc = 0x38A278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A278u, 0x38B768u, 0x38B770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38B770u;
label_38b770:
    // 0x38b770: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x38B770u;
    {
        const bool branch_taken_0x38b770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B770u;
        // 0x38b774: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b770) {
            ctx->pc = 0x38B7A4u;
            goto label_38b7a4;
        }
    }
    ctx->pc = 0x38B778u;
label_38b778:
    // 0x38b778: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x38b778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_38b77c:
    // 0x38b77c: 0xae22084c  sw          $v0, 0x84C($s1)
    ctx->pc = 0x38b77cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2124), GPR_U32(ctx, 2));
    // 0x38b780: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x38b780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x38b784: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x38b784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x38b788: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x38b788u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u)); // MMIO: 0x10002010
    // 0x38b78c: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x38b78cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x38b790: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x38B790u;
    {
        const bool branch_taken_0x38b790 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B790u;
        // 0x38b794: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b790) {
            ctx->pc = 0x38B7A0u;
            goto label_38b7a0;
        }
    }
    ctx->pc = 0x38B798u;
    // 0x38b798: 0xc0e28c6  jal         func_38A318
    ctx->pc = 0x38B798u;
    SET_GPR_U32(ctx, 31, 0x38B7A0u);
    ctx->pc = 0x38B79Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38B798u;
    // 0x38b79c: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38A318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A318u, 0x38B798u, 0x38B7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38B7A0u;
label_38b7a0:
    // 0x38b7a0: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x38b7a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_38b7a4:
    // 0x38b7a4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x38B7A4u;
    {
        const bool branch_taken_0x38b7a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38B7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B7A4u;
        // 0x38b7a8: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b7a4) {
            ctx->pc = 0x38B7C0u;
            goto label_38b7c0;
        }
    }
    ctx->pc = 0x38B7ACu;
    // 0x38b7ac: 0x8e220878  lw          $v0, 0x878($s1)
    ctx->pc = 0x38b7acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2168)));
    // 0x38b7b0: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x38B7B0u;
    {
        const bool branch_taken_0x38b7b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38B7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B7B0u;
        // 0x38b7b4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b7b0) {
            ctx->pc = 0x38B820u;
            goto label_38b820;
        }
    }
    ctx->pc = 0x38B7B8u;
    // 0x38b7b8: 0x24150002  addiu       $s5, $zero, 0x2
    ctx->pc = 0x38b7b8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x38b7bc: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x38b7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_38b7c0:
    // 0x38b7c0: 0x26b0ffff  addiu       $s0, $s5, -0x1
    ctx->pc = 0x38b7c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x38b7c4: 0x2eb20001  sltiu       $s2, $s5, 0x1
    ctx->pc = 0x38b7c4u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x38b7c8: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x38b7c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x38b7cc: 0x0  nop
    ctx->pc = 0x38b7ccu;
    // NOP
label_38b7d0:
    // 0x38b7d0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x38b7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x38b7d4: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x38b7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x38b7d8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x38b7d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x38b7dc: 0x0  nop
    ctx->pc = 0x38b7dcu;
    // NOP
    // 0x38b7e0: 0x0  nop
    ctx->pc = 0x38b7e0u;
    // NOP
    // 0x38b7e4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x38B7E4u;
    {
        const bool branch_taken_0x38b7e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38b7e4) {
            ctx->pc = 0x38B7D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38b7d0;
        }
    }
    ctx->pc = 0x38B7ECu;
    // 0x38b7ec: 0x16a00006  bnez        $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x38B7ECu;
    {
        const bool branch_taken_0x38b7ec = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x38B7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B7ECu;
        // 0x38b7f0: 0x2e020002  sltiu       $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b7ec) {
            ctx->pc = 0x38B808u;
            goto label_38b808;
        }
    }
    ctx->pc = 0x38B7F4u;
    // 0x38b7f4: 0x8e250820  lw          $a1, 0x820($s1)
    ctx->pc = 0x38b7f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2080)));
    // 0x38b7f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38b7f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38b7fc: 0xc0e2cfa  jal         func_38B3E8
    ctx->pc = 0x38B7FCu;
    SET_GPR_U32(ctx, 31, 0x38B804u);
    ctx->pc = 0x38B800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38B7FCu;
    // 0x38b800: 0x2ca50001  sltiu       $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38B3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38B3E8u, 0x38B7FCu, 0x38B804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38B804u;
label_38b804:
    // 0x38b804: 0x2e020002  sltiu       $v0, $s0, 0x2
    ctx->pc = 0x38b804u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_38b808:
    // 0x38b808: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x38B808u;
    {
        const bool branch_taken_0x38b808 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B808u;
        // 0x38b80c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b808) {
            ctx->pc = 0x38B81Cu;
            goto label_38b81c;
        }
    }
    ctx->pc = 0x38B810u;
    // 0x38b810: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x38b810u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x38b814: 0xc0e28f8  jal         func_38A3E0
    ctx->pc = 0x38B814u;
    SET_GPR_U32(ctx, 31, 0x38B81Cu);
    ctx->pc = 0x38B818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38B814u;
    // 0x38b818: 0x24a594f0  addiu       $a1, $a1, -0x6B10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38A3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A3E0u, 0x38B814u, 0x38B81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38B81Cu;
label_38b81c:
    // 0x38b81c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x38b81cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_38b820:
    // 0x38b820: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x38b820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x38b824: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x38b824u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x38b828: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x38b828u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x38b82c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x38b82cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x38b830: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x38b830u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x38b834: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x38b834u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38b838: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x38b838u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38b83c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x38b83cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38b840: 0x3e00008  jr          $ra
    ctx->pc = 0x38B840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38B844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B840u;
        // 0x38b844: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38B840u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38B848u;
}
