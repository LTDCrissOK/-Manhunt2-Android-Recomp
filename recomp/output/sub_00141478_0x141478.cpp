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

// Function: sub_00141478
// Address: 0x141478 - 0x141510
void sub_00141478_0x141478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00141478_0x141478");
#endif

    switch (ctx->pc) {
        case 0x14148cu: goto label_14148c;
        case 0x1414a8u: goto label_1414a8;
        case 0x1414c8u: goto label_1414c8;
        case 0x1414f8u: goto label_1414f8;
        default: break;
    }

    ctx->pc = 0x141478u;

    // 0x141478: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x141478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14147c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14147cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x141480: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x141480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x141484: 0xc04e49c  jal         func_139270
    ctx->pc = 0x141484u;
    SET_GPR_U32(ctx, 31, 0x14148Cu);
    ctx->pc = 0x141488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141484u;
    // 0x141488: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139270u, 0x141484u, 0x14148Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14148Cu;
label_14148c:
    // 0x14148c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x14148cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x141490: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x141490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x141494: 0x244207c8  addiu       $v0, $v0, 0x7C8
    ctx->pc = 0x141494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1992));
    // 0x141498: 0x26030b10  addiu       $v1, $s0, 0xB10
    ctx->pc = 0x141498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2832));
    // 0x14149c: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x14149cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1414a0: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x1414a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1414a4: 0x0  nop
    ctx->pc = 0x1414a4u;
    // NOP
label_1414a8:
    // 0x1414a8: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1414a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1414ac: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1414acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1414b0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1414b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1414b4: 0x0  nop
    ctx->pc = 0x1414b4u;
    // NOP
    // 0x1414b8: 0x1444fffb  bne         $v0, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1414B8u;
    {
        const bool branch_taken_0x1414b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x1414BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1414B8u;
        // 0x1414bc: 0x2463000c  addiu       $v1, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1414b8) {
            ctx->pc = 0x1414A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1414a8;
        }
    }
    ctx->pc = 0x1414C0u;
    // 0x1414c0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1414C0u;
    SET_GPR_U32(ctx, 31, 0x1414C8u);
    ctx->pc = 0x1414C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1414C0u;
    // 0x1414c4: 0x26040be0  addiu       $a0, $s0, 0xBE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1414C0u, 0x1414C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1414C8u;
label_1414c8:
    // 0x1414c8: 0xae000bf0  sw          $zero, 0xBF0($s0)
    ctx->pc = 0x1414c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3056), GPR_U32(ctx, 0));
    // 0x1414cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1414ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1414d0: 0xae000bf4  sw          $zero, 0xBF4($s0)
    ctx->pc = 0x1414d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3060), GPR_U32(ctx, 0));
    // 0x1414d4: 0xae000bf8  sw          $zero, 0xBF8($s0)
    ctx->pc = 0x1414d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3064), GPR_U32(ctx, 0));
    // 0x1414d8: 0xae000bfc  sw          $zero, 0xBFC($s0)
    ctx->pc = 0x1414d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3068), GPR_U32(ctx, 0));
    // 0x1414dc: 0xae000c00  sw          $zero, 0xC00($s0)
    ctx->pc = 0x1414dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3072), GPR_U32(ctx, 0));
    // 0x1414e0: 0xae000c04  sw          $zero, 0xC04($s0)
    ctx->pc = 0x1414e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3076), GPR_U32(ctx, 0));
    // 0x1414e4: 0xae000c08  sw          $zero, 0xC08($s0)
    ctx->pc = 0x1414e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3080), GPR_U32(ctx, 0));
    // 0x1414e8: 0xae000c10  sw          $zero, 0xC10($s0)
    ctx->pc = 0x1414e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3088), GPR_U32(ctx, 0));
    // 0x1414ec: 0xae000c14  sw          $zero, 0xC14($s0)
    ctx->pc = 0x1414ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3092), GPR_U32(ctx, 0));
    // 0x1414f0: 0xc050636  jal         func_1418D8
    ctx->pc = 0x1414F0u;
    SET_GPR_U32(ctx, 31, 0x1414F8u);
    ctx->pc = 0x1414F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1414F0u;
    // 0x1414f4: 0xae000460  sw          $zero, 0x460($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1120), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1418D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1418D8u, 0x1414F0u, 0x1414F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1414F8u;
label_1414f8:
    // 0x1414f8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1414f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1414fc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1414fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x141500: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x141500u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x141504: 0x3e00008  jr          $ra
    ctx->pc = 0x141504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x141508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141504u;
        // 0x141508: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x141504u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14150Cu;
    // 0x14150c: 0x0  nop
    ctx->pc = 0x14150cu;
    // NOP
    ctx->pc = 0x141510u;
}
