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

// Function: sub_00179148
// Address: 0x179148 - 0x179248
void sub_00179148_0x179148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00179148_0x179148");
#endif

    switch (ctx->pc) {
        case 0x1791a8u: goto label_1791a8;
        case 0x1791e0u: goto label_1791e0;
        case 0x1791f4u: goto label_1791f4;
        default: break;
    }

    ctx->pc = 0x179148u;

    // 0x179148: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x179148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17914c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17914cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x179150: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x179150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x179154: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x179154u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179158: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x179158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17915c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x17915cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179160: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x179160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x179164: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x179164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x179168: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x179168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x17916c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x17916cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x179170: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x179170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x179174: 0x8e02059c  lw          $v0, 0x59C($s0)
    ctx->pc = 0x179174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1436)));
    // 0x179178: 0x50530027  beql        $v0, $s3, . + 4 + (0x27 << 2)
    ctx->pc = 0x179178u;
    {
        const bool branch_taken_0x179178 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        if (branch_taken_0x179178) {
            ctx->pc = 0x17917Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x179178u;
            // 0x17917c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x179218u;
            goto label_179218;
        }
    }
    ctx->pc = 0x179180u;
    // 0x179180: 0x92020530  lbu         $v0, 0x530($s0)
    ctx->pc = 0x179180u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1328)));
    // 0x179184: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x179184u;
    {
        const bool branch_taken_0x179184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x179188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179184u;
        // 0x179188: 0xae13059c  sw          $s3, 0x59C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1436), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179184) {
            ctx->pc = 0x179214u;
            goto label_179214;
        }
    }
    ctx->pc = 0x17918Cu;
    // 0x17918c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x17918cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179190: 0x24160028  addiu       $s6, $zero, 0x28
    ctx->pc = 0x179190u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x179194: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x179194u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179198: 0x24150012  addiu       $s5, $zero, 0x12
    ctx->pc = 0x179198u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x17919c: 0x24140011  addiu       $s4, $zero, 0x11
    ctx->pc = 0x17919cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1791a0: 0x2361018  mult        $v0, $s1, $s6
    ctx->pc = 0x1791a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1791a4: 0x0  nop
    ctx->pc = 0x1791a4u;
    // NOP
label_1791a8:
    // 0x1791a8: 0x24420210  addiu       $v0, $v0, 0x210
    ctx->pc = 0x1791a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 528));
    // 0x1791ac: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x1791acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1791b0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1791b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1791b4: 0x1075000f  beq         $v1, $s5, . + 4 + (0xF << 2)
    ctx->pc = 0x1791B4u;
    {
        const bool branch_taken_0x1791b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 21));
        ctx->pc = 0x1791B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1791B4u;
        // 0x1791b8: 0x26420001  addiu       $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1791b4) {
            ctx->pc = 0x1791F4u;
            goto label_1791f4;
        }
    }
    ctx->pc = 0x1791BCu;
    // 0x1791bc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1791BCu;
    {
        const bool branch_taken_0x1791bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1791C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1791BCu;
        // 0x1791c0: 0x305200ff  andi        $s2, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1791bc) {
            ctx->pc = 0x1791D4u;
            goto label_1791d4;
        }
    }
    ctx->pc = 0x1791C4u;
    // 0x1791c4: 0x10740008  beq         $v1, $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x1791C4u;
    {
        const bool branch_taken_0x1791c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        ctx->pc = 0x1791C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1791C4u;
        // 0x1791c8: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1791c4) {
            ctx->pc = 0x1791E8u;
            goto label_1791e8;
        }
    }
    ctx->pc = 0x1791CCu;
    // 0x1791cc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1791CCu;
    {
        const bool branch_taken_0x1791cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1791D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1791CCu;
        // 0x1791d0: 0x305100ff  andi        $s1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1791cc) {
            ctx->pc = 0x1791FCu;
            goto label_1791fc;
        }
    }
    ctx->pc = 0x1791D4u;
label_1791d4:
    // 0x1791d4: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1791d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1791d8: 0xc05c116  jal         func_170458
    ctx->pc = 0x1791D8u;
    SET_GPR_U32(ctx, 31, 0x1791E0u);
    ctx->pc = 0x1791DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1791D8u;
    // 0x1791dc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x170458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x170458u, 0x1791D8u, 0x1791E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1791E0u;
label_1791e0:
    // 0x1791e0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1791E0u;
    {
        const bool branch_taken_0x1791e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1791E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1791E0u;
        // 0x1791e4: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1791e0) {
            ctx->pc = 0x1791F8u;
            goto label_1791f8;
        }
    }
    ctx->pc = 0x1791E8u;
label_1791e8:
    // 0x1791e8: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1791e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1791ec: 0xc05d5ba  jal         func_1756E8
    ctx->pc = 0x1791ECu;
    SET_GPR_U32(ctx, 31, 0x1791F4u);
    ctx->pc = 0x1791F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1791ECu;
    // 0x1791f0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1756E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1756E8u, 0x1791ECu, 0x1791F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1791F4u;
label_1791f4:
    // 0x1791f4: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x1791f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1791f8:
    // 0x1791f8: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x1791f8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1791fc:
    // 0x1791fc: 0x2e230014  sltiu       $v1, $s1, 0x14
    ctx->pc = 0x1791fcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x179200: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x179200u;
    {
        const bool branch_taken_0x179200 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x179200) {
            ctx->pc = 0x179204u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x179200u;
            // 0x179204: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x179218u;
            goto label_179218;
        }
    }
    ctx->pc = 0x179208u;
    // 0x179208: 0x92020530  lbu         $v0, 0x530($s0)
    ctx->pc = 0x179208u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1328)));
    // 0x17920c: 0x1642ffe6  bne         $s2, $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x17920Cu;
    {
        const bool branch_taken_0x17920c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x179210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17920Cu;
        // 0x179210: 0x2361018  mult        $v0, $s1, $s6 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17920c) {
            ctx->pc = 0x1791A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1791a8;
        }
    }
    ctx->pc = 0x179214u;
label_179214:
    // 0x179214: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x179214u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_179218:
    // 0x179218: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x179218u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17921c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17921cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x179220: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x179220u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x179224: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x179224u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x179228: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x179228u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17922c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x17922cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x179230: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x179230u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x179234: 0x3e00008  jr          $ra
    ctx->pc = 0x179234u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179234u;
        // 0x179238: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179234u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17923Cu;
    // 0x17923c: 0x0  nop
    ctx->pc = 0x17923cu;
    // NOP
    // 0x179240: 0x0  nop
    ctx->pc = 0x179240u;
    // NOP
    // 0x179244: 0x0  nop
    ctx->pc = 0x179244u;
    // NOP
    ctx->pc = 0x179248u;
}
