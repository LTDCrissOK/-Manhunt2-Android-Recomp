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

// Function: sub_001FEC10
// Address: 0x1fec10 - 0x1fec78
void sub_001FEC10_0x1fec10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FEC10_0x1fec10");
#endif

    switch (ctx->pc) {
        case 0x1fec40u: goto label_1fec40;
        case 0x1fec48u: goto label_1fec48;
        case 0x1fec58u: goto label_1fec58;
        case 0x1fec60u: goto label_1fec60;
        default: break;
    }

    ctx->pc = 0x1fec10u;

    // 0x1fec10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fec10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fec14: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1fec14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1fec18: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fec18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fec1c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1fec1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1fec20: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fec20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fec24: 0x92020051  lbu         $v0, 0x51($s0)
    ctx->pc = 0x1fec24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 81)));
    // 0x1fec28: 0x50450010  beql        $v0, $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1FEC28u;
    {
        const bool branch_taken_0x1fec28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x1fec28) {
            ctx->pc = 0x1FEC2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FEC28u;
            // 0x1fec2c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FEC6Cu;
            goto label_1fec6c;
        }
    }
    ctx->pc = 0x1FEC30u;
    // 0x1fec30: 0x14a00007  bnez        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FEC30u;
    {
        const bool branch_taken_0x1fec30 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FEC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEC30u;
        // 0x1fec34: 0xa2050051  sb          $a1, 0x51($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 81), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fec30) {
            ctx->pc = 0x1FEC50u;
            goto label_1fec50;
        }
    }
    ctx->pc = 0x1FEC38u;
    // 0x1fec38: 0xc081710  jal         func_205C40
    ctx->pc = 0x1FEC38u;
    SET_GPR_U32(ctx, 31, 0x1FEC40u);
    ctx->pc = 0x205C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205C40u, 0x1FEC38u, 0x1FEC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEC40u;
label_1fec40:
    // 0x1fec40: 0xc0e72b4  jal         func_39CAD0
    ctx->pc = 0x1FEC40u;
    SET_GPR_U32(ctx, 31, 0x1FEC48u);
    ctx->pc = 0x1FEC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEC40u;
    // 0x1fec44: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39CAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39CAD0u, 0x1FEC40u, 0x1FEC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEC48u;
label_1fec48:
    // 0x1fec48: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1FEC48u;
    {
        const bool branch_taken_0x1fec48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEC48u;
        // 0x1fec4c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fec48) {
            ctx->pc = 0x1FEC64u;
            goto label_1fec64;
        }
    }
    ctx->pc = 0x1FEC50u;
label_1fec50:
    // 0x1fec50: 0xc081710  jal         func_205C40
    ctx->pc = 0x1FEC50u;
    SET_GPR_U32(ctx, 31, 0x1FEC58u);
    ctx->pc = 0x205C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205C40u, 0x1FEC50u, 0x1FEC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEC58u;
label_1fec58:
    // 0x1fec58: 0xc0e72b4  jal         func_39CAD0
    ctx->pc = 0x1FEC58u;
    SET_GPR_U32(ctx, 31, 0x1FEC60u);
    ctx->pc = 0x1FEC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEC58u;
    // 0x1fec5c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39CAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39CAD0u, 0x1FEC58u, 0x1FEC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEC60u;
label_1fec60:
    // 0x1fec60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fec60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fec64:
    // 0x1fec64: 0xae020070  sw          $v0, 0x70($s0)
    ctx->pc = 0x1fec64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 2));
    // 0x1fec68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fec68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fec6c:
    // 0x1fec6c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1fec6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fec70: 0x3e00008  jr          $ra
    ctx->pc = 0x1FEC70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FEC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEC70u;
        // 0x1fec74: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FEC70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FEC78u;
}
