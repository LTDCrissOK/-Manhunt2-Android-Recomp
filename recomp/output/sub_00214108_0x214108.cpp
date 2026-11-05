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

// Function: sub_00214108
// Address: 0x214108 - 0x214170
void sub_00214108_0x214108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00214108_0x214108");
#endif

    switch (ctx->pc) {
        case 0x214138u: goto label_214138;
        case 0x214140u: goto label_214140;
        case 0x21415cu: goto label_21415c;
        default: break;
    }

    ctx->pc = 0x214108u;

    // 0x214108: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x214108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21410c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21410cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x214110: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x214110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x214114: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x214114u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214118: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x214118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x21411c: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x21411Cu;
    {
        const bool branch_taken_0x21411c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21411c) {
            ctx->pc = 0x214120u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21411Cu;
            // 0x214120: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x214160u;
            goto label_214160;
        }
    }
    ctx->pc = 0x214124u;
    // 0x214124: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x214124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x214128: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x214128u;
    {
        const bool branch_taken_0x214128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x214128) {
            ctx->pc = 0x21412Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x214128u;
            // 0x21412c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x214160u;
            goto label_214160;
        }
    }
    ctx->pc = 0x214130u;
    // 0x214130: 0xc08505c  jal         func_214170
    ctx->pc = 0x214130u;
    SET_GPR_U32(ctx, 31, 0x214138u);
    ctx->pc = 0x214170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214170u, 0x214130u, 0x214138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214138u;
label_214138:
    // 0x214138: 0xc0c30fc  jal         func_30C3F0
    ctx->pc = 0x214138u;
    SET_GPR_U32(ctx, 31, 0x214140u);
    ctx->pc = 0x21413Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214138u;
    // 0x21413c: 0x8e040104  lw          $a0, 0x104($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C3F0u, 0x214138u, 0x214140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214140u;
label_214140:
    // 0x214140: 0x8e0300e0  lw          $v1, 0xE0($s0)
    ctx->pc = 0x214140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x214144: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x214144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x214148: 0xae0200f0  sw          $v0, 0xF0($s0)
    ctx->pc = 0x214148u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 2));
    // 0x21414c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21414cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214150: 0x3182a  slt         $v1, $zero, $v1
    ctx->pc = 0x214150u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x214154: 0xc08506c  jal         func_2141B0
    ctx->pc = 0x214154u;
    SET_GPR_U32(ctx, 31, 0x21415Cu);
    ctx->pc = 0x214158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214154u;
    // 0x214158: 0xae0300f4  sw          $v1, 0xF4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2141B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2141B0u, 0x214154u, 0x21415Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21415Cu;
label_21415c:
    // 0x21415c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21415cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_214160:
    // 0x214160: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x214160u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x214164: 0x3e00008  jr          $ra
    ctx->pc = 0x214164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x214168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214164u;
        // 0x214168: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214164u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21416Cu;
    // 0x21416c: 0x0  nop
    ctx->pc = 0x21416cu;
    // NOP
    ctx->pc = 0x214170u;
}
