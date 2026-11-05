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

// Function: sub_002BFDF8
// Address: 0x2bfdf8 - 0x2bfe58
void sub_002BFDF8_0x2bfdf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BFDF8_0x2bfdf8");
#endif

    switch (ctx->pc) {
        case 0x2bfe0cu: goto label_2bfe0c;
        case 0x2bfe20u: goto label_2bfe20;
        case 0x2bfe40u: goto label_2bfe40;
        default: break;
    }

    ctx->pc = 0x2bfdf8u;

    // 0x2bfdf8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2bfdf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2bfdfc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2bfdfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2bfe00: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2bfe00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2bfe04: 0xc0af778  jal         func_2BDDE0
    ctx->pc = 0x2BFE04u;
    SET_GPR_U32(ctx, 31, 0x2BFE0Cu);
    ctx->pc = 0x2BFE08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFE04u;
    // 0x2bfe08: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BDDE0u, 0x2BFE04u, 0x2BFE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFE0Cu;
label_2bfe0c:
    // 0x2bfe0c: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x2bfe0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x2bfe10: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x2bfe10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2bfe14: 0x246339c8  addiu       $v1, $v1, 0x39C8
    ctx->pc = 0x2bfe14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14792));
    // 0x2bfe18: 0xc0b004e  jal         func_2C0138
    ctx->pc = 0x2BFE18u;
    SET_GPR_U32(ctx, 31, 0x2BFE20u);
    ctx->pc = 0x2BFE1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFE18u;
    // 0x2bfe1c: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0138u, 0x2BFE18u, 0x2BFE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFE20u;
label_2bfe20:
    // 0x2bfe20: 0x24034040  addiu       $v1, $zero, 0x4040
    ctx->pc = 0x2bfe20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16448));
    // 0x2bfe24: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2bfe24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2bfe28: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2bfe28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2bfe2c: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x2bfe2cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x2bfe30: 0xa202000d  sb          $v0, 0xD($s0)
    ctx->pc = 0x2bfe30u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 13), (uint8_t)GPR_U32(ctx, 2));
    // 0x2bfe34: 0x24845188  addiu       $a0, $a0, 0x5188
    ctx->pc = 0x2bfe34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20872));
    // 0x2bfe38: 0xc0f9ea8  jal         func_3E7AA0
    ctx->pc = 0x2BFE38u;
    SET_GPR_U32(ctx, 31, 0x2BFE40u);
    ctx->pc = 0x2BFE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFE38u;
    // 0x2bfe3c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E7AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E7AA0u, 0x2BFE38u, 0x2BFE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFE40u;
label_2bfe40:
    // 0x2bfe40: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x2bfe40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x2bfe44: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2bfe44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfe48: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2bfe48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2bfe4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2bfe4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bfe50: 0x3e00008  jr          $ra
    ctx->pc = 0x2BFE50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BFE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFE50u;
        // 0x2bfe54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BFE50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BFE58u;
}
