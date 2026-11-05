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

// Function: sub_0030D9E8
// Address: 0x30d9e8 - 0x30da38
void sub_0030D9E8_0x30d9e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030D9E8_0x30d9e8");
#endif

    switch (ctx->pc) {
        case 0x30da08u: goto label_30da08;
        case 0x30da18u: goto label_30da18;
        default: break;
    }

    ctx->pc = 0x30d9e8u;

    // 0x30d9e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x30d9e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x30d9ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x30d9ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x30d9f0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x30d9f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x30d9f4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x30d9f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d9f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x30d9f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x30d9fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x30d9fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30da00: 0x102c00  sll         $a1, $s0, 16
    ctx->pc = 0x30da00u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x30da04: 0x0  nop
    ctx->pc = 0x30da04u;
    // NOP
label_30da08:
    // 0x30da08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30da08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30da0c: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x30da0cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x30da10: 0xc0c364a  jal         func_30D928
    ctx->pc = 0x30DA10u;
    SET_GPR_U32(ctx, 31, 0x30DA18u);
    ctx->pc = 0x30DA14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30DA10u;
    // 0x30da14: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D928u, 0x30DA10u, 0x30DA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30DA18u;
label_30da18:
    // 0x30da18: 0x2a020045  slti        $v0, $s0, 0x45
    ctx->pc = 0x30da18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)69) ? 1 : 0);
    // 0x30da1c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x30DA1Cu;
    {
        const bool branch_taken_0x30da1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30DA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DA1Cu;
        // 0x30da20: 0x102c00  sll         $a1, $s0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30da1c) {
            ctx->pc = 0x30DA08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30da08;
        }
    }
    ctx->pc = 0x30DA24u;
    // 0x30da24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x30da24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30da28: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x30da28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x30da2c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x30da2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30da30: 0x3e00008  jr          $ra
    ctx->pc = 0x30DA30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30DA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DA30u;
        // 0x30da34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30DA30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30DA38u;
}
