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

// Function: sub_00187CF8
// Address: 0x187cf8 - 0x187d68
void sub_00187CF8_0x187cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00187CF8_0x187cf8");
#endif

    switch (ctx->pc) {
        case 0x187d20u: goto label_187d20;
        case 0x187d30u: goto label_187d30;
        case 0x187d44u: goto label_187d44;
        default: break;
    }

    ctx->pc = 0x187cf8u;

    // 0x187cf8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x187cf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x187cfc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x187cfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x187d00: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x187d00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x187d04: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x187d04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187d08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x187d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x187d0c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x187d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x187d10: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x187D10u;
    {
        const bool branch_taken_0x187d10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x187D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187D10u;
        // 0x187d14: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187d10) {
            ctx->pc = 0x187D58u;
            goto label_187d58;
        }
    }
    ctx->pc = 0x187D18u;
    // 0x187d18: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x187D18u;
    SET_GPR_U32(ctx, 31, 0x187D20u);
    ctx->pc = 0x187D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187D18u;
    // 0x187d1c: 0x24040060  addiu       $a0, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x187D18u, 0x187D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187D20u;
label_187d20:
    // 0x187d20: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x187d20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187d24: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x187d24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x187d28: 0xc061a32  jal         func_1868C8
    ctx->pc = 0x187D28u;
    SET_GPR_U32(ctx, 31, 0x187D30u);
    ctx->pc = 0x187D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187D28u;
    // 0x187d2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1868C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1868C8u, 0x187D28u, 0x187D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187D30u;
label_187d30:
    // 0x187d30: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x187d30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x187d34: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x187d34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x187d38: 0x246310d0  addiu       $v1, $v1, 0x10D0
    ctx->pc = 0x187d38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4304));
    // 0x187d3c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x187D3Cu;
    SET_GPR_U32(ctx, 31, 0x187D44u);
    ctx->pc = 0x187D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187D3Cu;
    // 0x187d40: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x187D3Cu, 0x187D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187D44u;
label_187d44:
    // 0x187d44: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x187d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x187d48: 0xae300010  sw          $s0, 0x10($s1)
    ctx->pc = 0x187d48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 16));
    // 0x187d4c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x187d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x187d50: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x187d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x187d54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x187d54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_187d58:
    // 0x187d58: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x187d58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x187d5c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x187d5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x187d60: 0x3e00008  jr          $ra
    ctx->pc = 0x187D60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187D60u;
        // 0x187d64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187D60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x187D68u;
}
