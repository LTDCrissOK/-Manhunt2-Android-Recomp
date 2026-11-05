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

// Function: sub_00147BF0
// Address: 0x147bf0 - 0x147c90
void sub_00147BF0_0x147bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00147BF0_0x147bf0");
#endif

    switch (ctx->pc) {
        case 0x147c04u: goto label_147c04;
        case 0x147c20u: goto label_147c20;
        case 0x147c40u: goto label_147c40;
        case 0x147c4cu: goto label_147c4c;
        case 0x147c70u: goto label_147c70;
        case 0x147c7cu: goto label_147c7c;
        default: break;
    }

    ctx->pc = 0x147bf0u;

    // 0x147bf0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x147bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x147bf4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x147bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x147bf8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x147bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x147bfc: 0xc04d6b0  jal         func_135AC0
    ctx->pc = 0x147BFCu;
    SET_GPR_U32(ctx, 31, 0x147C04u);
    ctx->pc = 0x147C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147BFCu;
    // 0x147c00: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135AC0u, 0x147BFCu, 0x147C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147C04u;
label_147c04:
    // 0x147c04: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x147c04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x147c08: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x147c08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x147c0c: 0x24420990  addiu       $v0, $v0, 0x990
    ctx->pc = 0x147c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2448));
    // 0x147c10: 0x260304e0  addiu       $v1, $s0, 0x4E0
    ctx->pc = 0x147c10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1248));
    // 0x147c14: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x147c14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x147c18: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x147c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x147c1c: 0x0  nop
    ctx->pc = 0x147c1cu;
    // NOP
label_147c20:
    // 0x147c20: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x147c20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x147c24: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x147c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x147c28: 0x0  nop
    ctx->pc = 0x147c28u;
    // NOP
    // 0x147c2c: 0x0  nop
    ctx->pc = 0x147c2cu;
    // NOP
    // 0x147c30: 0x1444fffb  bne         $v0, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x147C30u;
    {
        const bool branch_taken_0x147c30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x147C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147C30u;
        // 0x147c34: 0x2463001c  addiu       $v1, $v1, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147c30) {
            ctx->pc = 0x147C20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_147c20;
        }
    }
    ctx->pc = 0x147C38u;
    // 0x147c38: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x147C38u;
    SET_GPR_U32(ctx, 31, 0x147C40u);
    ctx->pc = 0x147C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147C38u;
    // 0x147c3c: 0x260406b0  addiu       $a0, $s0, 0x6B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x147C38u, 0x147C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147C40u;
label_147c40:
    // 0x147c40: 0xae0006c0  sw          $zero, 0x6C0($s0)
    ctx->pc = 0x147c40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1728), GPR_U32(ctx, 0));
    // 0x147c44: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x147C44u;
    SET_GPR_U32(ctx, 31, 0x147C4Cu);
    ctx->pc = 0x147C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147C44u;
    // 0x147c48: 0x260406d0  addiu       $a0, $s0, 0x6D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x147C44u, 0x147C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147C4Cu;
label_147c4c:
    // 0x147c4c: 0xae0006e0  sw          $zero, 0x6E0($s0)
    ctx->pc = 0x147c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1760), GPR_U32(ctx, 0));
    // 0x147c50: 0x26040710  addiu       $a0, $s0, 0x710
    ctx->pc = 0x147c50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1808));
    // 0x147c54: 0xae0006ec  sw          $zero, 0x6EC($s0)
    ctx->pc = 0x147c54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1772), GPR_U32(ctx, 0));
    // 0x147c58: 0xae0006f0  sw          $zero, 0x6F0($s0)
    ctx->pc = 0x147c58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1776), GPR_U32(ctx, 0));
    // 0x147c5c: 0xae0006f4  sw          $zero, 0x6F4($s0)
    ctx->pc = 0x147c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1780), GPR_U32(ctx, 0));
    // 0x147c60: 0xae0006fc  sw          $zero, 0x6FC($s0)
    ctx->pc = 0x147c60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1788), GPR_U32(ctx, 0));
    // 0x147c64: 0xae000700  sw          $zero, 0x700($s0)
    ctx->pc = 0x147c64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1792), GPR_U32(ctx, 0));
    // 0x147c68: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x147C68u;
    SET_GPR_U32(ctx, 31, 0x147C70u);
    ctx->pc = 0x147C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147C68u;
    // 0x147c6c: 0xae000704  sw          $zero, 0x704($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1796), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x147C68u, 0x147C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147C70u;
label_147c70:
    // 0x147c70: 0xae000460  sw          $zero, 0x460($s0)
    ctx->pc = 0x147c70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1120), GPR_U32(ctx, 0));
    // 0x147c74: 0xc0520e6  jal         func_148398
    ctx->pc = 0x147C74u;
    SET_GPR_U32(ctx, 31, 0x147C7Cu);
    ctx->pc = 0x147C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147C74u;
    // 0x147c78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148398u, 0x147C74u, 0x147C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147C7Cu;
label_147c7c:
    // 0x147c7c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x147c7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147c80: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x147c80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x147c84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x147c84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x147c88: 0x3e00008  jr          $ra
    ctx->pc = 0x147C88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x147C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147C88u;
        // 0x147c8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x147C88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x147C90u;
}
