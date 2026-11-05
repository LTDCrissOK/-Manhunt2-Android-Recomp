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

// Function: sub_0030D068
// Address: 0x30d068 - 0x30d0d0
void sub_0030D068_0x30d068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030D068_0x30d068");
#endif

    switch (ctx->pc) {
        case 0x30d098u: goto label_30d098;
        case 0x30d0acu: goto label_30d0ac;
        default: break;
    }

    ctx->pc = 0x30d068u;

    // 0x30d068: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x30d068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x30d06c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x30d06cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x30d070: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x30d070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x30d074: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x30d074u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d078: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x30d078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x30d07c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x30d07cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x30d080: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x30D080u;
    {
        const bool branch_taken_0x30d080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D080u;
        // 0x30d084: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d080) {
            ctx->pc = 0x30D0C0u;
            goto label_30d0c0;
        }
    }
    ctx->pc = 0x30D088u;
    // 0x30d088: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x30d088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x30d08c: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x30D08Cu;
    {
        const bool branch_taken_0x30d08c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x30D090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D08Cu;
        // 0x30d090: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d08c) {
            ctx->pc = 0x30D0BCu;
            goto label_30d0bc;
        }
    }
    ctx->pc = 0x30D094u;
    // 0x30d094: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x30d094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_30d098:
    // 0x30d098: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x30d098u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x30d09c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x30d09cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x30d0a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30d0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30d0a4: 0xc0c3232  jal         func_30C8C8
    ctx->pc = 0x30D0A4u;
    SET_GPR_U32(ctx, 31, 0x30D0ACu);
    ctx->pc = 0x30D0A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D0A4u;
    // 0x30d0a8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C8C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C8C8u, 0x30D0A4u, 0x30D0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D0ACu;
label_30d0ac:
    // 0x30d0ac: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x30d0acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x30d0b0: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x30d0b0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x30d0b4: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x30D0B4u;
    {
        const bool branch_taken_0x30d0b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30d0b4) {
            ctx->pc = 0x30D0B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30D0B4u;
            // 0x30d0b8: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30D098u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30d098;
        }
    }
    ctx->pc = 0x30D0BCu;
label_30d0bc:
    // 0x30d0bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x30d0bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_30d0c0:
    // 0x30d0c0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x30d0c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x30d0c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x30d0c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30d0c8: 0x3e00008  jr          $ra
    ctx->pc = 0x30D0C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30D0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D0C8u;
        // 0x30d0cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30D0C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30D0D0u;
}
