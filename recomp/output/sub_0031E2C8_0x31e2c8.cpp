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

// Function: sub_0031E2C8
// Address: 0x31e2c8 - 0x31e358
void sub_0031E2C8_0x31e2c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031E2C8_0x31e2c8");
#endif

    switch (ctx->pc) {
        case 0x31e310u: goto label_31e310;
        case 0x31e324u: goto label_31e324;
        case 0x31e338u: goto label_31e338;
        default: break;
    }

    ctx->pc = 0x31e2c8u;

    // 0x31e2c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x31e2c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x31e2cc: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x31e2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x31e2d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x31e2d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x31e2d4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x31e2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x31e2d8: 0x8c50bda8  lw          $s0, -0x4258($v0)
    ctx->pc = 0x31e2d8u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x3FBDA8u));
    // 0x31e2dc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x31e2dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x31e2e0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x31e2e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x31e2e4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x31e2e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e2e8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x31e2e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x31e2ec: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x31e2ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x31e2f0: 0x1203000f  beq         $s0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x31E2F0u;
    {
        const bool branch_taken_0x31e2f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x31E2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E2F0u;
        // 0x31e2f4: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e2f0) {
            ctx->pc = 0x31E330u;
            goto label_31e330;
        }
    }
    ctx->pc = 0x31E2F8u;
    // 0x31e2f8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x31e2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x31e2fc: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x31e2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x31e300: 0x2442d5d8  addiu       $v0, $v0, -0x2A28
    ctx->pc = 0x31e300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956504));
    // 0x31e304: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x31e304u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x31e308: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x31e308u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x31e30c: 0x0  nop
    ctx->pc = 0x31e30cu;
    // NOP
label_31e310:
    // 0x31e310: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x31e310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x31e314: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x31E314u;
    {
        const bool branch_taken_0x31e314 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x31e314) {
            ctx->pc = 0x31E318u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31E314u;
            // 0x31e318: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31E328u;
            goto label_31e328;
        }
    }
    ctx->pc = 0x31E31Cu;
    // 0x31e31c: 0xc0c7812  jal         func_31E048
    ctx->pc = 0x31E31Cu;
    SET_GPR_U32(ctx, 31, 0x31E324u);
    ctx->pc = 0x31E320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E31Cu;
    // 0x31e320: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E048u, 0x31E31Cu, 0x31E324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E324u;
label_31e324:
    // 0x31e324: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x31e324u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_31e328:
    // 0x31e328: 0x1612fff9  bne         $s0, $s2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x31E328u;
    {
        const bool branch_taken_0x31e328 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        ctx->pc = 0x31E32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E328u;
        // 0x31e32c: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e328) {
            ctx->pc = 0x31E310u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31e310;
        }
    }
    ctx->pc = 0x31E330u;
label_31e330:
    // 0x31e330: 0xc0c7888  jal         func_31E220
    ctx->pc = 0x31E330u;
    SET_GPR_U32(ctx, 31, 0x31E338u);
    ctx->pc = 0x31E220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E220u, 0x31E330u, 0x31E338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E338u;
label_31e338:
    // 0x31e338: 0xae60bda8  sw          $zero, -0x4258($s3)
    ctx->pc = 0x31e338u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294950312), GPR_U32(ctx, 0));
    // 0x31e33c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x31e33cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31e340: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x31e340u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x31e344: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x31e344u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31e348: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x31e348u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x31e34c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x31e34cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31e350: 0x3e00008  jr          $ra
    ctx->pc = 0x31E350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31E354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E350u;
        // 0x31e354: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E350u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31E358u;
}
