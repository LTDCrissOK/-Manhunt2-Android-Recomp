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

// Function: sub_003DF800
// Address: 0x3df800 - 0x3df8a0
void sub_003DF800_0x3df800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DF800_0x3df800");
#endif

    switch (ctx->pc) {
        case 0x3df82cu: goto label_3df82c;
        case 0x3df84cu: goto label_3df84c;
        default: break;
    }

    ctx->pc = 0x3df800u;

    // 0x3df800: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3df800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3df804: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3df804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3df808: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3df808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3df80c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3df80cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3df810: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3df810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3df814: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3df814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3df818: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3df818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3df81c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3DF81Cu;
    {
        const bool branch_taken_0x3df81c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DF820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF81Cu;
        // 0x3df820: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df81c) {
            ctx->pc = 0x3DF840u;
            goto label_3df840;
        }
    }
    ctx->pc = 0x3DF824u;
    // 0x3df824: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3DF824u;
    SET_GPR_U32(ctx, 31, 0x3DF82Cu);
    ctx->pc = 0x3DF828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF824u;
    // 0x3df828: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3DF824u, 0x3DF82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF82Cu;
label_3df82c:
    // 0x3df82c: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x3df82cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x3df830: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x3df830u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x3df834: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x3df834u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x3df838: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3DF838u;
    {
        const bool branch_taken_0x3df838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DF83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF838u;
        // 0x3df83c: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df838) {
            ctx->pc = 0x3DF85Cu;
            goto label_3df85c;
        }
    }
    ctx->pc = 0x3DF840u;
label_3df840:
    // 0x3df840: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x3df840u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3df844: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3DF844u;
    SET_GPR_U32(ctx, 31, 0x3DF84Cu);
    ctx->pc = 0x3DF848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF844u;
    // 0x3df848: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3DF844u, 0x3DF84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF84Cu;
label_3df84c:
    // 0x3df84c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x3df84cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x3df850: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x3df850u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x3df854: 0xac500008  sw          $s0, 0x8($v0)
    ctx->pc = 0x3df854u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 16));
    // 0x3df858: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x3df858u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_3df85c:
    // 0x3df85c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3df85cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3df860: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3df860u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3df864: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x3df864u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x3df868: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3df868u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3df86c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3df86cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3df870: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3df870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3df874: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3df874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3df878: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3df878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3df87c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3df87cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x3df880: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3df880u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3df884: 0x3e00008  jr          $ra
    ctx->pc = 0x3DF884u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DF888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF884u;
        // 0x3df888: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DF884u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DF88Cu;
    // 0x3df88c: 0x0  nop
    ctx->pc = 0x3df88cu;
    // NOP
    // 0x3df890: 0xac820228  sw          $v0, 0x228($a0)
    ctx->pc = 0x3df890u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 552), GPR_U32(ctx, 2));
    // 0x3df894: 0x0  nop
    ctx->pc = 0x3df894u;
    // NOP
    // 0x3df898: 0x8c6201f0  lw          $v0, 0x1F0($v1)
    ctx->pc = 0x3df898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 496)));
    // 0x3df89c: 0x0  nop
    ctx->pc = 0x3df89cu;
    // NOP
    ctx->pc = 0x3df8a0u;
}
