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

// Function: sub_0017AAF8
// Address: 0x17aaf8 - 0x17ab58
void sub_0017AAF8_0x17aaf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017AAF8_0x17aaf8");
#endif

    switch (ctx->pc) {
        case 0x17ab18u: goto label_17ab18;
        case 0x17ab20u: goto label_17ab20;
        case 0x17ab2cu: goto label_17ab2c;
        default: break;
    }

    ctx->pc = 0x17aaf8u;

    // 0x17aaf8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17aaf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17aafc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17aafcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17ab00: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17ab00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17ab04: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x17ab04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ab08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17ab08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17ab0c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17ab0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ab10: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17ab10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ab14: 0x0  nop
    ctx->pc = 0x17ab14u;
    // NOP
label_17ab18:
    // 0x17ab18: 0xc04f74a  jal         func_13DD28
    ctx->pc = 0x17AB18u;
    SET_GPR_U32(ctx, 31, 0x17AB20u);
    ctx->pc = 0x17AB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AB18u;
    // 0x17ab1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13DD28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DD28u, 0x17AB18u, 0x17AB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AB20u;
label_17ab20:
    // 0x17ab20: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17ab20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ab24: 0xc05ead6  jal         func_17AB58
    ctx->pc = 0x17AB24u;
    SET_GPR_U32(ctx, 31, 0x17AB2Cu);
    ctx->pc = 0x17AB28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AB24u;
    // 0x17ab28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17AB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17AB58u, 0x17AB24u, 0x17AB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AB2Cu;
label_17ab2c:
    // 0x17ab2c: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x17ab2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x17ab30: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x17ab30u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17ab34: 0x2e030010  sltiu       $v1, $s0, 0x10
    ctx->pc = 0x17ab34u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x17ab38: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x17AB38u;
    {
        const bool branch_taken_0x17ab38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17AB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AB38u;
        // 0x17ab3c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ab38) {
            ctx->pc = 0x17AB18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17ab18;
        }
    }
    ctx->pc = 0x17AB40u;
    // 0x17ab40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17ab40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17ab44: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17ab44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17ab48: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17ab48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17ab4c: 0x3e00008  jr          $ra
    ctx->pc = 0x17AB4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17AB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AB4Cu;
        // 0x17ab50: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17AB4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17AB54u;
    // 0x17ab54: 0x0  nop
    ctx->pc = 0x17ab54u;
    // NOP
    ctx->pc = 0x17ab58u;
}
