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

// Function: sub_003C3440
// Address: 0x3c3440 - 0x3c3510
void sub_003C3440_0x3c3440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C3440_0x3c3440");
#endif

    switch (ctx->pc) {
        case 0x3c3468u: goto label_3c3468;
        case 0x3c3480u: goto label_3c3480;
        case 0x3c34dcu: goto label_3c34dc;
        case 0x3c3500u: goto label_3c3500;
        default: break;
    }

    ctx->pc = 0x3c3440u;

    // 0x3c3440: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3c3440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3c3444: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x3c3444u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c3448: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3c3448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3c344c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x3c344cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c3450: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3c3450u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c3454: 0x81020000  lb          $v0, 0x0($t0)
    ctx->pc = 0x3c3454u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3c3458: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x3C3458u;
    {
        const bool branch_taken_0x3c3458 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C345Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3458u;
        // 0x3c345c: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3458) {
            ctx->pc = 0x3C34F4u;
            goto label_3c34f4;
        }
    }
    ctx->pc = 0x3C3460u;
    // 0x3c3460: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x3c3460u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3c3464: 0x0  nop
    ctx->pc = 0x3c3464u;
    // NOP
label_3c3468:
    // 0x3c3468: 0x24020025  addiu       $v0, $zero, 0x25
    ctx->pc = 0x3c3468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x3c346c: 0x5462001e  bnel        $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x3C346Cu;
    {
        const bool branch_taken_0x3c346c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3c346c) {
            ctx->pc = 0x3C3470u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C346Cu;
            // 0x3c3470: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C34E8u;
            goto label_3c34e8;
        }
    }
    ctx->pc = 0x3C3474u;
    // 0x3c3474: 0x80c20001  lb          $v0, 0x1($a2)
    ctx->pc = 0x3c3474u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x3c3478: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x3C3478u;
    {
        const bool branch_taken_0x3c3478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C347Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3478u;
        // 0x3c347c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3478) {
            ctx->pc = 0x3C34E8u;
            goto label_3c34e8;
        }
    }
    ctx->pc = 0x3C3480u;
label_3c3480:
    // 0x3c3480: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x3c3480u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3c3484: 0x28420041  slti        $v0, $v0, 0x41
    ctx->pc = 0x3c3484u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)65) ? 1 : 0);
    // 0x3c3488: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3C3488u;
    {
        const bool branch_taken_0x3c3488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c3488) {
            ctx->pc = 0x3C348Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C3488u;
            // 0x3c348c: 0x90c20000  lbu         $v0, 0x0($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C34A0u;
            goto label_3c34a0;
        }
    }
    ctx->pc = 0x3C3490u;
    // 0x3c3490: 0x80c20001  lb          $v0, 0x1($a2)
    ctx->pc = 0x3c3490u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x3c3494: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3C3494u;
    {
        const bool branch_taken_0x3c3494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c3494) {
            ctx->pc = 0x3C3498u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C3494u;
            // 0x3c3498: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C3480u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c3480;
        }
    }
    ctx->pc = 0x3C349Cu;
    // 0x3c349c: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x3c349cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_3c34a0:
    // 0x3c34a0: 0x2442ffbb  addiu       $v0, $v0, -0x45
    ctx->pc = 0x3c34a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967227));
    // 0x3c34a4: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x3c34a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x3c34a8: 0x22603  sra         $a0, $v0, 24
    ctx->pc = 0x3c34a8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 24));
    // 0x3c34ac: 0x2c830023  sltiu       $v1, $a0, 0x23
    ctx->pc = 0x3c34acu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)35) ? 1 : 0);
    // 0x3c34b0: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x3C34B0u;
    {
        const bool branch_taken_0x3c34b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C34B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C34B0u;
        // 0x3c34b4: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c34b0) {
            ctx->pc = 0x3C34E4u;
            goto label_3c34e4;
        }
    }
    ctx->pc = 0x3C34B8u;
    // 0x3c34b8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3c34b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3c34bc: 0x244212c0  addiu       $v0, $v0, 0x12C0
    ctx->pc = 0x3c34bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x3c34c0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3c34c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3c34c4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3c34c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3c34c8: 0x800008  jr          $a0
    ctx->pc = 0x3C34C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3C34D0u: goto label_3c34d0;
            case 0x3C34E4u: goto label_3c34e4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C34C8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3C34D0u;
label_3c34d0:
    // 0x3c34d0: 0x8ca40054  lw          $a0, 0x54($a1)
    ctx->pc = 0x3c34d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
    // 0x3c34d4: 0xc0f0d44  jal         func_3C3510
    ctx->pc = 0x3C34D4u;
    SET_GPR_U32(ctx, 31, 0x3C34DCu);
    ctx->pc = 0x3C34D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C34D4u;
    // 0x3c34d8: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C3510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C3510u, 0x3C34D4u, 0x3C34DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C34DCu;
label_3c34dc:
    // 0x3c34dc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3C34DCu;
    {
        const bool branch_taken_0x3c34dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C34E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C34DCu;
        // 0x3c34e0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c34dc) {
            ctx->pc = 0x3C3504u;
            goto label_3c3504;
        }
    }
    ctx->pc = 0x3C34E4u;
label_3c34e4:
    // 0x3c34e4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3c34e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_3c34e8:
    // 0x3c34e8: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x3c34e8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3c34ec: 0x5440ffde  bnel        $v0, $zero, . + 4 + (-0x22 << 2)
    ctx->pc = 0x3C34ECu;
    {
        const bool branch_taken_0x3c34ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c34ec) {
            ctx->pc = 0x3C34F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C34ECu;
            // 0x3c34f0: 0x80c30000  lb          $v1, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C3468u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c3468;
        }
    }
    ctx->pc = 0x3C34F4u;
label_3c34f4:
    // 0x3c34f4: 0x8ca40054  lw          $a0, 0x54($a1)
    ctx->pc = 0x3c34f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
    // 0x3c34f8: 0xc0f1204  jal         func_3C4810
    ctx->pc = 0x3C34F8u;
    SET_GPR_U32(ctx, 31, 0x3C3500u);
    ctx->pc = 0x3C34FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C34F8u;
    // 0x3c34fc: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C4810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C4810u, 0x3C34F8u, 0x3C3500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3500u;
label_3c3500:
    // 0x3c3500: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3c3500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3c3504:
    // 0x3c3504: 0x3e00008  jr          $ra
    ctx->pc = 0x3C3504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C3508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3504u;
        // 0x3c3508: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C3504u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C350Cu;
    // 0x3c350c: 0x0  nop
    ctx->pc = 0x3c350cu;
    // NOP
    ctx->pc = 0x3c3510u;
}
