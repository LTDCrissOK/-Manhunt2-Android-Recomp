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

// Function: sub_00135AC0
// Address: 0x135ac0 - 0x135b48
void sub_00135AC0_0x135ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00135AC0_0x135ac0");
#endif

    switch (ctx->pc) {
        case 0x135ad4u: goto label_135ad4;
        case 0x135af0u: goto label_135af0;
        case 0x135b34u: goto label_135b34;
        default: break;
    }

    ctx->pc = 0x135ac0u;

    // 0x135ac0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x135ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x135ac4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x135ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x135ac8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x135ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x135acc: 0xc04f70e  jal         func_13DC38
    ctx->pc = 0x135ACCu;
    SET_GPR_U32(ctx, 31, 0x135AD4u);
    ctx->pc = 0x135AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135ACCu;
    // 0x135ad0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13DC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DC38u, 0x135ACCu, 0x135AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135AD4u;
label_135ad4:
    // 0x135ad4: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x135ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x135ad8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x135ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x135adc: 0x244205f0  addiu       $v0, $v0, 0x5F0
    ctx->pc = 0x135adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1520));
    // 0x135ae0: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x135ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x135ae4: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x135ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x135ae8: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x135ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x135aec: 0x0  nop
    ctx->pc = 0x135aecu;
    // NOP
label_135af0:
    // 0x135af0: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x135af0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x135af4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x135af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x135af8: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x135af8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x135afc: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x135afcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
    // 0x135b00: 0xac600020  sw          $zero, 0x20($v1)
    ctx->pc = 0x135b00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 0));
    // 0x135b04: 0xac600034  sw          $zero, 0x34($v1)
    ctx->pc = 0x135b04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 0));
    // 0x135b08: 0x1444fff9  bne         $v0, $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x135B08u;
    {
        const bool branch_taken_0x135b08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x135B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135B08u;
        // 0x135b0c: 0x24630040  addiu       $v1, $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135b08) {
            ctx->pc = 0x135AF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_135af0;
        }
    }
    ctx->pc = 0x135B10u;
    // 0x135b10: 0xae0004b4  sw          $zero, 0x4B4($s0)
    ctx->pc = 0x135b10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1204), GPR_U32(ctx, 0));
    // 0x135b14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x135b14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135b18: 0xae0004b8  sw          $zero, 0x4B8($s0)
    ctx->pc = 0x135b18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1208), GPR_U32(ctx, 0));
    // 0x135b1c: 0xae0004c0  sw          $zero, 0x4C0($s0)
    ctx->pc = 0x135b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1216), GPR_U32(ctx, 0));
    // 0x135b20: 0xae0004c4  sw          $zero, 0x4C4($s0)
    ctx->pc = 0x135b20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1220), GPR_U32(ctx, 0));
    // 0x135b24: 0xae0004cc  sw          $zero, 0x4CC($s0)
    ctx->pc = 0x135b24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1228), GPR_U32(ctx, 0));
    // 0x135b28: 0xae0004d0  sw          $zero, 0x4D0($s0)
    ctx->pc = 0x135b28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1232), GPR_U32(ctx, 0));
    // 0x135b2c: 0xc04d7ea  jal         func_135FA8
    ctx->pc = 0x135B2Cu;
    SET_GPR_U32(ctx, 31, 0x135B34u);
    ctx->pc = 0x135B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135B2Cu;
    // 0x135b30: 0xae000460  sw          $zero, 0x460($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1120), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135FA8u, 0x135B2Cu, 0x135B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135B34u;
label_135b34:
    // 0x135b34: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x135b34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135b38: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x135b38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x135b3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x135b3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x135b40: 0x3e00008  jr          $ra
    ctx->pc = 0x135B40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x135B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135B40u;
        // 0x135b44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x135B40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x135B48u;
}
