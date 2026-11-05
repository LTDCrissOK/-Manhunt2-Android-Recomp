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

// Function: sub_00363BC8
// Address: 0x363bc8 - 0x363c40
void sub_00363BC8_0x363bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00363BC8_0x363bc8");
#endif

    switch (ctx->pc) {
        case 0x363be4u: goto label_363be4;
        case 0x363c00u: goto label_363c00;
        default: break;
    }

    ctx->pc = 0x363bc8u;

    // 0x363bc8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x363bc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x363bcc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x363bccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x363bd0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x363bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x363bd4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x363bd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363bd8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x363bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x363bdc: 0xc0d8d38  jal         func_3634E0
    ctx->pc = 0x363BDCu;
    SET_GPR_U32(ctx, 31, 0x363BE4u);
    ctx->pc = 0x363BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363BDCu;
    // 0x363be0: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3634E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3634E0u, 0x363BDCu, 0x363BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363BE4u;
label_363be4:
    // 0x363be4: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x363be4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x363be8: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x363be8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x363bec: 0x24634630  addiu       $v1, $v1, 0x4630
    ctx->pc = 0x363becu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17968));
    // 0x363bf0: 0xae00007c  sw          $zero, 0x7C($s0)
    ctx->pc = 0x363bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 0));
    // 0x363bf4: 0xae03005c  sw          $v1, 0x5C($s0)
    ctx->pc = 0x363bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 3));
    // 0x363bf8: 0x26020078  addiu       $v0, $s0, 0x78
    ctx->pc = 0x363bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x363bfc: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x363bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_363c00:
    // 0x363c00: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x363c00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x363c04: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x363c04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x363c08: 0x0  nop
    ctx->pc = 0x363c08u;
    // NOP
    // 0x363c0c: 0x0  nop
    ctx->pc = 0x363c0cu;
    // NOP
    // 0x363c10: 0x461fffb  bgez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x363C10u;
    {
        const bool branch_taken_0x363c10 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x363C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363C10u;
        // 0x363c14: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363c10) {
            ctx->pc = 0x363C00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_363c00;
        }
    }
    ctx->pc = 0x363C18u;
    // 0x363c18: 0x8e2400b8  lw          $a0, 0xB8($s1)
    ctx->pc = 0x363c18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
    // 0x363c1c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x363c1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363c20: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x363c20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x363c24: 0x8c830690  lw          $v1, 0x690($a0)
    ctx->pc = 0x363c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1680)));
    // 0x363c28: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x363c28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x363c2c: 0xae03007c  sw          $v1, 0x7C($s0)
    ctx->pc = 0x363c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 3));
    // 0x363c30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x363c30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x363c34: 0x3e00008  jr          $ra
    ctx->pc = 0x363C34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x363C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363C34u;
        // 0x363c38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x363C34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x363C3Cu;
    // 0x363c3c: 0x0  nop
    ctx->pc = 0x363c3cu;
    // NOP
    ctx->pc = 0x363c40u;
}
