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

// Function: sub_002596F8
// Address: 0x2596f8 - 0x259798
void sub_002596F8_0x2596f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002596F8_0x2596f8");
#endif

    switch (ctx->pc) {
        case 0x259748u: goto label_259748;
        case 0x259754u: goto label_259754;
        case 0x259788u: goto label_259788;
        default: break;
    }

    ctx->pc = 0x2596f8u;

    // 0x2596f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2596f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2596fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2596fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x259700: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x259700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x259704: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x259704u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259708: 0x8e0300b8  lw          $v1, 0xB8($s0)
    ctx->pc = 0x259708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x25970c: 0x8c620200  lw          $v0, 0x200($v1)
    ctx->pc = 0x25970cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 512)));
    // 0x259710: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x259710u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x259714: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x259714u;
    {
        const bool branch_taken_0x259714 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x259714) {
            ctx->pc = 0x259780u;
            goto label_259780;
        }
    }
    ctx->pc = 0x25971Cu;
    // 0x25971c: 0x8e020220  lw          $v0, 0x220($s0)
    ctx->pc = 0x25971cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x259720: 0x8c4400b8  lw          $a0, 0xB8($v0)
    ctx->pc = 0x259720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x259724: 0x8c8313f8  lw          $v1, 0x13F8($a0)
    ctx->pc = 0x259724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5112)));
    // 0x259728: 0x2c630002  sltiu       $v1, $v1, 0x2
    ctx->pc = 0x259728u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x25972c: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x25972Cu;
    {
        const bool branch_taken_0x25972c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25972c) {
            ctx->pc = 0x259780u;
            goto label_259780;
        }
    }
    ctx->pc = 0x259734u;
    // 0x259734: 0x8e020228  lw          $v0, 0x228($s0)
    ctx->pc = 0x259734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 552)));
    // 0x259738: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x259738u;
    {
        const bool branch_taken_0x259738 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x259738) {
            ctx->pc = 0x259780u;
            goto label_259780;
        }
    }
    ctx->pc = 0x259740u;
    // 0x259740: 0xc0c3158  jal         func_30C560
    ctx->pc = 0x259740u;
    SET_GPR_U32(ctx, 31, 0x259748u);
    ctx->pc = 0x259744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259740u;
    // 0x259744: 0x8e040104  lw          $a0, 0x104($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C560u, 0x259740u, 0x259748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259748u;
label_259748:
    // 0x259748: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x259748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x25974c: 0xc0c49d2  jal         func_312748
    ctx->pc = 0x25974Cu;
    SET_GPR_U32(ctx, 31, 0x259754u);
    ctx->pc = 0x259750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25974Cu;
    // 0x259750: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312748u, 0x25974Cu, 0x259754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259754u;
label_259754:
    // 0x259754: 0x8e030230  lw          $v1, 0x230($s0)
    ctx->pc = 0x259754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 560)));
    // 0x259758: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x259758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25975c: 0x2c620004  sltiu       $v0, $v1, 0x4
    ctx->pc = 0x25975cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x259760: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x259760u;
    {
        const bool branch_taken_0x259760 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x259764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259760u;
        // 0x259764: 0x31880  sll         $v1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259760) {
            ctx->pc = 0x259774u;
            goto label_259774;
        }
    }
    ctx->pc = 0x259768u;
    // 0x259768: 0x8e0200b8  lw          $v0, 0xB8($s0)
    ctx->pc = 0x259768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x25976c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x25976Cu;
    {
        const bool branch_taken_0x25976c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25976Cu;
        // 0x259770: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25976c) {
            ctx->pc = 0x259778u;
            goto label_259778;
        }
    }
    ctx->pc = 0x259774u;
label_259774:
    // 0x259774: 0x8e0200b8  lw          $v0, 0xB8($s0)
    ctx->pc = 0x259774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
label_259778:
    // 0x259778: 0x8c4201f0  lw          $v0, 0x1F0($v0)
    ctx->pc = 0x259778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 496)));
    // 0x25977c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x25977cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_259780:
    // 0x259780: 0xc084aba  jal         func_212AE8
    ctx->pc = 0x259780u;
    SET_GPR_U32(ctx, 31, 0x259788u);
    ctx->pc = 0x259784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259780u;
    // 0x259784: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212AE8u, 0x259780u, 0x259788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259788u;
label_259788:
    // 0x259788: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x259788u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25978c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x25978cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x259790: 0x3e00008  jr          $ra
    ctx->pc = 0x259790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x259794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259790u;
        // 0x259794: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x259790u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x259798u;
}
