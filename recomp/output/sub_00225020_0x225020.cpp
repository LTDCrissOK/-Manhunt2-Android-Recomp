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

// Function: sub_00225020
// Address: 0x225020 - 0x225078
void sub_00225020_0x225020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225020_0x225020");
#endif

    switch (ctx->pc) {
        case 0x225050u: goto label_225050;
        case 0x225064u: goto label_225064;
        default: break;
    }

    ctx->pc = 0x225020u;

    // 0x225020: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x225020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x225024: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x225024u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x225028: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x225028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22502c: 0x24421728  addiu       $v0, $v0, 0x1728
    ctx->pc = 0x22502cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5928));
    // 0x225030: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x225030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x225034: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x225034u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225038: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x225038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x22503c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x22503cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225040: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x225040u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x225044: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x225044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x225048: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x225048u;
    SET_GPR_U32(ctx, 31, 0x225050u);
    ctx->pc = 0x22504Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225048u;
    // 0x22504c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x225048u, 0x225050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225050u;
label_225050:
    // 0x225050: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x225050u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x225054: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x225054u;
    {
        const bool branch_taken_0x225054 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x225058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225054u;
        // 0x225058: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225054) {
            ctx->pc = 0x225068u;
            goto label_225068;
        }
    }
    ctx->pc = 0x22505Cu;
    // 0x22505c: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x22505Cu;
    SET_GPR_U32(ctx, 31, 0x225064u);
    ctx->pc = 0x225060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22505Cu;
    // 0x225060: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x22505Cu, 0x225064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225064u;
label_225064:
    // 0x225064: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x225064u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_225068:
    // 0x225068: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x225068u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22506c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x22506cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x225070: 0x3e00008  jr          $ra
    ctx->pc = 0x225070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225070u;
        // 0x225074: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225070u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x225078u;
}
