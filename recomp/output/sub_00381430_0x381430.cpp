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

// Function: sub_00381430
// Address: 0x381430 - 0x3814b0
void sub_00381430_0x381430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00381430_0x381430");
#endif

    switch (ctx->pc) {
        case 0x381430u: goto label_381430;
        case 0x381434u: goto label_381434;
        case 0x381438u: goto label_381438;
        case 0x38143cu: goto label_38143c;
        case 0x381440u: goto label_381440;
        case 0x381444u: goto label_381444;
        case 0x381448u: goto label_381448;
        case 0x38144cu: goto label_38144c;
        case 0x381450u: goto label_381450;
        case 0x381454u: goto label_381454;
        case 0x381458u: goto label_381458;
        case 0x38145cu: goto label_38145c;
        case 0x381460u: goto label_381460;
        case 0x381464u: goto label_381464;
        case 0x381468u: goto label_381468;
        case 0x38146cu: goto label_38146c;
        case 0x381470u: goto label_381470;
        case 0x381474u: goto label_381474;
        case 0x381478u: goto label_381478;
        case 0x38147cu: goto label_38147c;
        case 0x381480u: goto label_381480;
        case 0x381484u: goto label_381484;
        case 0x381488u: goto label_381488;
        case 0x38148cu: goto label_38148c;
        case 0x381490u: goto label_381490;
        case 0x381494u: goto label_381494;
        case 0x381498u: goto label_381498;
        case 0x38149cu: goto label_38149c;
        case 0x3814a0u: goto label_3814a0;
        case 0x3814a4u: goto label_3814a4;
        case 0x3814a8u: goto label_3814a8;
        case 0x3814acu: goto label_3814ac;
        default: break;
    }

    ctx->pc = 0x381430u;

label_381430:
    // 0x381430: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x381430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_381434:
    // 0x381434: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x381434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_381438:
    // 0x381438: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x381438u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38143c:
    // 0x38143c: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_381440:
    if (ctx->pc == 0x381440u) {
        ctx->pc = 0x381440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38143Cu;
        // 0x381440: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x381444u;
        goto label_381444;
    }
    ctx->pc = 0x38143Cu;
    {
        const bool branch_taken_0x38143c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x381440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38143Cu;
        // 0x381440: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38143c) {
            ctx->pc = 0x38145Cu;
            goto label_38145c;
        }
    }
    ctx->pc = 0x381444u;
label_381444:
    // 0x381444: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x381444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_381448:
    // 0x381448: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
label_38144c:
    if (ctx->pc == 0x38144Cu) {
        ctx->pc = 0x38144Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381448u;
        // 0x38144c: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x381450u;
        goto label_381450;
    }
    ctx->pc = 0x381448u;
    {
        const bool branch_taken_0x381448 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x38144Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381448u;
        // 0x38144c: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381448) {
            ctx->pc = 0x38148Cu;
            goto label_38148c;
        }
    }
    ctx->pc = 0x381450u;
label_381450:
    // 0x381450: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x381450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_381454:
    // 0x381454: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_381458:
    if (ctx->pc == 0x381458u) {
        ctx->pc = 0x381458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381454u;
        // 0x381458: 0x8c840020  lw          $a0, 0x20($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38145Cu;
        goto label_38145c;
    }
    ctx->pc = 0x381454u;
    {
        const bool branch_taken_0x381454 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x381454) {
            ctx->pc = 0x381458u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x381454u;
            // 0x381458: 0x8c840020  lw          $a0, 0x20($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x381464u;
            goto label_381464;
        }
    }
    ctx->pc = 0x38145Cu;
label_38145c:
    // 0x38145c: 0x1000000b  b           . + 4 + (0xB << 2)
label_381460:
    if (ctx->pc == 0x381460u) {
        ctx->pc = 0x381460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38145Cu;
        // 0x381460: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x381464u;
        goto label_381464;
    }
    ctx->pc = 0x38145Cu;
    {
        const bool branch_taken_0x38145c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x381460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38145Cu;
        // 0x381460: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38145c) {
            ctx->pc = 0x38148Cu;
            goto label_38148c;
        }
    }
    ctx->pc = 0x381464u;
label_381464:
    // 0x381464: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_381468:
    if (ctx->pc == 0x381468u) {
        ctx->pc = 0x381468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381464u;
        // 0x381468: 0x8e02002c  lw          $v0, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38146Cu;
        goto label_38146c;
    }
    ctx->pc = 0x381464u;
    {
        const bool branch_taken_0x381464 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x381464) {
            ctx->pc = 0x381468u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x381464u;
            // 0x381468: 0x8e02002c  lw          $v0, 0x2C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x381478u;
            goto label_381478;
        }
    }
    ctx->pc = 0x38146Cu;
label_38146c:
    // 0x38146c: 0xc0e091c  jal         func_382470
label_381470:
    if (ctx->pc == 0x381470u) {
        ctx->pc = 0x381470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38146Cu;
        // 0x381470: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x381474u;
        goto label_381474;
    }
    ctx->pc = 0x38146Cu;
    SET_GPR_U32(ctx, 31, 0x381474u);
    ctx->pc = 0x381470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38146Cu;
    // 0x381470: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x382470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x382470u, 0x38146Cu, 0x381474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x381474u;
label_381474:
    // 0x381474: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x381474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_381478:
    // 0x381478: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x381478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_38147c:
    // 0x38147c: 0x40f809  jalr        $v0
label_381480:
    if (ctx->pc == 0x381480u) {
        ctx->pc = 0x381480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38147Cu;
        // 0x381480: 0x8e050024  lw          $a1, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x381484u;
        goto label_381484;
    }
    ctx->pc = 0x38147Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x381484u);
        ctx->pc = 0x381480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38147Cu;
        // 0x381480: 0x8e050024  lw          $a1, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38147Cu, 0x381484u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x381484u;
label_381484:
    // 0x381484: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x381484u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
label_381488:
    // 0x381488: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x381488u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38148c:
    // 0x38148c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x38148cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_381490:
    // 0x381490: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x381490u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_381494:
    // 0x381494: 0x3e00008  jr          $ra
label_381498:
    if (ctx->pc == 0x381498u) {
        ctx->pc = 0x381498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381494u;
        // 0x381498: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38149Cu;
        goto label_38149c;
    }
    ctx->pc = 0x381494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x381498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381494u;
        // 0x381498: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x381494u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38149Cu;
label_38149c:
    // 0x38149c: 0x0  nop
    ctx->pc = 0x38149cu;
    // NOP
label_3814a0:
    // 0x3814a0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x3814a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3814a4:
    // 0x3814a4: 0x0  nop
    ctx->pc = 0x3814a4u;
    // NOP
label_3814a8:
    // 0x3814a8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3814a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3814ac:
    // 0x3814ac: 0x0  nop
    ctx->pc = 0x3814acu;
    // NOP
    ctx->pc = 0x3814b0u;
}
