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

// Function: sub_001792B8
// Address: 0x1792b8 - 0x179380
void sub_001792B8_0x1792b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001792B8_0x1792b8");
#endif

    switch (ctx->pc) {
        case 0x179308u: goto label_179308;
        case 0x179334u: goto label_179334;
        default: break;
    }

    ctx->pc = 0x1792b8u;

    // 0x1792b8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1792b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1792bc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1792bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1792c0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1792c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1792c4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1792c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1792c8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1792c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1792cc: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1792ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1792d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1792d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1792d4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1792d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1792d8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1792d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1792dc: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1792dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1792e0: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1792e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1792e4: 0x92420530  lbu         $v0, 0x530($s2)
    ctx->pc = 0x1792e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1328)));
    // 0x1792e8: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1792E8u;
    {
        const bool branch_taken_0x1792e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1792ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1792E8u;
        // 0x1792ec: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1792e8) {
            ctx->pc = 0x179354u;
            goto label_179354;
        }
    }
    ctx->pc = 0x1792F0u;
    // 0x1792f0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1792f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1792f4: 0x24160028  addiu       $s6, $zero, 0x28
    ctx->pc = 0x1792f4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1792f8: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x1792f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1792fc: 0x24150012  addiu       $s5, $zero, 0x12
    ctx->pc = 0x1792fcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x179300: 0x2161018  mult        $v0, $s0, $s6
    ctx->pc = 0x179300u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x179304: 0x0  nop
    ctx->pc = 0x179304u;
    // NOP
label_179308:
    // 0x179308: 0x24420210  addiu       $v0, $v0, 0x210
    ctx->pc = 0x179308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 528));
    // 0x17930c: 0x2422021  addu        $a0, $s2, $v0
    ctx->pc = 0x17930cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x179310: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x179310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x179314: 0x10750007  beq         $v1, $s5, . + 4 + (0x7 << 2)
    ctx->pc = 0x179314u;
    {
        const bool branch_taken_0x179314 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 21));
        ctx->pc = 0x179318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179314u;
        // 0x179318: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179314) {
            ctx->pc = 0x179334u;
            goto label_179334;
        }
    }
    ctx->pc = 0x17931Cu;
    // 0x17931c: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x17931Cu;
    {
        const bool branch_taken_0x17931c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x179320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17931Cu;
        // 0x179320: 0x305100ff  andi        $s1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17931c) {
            ctx->pc = 0x179334u;
            goto label_179334;
        }
    }
    ctx->pc = 0x179324u;
    // 0x179324: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x179324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x179328: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x179328u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17932c: 0xc05c126  jal         func_170498
    ctx->pc = 0x17932Cu;
    SET_GPR_U32(ctx, 31, 0x179334u);
    ctx->pc = 0x179330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17932Cu;
    // 0x179330: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x170498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x170498u, 0x17932Cu, 0x179334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179334u;
label_179334:
    // 0x179334: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x179334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x179338: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x179338u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17933c: 0x2e030014  sltiu       $v1, $s0, 0x14
    ctx->pc = 0x17933cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x179340: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x179340u;
    {
        const bool branch_taken_0x179340 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x179340) {
            ctx->pc = 0x179344u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x179340u;
            // 0x179344: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x179358u;
            goto label_179358;
        }
    }
    ctx->pc = 0x179348u;
    // 0x179348: 0x92420530  lbu         $v0, 0x530($s2)
    ctx->pc = 0x179348u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1328)));
    // 0x17934c: 0x1622ffee  bne         $s1, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x17934Cu;
    {
        const bool branch_taken_0x17934c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x179350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17934Cu;
        // 0x179350: 0x2161018  mult        $v0, $s0, $s6 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17934c) {
            ctx->pc = 0x179308u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_179308;
        }
    }
    ctx->pc = 0x179354u;
label_179354:
    // 0x179354: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x179354u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_179358:
    // 0x179358: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x179358u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17935c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17935cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x179360: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x179360u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x179364: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x179364u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x179368: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x179368u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17936c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x17936cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x179370: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x179370u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x179374: 0x3e00008  jr          $ra
    ctx->pc = 0x179374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179374u;
        // 0x179378: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179374u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17937Cu;
    // 0x17937c: 0x0  nop
    ctx->pc = 0x17937cu;
    // NOP
    ctx->pc = 0x179380u;
}
