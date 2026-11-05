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

// Function: sub_001F30F8
// Address: 0x1f30f8 - 0x1f3178
void sub_001F30F8_0x1f30f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F30F8_0x1f30f8");
#endif

    switch (ctx->pc) {
        case 0x1f312cu: goto label_1f312c;
        case 0x1f3140u: goto label_1f3140;
        case 0x1f3154u: goto label_1f3154;
        case 0x1f3164u: goto label_1f3164;
        default: break;
    }

    ctx->pc = 0x1f30f8u;

    // 0x1f30f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f30f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f30fc: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1f30fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1f3100: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1f3100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1f3104: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x1f3104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1f3108: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1f3108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1f310c: 0x8ca313c0  lw          $v1, 0x13C0($a1)
    ctx->pc = 0x1f310cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 5056)));
    // 0x1f3110: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1F3110u;
    {
        const bool branch_taken_0x1f3110 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F3114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3110u;
        // 0x1f3114: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3110) {
            ctx->pc = 0x1F3168u;
            goto label_1f3168;
        }
    }
    ctx->pc = 0x1F3118u;
    // 0x1f3118: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1f3118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1f311c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1f311cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1f3120: 0xaca213c0  sw          $v0, 0x13C0($a1)
    ctx->pc = 0x1f3120u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 5056), GPR_U32(ctx, 2));
    // 0x1f3124: 0xc07c7de  jal         func_1F1F78
    ctx->pc = 0x1F3124u;
    SET_GPR_U32(ctx, 31, 0x1F312Cu);
    ctx->pc = 0x1F3128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3124u;
    // 0x1f3128: 0x8c65bd50  lw          $a1, -0x42B0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F1F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F1F78u, 0x1F3124u, 0x1F312Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F312Cu;
label_1f312c:
    // 0x1f312c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f312cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3130: 0x5200000d  beql        $s0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1F3130u;
    {
        const bool branch_taken_0x1f3130 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3130) {
            ctx->pc = 0x1F3134u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F3130u;
            // 0x1f3134: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F3168u;
            goto label_1f3168;
        }
    }
    ctx->pc = 0x1F3138u;
    // 0x1f3138: 0xc081d36  jal         func_2074D8
    ctx->pc = 0x1F3138u;
    SET_GPR_U32(ctx, 31, 0x1F3140u);
    ctx->pc = 0x2074D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2074D8u, 0x1F3138u, 0x1F3140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3140u;
label_1f3140:
    // 0x1f3140: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f3140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3144: 0x24050021  addiu       $a1, $zero, 0x21
    ctx->pc = 0x1f3144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x1f3148: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1f3148u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f314c: 0xc0820b4  jal         func_2082D0
    ctx->pc = 0x1F314Cu;
    SET_GPR_U32(ctx, 31, 0x1F3154u);
    ctx->pc = 0x1F3150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F314Cu;
    // 0x1f3150: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2082D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2082D0u, 0x1F314Cu, 0x1F3154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3154u;
label_1f3154:
    // 0x1f3154: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x1f3154u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f3158: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f3158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f315c: 0xc081466  jal         func_205198
    ctx->pc = 0x1F315Cu;
    SET_GPR_U32(ctx, 31, 0x1F3164u);
    ctx->pc = 0x1F3160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F315Cu;
    // 0x1f3160: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205198u, 0x1F315Cu, 0x1F3164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3164u;
label_1f3164:
    // 0x1f3164: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1f3164u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1f3168:
    // 0x1f3168: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1f3168u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f316c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F316Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F3170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F316Cu;
        // 0x1f3170: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F316Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F3174u;
    // 0x1f3174: 0x0  nop
    ctx->pc = 0x1f3174u;
    // NOP
    ctx->pc = 0x1f3178u;
}
