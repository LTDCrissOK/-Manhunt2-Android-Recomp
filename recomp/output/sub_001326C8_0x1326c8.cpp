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

// Function: sub_001326C8
// Address: 0x1326c8 - 0x132730
void sub_001326C8_0x1326c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001326C8_0x1326c8");
#endif

    switch (ctx->pc) {
        case 0x1326f0u: goto label_1326f0;
        case 0x132704u: goto label_132704;
        default: break;
    }

    ctx->pc = 0x1326c8u;

    // 0x1326c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1326c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1326cc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1326ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1326d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1326d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1326d4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1326d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1326d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1326d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1326dc: 0x8e220218  lw          $v0, 0x218($s1)
    ctx->pc = 0x1326dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
    // 0x1326e0: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x1326E0u;
    {
        const bool branch_taken_0x1326e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1326e0) {
            ctx->pc = 0x1326E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1326E0u;
            // 0x1326e4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13271Cu;
            goto label_13271c;
        }
    }
    ctx->pc = 0x1326E8u;
    // 0x1326e8: 0x8e300020  lw          $s0, 0x20($s1)
    ctx->pc = 0x1326e8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1326ec: 0x0  nop
    ctx->pc = 0x1326ecu;
    // NOP
label_1326f0:
    // 0x1326f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1326f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1326f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1326f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1326f8: 0x3a100004  xori        $s0, $s0, 0x4
    ctx->pc = 0x1326f8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)4);
    // 0x1326fc: 0xc04c7c8  jal         func_131F20
    ctx->pc = 0x1326FCu;
    SET_GPR_U32(ctx, 31, 0x132704u);
    ctx->pc = 0x132700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1326FCu;
    // 0x132700: 0x2e100001  sltiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x131F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131F20u, 0x1326FCu, 0x132704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132704u;
label_132704:
    // 0x132704: 0x56000005  bnel        $s0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x132704u;
    {
        const bool branch_taken_0x132704 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x132704) {
            ctx->pc = 0x132708u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x132704u;
            // 0x132708: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13271Cu;
            goto label_13271c;
        }
    }
    ctx->pc = 0x13270Cu;
    // 0x13270c: 0x8e220218  lw          $v0, 0x218($s1)
    ctx->pc = 0x13270cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
    // 0x132710: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x132710u;
    {
        const bool branch_taken_0x132710 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x132710) {
            ctx->pc = 0x132714u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x132710u;
            // 0x132714: 0x8e300020  lw          $s0, 0x20($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1326F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1326f0;
        }
    }
    ctx->pc = 0x132718u;
    // 0x132718: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x132718u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13271c:
    // 0x13271c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13271cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x132720: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x132720u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x132724: 0x3e00008  jr          $ra
    ctx->pc = 0x132724u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x132728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132724u;
        // 0x132728: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x132724u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13272Cu;
    // 0x13272c: 0x0  nop
    ctx->pc = 0x13272cu;
    // NOP
    ctx->pc = 0x132730u;
}
