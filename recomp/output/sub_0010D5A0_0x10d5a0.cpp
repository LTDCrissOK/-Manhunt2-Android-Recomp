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

// Function: sub_0010D5A0
// Address: 0x10d5a0 - 0x10d678
void sub_0010D5A0_0x10d5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010D5A0_0x10d5a0");
#endif

    switch (ctx->pc) {
        case 0x10d5e8u: goto label_10d5e8;
        case 0x10d614u: goto label_10d614;
        case 0x10d628u: goto label_10d628;
        case 0x10d634u: goto label_10d634;
        default: break;
    }

    ctx->pc = 0x10d5a0u;

    // 0x10d5a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x10d5a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x10d5a4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x10d5a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x10d5a8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x10d5a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x10d5ac: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x10d5acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d5b0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x10d5b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x10d5b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10d5b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10d5b8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x10d5b8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d5bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10d5bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10d5c0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x10d5c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x10d5c4: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x10d5c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x10d5c8: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x10d5c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x10d5cc: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x10d5ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x10d5d0: 0x92a200cc  lbu         $v0, 0xCC($s5)
    ctx->pc = 0x10d5d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 204)));
    // 0x10d5d4: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x10D5D4u;
    {
        const bool branch_taken_0x10d5d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D5D4u;
        // 0x10d5d8: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d5d4) {
            ctx->pc = 0x10D64Cu;
            goto label_10d64c;
        }
    }
    ctx->pc = 0x10D5DCu;
    // 0x10d5dc: 0x26b6000c  addiu       $s6, $s5, 0xC
    ctx->pc = 0x10d5dcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 21), 12));
    // 0x10d5e0: 0x3c170049  lui         $s7, 0x49
    ctx->pc = 0x10d5e0u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)73 << 16));
    // 0x10d5e4: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x10d5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_10d5e8:
    // 0x10d5e8: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x10d5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x10d5ec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x10d5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10d5f0: 0x8c70001c  lw          $s0, 0x1C($v1)
    ctx->pc = 0x10d5f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x10d5f4: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x10d5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x10d5f8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x10D5F8u;
    {
        const bool branch_taken_0x10d5f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D5F8u;
        // 0x10d5fc: 0x26f3b060  addiu       $s3, $s7, -0x4FA0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 4294946912));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d5f8) {
            ctx->pc = 0x10D634u;
            goto label_10d634;
        }
    }
    ctx->pc = 0x10D600u;
    // 0x10d600: 0x8e110010  lw          $s1, 0x10($s0)
    ctx->pc = 0x10d600u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x10d604: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x10d604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d608: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x10d608u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d60c: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x10D60Cu;
    SET_GPR_U32(ctx, 31, 0x10D614u);
    ctx->pc = 0x10D610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D60Cu;
    // 0x10d610: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x10D60Cu, 0x10D614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D614u;
label_10d614:
    // 0x10d614: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10D614u;
    {
        const bool branch_taken_0x10d614 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D614u;
        // 0x10d618: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d614) {
            ctx->pc = 0x10D628u;
            goto label_10d628;
        }
    }
    ctx->pc = 0x10D61Cu;
    // 0x10d61c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10d61cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d620: 0xc04adaa  jal         func_12B6A8
    ctx->pc = 0x10D620u;
    SET_GPR_U32(ctx, 31, 0x10D628u);
    ctx->pc = 0x10D624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D620u;
    // 0x10d624: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B6A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B6A8u, 0x10D620u, 0x10D628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D628u;
label_10d628:
    // 0x10d628: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10d628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d62c: 0xc044174  jal         func_1105D0
    ctx->pc = 0x10D62Cu;
    SET_GPR_U32(ctx, 31, 0x10D634u);
    ctx->pc = 0x10D630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D62Cu;
    // 0x10d630: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1105D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1105D0u, 0x10D62Cu, 0x10D634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D634u;
label_10d634:
    // 0x10d634: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x10d634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x10d638: 0x92a200cc  lbu         $v0, 0xCC($s5)
    ctx->pc = 0x10d638u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 204)));
    // 0x10d63c: 0x307200ff  andi        $s2, $v1, 0xFF
    ctx->pc = 0x10d63cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x10d640: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x10d640u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x10d644: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x10D644u;
    {
        const bool branch_taken_0x10d644 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10D648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D644u;
        // 0x10d648: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d644) {
            ctx->pc = 0x10D5E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10d5e8;
        }
    }
    ctx->pc = 0x10D64Cu;
label_10d64c:
    // 0x10d64c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10d64cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10d650: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10d650u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10d654: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x10d654u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10d658: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x10d658u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10d65c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x10d65cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10d660: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x10d660u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x10d664: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x10d664u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10d668: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x10d668u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x10d66c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x10d66cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10d670: 0x3e00008  jr          $ra
    ctx->pc = 0x10D670u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10D674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D670u;
        // 0x10d674: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10D670u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10D678u;
}
