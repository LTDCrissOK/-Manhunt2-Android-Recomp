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

// Function: sub_001049C0
// Address: 0x1049c0 - 0x104a48
void sub_001049C0_0x1049c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001049C0_0x1049c0");
#endif

    switch (ctx->pc) {
        case 0x1049e8u: goto label_1049e8;
        case 0x104a10u: goto label_104a10;
        default: break;
    }

    ctx->pc = 0x1049c0u;

    // 0x1049c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1049c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1049c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1049c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1049c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1049c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1049cc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1049ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1049d0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1049d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1049d4: 0x26040034  addiu       $a0, $s0, 0x34
    ctx->pc = 0x1049d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
    // 0x1049d8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1049d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1049dc: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1049dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1049e0: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x1049E0u;
    SET_GPR_U32(ctx, 31, 0x1049E8u);
    ctx->pc = 0x1049E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1049E0u;
    // 0x1049e4: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x1049E0u, 0x1049E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1049E8u;
label_1049e8:
    // 0x1049e8: 0x2602003c  addiu       $v0, $s0, 0x3C
    ctx->pc = 0x1049e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
    // 0x1049ec: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x1049ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x1049f0: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1049f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x1049f4: 0x26050014  addiu       $a1, $s0, 0x14
    ctx->pc = 0x1049f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x1049f8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1049f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1049fc: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x1049fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x104a00: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x104a00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x104a04: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x104a04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104a08: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x104a08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x104a0c: 0x0  nop
    ctx->pc = 0x104a0cu;
    // NOP
label_104a10:
    // 0x104a10: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x104a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x104a14: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x104a14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x104a18: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x104a18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x104a1c: 0x2c820018  sltiu       $v0, $a0, 0x18
    ctx->pc = 0x104a1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)24) ? 1 : 0);
    // 0x104a20: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x104A20u;
    {
        const bool branch_taken_0x104a20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x104A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104A20u;
        // 0x104a24: 0xa0660000  sb          $a2, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104a20) {
            ctx->pc = 0x104A10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_104a10;
        }
    }
    ctx->pc = 0x104A28u;
    // 0x104a28: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x104a28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104a2c: 0xa200002c  sb          $zero, 0x2C($s0)
    ctx->pc = 0x104a2cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x104a30: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x104a30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x104a34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x104a34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x104a38: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x104a38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x104a3c: 0x3e00008  jr          $ra
    ctx->pc = 0x104A3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x104A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104A3Cu;
        // 0x104a40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104A3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x104A44u;
    // 0x104a44: 0x0  nop
    ctx->pc = 0x104a44u;
    // NOP
    ctx->pc = 0x104a48u;
}
