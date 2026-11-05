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

// Function: sub_0012CB40
// Address: 0x12cb40 - 0x12cb98
void sub_0012CB40_0x12cb40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012CB40_0x12cb40");
#endif

    switch (ctx->pc) {
        case 0x12cb60u: goto label_12cb60;
        case 0x12cb68u: goto label_12cb68;
        default: break;
    }

    ctx->pc = 0x12cb40u;

    // 0x12cb40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12cb40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12cb44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12cb44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12cb48: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12cb48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12cb4c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x12cb4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cb50: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12cb50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12cb54: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x12cb54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cb58: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12cb58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cb5c: 0x0  nop
    ctx->pc = 0x12cb5cu;
    // NOP
label_12cb60:
    // 0x12cb60: 0xc04b2e6  jal         func_12CB98
    ctx->pc = 0x12CB60u;
    SET_GPR_U32(ctx, 31, 0x12CB68u);
    ctx->pc = 0x12CB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CB60u;
    // 0x12cb64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12CB98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12CB98u, 0x12CB60u, 0x12CB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CB68u;
label_12cb68:
    // 0x12cb68: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x12cb68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x12cb6c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x12cb6cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12cb70: 0x2e0300ff  sltiu       $v1, $s0, 0xFF
    ctx->pc = 0x12cb70u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)255) ? 1 : 0);
    // 0x12cb74: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12CB74u;
    {
        const bool branch_taken_0x12cb74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12CB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CB74u;
        // 0x12cb78: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cb74) {
            ctx->pc = 0x12CB60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12cb60;
        }
    }
    ctx->pc = 0x12CB7Cu;
    // 0x12cb7c: 0xa22007fc  sb          $zero, 0x7FC($s1)
    ctx->pc = 0x12cb7cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2044), (uint8_t)GPR_U32(ctx, 0));
    // 0x12cb80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12cb80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12cb84: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12cb84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12cb88: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12cb88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12cb8c: 0x3e00008  jr          $ra
    ctx->pc = 0x12CB8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12CB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CB8Cu;
        // 0x12cb90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12CB8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12CB94u;
    // 0x12cb94: 0x0  nop
    ctx->pc = 0x12cb94u;
    // NOP
    ctx->pc = 0x12cb98u;
}
