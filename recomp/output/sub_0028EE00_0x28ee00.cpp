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

// Function: sub_0028EE00
// Address: 0x28ee00 - 0x28ee48
void sub_0028EE00_0x28ee00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028EE00_0x28ee00");
#endif

    switch (ctx->pc) {
        case 0x28ee20u: goto label_28ee20;
        case 0x28ee34u: goto label_28ee34;
        default: break;
    }

    ctx->pc = 0x28ee00u;

    // 0x28ee00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28ee00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28ee04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28ee04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28ee08: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x28ee08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x28ee0c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x28ee0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ee10: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x28ee10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ee14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x28ee14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x28ee18: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x28EE18u;
    SET_GPR_U32(ctx, 31, 0x28EE20u);
    ctx->pc = 0x28EE1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EE18u;
    // 0x28ee1c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x28EE18u, 0x28EE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EE20u;
label_28ee20:
    // 0x28ee20: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x28ee20u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x28ee24: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28EE24u;
    {
        const bool branch_taken_0x28ee24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x28EE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EE24u;
        // 0x28ee28: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ee24) {
            ctx->pc = 0x28EE38u;
            goto label_28ee38;
        }
    }
    ctx->pc = 0x28EE2Cu;
    // 0x28ee2c: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x28EE2Cu;
    SET_GPR_U32(ctx, 31, 0x28EE34u);
    ctx->pc = 0x28EE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EE2Cu;
    // 0x28ee30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x28EE2Cu, 0x28EE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EE34u;
label_28ee34:
    // 0x28ee34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28ee34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28ee38:
    // 0x28ee38: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x28ee38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x28ee3c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x28ee3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28ee40: 0x3e00008  jr          $ra
    ctx->pc = 0x28EE40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28EE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EE40u;
        // 0x28ee44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28EE40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28EE48u;
}
