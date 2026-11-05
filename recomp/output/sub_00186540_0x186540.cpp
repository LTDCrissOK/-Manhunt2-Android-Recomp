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

// Function: sub_00186540
// Address: 0x186540 - 0x1865b0
void sub_00186540_0x186540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00186540_0x186540");
#endif

    switch (ctx->pc) {
        case 0x186568u: goto label_186568;
        case 0x186574u: goto label_186574;
        default: break;
    }

    ctx->pc = 0x186540u;

    // 0x186540: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x186540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x186544: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x186544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x186548: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x186548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x18654c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x18654cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x186550: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x186550u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186554: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x186554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x186558: 0x245107e0  addiu       $s1, $v0, 0x7E0
    ctx->pc = 0x186558u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 2016));
    // 0x18655c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x18655cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x186560: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x186560u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186564: 0x0  nop
    ctx->pc = 0x186564u;
    // NOP
label_186568:
    // 0x186568: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x186568u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18656c: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x18656Cu;
    SET_GPR_U32(ctx, 31, 0x186574u);
    ctx->pc = 0x186570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18656Cu;
    // 0x186570: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x18656Cu, 0x186574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186574u;
label_186574:
    // 0x186574: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x186574u;
    {
        const bool branch_taken_0x186574 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x186574) {
            ctx->pc = 0x186578u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186574u;
            // 0x186578: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186584u;
            goto label_186584;
        }
    }
    ctx->pc = 0x18657Cu;
    // 0x18657c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x18657Cu;
    {
        const bool branch_taken_0x18657c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18657Cu;
        // 0x186580: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18657c) {
            ctx->pc = 0x186594u;
            goto label_186594;
        }
    }
    ctx->pc = 0x186584u;
label_186584:
    // 0x186584: 0x2a020021  slti        $v0, $s0, 0x21
    ctx->pc = 0x186584u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x186588: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x186588u;
    {
        const bool branch_taken_0x186588 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18658Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186588u;
        // 0x18658c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186588) {
            ctx->pc = 0x186568u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_186568;
        }
    }
    ctx->pc = 0x186590u;
    // 0x186590: 0x2402001a  addiu       $v0, $zero, 0x1A
    ctx->pc = 0x186590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_186594:
    // 0x186594: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x186594u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x186598: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x186598u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x18659c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x18659cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1865a0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1865a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1865a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1865A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1865A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1865A4u;
        // 0x1865a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1865A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1865ACu;
    // 0x1865ac: 0x0  nop
    ctx->pc = 0x1865acu;
    // NOP
    ctx->pc = 0x1865b0u;
}
