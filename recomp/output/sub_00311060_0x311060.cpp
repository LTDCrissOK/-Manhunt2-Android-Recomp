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

// Function: sub_00311060
// Address: 0x311060 - 0x3110c0
void sub_00311060_0x311060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00311060_0x311060");
#endif

    switch (ctx->pc) {
        case 0x311088u: goto label_311088;
        case 0x311090u: goto label_311090;
        case 0x3110a0u: goto label_3110a0;
        case 0x3110acu: goto label_3110ac;
        default: break;
    }

    ctx->pc = 0x311060u;

    // 0x311060: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x311060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x311064: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x311064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x311068: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x311068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x31106c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x31106cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311070: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x311070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x311074: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x311074u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x311078: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x311078u;
    {
        const bool branch_taken_0x311078 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31107Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311078u;
        // 0x31107c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311078) {
            ctx->pc = 0x3110B0u;
            goto label_3110b0;
        }
    }
    ctx->pc = 0x311080u;
    // 0x311080: 0xc0c3e4a  jal         func_30F928
    ctx->pc = 0x311080u;
    SET_GPR_U32(ctx, 31, 0x311088u);
    ctx->pc = 0x311084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311080u;
    // 0x311084: 0x3c100040  lui         $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F928u, 0x311080u, 0x311088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311088u;
label_311088:
    // 0x311088: 0xc0c4796  jal         func_311E58
    ctx->pc = 0x311088u;
    SET_GPR_U32(ctx, 31, 0x311090u);
    ctx->pc = 0x31108Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311088u;
    // 0x31108c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x311E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x311E58u, 0x311088u, 0x311090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311090u;
label_311090:
    // 0x311090: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x311090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x311094: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x311094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311098: 0xc0c4446  jal         func_311118
    ctx->pc = 0x311098u;
    SET_GPR_U32(ctx, 31, 0x3110A0u);
    ctx->pc = 0x31109Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311098u;
    // 0x31109c: 0xa202bce0  sb          $v0, -0x4320($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 4294950112), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x311118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x311118u, 0x311098u, 0x3110A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3110A0u;
label_3110a0:
    // 0x3110a0: 0xa200bce0  sb          $zero, -0x4320($s0)
    ctx->pc = 0x3110a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4294950112), (uint8_t)GPR_U32(ctx, 0));
    // 0x3110a4: 0xc0c479e  jal         func_311E78
    ctx->pc = 0x3110A4u;
    SET_GPR_U32(ctx, 31, 0x3110ACu);
    ctx->pc = 0x3110A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3110A4u;
    // 0x3110a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x311E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x311E78u, 0x3110A4u, 0x3110ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3110ACu;
label_3110ac:
    // 0x3110ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3110acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3110b0:
    // 0x3110b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3110b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3110b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3110b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3110b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3110B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3110BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3110B8u;
        // 0x3110bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3110B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3110C0u;
}
