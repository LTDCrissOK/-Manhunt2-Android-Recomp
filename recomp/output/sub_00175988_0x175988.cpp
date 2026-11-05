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

// Function: sub_00175988
// Address: 0x175988 - 0x1759e8
void sub_00175988_0x175988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00175988_0x175988");
#endif

    switch (ctx->pc) {
        case 0x17599cu: goto label_17599c;
        case 0x1759b0u: goto label_1759b0;
        case 0x1759bcu: goto label_1759bc;
        case 0x1759d0u: goto label_1759d0;
        default: break;
    }

    ctx->pc = 0x175988u;

    // 0x175988: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x175988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17598c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17598cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x175990: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x175990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x175994: 0xc04f794  jal         func_13DE50
    ctx->pc = 0x175994u;
    SET_GPR_U32(ctx, 31, 0x17599Cu);
    ctx->pc = 0x175998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175994u;
    // 0x175998: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13DE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DE50u, 0x175994u, 0x17599Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17599Cu;
label_17599c:
    // 0x17599c: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x17599cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x1759a0: 0x260400c0  addiu       $a0, $s0, 0xC0
    ctx->pc = 0x1759a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    // 0x1759a4: 0x24630f00  addiu       $v1, $v1, 0xF00
    ctx->pc = 0x1759a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3840));
    // 0x1759a8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1759A8u;
    SET_GPR_U32(ctx, 31, 0x1759B0u);
    ctx->pc = 0x1759ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1759A8u;
    // 0x1759ac: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1759A8u, 0x1759B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1759B0u;
label_1759b0:
    // 0x1759b0: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x1759b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x1759b4: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1759B4u;
    SET_GPR_U32(ctx, 31, 0x1759BCu);
    ctx->pc = 0x1759B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1759B4u;
    // 0x1759b8: 0x260400f0  addiu       $a0, $s0, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1759B4u, 0x1759BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1759BCu;
label_1759bc:
    // 0x1759bc: 0xae000100  sw          $zero, 0x100($s0)
    ctx->pc = 0x1759bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 0));
    // 0x1759c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1759c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1759c4: 0xae000104  sw          $zero, 0x104($s0)
    ctx->pc = 0x1759c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 0));
    // 0x1759c8: 0xc05d81a  jal         func_176068
    ctx->pc = 0x1759C8u;
    SET_GPR_U32(ctx, 31, 0x1759D0u);
    ctx->pc = 0x1759CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1759C8u;
    // 0x1759cc: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x176068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176068u, 0x1759C8u, 0x1759D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1759D0u;
label_1759d0:
    // 0x1759d0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1759d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1759d4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1759d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1759d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1759d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1759dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1759DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1759E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1759DCu;
        // 0x1759e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1759DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1759E4u;
    // 0x1759e4: 0x0  nop
    ctx->pc = 0x1759e4u;
    // NOP
    ctx->pc = 0x1759e8u;
}
