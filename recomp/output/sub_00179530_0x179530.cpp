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

// Function: sub_00179530
// Address: 0x179530 - 0x179610
void sub_00179530_0x179530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00179530_0x179530");
#endif

    switch (ctx->pc) {
        case 0x179580u: goto label_179580;
        case 0x1795a4u: goto label_1795a4;
        case 0x1795c0u: goto label_1795c0;
        default: break;
    }

    ctx->pc = 0x179530u;

    // 0x179530: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x179530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x179534: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x179534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x179538: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x179538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17953c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17953cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179540: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x179540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x179544: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x179544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x179548: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x179548u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17954c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17954cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x179550: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x179550u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179554: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x179554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x179558: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x179558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x17955c: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x17955cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x179560: 0x92220530  lbu         $v0, 0x530($s1)
    ctx->pc = 0x179560u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1328)));
    // 0x179564: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x179564u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x179568: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x179568u;
    {
        const bool branch_taken_0x179568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17956Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179568u;
        // 0x17956c: 0x260902d  daddu       $s2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179568) {
            ctx->pc = 0x1795E4u;
            goto label_1795e4;
        }
    }
    ctx->pc = 0x179570u;
    // 0x179570: 0x24160028  addiu       $s6, $zero, 0x28
    ctx->pc = 0x179570u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x179574: 0x24150012  addiu       $s5, $zero, 0x12
    ctx->pc = 0x179574u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x179578: 0x2561018  mult        $v0, $s2, $s6
    ctx->pc = 0x179578u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x17957c: 0x0  nop
    ctx->pc = 0x17957cu;
    // NOP
label_179580:
    // 0x179580: 0x24420210  addiu       $v0, $v0, 0x210
    ctx->pc = 0x179580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 528));
    // 0x179584: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x179584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x179588: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x179588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17958c: 0x1075000c  beq         $v1, $s5, . + 4 + (0xC << 2)
    ctx->pc = 0x17958Cu;
    {
        const bool branch_taken_0x17958c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 21));
        ctx->pc = 0x179590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17958Cu;
        // 0x179590: 0x26620001  addiu       $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17958c) {
            ctx->pc = 0x1795C0u;
            goto label_1795c0;
        }
    }
    ctx->pc = 0x179594u;
    // 0x179594: 0x8c900008  lw          $s0, 0x8($a0)
    ctx->pc = 0x179594u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x179598: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x179598u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17959c: 0xc05a5fe  jal         func_1697F8
    ctx->pc = 0x17959Cu;
    SET_GPR_U32(ctx, 31, 0x1795A4u);
    ctx->pc = 0x1795A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17959Cu;
    // 0x1795a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1697F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1697F8u, 0x17959Cu, 0x1795A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1795A4u;
label_1795a4:
    // 0x1795a4: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1795A4u;
    {
        const bool branch_taken_0x1795a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1795a4) {
            ctx->pc = 0x1795A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1795A4u;
            // 0x1795a8: 0x26420001  addiu       $v0, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1795C4u;
            goto label_1795c4;
        }
    }
    ctx->pc = 0x1795ACu;
    // 0x1795ac: 0x14540005  bne         $v0, $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x1795ACu;
    {
        const bool branch_taken_0x1795ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x1795B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1795ACu;
        // 0x1795b0: 0x26420001  addiu       $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1795ac) {
            ctx->pc = 0x1795C4u;
            goto label_1795c4;
        }
    }
    ctx->pc = 0x1795B4u;
    // 0x1795b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1795b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1795b8: 0xc05e388  jal         func_178E20
    ctx->pc = 0x1795B8u;
    SET_GPR_U32(ctx, 31, 0x1795C0u);
    ctx->pc = 0x1795BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1795B8u;
    // 0x1795bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178E20u, 0x1795B8u, 0x1795C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1795C0u;
label_1795c0:
    // 0x1795c0: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x1795c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1795c4:
    // 0x1795c4: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x1795c4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1795c8: 0x2e430014  sltiu       $v1, $s2, 0x14
    ctx->pc = 0x1795c8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x1795cc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1795CCu;
    {
        const bool branch_taken_0x1795cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1795D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1795CCu;
        // 0x1795d0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1795cc) {
            ctx->pc = 0x1795E8u;
            goto label_1795e8;
        }
    }
    ctx->pc = 0x1795D4u;
    // 0x1795d4: 0x92220530  lbu         $v0, 0x530($s1)
    ctx->pc = 0x1795d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1328)));
    // 0x1795d8: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x1795d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1795dc: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x1795DCu;
    {
        const bool branch_taken_0x1795dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1795E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1795DCu;
        // 0x1795e0: 0x2561018  mult        $v0, $s2, $s6 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1795dc) {
            ctx->pc = 0x179580u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_179580;
        }
    }
    ctx->pc = 0x1795E4u;
label_1795e4:
    // 0x1795e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1795e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1795e8:
    // 0x1795e8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1795e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1795ec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1795ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1795f0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1795f0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1795f4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1795f4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1795f8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1795f8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1795fc: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1795fcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x179600: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x179600u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x179604: 0x3e00008  jr          $ra
    ctx->pc = 0x179604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179604u;
        // 0x179608: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179604u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17960Cu;
    // 0x17960c: 0x0  nop
    ctx->pc = 0x17960cu;
    // NOP
    ctx->pc = 0x179610u;
}
