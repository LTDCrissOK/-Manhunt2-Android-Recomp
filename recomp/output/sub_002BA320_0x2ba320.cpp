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

// Function: sub_002BA320
// Address: 0x2ba320 - 0x2ba388
void sub_002BA320_0x2ba320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BA320_0x2ba320");
#endif

    switch (ctx->pc) {
        case 0x2ba340u: goto label_2ba340;
        default: break;
    }

    ctx->pc = 0x2ba320u;

    // 0x2ba320: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ba320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ba324: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x2ba324u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x2ba328: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ba328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ba32c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2ba32cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2ba330: 0x30d000ff  andi        $s0, $a2, 0xFF
    ctx->pc = 0x2ba330u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x2ba334: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ba334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ba338: 0xc0a21c2  jal         func_288708
    ctx->pc = 0x2BA338u;
    SET_GPR_U32(ctx, 31, 0x2BA340u);
    ctx->pc = 0x2BA33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA338u;
    // 0x2ba33c: 0x58c03  sra         $s1, $a1, 16 (Delay Slot)
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288708u, 0x2BA338u, 0x2BA340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA340u;
label_2ba340:
    // 0x2ba340: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2BA340u;
    {
        const bool branch_taken_0x2ba340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba340) {
            ctx->pc = 0x2BA344u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BA340u;
            // 0x2ba344: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BA370u;
            goto label_2ba370;
        }
    }
    ctx->pc = 0x2BA348u;
    // 0x2ba348: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BA348u;
    {
        const bool branch_taken_0x2ba348 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BA34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA348u;
        // 0x2ba34c: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba348) {
            ctx->pc = 0x2BA35Cu;
            goto label_2ba35c;
        }
    }
    ctx->pc = 0x2BA350u;
    // 0x2ba350: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2ba350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2ba354: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2BA354u;
    {
        const bool branch_taken_0x2ba354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA354u;
        // 0x2ba358: 0xac40ad9c  sw          $zero, -0x5264($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294946204), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba354) {
            ctx->pc = 0x2BA36Cu;
            goto label_2ba36c;
        }
    }
    ctx->pc = 0x2BA35Cu;
label_2ba35c:
    // 0x2ba35c: 0x8c62ad9c  lw          $v0, -0x5264($v1)
    ctx->pc = 0x2ba35cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946204)));
    // 0x2ba360: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x2ba360u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x2ba364: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2BA364u;
    {
        const bool branch_taken_0x2ba364 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ba364) {
            ctx->pc = 0x2BA368u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BA364u;
            // 0x2ba368: 0xac71ad9c  sw          $s1, -0x5264($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 4294946204), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BA36Cu;
            goto label_2ba36c;
        }
    }
    ctx->pc = 0x2BA36Cu;
label_2ba36c:
    // 0x2ba36c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ba36cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ba370:
    // 0x2ba370: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ba370u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ba374: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ba374u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ba378: 0x3e00008  jr          $ra
    ctx->pc = 0x2BA378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BA37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA378u;
        // 0x2ba37c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BA378u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BA380u;
    // 0x2ba380: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2ba380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2ba384: 0x0  nop
    ctx->pc = 0x2ba384u;
    // NOP
    ctx->pc = 0x2ba388u;
}
