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

// Function: sub_0013D608
// Address: 0x13d608 - 0x13d7f4
void sub_0013D608_0x13d608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013D608_0x13d608");
#endif

    switch (ctx->pc) {
        case 0x13d630u: goto label_13d630;
        case 0x13d658u: goto label_13d658;
        case 0x13d680u: goto label_13d680;
        case 0x13d6b0u: goto label_13d6b0;
        default: break;
    }

    ctx->pc = 0x13d608u;

    // 0x13d608: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13d608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13d60c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x13d60cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x13d610: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13d610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13d614: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x13d614u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d618: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13d618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x13d61c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x13d61cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d620: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x13d620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x13d624: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x13d624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x13d628: 0xc04f02a  jal         func_13C0A8
    ctx->pc = 0x13D628u;
    SET_GPR_U32(ctx, 31, 0x13D630u);
    ctx->pc = 0x13D62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D628u;
    // 0x13d62c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C0A8u, 0x13D628u, 0x13D630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D630u;
label_13d630:
    // 0x13d630: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x13d630u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d634: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13D634u;
    {
        const bool branch_taken_0x13d634 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D634u;
        // 0x13d638: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d634) {
            ctx->pc = 0x13D644u;
            goto label_13d644;
        }
    }
    ctx->pc = 0x13D63Cu;
    // 0x13d63c: 0x14620027  bne         $v1, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x13D63Cu;
    {
        const bool branch_taken_0x13d63c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x13D640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D63Cu;
        // 0x13d640: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d63c) {
            ctx->pc = 0x13D6DCu;
            goto label_13d6dc;
        }
    }
    ctx->pc = 0x13D644u;
label_13d644:
    // 0x13d644: 0x16000025  bnez        $s0, . + 4 + (0x25 << 2)
    ctx->pc = 0x13D644u;
    {
        const bool branch_taken_0x13d644 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x13D648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D644u;
        // 0x13d648: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d644) {
            ctx->pc = 0x13D6DCu;
            goto label_13d6dc;
        }
    }
    ctx->pc = 0x13D64Cu;
    // 0x13d64c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x13d64cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x13d650: 0x56220003  bnel        $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13D650u;
    {
        const bool branch_taken_0x13d650 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x13d650) {
            ctx->pc = 0x13D654u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13D650u;
            // 0x13d654: 0x92420009  lbu         $v0, 0x9($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 9)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13D660u;
            goto label_13d660;
        }
    }
    ctx->pc = 0x13D658u;
label_13d658:
    // 0x13d658: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x13D658u;
    {
        const bool branch_taken_0x13d658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D658u;
        // 0x13d65c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d658) {
            ctx->pc = 0x13D6DCu;
            goto label_13d6dc;
        }
    }
    ctx->pc = 0x13D660u;
label_13d660:
    // 0x13d660: 0x0  nop
    ctx->pc = 0x13d660u;
    // NOP
    // 0x13d664: 0x0  nop
    ctx->pc = 0x13d664u;
    // NOP
    // 0x13d668: 0x1040fffb  beqz        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x13D668u;
    {
        const bool branch_taken_0x13d668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D668u;
        // 0x13d66c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d668) {
            ctx->pc = 0x13D658u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13d658;
        }
    }
    ctx->pc = 0x13D670u;
    // 0x13d670: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x13d670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x13d674: 0x24539b10  addiu       $s3, $v0, -0x64F0
    ctx->pc = 0x13d674u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941456));
    // 0x13d678: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x13d678u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d67c: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x13d67cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_13d680:
    // 0x13d680: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x13d680u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x13d684: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13d684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13d688: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x13d688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13d68c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x13D68Cu;
    {
        const bool branch_taken_0x13d68c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D68Cu;
        // 0x13d690: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d68c) {
            ctx->pc = 0x13D6B8u;
            goto label_13d6b8;
        }
    }
    ctx->pc = 0x13D694u;
    // 0x13d694: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x13d694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x13d698: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x13d698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x13d69c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x13d69cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13d6a0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13D6A0u;
    {
        const bool branch_taken_0x13d6a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D6A0u;
        // 0x13d6a4: 0x307100ff  andi        $s1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d6a0) {
            ctx->pc = 0x13D6B8u;
            goto label_13d6b8;
        }
    }
    ctx->pc = 0x13D6A8u;
    // 0x13d6a8: 0xc09526c  jal         func_2549B0
    ctx->pc = 0x13D6A8u;
    SET_GPR_U32(ctx, 31, 0x13D6B0u);
    ctx->pc = 0x2549B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2549B0u, 0x13D6A8u, 0x13D6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D6B0u;
label_13d6b0:
    // 0x13d6b0: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x13D6B0u;
    {
        const bool branch_taken_0x13d6b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13D6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D6B0u;
        // 0x13d6b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d6b0) {
            ctx->pc = 0x13D6DCu;
            goto label_13d6dc;
        }
    }
    ctx->pc = 0x13D6B8u;
label_13d6b8:
    // 0x13d6b8: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x13d6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x13d6bc: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x13d6bcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13d6c0: 0x2e030010  sltiu       $v1, $s0, 0x10
    ctx->pc = 0x13d6c0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x13d6c4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x13D6C4u;
    {
        const bool branch_taken_0x13d6c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D6C4u;
        // 0x13d6c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d6c4) {
            ctx->pc = 0x13D6DCu;
            goto label_13d6dc;
        }
    }
    ctx->pc = 0x13D6CCu;
    // 0x13d6cc: 0x92420009  lbu         $v0, 0x9($s2)
    ctx->pc = 0x13d6ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 9)));
    // 0x13d6d0: 0x5622ffeb  bnel        $s1, $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x13D6D0u;
    {
        const bool branch_taken_0x13d6d0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x13d6d0) {
            ctx->pc = 0x13D6D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13D6D0u;
            // 0x13d6d4: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13D680u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13d680;
        }
    }
    ctx->pc = 0x13D6D8u;
    // 0x13d6d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13d6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13d6dc:
    // 0x13d6dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13d6dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13d6e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13d6e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13d6e4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x13d6e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d6e8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x13d6e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13d6ec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x13d6ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13d6f0: 0x3e00008  jr          $ra
    ctx->pc = 0x13D6F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13D6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D6F0u;
        // 0x13d6f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D6F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13D6F8u;
    // 0x13d6f8: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x13d6f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x13d6fc: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x13d6fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x13d700: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x13d700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x13d704: 0x8c83022c  lw          $v1, 0x22C($a0)
    ctx->pc = 0x13d704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 556)));
    // 0x13d708: 0x2c62001b  sltiu       $v0, $v1, 0x1B
    ctx->pc = 0x13d708u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)27) ? 1 : 0);
    // 0x13d70c: 0x10400113  beqz        $v0, . + 4 + (0x113 << 2)
    ctx->pc = 0x13D70Cu;
    {
        const bool branch_taken_0x13d70c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D70Cu;
        // 0x13d710: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d70c) {
            ctx->pc = 0x13DB5Cu;
            return;
        }
    }
    ctx->pc = 0x13D714u;
    // 0x13d714: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x13d714u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x13d718: 0x2442e850  addiu       $v0, $v0, -0x17B0
    ctx->pc = 0x13d718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961232));
    // 0x13d71c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x13d71cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13d720: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x13d720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13d724: 0x800008  jr          $a0
    ctx->pc = 0x13D724u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13D72Cu: goto label_13d72c;
            case 0x13D754u: goto label_13d754;
            case 0x13D77Cu: goto label_13d77c;
            case 0x13D7A4u: goto label_13d7a4;
            case 0x13D7CCu: goto label_13d7cc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D724u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x13D72Cu;
label_13d72c:
    // 0x13d72c: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x13d72cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x13d730: 0x2447e738  addiu       $a3, $v0, -0x18C8
    ctx->pc = 0x13d730u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960952));
    // 0x13d734: 0x88e30003  lwl         $v1, 0x3($a3)
    ctx->pc = 0x13d734u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x13d738: 0x98e30000  lwr         $v1, 0x0($a3)
    ctx->pc = 0x13d738u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x13d73c: 0x80e40004  lb          $a0, 0x4($a3)
    ctx->pc = 0x13d73cu;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x43E73Cu));
    // 0x13d740: 0xa8c30003  swl         $v1, 0x3($a2)
    ctx->pc = 0x13d740u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x13d744: 0xb8c30000  swr         $v1, 0x0($a2)
    ctx->pc = 0x13d744u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x13d748: 0xa0c40004  sb          $a0, 0x4($a2)
    ctx->pc = 0x13d748u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4), (uint8_t)GPR_U32(ctx, 4));
    // 0x13d74c: 0x3e00008  jr          $ra
    ctx->pc = 0x13D74Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D74Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13D754u;
label_13d754:
    // 0x13d754: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x13d754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x13d758: 0x2447e740  addiu       $a3, $v0, -0x18C0
    ctx->pc = 0x13d758u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960960));
    // 0x13d75c: 0x88e30003  lwl         $v1, 0x3($a3)
    ctx->pc = 0x13d75cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x13d760: 0x98e30000  lwr         $v1, 0x0($a3)
    ctx->pc = 0x13d760u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x13d764: 0x80e40004  lb          $a0, 0x4($a3)
    ctx->pc = 0x13d764u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x43E744u));
    // 0x13d768: 0xa8c30003  swl         $v1, 0x3($a2)
    ctx->pc = 0x13d768u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x13d76c: 0xb8c30000  swr         $v1, 0x0($a2)
    ctx->pc = 0x13d76cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x13d770: 0xa0c40004  sb          $a0, 0x4($a2)
    ctx->pc = 0x13d770u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4), (uint8_t)GPR_U32(ctx, 4));
    // 0x13d774: 0x3e00008  jr          $ra
    ctx->pc = 0x13D774u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D774u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13D77Cu;
label_13d77c:
    // 0x13d77c: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x13d77cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x13d780: 0x2447e748  addiu       $a3, $v0, -0x18B8
    ctx->pc = 0x13d780u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960968));
    // 0x13d784: 0x68e30007  ldl         $v1, 0x7($a3)
    ctx->pc = 0x13d784u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x13d788: 0x6ce30000  ldr         $v1, 0x0($a3)
    ctx->pc = 0x13d788u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x13d78c: 0x80e40008  lb          $a0, 0x8($a3)
    ctx->pc = 0x13d78cu;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x43E750u));
    // 0x13d790: 0xb0c30007  sdl         $v1, 0x7($a2)
    ctx->pc = 0x13d790u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13d794: 0xb4c30000  sdr         $v1, 0x0($a2)
    ctx->pc = 0x13d794u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13d798: 0xa0c40008  sb          $a0, 0x8($a2)
    ctx->pc = 0x13d798u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 8), (uint8_t)GPR_U32(ctx, 4));
    // 0x13d79c: 0x3e00008  jr          $ra
    ctx->pc = 0x13D79Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D79Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13D7A4u;
label_13d7a4:
    // 0x13d7a4: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x13d7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x13d7a8: 0x2447e758  addiu       $a3, $v0, -0x18A8
    ctx->pc = 0x13d7a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960984));
    // 0x13d7ac: 0x68e30007  ldl         $v1, 0x7($a3)
    ctx->pc = 0x13d7acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x13d7b0: 0x6ce30000  ldr         $v1, 0x0($a3)
    ctx->pc = 0x13d7b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x13d7b4: 0x80e40008  lb          $a0, 0x8($a3)
    ctx->pc = 0x13d7b4u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x43E760u));
    // 0x13d7b8: 0xb0c30007  sdl         $v1, 0x7($a2)
    ctx->pc = 0x13d7b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13d7bc: 0xb4c30000  sdr         $v1, 0x0($a2)
    ctx->pc = 0x13d7bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13d7c0: 0xa0c40008  sb          $a0, 0x8($a2)
    ctx->pc = 0x13d7c0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 8), (uint8_t)GPR_U32(ctx, 4));
    // 0x13d7c4: 0x3e00008  jr          $ra
    ctx->pc = 0x13D7C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D7C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13D7CCu;
label_13d7cc:
    // 0x13d7cc: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x13d7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x13d7d0: 0x2447e768  addiu       $a3, $v0, -0x1898
    ctx->pc = 0x13d7d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961000));
    // 0x13d7d4: 0x68e30007  ldl         $v1, 0x7($a3)
    ctx->pc = 0x13d7d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x13d7d8: 0x6ce30000  ldr         $v1, 0x0($a3)
    ctx->pc = 0x13d7d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x13d7dc: 0x80e40008  lb          $a0, 0x8($a3)
    ctx->pc = 0x13d7dcu;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x43E770u));
    // 0x13d7e0: 0xb0c30007  sdl         $v1, 0x7($a2)
    ctx->pc = 0x13d7e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13d7e4: 0xb4c30000  sdr         $v1, 0x0($a2)
    ctx->pc = 0x13d7e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13d7e8: 0xa0c40008  sb          $a0, 0x8($a2)
    ctx->pc = 0x13d7e8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 8), (uint8_t)GPR_U32(ctx, 4));
    // 0x13d7ec: 0x3e00008  jr          $ra
    ctx->pc = 0x13D7ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D7ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13D7F4u;
}
