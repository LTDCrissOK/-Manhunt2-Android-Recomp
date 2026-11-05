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

// Function: sub_00225360
// Address: 0x225360 - 0x2253c0
void sub_00225360_0x225360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225360_0x225360");
#endif

    switch (ctx->pc) {
        case 0x225360u: goto label_225360;
        case 0x225364u: goto label_225364;
        case 0x225368u: goto label_225368;
        case 0x22536cu: goto label_22536c;
        case 0x225370u: goto label_225370;
        case 0x225374u: goto label_225374;
        case 0x225378u: goto label_225378;
        case 0x22537cu: goto label_22537c;
        case 0x225380u: goto label_225380;
        case 0x225384u: goto label_225384;
        case 0x225388u: goto label_225388;
        case 0x22538cu: goto label_22538c;
        case 0x225390u: goto label_225390;
        case 0x225394u: goto label_225394;
        case 0x225398u: goto label_225398;
        case 0x22539cu: goto label_22539c;
        case 0x2253a0u: goto label_2253a0;
        case 0x2253a4u: goto label_2253a4;
        case 0x2253a8u: goto label_2253a8;
        case 0x2253acu: goto label_2253ac;
        case 0x2253b0u: goto label_2253b0;
        case 0x2253b4u: goto label_2253b4;
        case 0x2253b8u: goto label_2253b8;
        case 0x2253bcu: goto label_2253bc;
        default: break;
    }

    ctx->pc = 0x225360u;

label_225360:
    // 0x225360: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x225360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_225364:
    // 0x225364: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x225364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
label_225368:
    // 0x225368: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x225368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_22536c:
    // 0x22536c: 0x244219e8  addiu       $v0, $v0, 0x19E8
    ctx->pc = 0x22536cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6632));
label_225370:
    // 0x225370: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x225370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_225374:
    // 0x225374: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x225374u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_225378:
    // 0x225378: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x225378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_22537c:
    // 0x22537c: 0xae020218  sw          $v0, 0x218($s0)
    ctx->pc = 0x22537cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 536), GPR_U32(ctx, 2));
label_225380:
    // 0x225380: 0x8e040224  lw          $a0, 0x224($s0)
    ctx->pc = 0x225380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
label_225384:
    // 0x225384: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_225388:
    if (ctx->pc == 0x225388u) {
        ctx->pc = 0x225388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225384u;
        // 0x225388: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22538Cu;
        goto label_22538c;
    }
    ctx->pc = 0x225384u;
    {
        const bool branch_taken_0x225384 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x225388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225384u;
        // 0x225388: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225384) {
            ctx->pc = 0x22539Cu;
            goto label_22539c;
        }
    }
    ctx->pc = 0x22538Cu;
label_22538c:
    // 0x22538c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x22538cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_225390:
    // 0x225390: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x225390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_225394:
    // 0x225394: 0x40f809  jalr        $v0
label_225398:
    if (ctx->pc == 0x225398u) {
        ctx->pc = 0x225398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225394u;
        // 0x225398: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22539Cu;
        goto label_22539c;
    }
    ctx->pc = 0x225394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22539Cu);
        ctx->pc = 0x225398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225394u;
        // 0x225398: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225394u, 0x22539Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22539Cu;
label_22539c:
    // 0x22539c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22539cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2253a0:
    // 0x2253a0: 0xc0836c2  jal         func_20DB08
label_2253a4:
    if (ctx->pc == 0x2253A4u) {
        ctx->pc = 0x2253A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2253A0u;
        // 0x2253a4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2253A8u;
        goto label_2253a8;
    }
    ctx->pc = 0x2253A0u;
    SET_GPR_U32(ctx, 31, 0x2253A8u);
    ctx->pc = 0x2253A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2253A0u;
    // 0x2253a4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DB08u, 0x2253A0u, 0x2253A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2253A8u;
label_2253a8:
    // 0x2253a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2253a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2253ac:
    // 0x2253ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2253acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2253b0:
    // 0x2253b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2253b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2253b4:
    // 0x2253b4: 0x3e00008  jr          $ra
label_2253b8:
    if (ctx->pc == 0x2253B8u) {
        ctx->pc = 0x2253B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2253B4u;
        // 0x2253b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2253BCu;
        goto label_2253bc;
    }
    ctx->pc = 0x2253B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2253B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2253B4u;
        // 0x2253b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2253B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2253BCu;
label_2253bc:
    // 0x2253bc: 0x0  nop
    ctx->pc = 0x2253bcu;
    // NOP
    ctx->pc = 0x2253c0u;
}
