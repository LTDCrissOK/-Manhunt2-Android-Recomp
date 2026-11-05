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

// Function: sub_00254138
// Address: 0x254138 - 0x2541a8
void sub_00254138_0x254138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00254138_0x254138");
#endif

    switch (ctx->pc) {
        case 0x254168u: goto label_254168;
        case 0x254180u: goto label_254180;
        case 0x254188u: goto label_254188;
        default: break;
    }

    ctx->pc = 0x254138u;

    // 0x254138: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x254138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25413c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x25413cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x254140: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x254140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x254144: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x254144u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254148: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x254148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25414c: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x25414cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x254150: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x254150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x254154: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x254154u;
    {
        const bool branch_taken_0x254154 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x254158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254154u;
        // 0x254158: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254154) {
            ctx->pc = 0x254190u;
            goto label_254190;
        }
    }
    ctx->pc = 0x25415Cu;
    // 0x25415c: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x25415cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x254160: 0xc0944da  jal         func_251368
    ctx->pc = 0x254160u;
    SET_GPR_U32(ctx, 31, 0x254168u);
    ctx->pc = 0x254164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254160u;
    // 0x254164: 0xae021060  sw          $v0, 0x1060($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4192), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x251368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251368u, 0x254160u, 0x254168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254168u;
label_254168:
    // 0x254168: 0x8e030fe8  lw          $v1, 0xFE8($s0)
    ctx->pc = 0x254168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4072)));
    // 0x25416c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25416cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x254170: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x254170u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254174: 0xac62035c  sw          $v0, 0x35C($v1)
    ctx->pc = 0x254174u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 860), GPR_U32(ctx, 2));
    // 0x254178: 0xc061e14  jal         func_187850
    ctx->pc = 0x254178u;
    SET_GPR_U32(ctx, 31, 0x254180u);
    ctx->pc = 0x25417Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254178u;
    // 0x25417c: 0x8e040fe4  lw          $a0, 0xFE4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4068)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187850u, 0x254178u, 0x254180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254180u;
label_254180:
    // 0x254180: 0xc0944f6  jal         func_2513D8
    ctx->pc = 0x254180u;
    SET_GPR_U32(ctx, 31, 0x254188u);
    ctx->pc = 0x254184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254180u;
    // 0x254184: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2513D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2513D8u, 0x254180u, 0x254188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254188u;
label_254188:
    // 0x254188: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x254188u;
    {
        const bool branch_taken_0x254188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25418Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254188u;
        // 0x25418c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254188) {
            ctx->pc = 0x254194u;
            goto label_254194;
        }
    }
    ctx->pc = 0x254190u;
label_254190:
    // 0x254190: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x254190u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_254194:
    // 0x254194: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x254194u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x254198: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x254198u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25419c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25419cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2541a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2541A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2541A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2541A0u;
        // 0x2541a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2541A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2541A8u;
}
