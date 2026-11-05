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

// Function: sub_001EB2B8
// Address: 0x1eb2b8 - 0x1eb350
void sub_001EB2B8_0x1eb2b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EB2B8_0x1eb2b8");
#endif

    switch (ctx->pc) {
        case 0x1eb2f8u: goto label_1eb2f8;
        case 0x1eb318u: goto label_1eb318;
        default: break;
    }

    ctx->pc = 0x1eb2b8u;

    // 0x1eb2b8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1eb2b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1eb2bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1eb2bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1eb2c0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1eb2c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1eb2c4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1eb2c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb2c8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1eb2c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1eb2cc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1eb2ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb2d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1eb2d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1eb2d4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1eb2d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1eb2d8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1eb2d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1eb2dc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1eb2dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1eb2e0: 0x92420960  lbu         $v0, 0x960($s2)
    ctx->pc = 0x1eb2e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2400)));
    // 0x1eb2e4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1EB2E4u;
    {
        const bool branch_taken_0x1eb2e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB2E4u;
        // 0x1eb2e8: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb2e4) {
            ctx->pc = 0x1EB32Cu;
            goto label_1eb32c;
        }
    }
    ctx->pc = 0x1EB2ECu;
    // 0x1eb2ec: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x1eb2ecu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eb2f0: 0x3c140049  lui         $s4, 0x49
    ctx->pc = 0x1eb2f0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)73 << 16));
    // 0x1eb2f4: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x1eb2f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1eb2f8:
    // 0x1eb2f8: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1eb2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1eb2fc: 0x54530007  bnel        $v0, $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x1EB2FCu;
    {
        const bool branch_taken_0x1eb2fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x1eb2fc) {
            ctx->pc = 0x1EB300u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EB2FCu;
            // 0x1eb300: 0x92420960  lbu         $v0, 0x960($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2400)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EB31Cu;
            goto label_1eb31c;
        }
    }
    ctx->pc = 0x1EB304u;
    // 0x1eb304: 0xa2150048  sb          $s5, 0x48($s0)
    ctx->pc = 0x1eb304u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 72), (uint8_t)GPR_U32(ctx, 21));
    // 0x1eb308: 0x26840480  addiu       $a0, $s4, 0x480
    ctx->pc = 0x1eb308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1152));
    // 0x1eb30c: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1eb30cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1eb310: 0xc07e654  jal         func_1F9950
    ctx->pc = 0x1EB310u;
    SET_GPR_U32(ctx, 31, 0x1EB318u);
    ctx->pc = 0x1EB314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB310u;
    // 0x1eb314: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9950u, 0x1EB310u, 0x1EB318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB318u;
label_1eb318:
    // 0x1eb318: 0x92420960  lbu         $v0, 0x960($s2)
    ctx->pc = 0x1eb318u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2400)));
label_1eb31c:
    // 0x1eb31c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1eb31cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1eb320: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1eb320u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1eb324: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1EB324u;
    {
        const bool branch_taken_0x1eb324 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EB328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB324u;
        // 0x1eb328: 0x26100050  addiu       $s0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb324) {
            ctx->pc = 0x1EB2F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1eb2f8;
        }
    }
    ctx->pc = 0x1EB32Cu;
label_1eb32c:
    // 0x1eb32c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1eb32cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eb330: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1eb330u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1eb334: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1eb334u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1eb338: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1eb338u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1eb33c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1eb33cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1eb340: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1eb340u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1eb344: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1eb344u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1eb348: 0x3e00008  jr          $ra
    ctx->pc = 0x1EB348u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EB34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB348u;
        // 0x1eb34c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EB348u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EB350u;
}
