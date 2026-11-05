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

// Function: sub_00125280
// Address: 0x125280 - 0x1253a8
void sub_00125280_0x125280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00125280_0x125280");
#endif

    switch (ctx->pc) {
        case 0x1252f8u: goto label_1252f8;
        case 0x125310u: goto label_125310;
        default: break;
    }

    ctx->pc = 0x125280u;

    // 0x125280: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x125280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x125284: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x125284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x125288: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x125288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12528c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x12528cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x125290: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x125290u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125294: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x125294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x125298: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x125298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x12529c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x12529cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1252a0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1252a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1252a4: 0x8c43a9d4  lw          $v1, -0x562C($v0)
    ctx->pc = 0x1252a4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FA9D4u));
    // 0x1252a8: 0x8e240fb4  lw          $a0, 0xFB4($s1)
    ctx->pc = 0x1252a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4020)));
    // 0x1252ac: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x1252acu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1252b0: 0x14600031  bnez        $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x1252B0u;
    {
        const bool branch_taken_0x1252b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1252B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1252B0u;
        // 0x1252b4: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1252b0) {
            ctx->pc = 0x125378u;
            goto label_125378;
        }
    }
    ctx->pc = 0x1252B8u;
    // 0x1252b8: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x1252b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x1252bc: 0x24723500  addiu       $s2, $v1, 0x3500
    ctx->pc = 0x1252bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 13568));
    // 0x1252c0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1252c0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4A3504u));
    // 0x1252c4: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x1252c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x4A350Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4A350Cu, _value); } while (0);
    // 0x1252c8: 0xa2200fb0  sb          $zero, 0xFB0($s1)
    ctx->pc = 0x1252c8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4016), (uint8_t)GPR_U32(ctx, 0));
    // 0x1252cc: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x1252ccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4A350Cu));
    // 0x1252d0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1252D0u;
    {
        const bool branch_taken_0x1252d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1252D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1252D0u;
        // 0x1252d4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1252d0) {
            ctx->pc = 0x1252DCu;
            goto label_1252dc;
        }
    }
    ctx->pc = 0x1252D8u;
    // 0x1252d8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1252d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1252dc:
    // 0x1252dc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1252DCu;
    {
        const bool branch_taken_0x1252dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1252E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1252DCu;
        // 0x1252e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1252dc) {
            ctx->pc = 0x1252ECu;
            goto label_1252ec;
        }
    }
    ctx->pc = 0x1252E4u;
    // 0x1252e4: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1252e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1252e8: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x1252e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_1252ec:
    // 0x1252ec: 0x1200001e  beqz        $s0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1252ECu;
    {
        const bool branch_taken_0x1252ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1252F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1252ECu;
        // 0x1252f0: 0x24130067  addiu       $s3, $zero, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1252ec) {
            ctx->pc = 0x125368u;
            goto label_125368;
        }
    }
    ctx->pc = 0x1252F4u;
    // 0x1252f4: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x1252f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_1252f8:
    // 0x1252f8: 0x30421001  andi        $v0, $v0, 0x1001
    ctx->pc = 0x1252f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4097);
    // 0x1252fc: 0x38421001  xori        $v0, $v0, 0x1001
    ctx->pc = 0x1252fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4097);
    // 0x125300: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x125300u;
    {
        const bool branch_taken_0x125300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x125300) {
            ctx->pc = 0x125304u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x125300u;
            // 0x125304: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x125340u;
            goto label_125340;
        }
    }
    ctx->pc = 0x125308u;
    // 0x125308: 0xc097f26  jal         func_25FC98
    ctx->pc = 0x125308u;
    SET_GPR_U32(ctx, 31, 0x125310u);
    ctx->pc = 0x12530Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125308u;
    // 0x12530c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x125308u, 0x125310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125310u;
label_125310:
    // 0x125310: 0x5453000b  bnel        $v0, $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x125310u;
    {
        const bool branch_taken_0x125310 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x125310) {
            ctx->pc = 0x125314u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x125310u;
            // 0x125314: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x125340u;
            goto label_125340;
        }
    }
    ctx->pc = 0x125318u;
    // 0x125318: 0x82230fb0  lb          $v1, 0xFB0($s1)
    ctx->pc = 0x125318u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 4016)));
    // 0x12531c: 0x28620014  slti        $v0, $v1, 0x14
    ctx->pc = 0x12531cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x125320: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x125320u;
    {
        const bool branch_taken_0x125320 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x125324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125320u;
        // 0x125324: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125320) {
            ctx->pc = 0x12533Cu;
            goto label_12533c;
        }
    }
    ctx->pc = 0x125328u;
    // 0x125328: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x125328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x12532c: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x12532cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x125330: 0x92230fb0  lbu         $v1, 0xFB0($s1)
    ctx->pc = 0x125330u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4016)));
    // 0x125334: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x125334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x125338: 0xa2230fb0  sb          $v1, 0xFB0($s1)
    ctx->pc = 0x125338u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4016), (uint8_t)GPR_U32(ctx, 3));
label_12533c:
    // 0x12533c: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x12533cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_125340:
    // 0x125340: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x125340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125344: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x125344u;
    {
        const bool branch_taken_0x125344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x125348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125344u;
        // 0x125348: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125344) {
            ctx->pc = 0x125350u;
            goto label_125350;
        }
    }
    ctx->pc = 0x12534Cu;
    // 0x12534c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x12534cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_125350:
    // 0x125350: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x125350u;
    {
        const bool branch_taken_0x125350 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x125354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125350u;
        // 0x125354: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125350) {
            ctx->pc = 0x125360u;
            goto label_125360;
        }
    }
    ctx->pc = 0x125358u;
    // 0x125358: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x125358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x12535c: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x12535cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_125360:
    // 0x125360: 0x5600ffe5  bnel        $s0, $zero, . + 4 + (-0x1B << 2)
    ctx->pc = 0x125360u;
    {
        const bool branch_taken_0x125360 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x125360) {
            ctx->pc = 0x125364u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x125360u;
            // 0x125364: 0x8e0200bc  lw          $v0, 0xBC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1252F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1252f8;
        }
    }
    ctx->pc = 0x125368u;
label_125368:
    // 0x125368: 0x8e82a9d4  lw          $v0, -0x562C($s4)
    ctx->pc = 0x125368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294945236)));
    // 0x12536c: 0x86230fb8  lh          $v1, 0xFB8($s1)
    ctx->pc = 0x12536cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4024)));
    // 0x125370: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x125370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x125374: 0xae220fb4  sw          $v0, 0xFB4($s1)
    ctx->pc = 0x125374u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4020), GPR_U32(ctx, 2));
label_125378:
    // 0x125378: 0x92220fb0  lbu         $v0, 0xFB0($s1)
    ctx->pc = 0x125378u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4016)));
    // 0x12537c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12537cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x125380: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x125380u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x125384: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x125384u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x125388: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x125388u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12538c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x12538cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x125390: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x125390u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x125394: 0x3e00008  jr          $ra
    ctx->pc = 0x125394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125394u;
        // 0x125398: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125394u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12539Cu;
    // 0x12539c: 0x0  nop
    ctx->pc = 0x12539cu;
    // NOP
    // 0x1253a0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1253a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1253a4: 0x0  nop
    ctx->pc = 0x1253a4u;
    // NOP
    ctx->pc = 0x1253a8u;
}
