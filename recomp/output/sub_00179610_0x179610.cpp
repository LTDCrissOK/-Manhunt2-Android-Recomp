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

// Function: sub_00179610
// Address: 0x179610 - 0x1796f0
void sub_00179610_0x179610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00179610_0x179610");
#endif

    switch (ctx->pc) {
        case 0x179660u: goto label_179660;
        case 0x179684u: goto label_179684;
        case 0x1796a0u: goto label_1796a0;
        default: break;
    }

    ctx->pc = 0x179610u;

    // 0x179610: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x179610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x179614: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x179614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x179618: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x179618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17961c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17961cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179620: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x179620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x179624: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x179624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x179628: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x179628u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17962c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17962cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x179630: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x179630u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179634: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x179634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x179638: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x179638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x17963c: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x17963cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x179640: 0x92220530  lbu         $v0, 0x530($s1)
    ctx->pc = 0x179640u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1328)));
    // 0x179644: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x179644u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x179648: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x179648u;
    {
        const bool branch_taken_0x179648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17964Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179648u;
        // 0x17964c: 0x260902d  daddu       $s2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179648) {
            ctx->pc = 0x1796C4u;
            goto label_1796c4;
        }
    }
    ctx->pc = 0x179650u;
    // 0x179650: 0x24160028  addiu       $s6, $zero, 0x28
    ctx->pc = 0x179650u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x179654: 0x24150012  addiu       $s5, $zero, 0x12
    ctx->pc = 0x179654u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x179658: 0x2561018  mult        $v0, $s2, $s6
    ctx->pc = 0x179658u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x17965c: 0x0  nop
    ctx->pc = 0x17965cu;
    // NOP
label_179660:
    // 0x179660: 0x24420210  addiu       $v0, $v0, 0x210
    ctx->pc = 0x179660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 528));
    // 0x179664: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x179664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x179668: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x179668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17966c: 0x1075000c  beq         $v1, $s5, . + 4 + (0xC << 2)
    ctx->pc = 0x17966Cu;
    {
        const bool branch_taken_0x17966c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 21));
        ctx->pc = 0x179670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17966Cu;
        // 0x179670: 0x26620001  addiu       $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17966c) {
            ctx->pc = 0x1796A0u;
            goto label_1796a0;
        }
    }
    ctx->pc = 0x179674u;
    // 0x179674: 0x8c900008  lw          $s0, 0x8($a0)
    ctx->pc = 0x179674u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x179678: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x179678u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17967c: 0xc05a618  jal         func_169860
    ctx->pc = 0x17967Cu;
    SET_GPR_U32(ctx, 31, 0x179684u);
    ctx->pc = 0x179680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17967Cu;
    // 0x179680: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169860u, 0x17967Cu, 0x179684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179684u;
label_179684:
    // 0x179684: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x179684u;
    {
        const bool branch_taken_0x179684 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x179684) {
            ctx->pc = 0x179688u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x179684u;
            // 0x179688: 0x26420001  addiu       $v0, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1796A4u;
            goto label_1796a4;
        }
    }
    ctx->pc = 0x17968Cu;
    // 0x17968c: 0x14540005  bne         $v0, $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x17968Cu;
    {
        const bool branch_taken_0x17968c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x179690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17968Cu;
        // 0x179690: 0x26420001  addiu       $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17968c) {
            ctx->pc = 0x1796A4u;
            goto label_1796a4;
        }
    }
    ctx->pc = 0x179694u;
    // 0x179694: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x179694u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179698: 0xc05e388  jal         func_178E20
    ctx->pc = 0x179698u;
    SET_GPR_U32(ctx, 31, 0x1796A0u);
    ctx->pc = 0x17969Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179698u;
    // 0x17969c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178E20u, 0x179698u, 0x1796A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1796A0u;
label_1796a0:
    // 0x1796a0: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x1796a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1796a4:
    // 0x1796a4: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x1796a4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1796a8: 0x2e430014  sltiu       $v1, $s2, 0x14
    ctx->pc = 0x1796a8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x1796ac: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1796ACu;
    {
        const bool branch_taken_0x1796ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1796B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1796ACu;
        // 0x1796b0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1796ac) {
            ctx->pc = 0x1796C8u;
            goto label_1796c8;
        }
    }
    ctx->pc = 0x1796B4u;
    // 0x1796b4: 0x92220530  lbu         $v0, 0x530($s1)
    ctx->pc = 0x1796b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1328)));
    // 0x1796b8: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x1796b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1796bc: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x1796BCu;
    {
        const bool branch_taken_0x1796bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1796C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1796BCu;
        // 0x1796c0: 0x2561018  mult        $v0, $s2, $s6 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1796bc) {
            ctx->pc = 0x179660u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_179660;
        }
    }
    ctx->pc = 0x1796C4u;
label_1796c4:
    // 0x1796c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1796c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1796c8:
    // 0x1796c8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1796c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1796cc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1796ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1796d0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1796d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1796d4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1796d4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1796d8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1796d8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1796dc: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1796dcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1796e0: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1796e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1796e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1796E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1796E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1796E4u;
        // 0x1796e8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1796E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1796ECu;
    // 0x1796ec: 0x0  nop
    ctx->pc = 0x1796ecu;
    // NOP
    ctx->pc = 0x1796f0u;
}
