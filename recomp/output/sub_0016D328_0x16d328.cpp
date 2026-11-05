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

// Function: sub_0016D328
// Address: 0x16d328 - 0x16d3a0
void sub_0016D328_0x16d328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016D328_0x16d328");
#endif

    switch (ctx->pc) {
        case 0x16d370u: goto label_16d370;
        case 0x16d380u: goto label_16d380;
        case 0x16d390u: goto label_16d390;
        default: break;
    }

    ctx->pc = 0x16d328u;

    // 0x16d328: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16d328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16d32c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16d32cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16d330: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x16d330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x16d334: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16d334u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d338: 0x92020009  lbu         $v0, 0x9($s0)
    ctx->pc = 0x16d338u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
    // 0x16d33c: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x16D33Cu;
    {
        const bool branch_taken_0x16d33c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d33c) {
            ctx->pc = 0x16D340u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16D33Cu;
            // 0x16d340: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16D394u;
            goto label_16d394;
        }
    }
    ctx->pc = 0x16D344u;
    // 0x16d344: 0x920300f8  lbu         $v1, 0xF8($s0)
    ctx->pc = 0x16d344u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 248)));
    // 0x16d348: 0x3c050049  lui         $a1, 0x49
    ctx->pc = 0x16d348u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)73 << 16));
    // 0x16d34c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x16d34cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x16d350: 0x24a59a08  addiu       $a1, $a1, -0x65F8
    ctx->pc = 0x16d350u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941192));
    // 0x16d354: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x16d354u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16d358: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16d358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16d35c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x16d35cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16d360: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16d360u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16d364: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x16d364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x16d368: 0xc043a2c  jal         func_10E8B0
    ctx->pc = 0x16D368u;
    SET_GPR_U32(ctx, 31, 0x16D370u);
    ctx->pc = 0x16D36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D368u;
    // 0x16d36c: 0x8ca4020c  lw          $a0, 0x20C($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E8B0u, 0x16D368u, 0x16D370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D370u;
label_16d370:
    // 0x16d370: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16D370u;
    {
        const bool branch_taken_0x16d370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D370u;
        // 0x16d374: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d370) {
            ctx->pc = 0x16D388u;
            goto label_16d388;
        }
    }
    ctx->pc = 0x16D378u;
    // 0x16d378: 0xc05b72c  jal         func_16DCB0
    ctx->pc = 0x16D378u;
    SET_GPR_U32(ctx, 31, 0x16D380u);
    ctx->pc = 0x16D37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D378u;
    // 0x16d37c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16DCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16DCB0u, 0x16D378u, 0x16D380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D380u;
label_16d380:
    // 0x16d380: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16D380u;
    {
        const bool branch_taken_0x16d380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D380u;
        // 0x16d384: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d380) {
            ctx->pc = 0x16D394u;
            goto label_16d394;
        }
    }
    ctx->pc = 0x16D388u;
label_16d388:
    // 0x16d388: 0xc05b7f0  jal         func_16DFC0
    ctx->pc = 0x16D388u;
    SET_GPR_U32(ctx, 31, 0x16D390u);
    ctx->pc = 0x16D38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D388u;
    // 0x16d38c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16DFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16DFC0u, 0x16D388u, 0x16D390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D390u;
label_16d390:
    // 0x16d390: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16d390u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16d394:
    // 0x16d394: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x16d394u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16d398: 0x3e00008  jr          $ra
    ctx->pc = 0x16D398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D398u;
        // 0x16d39c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16D398u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16D3A0u;
}
