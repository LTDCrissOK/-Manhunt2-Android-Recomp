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

// Function: sub_00180500
// Address: 0x180500 - 0x180558
void sub_00180500_0x180500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00180500_0x180500");
#endif

    switch (ctx->pc) {
        case 0x180520u: goto label_180520;
        case 0x180528u: goto label_180528;
        default: break;
    }

    ctx->pc = 0x180500u;

    // 0x180500: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x180500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x180504: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x180504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x180508: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x180508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x18050c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x18050cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180510: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x180510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x180514: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x180514u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180518: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x180518u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18051c: 0x0  nop
    ctx->pc = 0x18051cu;
    // NOP
label_180520:
    // 0x180520: 0xc060156  jal         func_180558
    ctx->pc = 0x180520u;
    SET_GPR_U32(ctx, 31, 0x180528u);
    ctx->pc = 0x180524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180520u;
    // 0x180524: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180558u, 0x180520u, 0x180528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180528u;
label_180528:
    // 0x180528: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x180528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18052c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x18052cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x180530: 0x2e030020  sltiu       $v1, $s0, 0x20
    ctx->pc = 0x180530u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x180534: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x180534u;
    {
        const bool branch_taken_0x180534 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x180538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180534u;
        // 0x180538: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180534) {
            ctx->pc = 0x180520u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_180520;
        }
    }
    ctx->pc = 0x18053Cu;
    // 0x18053c: 0xa2200410  sb          $zero, 0x410($s1)
    ctx->pc = 0x18053cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1040), (uint8_t)GPR_U32(ctx, 0));
    // 0x180540: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x180540u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180544: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x180544u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x180548: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x180548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18054c: 0x3e00008  jr          $ra
    ctx->pc = 0x18054Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18054Cu;
        // 0x180550: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18054Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x180554u;
    // 0x180554: 0x0  nop
    ctx->pc = 0x180554u;
    // NOP
    ctx->pc = 0x180558u;
}
