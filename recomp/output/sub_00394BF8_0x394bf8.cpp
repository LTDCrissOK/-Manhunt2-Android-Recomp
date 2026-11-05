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

// Function: sub_00394BF8
// Address: 0x394bf8 - 0x394c60
void sub_00394BF8_0x394bf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00394BF8_0x394bf8");
#endif

    switch (ctx->pc) {
        case 0x394c2cu: goto label_394c2c;
        case 0x394c34u: goto label_394c34;
        case 0x394c48u: goto label_394c48;
        default: break;
    }

    ctx->pc = 0x394bf8u;

    // 0x394bf8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x394bf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x394bfc: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x394bfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394c00: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x394c00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x394c04: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x394c04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394c08: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x394c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x394c0c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x394c0cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394c10: 0xae07002c  sw          $a3, 0x2C($s0)
    ctx->pc = 0x394c10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 7));
    // 0x394c14: 0x842f8  dsll        $t0, $t0, 11
    ctx->pc = 0x394c14u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 11);
    // 0x394c18: 0xae060030  sw          $a2, 0x30($s0)
    ctx->pc = 0x394c18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 6));
    // 0x394c1c: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x394c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x394c20: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x394c20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x394c24: 0xc0e6636  jal         func_3998D8
    ctx->pc = 0x394C24u;
    SET_GPR_U32(ctx, 31, 0x394C2Cu);
    ctx->pc = 0x394C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394C24u;
    // 0x394c28: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3998D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3998D8u, 0x394C24u, 0x394C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394C2Cu;
label_394c2c:
    // 0x394c2c: 0xc0e66ac  jal         func_399AB0
    ctx->pc = 0x394C2Cu;
    SET_GPR_U32(ctx, 31, 0x394C34u);
    ctx->pc = 0x394C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394C2Cu;
    // 0x394c30: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399AB0u, 0x394C2Cu, 0x394C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394C34u;
label_394c34:
    // 0x394c34: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x394c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x394c38: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x394C38u;
    {
        const bool branch_taken_0x394c38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x394c38) {
            ctx->pc = 0x394C3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x394C38u;
            // 0x394c3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x394C4Cu;
            goto label_394c4c;
        }
    }
    ctx->pc = 0x394C40u;
    // 0x394c40: 0xc0e667c  jal         func_3999F0
    ctx->pc = 0x394C40u;
    SET_GPR_U32(ctx, 31, 0x394C48u);
    ctx->pc = 0x394C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394C40u;
    // 0x394c44: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3999F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3999F0u, 0x394C40u, 0x394C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394C48u;
label_394c48:
    // 0x394c48: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x394c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_394c4c:
    // 0x394c4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x394c4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x394c50: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x394c50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x394c54: 0x3e00008  jr          $ra
    ctx->pc = 0x394C54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x394C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394C54u;
        // 0x394c58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x394C54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x394C5Cu;
    // 0x394c5c: 0x0  nop
    ctx->pc = 0x394c5cu;
    // NOP
    ctx->pc = 0x394c60u;
}
