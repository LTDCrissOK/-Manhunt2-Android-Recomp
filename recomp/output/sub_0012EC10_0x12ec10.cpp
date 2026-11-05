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

// Function: sub_0012EC10
// Address: 0x12ec10 - 0x12ec60
void sub_0012EC10_0x12ec10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012EC10_0x12ec10");
#endif

    switch (ctx->pc) {
        case 0x12ec38u: goto label_12ec38;
        case 0x12ec4cu: goto label_12ec4c;
        default: break;
    }

    ctx->pc = 0x12ec10u;

    // 0x12ec10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12ec10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12ec14: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12ec14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12ec18: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12ec18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12ec1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12ec1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ec20: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12ec20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12ec24: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x12ec24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x12ec28: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12EC28u;
    {
        const bool branch_taken_0x12ec28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EC28u;
        // 0x12ec2c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ec28) {
            ctx->pc = 0x12EC38u;
            goto label_12ec38;
        }
    }
    ctx->pc = 0x12EC30u;
    // 0x12ec30: 0xc04bb2a  jal         func_12ECA8
    ctx->pc = 0x12EC30u;
    SET_GPR_U32(ctx, 31, 0x12EC38u);
    ctx->pc = 0x12ECA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12ECA8u, 0x12EC30u, 0x12EC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EC38u;
label_12ec38:
    // 0x12ec38: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x12ec38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x12ec3c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x12EC3Cu;
    {
        const bool branch_taken_0x12ec3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ec3c) {
            ctx->pc = 0x12EC40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12EC3Cu;
            // 0x12ec40: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12EC50u;
            goto label_12ec50;
        }
    }
    ctx->pc = 0x12EC44u;
    // 0x12ec44: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x12EC44u;
    SET_GPR_U32(ctx, 31, 0x12EC4Cu);
    ctx->pc = 0x12EC48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EC44u;
    // 0x12ec48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x12EC44u, 0x12EC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EC4Cu;
label_12ec4c:
    // 0x12ec4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12ec4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_12ec50:
    // 0x12ec50: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12ec50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12ec54: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12ec54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12ec58: 0x3e00008  jr          $ra
    ctx->pc = 0x12EC58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12EC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EC58u;
        // 0x12ec5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12EC58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12EC60u;
}
