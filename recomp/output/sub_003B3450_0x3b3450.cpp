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

// Function: sub_003B3450
// Address: 0x3b3450 - 0x3b3510
void sub_003B3450_0x3b3450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B3450_0x3b3450");
#endif

    switch (ctx->pc) {
        case 0x3b3478u: goto label_3b3478;
        case 0x3b3498u: goto label_3b3498;
        case 0x3b34c0u: goto label_3b34c0;
        case 0x3b34d4u: goto label_3b34d4;
        default: break;
    }

    ctx->pc = 0x3b3450u;

    // 0x3b3450: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3b3450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3b3454: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x3b3454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x3b3458: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3b3458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3b345c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3b345cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3b3460: 0x245060c8  addiu       $s0, $v0, 0x60C8
    ctx->pc = 0x3b3460u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 24776));
    // 0x3b3464: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3b3464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3b3468: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3b3468u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b346c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3b346cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3b3470: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x3b3470u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b3474: 0x0  nop
    ctx->pc = 0x3b3474u;
    // NOP
label_3b3478:
    // 0x3b3478: 0x82030001  lb          $v1, 0x1($s0)
    ctx->pc = 0x3b3478u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x3b347c: 0x54720009  bnel        $v1, $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x3B347Cu;
    {
        const bool branch_taken_0x3b347c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        if (branch_taken_0x3b347c) {
            ctx->pc = 0x3B3480u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B347Cu;
            // 0x3b3480: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B34A4u;
            goto label_3b34a4;
        }
    }
    ctx->pc = 0x3B3484u;
    // 0x3b3484: 0x82020002  lb          $v0, 0x2($s0)
    ctx->pc = 0x3b3484u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3b3488: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B3488u;
    {
        const bool branch_taken_0x3b3488 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3b3488) {
            ctx->pc = 0x3B348Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B3488u;
            // 0x3b348c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B34A4u;
            goto label_3b34a4;
        }
    }
    ctx->pc = 0x3B3490u;
    // 0x3b3490: 0xc0f2750  jal         func_3C9D40
    ctx->pc = 0x3B3490u;
    SET_GPR_U32(ctx, 31, 0x3B3498u);
    ctx->pc = 0x3B3494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3490u;
    // 0x3b3494: 0x8e04002c  lw          $a0, 0x2C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C9D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C9D40u, 0x3B3490u, 0x3B3498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3498u;
label_3b3498:
    // 0x3b3498: 0x4430017  bgezl       $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x3B3498u;
    {
        const bool branch_taken_0x3b3498 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x3b3498) {
            ctx->pc = 0x3B349Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B3498u;
            // 0x3b349c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B34F8u;
            goto label_3b34f8;
        }
    }
    ctx->pc = 0x3B34A0u;
    // 0x3b34a0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3b34a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3b34a4:
    // 0x3b34a4: 0x2a220020  slti        $v0, $s1, 0x20
    ctx->pc = 0x3b34a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x3b34a8: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x3B34A8u;
    {
        const bool branch_taken_0x3b34a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B34ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B34A8u;
        // 0x3b34ac: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b34a8) {
            ctx->pc = 0x3B3478u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b3478;
        }
    }
    ctx->pc = 0x3B34B0u;
    // 0x3b34b0: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x3b34b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x3b34b4: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x3b34b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b34b8: 0x245060c8  addiu       $s0, $v0, 0x60C8
    ctx->pc = 0x3b34b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 24776));
    // 0x3b34bc: 0x2411001f  addiu       $s1, $zero, 0x1F
    ctx->pc = 0x3b34bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_3b34c0:
    // 0x3b34c0: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x3b34c0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3b34c4: 0x54520004  bnel        $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B34C4u;
    {
        const bool branch_taken_0x3b34c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x3b34c4) {
            ctx->pc = 0x3B34C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B34C4u;
            // 0x3b34c8: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B34D8u;
            goto label_3b34d8;
        }
    }
    ctx->pc = 0x3B34CCu;
    // 0x3b34cc: 0xc0ecc38  jal         func_3B30E0
    ctx->pc = 0x3B34CCu;
    SET_GPR_U32(ctx, 31, 0x3B34D4u);
    ctx->pc = 0x3B34D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B34CCu;
    // 0x3b34d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B30E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B30E0u, 0x3B34CCu, 0x3B34D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B34D4u;
label_3b34d4:
    // 0x3b34d4: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x3b34d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_3b34d8:
    // 0x3b34d8: 0x621fff9  bgez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3B34D8u;
    {
        const bool branch_taken_0x3b34d8 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x3B34DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B34D8u;
        // 0x3b34dc: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b34d8) {
            ctx->pc = 0x3B34C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b34c0;
        }
    }
    ctx->pc = 0x3B34E0u;
    // 0x3b34e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b34e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b34e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3b34e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3b34e8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3b34e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b34ec: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3b34ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3b34f0: 0x80e8fcc  j           func_3A3F30
    ctx->pc = 0x3B34F0u;
    ctx->pc = 0x3B34F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B34F0u;
    // 0x3b34f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3F30u;
    sub_003A3F30_0x3a3f30(rdram, ctx, runtime); return;
    ctx->pc = 0x3B34F8u;
label_3b34f8:
    // 0x3b34f8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3b34f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3b34fc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3b34fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b3500: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3b3500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3b3504: 0x3e00008  jr          $ra
    ctx->pc = 0x3B3504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B3508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3504u;
        // 0x3b3508: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B3504u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B350Cu;
    // 0x3b350c: 0x0  nop
    ctx->pc = 0x3b350cu;
    // NOP
    ctx->pc = 0x3b3510u;
}
