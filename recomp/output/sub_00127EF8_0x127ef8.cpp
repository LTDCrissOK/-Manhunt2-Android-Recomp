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

// Function: sub_00127EF8
// Address: 0x127ef8 - 0x127f50
void sub_00127EF8_0x127ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00127EF8_0x127ef8");
#endif

    switch (ctx->pc) {
        case 0x127f18u: goto label_127f18;
        case 0x127f20u: goto label_127f20;
        default: break;
    }

    ctx->pc = 0x127ef8u;

    // 0x127ef8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x127ef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x127efc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x127efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x127f00: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x127f00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x127f04: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x127f04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127f08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x127f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x127f0c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x127f0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127f10: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x127f10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127f14: 0x0  nop
    ctx->pc = 0x127f14u;
    // NOP
label_127f18:
    // 0x127f18: 0xc049fd4  jal         func_127F50
    ctx->pc = 0x127F18u;
    SET_GPR_U32(ctx, 31, 0x127F20u);
    ctx->pc = 0x127F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127F18u;
    // 0x127f1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127F50u, 0x127F18u, 0x127F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127F20u;
label_127f20:
    // 0x127f20: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x127f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x127f24: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x127f24u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x127f28: 0x2e030020  sltiu       $v1, $s0, 0x20
    ctx->pc = 0x127f28u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x127f2c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x127F2Cu;
    {
        const bool branch_taken_0x127f2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x127F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127F2Cu;
        // 0x127f30: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127f2c) {
            ctx->pc = 0x127F18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_127f18;
        }
    }
    ctx->pc = 0x127F34u;
    // 0x127f34: 0xae200e84  sw          $zero, 0xE84($s1)
    ctx->pc = 0x127f34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3716), GPR_U32(ctx, 0));
    // 0x127f38: 0xa2200e80  sb          $zero, 0xE80($s1)
    ctx->pc = 0x127f38u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3712), (uint8_t)GPR_U32(ctx, 0));
    // 0x127f3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x127f3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x127f40: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x127f40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x127f44: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x127f44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x127f48: 0x3e00008  jr          $ra
    ctx->pc = 0x127F48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x127F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127F48u;
        // 0x127f4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127F48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x127F50u;
}
