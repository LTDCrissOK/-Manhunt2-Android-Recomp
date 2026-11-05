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

// Function: sub_00179E88
// Address: 0x179e88 - 0x179f18
void sub_00179E88_0x179e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00179E88_0x179e88");
#endif

    switch (ctx->pc) {
        case 0x179ec0u: goto label_179ec0;
        case 0x179ed0u: goto label_179ed0;
        default: break;
    }

    ctx->pc = 0x179e88u;

    // 0x179e88: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x179e88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x179e8c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x179e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x179e90: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x179e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x179e94: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x179e94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179e98: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x179e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x179e9c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x179e9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x179ea0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x179ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x179ea4: 0x92420584  lbu         $v0, 0x584($s2)
    ctx->pc = 0x179ea4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1412)));
    // 0x179ea8: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x179EA8u;
    {
        const bool branch_taken_0x179ea8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x179EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179EA8u;
        // 0x179eac: 0x24130009  addiu       $s3, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179ea8) {
            ctx->pc = 0x179EF8u;
            goto label_179ef8;
        }
    }
    ctx->pc = 0x179EB0u;
    // 0x179eb0: 0xa2400585  sb          $zero, 0x585($s2)
    ctx->pc = 0x179eb0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1413), (uint8_t)GPR_U32(ctx, 0));
    // 0x179eb4: 0x8e420534  lw          $v0, 0x534($s2)
    ctx->pc = 0x179eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1332)));
    // 0x179eb8: 0x8c500014  lw          $s0, 0x14($v0)
    ctx->pc = 0x179eb8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x179ebc: 0x8c510010  lw          $s1, 0x10($v0)
    ctx->pc = 0x179ebcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_179ec0:
    // 0x179ec0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x179ec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179ec4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x179ec4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179ec8: 0xc05e7c6  jal         func_179F18
    ctx->pc = 0x179EC8u;
    SET_GPR_U32(ctx, 31, 0x179ED0u);
    ctx->pc = 0x179ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179EC8u;
    // 0x179ecc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179F18u, 0x179EC8u, 0x179ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179ED0u;
label_179ed0:
    // 0x179ed0: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x179ED0u;
    {
        const bool branch_taken_0x179ed0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x179ed0) {
            ctx->pc = 0x179ED4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x179ED0u;
            // 0x179ed4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x179EFCu;
            goto label_179efc;
        }
    }
    ctx->pc = 0x179ED8u;
    // 0x179ed8: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x179ED8u;
    {
        const bool branch_taken_0x179ed8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x179ed8) {
            ctx->pc = 0x179EE8u;
            goto label_179ee8;
        }
    }
    ctx->pc = 0x179EE0u;
    // 0x179ee0: 0x1613fff7  bne         $s0, $s3, . + 4 + (-0x9 << 2)
    ctx->pc = 0x179EE0u;
    {
        const bool branch_taken_0x179ee0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 19));
        ctx->pc = 0x179EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179EE0u;
        // 0x179ee4: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179ee0) {
            ctx->pc = 0x179EC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_179ec0;
        }
    }
    ctx->pc = 0x179EE8u;
label_179ee8:
    // 0x179ee8: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x179EE8u;
    {
        const bool branch_taken_0x179ee8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x179EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179EE8u;
        // 0x179eec: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179ee8) {
            ctx->pc = 0x179EF8u;
            goto label_179ef8;
        }
    }
    ctx->pc = 0x179EF0u;
    // 0x179ef0: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x179EF0u;
    {
        const bool branch_taken_0x179ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179EF0u;
        // 0x179ef4: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179ef0) {
            ctx->pc = 0x179EC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_179ec0;
        }
    }
    ctx->pc = 0x179EF8u;
label_179ef8:
    // 0x179ef8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x179ef8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_179efc:
    // 0x179efc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x179efcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x179f00: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x179f00u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x179f04: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x179f04u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x179f08: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x179f08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x179f0c: 0x3e00008  jr          $ra
    ctx->pc = 0x179F0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179F0Cu;
        // 0x179f10: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179F0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x179F14u;
    // 0x179f14: 0x0  nop
    ctx->pc = 0x179f14u;
    // NOP
    ctx->pc = 0x179f18u;
}
