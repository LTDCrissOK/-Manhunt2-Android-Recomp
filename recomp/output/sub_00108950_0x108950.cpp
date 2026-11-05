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

// Function: sub_00108950
// Address: 0x108950 - 0x1089a8
void sub_00108950_0x108950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00108950_0x108950");
#endif

    switch (ctx->pc) {
        case 0x108970u: goto label_108970;
        case 0x108978u: goto label_108978;
        default: break;
    }

    ctx->pc = 0x108950u;

    // 0x108950: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x108950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x108954: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x108954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x108958: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x108958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10895c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x10895cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108960: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x108960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x108964: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x108964u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108968: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x108968u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10896c: 0x0  nop
    ctx->pc = 0x10896cu;
    // NOP
label_108970:
    // 0x108970: 0xc04226a  jal         func_1089A8
    ctx->pc = 0x108970u;
    SET_GPR_U32(ctx, 31, 0x108978u);
    ctx->pc = 0x108974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108970u;
    // 0x108974: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1089A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1089A8u, 0x108970u, 0x108978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108978u;
label_108978:
    // 0x108978: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x108978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x10897c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x10897cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x108980: 0x2e030010  sltiu       $v1, $s0, 0x10
    ctx->pc = 0x108980u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x108984: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x108984u;
    {
        const bool branch_taken_0x108984 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x108988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108984u;
        // 0x108988: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108984) {
            ctx->pc = 0x108970u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_108970;
        }
    }
    ctx->pc = 0x10898Cu;
    // 0x10898c: 0xa2200044  sb          $zero, 0x44($s1)
    ctx->pc = 0x10898cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x108990: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x108990u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x108994: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x108994u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x108998: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x108998u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10899c: 0x3e00008  jr          $ra
    ctx->pc = 0x10899Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1089A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10899Cu;
        // 0x1089a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10899Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1089A4u;
    // 0x1089a4: 0x0  nop
    ctx->pc = 0x1089a4u;
    // NOP
    ctx->pc = 0x1089a8u;
}
