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

// Function: sub_0037CC30
// Address: 0x37cc30 - 0x37cca8
void sub_0037CC30_0x37cc30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037CC30_0x37cc30");
#endif

    switch (ctx->pc) {
        case 0x37cc58u: goto label_37cc58;
        case 0x37cc6cu: goto label_37cc6c;
        case 0x37cc78u: goto label_37cc78;
        case 0x37cc90u: goto label_37cc90;
        default: break;
    }

    ctx->pc = 0x37cc30u;

    // 0x37cc30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x37cc30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x37cc34: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x37cc34u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37cc38: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x37cc38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x37cc3c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x37cc3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37cc40: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x37cc40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37cc44: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x37cc44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x37cc48: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x37cc48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x37cc4c: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x37cc4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x37cc50: 0xc0df334  jal         func_37CCD0
    ctx->pc = 0x37CC50u;
    SET_GPR_U32(ctx, 31, 0x37CC58u);
    ctx->pc = 0x37CC54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CC50u;
    // 0x37cc54: 0x240700ff  addiu       $a3, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37CCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37CCD0u, 0x37CC50u, 0x37CC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CC58u;
label_37cc58:
    // 0x37cc58: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x37cc58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37cc5c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x37cc5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37cc60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37cc60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37cc64: 0xc0df364  jal         func_37CD90
    ctx->pc = 0x37CC64u;
    SET_GPR_U32(ctx, 31, 0x37CC6Cu);
    ctx->pc = 0x37CC68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CC64u;
    // 0x37cc68: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37CD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37CD90u, 0x37CC64u, 0x37CC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CC6Cu;
label_37cc6c:
    // 0x37cc6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37cc6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37cc70: 0xc0df380  jal         func_37CE00
    ctx->pc = 0x37CC70u;
    SET_GPR_U32(ctx, 31, 0x37CC78u);
    ctx->pc = 0x37CC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CC70u;
    // 0x37cc74: 0x240500ff  addiu       $a1, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37CE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37CE00u, 0x37CC70u, 0x37CC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CC78u;
label_37cc78:
    // 0x37cc78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37cc78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37cc7c: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x37cc7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x37cc80: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x37cc80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x37cc84: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x37cc84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x37cc88: 0xc0df390  jal         func_37CE40
    ctx->pc = 0x37CC88u;
    SET_GPR_U32(ctx, 31, 0x37CC90u);
    ctx->pc = 0x37CC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CC88u;
    // 0x37cc8c: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37CE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37CE40u, 0x37CC88u, 0x37CC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CC90u;
label_37cc90:
    // 0x37cc90: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x37cc90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37cc94: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x37cc94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x37cc98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x37cc98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37cc9c: 0x3e00008  jr          $ra
    ctx->pc = 0x37CC9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37CCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CC9Cu;
        // 0x37cca0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37CC9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37CCA4u;
    // 0x37cca4: 0x0  nop
    ctx->pc = 0x37cca4u;
    // NOP
    ctx->pc = 0x37cca8u;
}
