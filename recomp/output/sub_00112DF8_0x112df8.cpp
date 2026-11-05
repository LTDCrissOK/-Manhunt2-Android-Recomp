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

// Function: sub_00112DF8
// Address: 0x112df8 - 0x112e50
void sub_00112DF8_0x112df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00112DF8_0x112df8");
#endif

    switch (ctx->pc) {
        case 0x112e1cu: goto label_112e1c;
        case 0x112e28u: goto label_112e28;
        case 0x112e38u: goto label_112e38;
        default: break;
    }

    ctx->pc = 0x112df8u;

    // 0x112df8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x112df8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x112dfc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x112dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x112e00: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x112e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x112e04: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x112e04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112e08: 0x8e02012c  lw          $v0, 0x12C($s0)
    ctx->pc = 0x112e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
    // 0x112e0c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x112E0Cu;
    {
        const bool branch_taken_0x112e0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x112e0c) {
            ctx->pc = 0x112E10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x112E0Cu;
            // 0x112e10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x112E3Cu;
            goto label_112e3c;
        }
    }
    ctx->pc = 0x112E14u;
    // 0x112e14: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x112E14u;
    SET_GPR_U32(ctx, 31, 0x112E1Cu);
    ctx->pc = 0x112E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112E14u;
    // 0x112e18: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x112E14u, 0x112E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112E1Cu;
label_112e1c:
    // 0x112e1c: 0x8e05012c  lw          $a1, 0x12C($s0)
    ctx->pc = 0x112e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
    // 0x112e20: 0xc0aafd2  jal         func_2ABF48
    ctx->pc = 0x112E20u;
    SET_GPR_U32(ctx, 31, 0x112E28u);
    ctx->pc = 0x112E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112E20u;
    // 0x112e24: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF48u, 0x112E20u, 0x112E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112E28u;
label_112e28:
    // 0x112e28: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x112e28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112e2c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x112e2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112e30: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x112E30u;
    SET_GPR_U32(ctx, 31, 0x112E38u);
    ctx->pc = 0x112E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112E30u;
    // 0x112e34: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x112E30u, 0x112E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112E38u;
label_112e38:
    // 0x112e38: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x112e38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_112e3c:
    // 0x112e3c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x112e3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x112e40: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x112e40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x112e44: 0x3e00008  jr          $ra
    ctx->pc = 0x112E44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x112E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112E44u;
        // 0x112e48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x112E44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x112E4Cu;
    // 0x112e4c: 0x0  nop
    ctx->pc = 0x112e4cu;
    // NOP
    ctx->pc = 0x112e50u;
}
