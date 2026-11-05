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

// Function: sub_00148428
// Address: 0x148428 - 0x148490
void sub_00148428_0x148428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00148428_0x148428");
#endif

    switch (ctx->pc) {
        case 0x148468u: goto label_148468;
        case 0x14847cu: goto label_14847c;
        default: break;
    }

    ctx->pc = 0x148428u;

    // 0x148428: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x148428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14842c: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x14842cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x148430: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x148430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x148434: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x148434u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x148438: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x148438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x14843c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14843cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148440: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x148440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x148444: 0x3c060049  lui         $a2, 0x49
    ctx->pc = 0x148444u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)73 << 16));
    // 0x148448: 0x24c69a08  addiu       $a2, $a2, -0x65F8
    ctx->pc = 0x148448u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941192));
    // 0x14844c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x14844cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x148450: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x148450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x148454: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x148454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x148458: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x148458u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14845c: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x14845cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x148460: 0xc052492  jal         func_149248
    ctx->pc = 0x148460u;
    SET_GPR_U32(ctx, 31, 0x148468u);
    ctx->pc = 0x148464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148460u;
    // 0x148464: 0x8cd1020c  lw          $s1, 0x20C($a2) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149248u, 0x148460u, 0x148468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148468u;
label_148468:
    // 0x148468: 0x8e0204c0  lw          $v0, 0x4C0($s0)
    ctx->pc = 0x148468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1216)));
    // 0x14846c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14846Cu;
    {
        const bool branch_taken_0x14846c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x148470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14846Cu;
        // 0x148470: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14846c) {
            ctx->pc = 0x14847Cu;
            goto label_14847c;
        }
    }
    ctx->pc = 0x148474u;
    // 0x148474: 0xc0443d4  jal         func_110F50
    ctx->pc = 0x148474u;
    SET_GPR_U32(ctx, 31, 0x14847Cu);
    ctx->pc = 0x148478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148474u;
    // 0x148478: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110F50u, 0x148474u, 0x14847Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14847Cu;
label_14847c:
    // 0x14847c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14847cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x148480: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x148480u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x148484: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x148484u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x148488: 0x3e00008  jr          $ra
    ctx->pc = 0x148488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14848Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148488u;
        // 0x14848c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x148488u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x148490u;
}
