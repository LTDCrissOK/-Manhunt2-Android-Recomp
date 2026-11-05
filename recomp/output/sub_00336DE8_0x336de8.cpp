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

// Function: sub_00336DE8
// Address: 0x336de8 - 0x336e60
void sub_00336DE8_0x336de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00336DE8_0x336de8");
#endif

    switch (ctx->pc) {
        case 0x336e10u: goto label_336e10;
        case 0x336e18u: goto label_336e18;
        case 0x336e48u: goto label_336e48;
        default: break;
    }

    ctx->pc = 0x336de8u;

    // 0x336de8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x336de8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x336dec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x336decu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x336df0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x336df0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x336df4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x336df4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336df8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x336df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x336dfc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x336dfcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336e00: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x336e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x336e04: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x336E04u;
    {
        const bool branch_taken_0x336e04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x336E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336E04u;
        // 0x336e08: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336e04) {
            ctx->pc = 0x336E28u;
            goto label_336e28;
        }
    }
    ctx->pc = 0x336E0Cu;
    // 0x336e0c: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x336e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_336e10:
    // 0x336e10: 0xc0fbb2c  jal         func_3EECB0
    ctx->pc = 0x336E10u;
    SET_GPR_U32(ctx, 31, 0x336E18u);
    ctx->pc = 0x336E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336E10u;
    // 0x336e14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EECB0u, 0x336E10u, 0x336E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336E18u;
label_336e18:
    // 0x336e18: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x336e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x336e1c: 0x0  nop
    ctx->pc = 0x336e1cu;
    // NOP
    // 0x336e20: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x336E20u;
    {
        const bool branch_taken_0x336e20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x336e20) {
            ctx->pc = 0x336E24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x336E20u;
            // 0x336e24: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x336E10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_336e10;
        }
    }
    ctx->pc = 0x336E28u;
label_336e28:
    // 0x336e28: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x336e28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x336e2c: 0xa6000000  sh          $zero, 0x0($s0)
    ctx->pc = 0x336e2cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x336e30: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x336e30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x336e34: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x336e34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x336e38: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x336E38u;
    {
        const bool branch_taken_0x336e38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x336E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336E38u;
        // 0x336e3c: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336e38) {
            ctx->pc = 0x336E48u;
            goto label_336e48;
        }
    }
    ctx->pc = 0x336E40u;
    // 0x336e40: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x336E40u;
    SET_GPR_U32(ctx, 31, 0x336E48u);
    ctx->pc = 0x336E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336E40u;
    // 0x336e44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x336E40u, 0x336E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336E48u;
label_336e48:
    // 0x336e48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x336e48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x336e4c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x336e4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x336e50: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x336e50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x336e54: 0x3e00008  jr          $ra
    ctx->pc = 0x336E54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x336E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336E54u;
        // 0x336e58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x336E54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x336E5Cu;
    // 0x336e5c: 0x0  nop
    ctx->pc = 0x336e5cu;
    // NOP
    ctx->pc = 0x336e60u;
}
