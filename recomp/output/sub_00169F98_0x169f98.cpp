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

// Function: sub_00169F98
// Address: 0x169f98 - 0x169fe8
void sub_00169F98_0x169f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00169F98_0x169f98");
#endif

    switch (ctx->pc) {
        case 0x169fc0u: goto label_169fc0;
        case 0x169fd4u: goto label_169fd4;
        default: break;
    }

    ctx->pc = 0x169f98u;

    // 0x169f98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x169f98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x169f9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x169f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x169fa0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x169fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x169fa4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x169fa4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169fa8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x169fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x169fac: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x169facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x169fb0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x169FB0u;
    {
        const bool branch_taken_0x169fb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x169FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169FB0u;
        // 0x169fb4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169fb0) {
            ctx->pc = 0x169FC0u;
            goto label_169fc0;
        }
    }
    ctx->pc = 0x169FB8u;
    // 0x169fb8: 0xc05a81a  jal         func_16A068
    ctx->pc = 0x169FB8u;
    SET_GPR_U32(ctx, 31, 0x169FC0u);
    ctx->pc = 0x16A068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A068u, 0x169FB8u, 0x169FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169FC0u;
label_169fc0:
    // 0x169fc0: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x169fc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x169fc4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x169FC4u;
    {
        const bool branch_taken_0x169fc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x169fc4) {
            ctx->pc = 0x169FC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x169FC4u;
            // 0x169fc8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x169FD8u;
            goto label_169fd8;
        }
    }
    ctx->pc = 0x169FCCu;
    // 0x169fcc: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x169FCCu;
    SET_GPR_U32(ctx, 31, 0x169FD4u);
    ctx->pc = 0x169FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169FCCu;
    // 0x169fd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x169FCCu, 0x169FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169FD4u;
label_169fd4:
    // 0x169fd4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x169fd4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_169fd8:
    // 0x169fd8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x169fd8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x169fdc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x169fdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x169fe0: 0x3e00008  jr          $ra
    ctx->pc = 0x169FE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169FE0u;
        // 0x169fe4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169FE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x169FE8u;
}
