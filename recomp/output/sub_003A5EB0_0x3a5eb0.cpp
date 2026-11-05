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

// Function: sub_003A5EB0
// Address: 0x3a5eb0 - 0x3a5f50
void sub_003A5EB0_0x3a5eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A5EB0_0x3a5eb0");
#endif

    switch (ctx->pc) {
        case 0x3a5ee0u: goto label_3a5ee0;
        case 0x3a5ef4u: goto label_3a5ef4;
        case 0x3a5efcu: goto label_3a5efc;
        case 0x3a5f08u: goto label_3a5f08;
        case 0x3a5f1cu: goto label_3a5f1c;
        default: break;
    }

    ctx->pc = 0x3a5eb0u;

    // 0x3a5eb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a5eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3a5eb4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3a5eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3a5eb8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3a5eb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5ebc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a5ebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3a5ec0: 0x1220001d  beqz        $s1, . + 4 + (0x1D << 2)
    ctx->pc = 0x3A5EC0u;
    {
        const bool branch_taken_0x3a5ec0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5EC0u;
        // 0x3a5ec4: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5ec0) {
            ctx->pc = 0x3A5F38u;
            goto label_3a5f38;
        }
    }
    ctx->pc = 0x3A5EC8u;
    // 0x3a5ec8: 0x92220002  lbu         $v0, 0x2($s1)
    ctx->pc = 0x3a5ec8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x3a5ecc: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x3a5eccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x3a5ed0: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A5ED0u;
    {
        const bool branch_taken_0x3a5ed0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a5ed0) {
            ctx->pc = 0x3A5ED4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A5ED0u;
            // 0x3a5ed4: 0x82220001  lb          $v0, 0x1($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A5EE4u;
            goto label_3a5ee4;
        }
    }
    ctx->pc = 0x3A5ED8u;
    // 0x3a5ed8: 0xc0e986c  jal         func_3A61B0
    ctx->pc = 0x3A5ED8u;
    SET_GPR_U32(ctx, 31, 0x3A5EE0u);
    ctx->pc = 0x3A61B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A61B0u, 0x3A5ED8u, 0x3A5EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5EE0u;
label_3a5ee0:
    // 0x3a5ee0: 0x82220001  lb          $v0, 0x1($s1)
    ctx->pc = 0x3a5ee0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
label_3a5ee4:
    // 0x3a5ee4: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x3A5EE4u;
    {
        const bool branch_taken_0x3a5ee4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a5ee4) {
            ctx->pc = 0x3A5EE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A5EE4u;
            // 0x3a5ee8: 0xa2200000  sb          $zero, 0x0($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A5F20u;
            goto label_3a5f20;
        }
    }
    ctx->pc = 0x3A5EECu;
    // 0x3a5eec: 0xc0e8d0c  jal         func_3A3430
    ctx->pc = 0x3A5EECu;
    SET_GPR_U32(ctx, 31, 0x3A5EF4u);
    ctx->pc = 0x3A5EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5EECu;
    // 0x3a5ef0: 0x24045000  addiu       $a0, $zero, 0x5000 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3430u, 0x3A5EECu, 0x3A5EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5EF4u;
label_3a5ef4:
    // 0x3a5ef4: 0xc0e8dc2  jal         func_3A3708
    ctx->pc = 0x3A5EF4u;
    SET_GPR_U32(ctx, 31, 0x3A5EFCu);
    ctx->pc = 0x3A5EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5EF4u;
    // 0x3a5ef8: 0x8e240018  lw          $a0, 0x18($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3708u, 0x3A5EF4u, 0x3A5EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5EFCu;
label_3a5efc:
    // 0x3a5efc: 0x24045001  addiu       $a0, $zero, 0x5001
    ctx->pc = 0x3a5efcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20481));
    // 0x3a5f00: 0xc0e8d0c  jal         func_3A3430
    ctx->pc = 0x3A5F00u;
    SET_GPR_U32(ctx, 31, 0x3A5F08u);
    ctx->pc = 0x3A5F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5F00u;
    // 0x3a5f04: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3430u, 0x3A5F00u, 0x3A5F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5F08u;
label_3a5f08:
    // 0x3a5f08: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3a5f08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3a5f0c: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A5F0Cu;
    {
        const bool branch_taken_0x3a5f0c = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x3A5F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5F0Cu;
        // 0x3a5f10: 0x2484ddb8  addiu       $a0, $a0, -0x2248 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958520));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5f0c) {
            ctx->pc = 0x3A5F1Cu;
            goto label_3a5f1c;
        }
    }
    ctx->pc = 0x3A5F14u;
    // 0x3a5f14: 0xc0e5ea0  jal         func_397A80
    ctx->pc = 0x3A5F14u;
    SET_GPR_U32(ctx, 31, 0x3A5F1Cu);
    ctx->pc = 0x397A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397A80u, 0x3A5F14u, 0x3A5F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5F1Cu;
label_3a5f1c:
    // 0x3a5f1c: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x3a5f1cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
label_3a5f20:
    // 0x3a5f20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a5f20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5f24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a5f24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a5f28: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3a5f28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a5f2c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3a5f2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a5f30: 0x80e9748  j           func_3A5D20
    ctx->pc = 0x3A5F30u;
    ctx->pc = 0x3A5F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5F30u;
    // 0x3a5f34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5D20u;
    sub_003A5D20_0x3a5d20(rdram, ctx, runtime); return;
    ctx->pc = 0x3A5F38u;
label_3a5f38:
    // 0x3a5f38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a5f38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a5f3c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3a5f3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a5f40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3a5f40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a5f44: 0x3e00008  jr          $ra
    ctx->pc = 0x3A5F44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A5F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5F44u;
        // 0x3a5f48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A5F44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A5F4Cu;
    // 0x3a5f4c: 0x0  nop
    ctx->pc = 0x3a5f4cu;
    // NOP
    ctx->pc = 0x3a5f50u;
}
