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

// Function: sub_003A19A8
// Address: 0x3a19a8 - 0x3a19f0
void sub_003A19A8_0x3a19a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A19A8_0x3a19a8");
#endif

    switch (ctx->pc) {
        case 0x3a19c8u: goto label_3a19c8;
        case 0x3a19d0u: goto label_3a19d0;
        default: break;
    }

    ctx->pc = 0x3a19a8u;

    // 0x3a19a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a19a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3a19ac: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x3a19acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x3a19b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a19b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3a19b4: 0x2450b7f8  addiu       $s0, $v0, -0x4808
    ctx->pc = 0x3a19b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948856));
    // 0x3a19b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3a19b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3a19bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3a19bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3a19c0: 0x26116590  addiu       $s1, $s0, 0x6590
    ctx->pc = 0x3a19c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 26000));
    // 0x3a19c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a19c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a19c8:
    // 0x3a19c8: 0xc0e8630  jal         func_3A18C0
    ctx->pc = 0x3A19C8u;
    SET_GPR_U32(ctx, 31, 0x3A19D0u);
    ctx->pc = 0x3A19CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A19C8u;
    // 0x3a19cc: 0x26101964  addiu       $s0, $s0, 0x1964 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 6500));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A18C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A18C0u, 0x3A19C8u, 0x3A19D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A19D0u;
label_3a19d0:
    // 0x3a19d0: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x3a19d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x3a19d4: 0x1440fffc  bnez        $v0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x3A19D4u;
    {
        const bool branch_taken_0x3a19d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A19D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A19D4u;
        // 0x3a19d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a19d4) {
            ctx->pc = 0x3A19C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a19c8;
        }
    }
    ctx->pc = 0x3A19DCu;
    // 0x3a19dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a19dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a19e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3a19e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a19e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3a19e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a19e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3A19E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A19ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A19E8u;
        // 0x3a19ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A19E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A19F0u;
}
