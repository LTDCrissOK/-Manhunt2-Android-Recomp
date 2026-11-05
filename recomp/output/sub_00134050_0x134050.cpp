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

// Function: sub_00134050
// Address: 0x134050 - 0x1340b8
void sub_00134050_0x134050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00134050_0x134050");
#endif

    switch (ctx->pc) {
        case 0x134084u: goto label_134084;
        case 0x1340a0u: goto label_1340a0;
        default: break;
    }

    ctx->pc = 0x134050u;

    // 0x134050: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x134050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x134054: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x134054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x134058: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x134058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13405c: 0x244205a0  addiu       $v0, $v0, 0x5A0
    ctx->pc = 0x13405cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1440));
    // 0x134060: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x134060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x134064: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x134064u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134068: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x134068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13406c: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x13406cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x134070: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x134070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x134074: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x134074u;
    {
        const bool branch_taken_0x134074 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x134078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134074u;
        // 0x134078: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134074) {
            ctx->pc = 0x134084u;
            goto label_134084;
        }
    }
    ctx->pc = 0x13407Cu;
    // 0x13407c: 0xc04d042  jal         func_134108
    ctx->pc = 0x13407Cu;
    SET_GPR_U32(ctx, 31, 0x134084u);
    ctx->pc = 0x134108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134108u, 0x13407Cu, 0x134084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134084u;
label_134084:
    // 0x134084: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x134084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x134088: 0x32230001  andi        $v1, $s1, 0x1
    ctx->pc = 0x134088u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x13408c: 0x24420510  addiu       $v0, $v0, 0x510
    ctx->pc = 0x13408cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1296));
    // 0x134090: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x134090u;
    {
        const bool branch_taken_0x134090 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x134094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134090u;
        // 0x134094: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134090) {
            ctx->pc = 0x1340A0u;
            goto label_1340a0;
        }
    }
    ctx->pc = 0x134098u;
    // 0x134098: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x134098u;
    SET_GPR_U32(ctx, 31, 0x1340A0u);
    ctx->pc = 0x13409Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134098u;
    // 0x13409c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x134098u, 0x1340A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1340A0u;
label_1340a0:
    // 0x1340a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1340a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1340a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1340a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1340a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1340a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1340ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1340ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1340B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1340ACu;
        // 0x1340b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1340ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1340B4u;
    // 0x1340b4: 0x0  nop
    ctx->pc = 0x1340b4u;
    // NOP
    ctx->pc = 0x1340b8u;
}
