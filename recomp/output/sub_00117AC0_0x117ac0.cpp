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

// Function: sub_00117AC0
// Address: 0x117ac0 - 0x117b18
void sub_00117AC0_0x117ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00117AC0_0x117ac0");
#endif

    switch (ctx->pc) {
        case 0x117adcu: goto label_117adc;
        case 0x117ae4u: goto label_117ae4;
        case 0x117aecu: goto label_117aec;
        case 0x117b04u: goto label_117b04;
        default: break;
    }

    ctx->pc = 0x117ac0u;

    // 0x117ac0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x117ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x117ac4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x117ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x117ac8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x117ac8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117acc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x117accu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x117ad0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x117ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x117ad4: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x117AD4u;
    SET_GPR_U32(ctx, 31, 0x117ADCu);
    ctx->pc = 0x117AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117AD4u;
    // 0x117ad8: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x117AD4u, 0x117ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117ADCu;
label_117adc:
    // 0x117adc: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x117ADCu;
    SET_GPR_U32(ctx, 31, 0x117AE4u);
    ctx->pc = 0x117AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117ADCu;
    // 0x117ae0: 0x26040060  addiu       $a0, $s0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x117ADCu, 0x117AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117AE4u;
label_117ae4:
    // 0x117ae4: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x117AE4u;
    SET_GPR_U32(ctx, 31, 0x117AECu);
    ctx->pc = 0x117AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117AE4u;
    // 0x117ae8: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x117AE4u, 0x117AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117AECu;
label_117aec:
    // 0x117aec: 0xae000080  sw          $zero, 0x80($s0)
    ctx->pc = 0x117aecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
    // 0x117af0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x117af0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117af4: 0xae000084  sw          $zero, 0x84($s0)
    ctx->pc = 0x117af4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 0));
    // 0x117af8: 0xae000088  sw          $zero, 0x88($s0)
    ctx->pc = 0x117af8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
    // 0x117afc: 0xc04635e  jal         func_118D78
    ctx->pc = 0x117AFCu;
    SET_GPR_U32(ctx, 31, 0x117B04u);
    ctx->pc = 0x117B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117AFCu;
    // 0x117b00: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118D78u, 0x117AFCu, 0x117B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117B04u;
label_117b04:
    // 0x117b04: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x117b04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117b08: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x117b08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x117b0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x117b0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x117b10: 0x3e00008  jr          $ra
    ctx->pc = 0x117B10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117B10u;
        // 0x117b14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117B10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x117B18u;
}
