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

// Function: sub_002E1778
// Address: 0x2e1778 - 0x2e17c8
void sub_002E1778_0x2e1778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E1778_0x2e1778");
#endif

    switch (ctx->pc) {
        case 0x2e178cu: goto label_2e178c;
        case 0x2e17a4u: goto label_2e17a4;
        default: break;
    }

    ctx->pc = 0x2e1778u;

    // 0x2e1778: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e1778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e177c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e177cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e1780: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2e1780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2e1784: 0xc0b83ba  jal         func_2E0EE8
    ctx->pc = 0x2E1784u;
    SET_GPR_U32(ctx, 31, 0x2E178Cu);
    ctx->pc = 0x2E1788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1784u;
    // 0x2e1788: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0EE8u, 0x2E1784u, 0x2E178Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E178Cu;
label_2e178c:
    // 0x2e178c: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x2e178cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x2e1790: 0xae000108  sw          $zero, 0x108($s0)
    ctx->pc = 0x2e1790u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 0));
    // 0x2e1794: 0x24633e38  addiu       $v1, $v1, 0x3E38
    ctx->pc = 0x2e1794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15928));
    // 0x2e1798: 0x26040110  addiu       $a0, $s0, 0x110
    ctx->pc = 0x2e1798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x2e179c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2E179Cu;
    SET_GPR_U32(ctx, 31, 0x2E17A4u);
    ctx->pc = 0x2E17A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E179Cu;
    // 0x2e17a0: 0xae030070  sw          $v1, 0x70($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2E179Cu, 0x2E17A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E17A4u;
label_2e17a4:
    // 0x2e17a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e17a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e17a8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2e17a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e17ac: 0xae030100  sw          $v1, 0x100($s0)
    ctx->pc = 0x2e17acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 3));
    // 0x2e17b0: 0xae000104  sw          $zero, 0x104($s0)
    ctx->pc = 0x2e17b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 0));
    // 0x2e17b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e17b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e17b8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2e17b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e17bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2E17BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E17C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E17BCu;
        // 0x2e17c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E17BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E17C4u;
    // 0x2e17c4: 0x0  nop
    ctx->pc = 0x2e17c4u;
    // NOP
    ctx->pc = 0x2e17c8u;
}
