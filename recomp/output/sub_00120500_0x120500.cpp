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

// Function: sub_00120500
// Address: 0x120500 - 0x120558
void sub_00120500_0x120500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00120500_0x120500");
#endif

    switch (ctx->pc) {
        case 0x120520u: goto label_120520;
        case 0x120528u: goto label_120528;
        default: break;
    }

    ctx->pc = 0x120500u;

    // 0x120500: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x120500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x120504: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x120504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x120508: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x120508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12050c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x12050cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120510: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x120510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x120514: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x120514u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120518: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x120518u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12051c: 0x0  nop
    ctx->pc = 0x12051cu;
    // NOP
label_120520:
    // 0x120520: 0xc048156  jal         func_120558
    ctx->pc = 0x120520u;
    SET_GPR_U32(ctx, 31, 0x120528u);
    ctx->pc = 0x120524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120520u;
    // 0x120524: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120558u, 0x120520u, 0x120528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120528u;
label_120528:
    // 0x120528: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x120528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x12052c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x12052cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x120530: 0x2e030010  sltiu       $v1, $s0, 0x10
    ctx->pc = 0x120530u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x120534: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x120534u;
    {
        const bool branch_taken_0x120534 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x120538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120534u;
        // 0x120538: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120534) {
            ctx->pc = 0x120520u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_120520;
        }
    }
    ctx->pc = 0x12053Cu;
    // 0x12053c: 0xa2200214  sb          $zero, 0x214($s1)
    ctx->pc = 0x12053cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 532), (uint8_t)GPR_U32(ctx, 0));
    // 0x120540: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x120540u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120544: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x120544u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x120548: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x120548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12054c: 0x3e00008  jr          $ra
    ctx->pc = 0x12054Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x120550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12054Cu;
        // 0x120550: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12054Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x120554u;
    // 0x120554: 0x0  nop
    ctx->pc = 0x120554u;
    // NOP
    ctx->pc = 0x120558u;
}
