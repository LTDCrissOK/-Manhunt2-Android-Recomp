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

// Function: sub_002B0100
// Address: 0x2b0100 - 0x2b0188
void sub_002B0100_0x2b0100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B0100_0x2b0100");
#endif

    switch (ctx->pc) {
        case 0x2b012cu: goto label_2b012c;
        case 0x2b0134u: goto label_2b0134;
        case 0x2b0140u: goto label_2b0140;
        case 0x2b015cu: goto label_2b015c;
        default: break;
    }

    ctx->pc = 0x2b0100u;

    // 0x2b0100: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2b0100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2b0104: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2b0104u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2b0108: 0x8c442bc8  lw          $a0, 0x2BC8($v0)
    ctx->pc = 0x2b0108u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x482BC8u));
    // 0x2b010c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2b010cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2b0110: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x2b0110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x2b0114: 0x24a5ed18  addiu       $a1, $a1, -0x12E8
    ctx->pc = 0x2b0114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962456));
    // 0x2b0118: 0xffb10088  sd          $s1, 0x88($sp)
    ctx->pc = 0x2b0118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 17));
    // 0x2b011c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2b011cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0120: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2b0120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2b0124: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2B0124u;
    SET_GPR_U32(ctx, 31, 0x2B012Cu);
    ctx->pc = 0x2B0128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0124u;
    // 0x2b0128: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2B0124u, 0x2B012Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B012Cu;
label_2b012c:
    // 0x2b012c: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x2B012Cu;
    SET_GPR_U32(ctx, 31, 0x2B0134u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x2B012Cu, 0x2B0134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0134u;
label_2b0134:
    // 0x2b0134: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2b0134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2b0138: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2B0138u;
    {
        const bool branch_taken_0x2b0138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B013Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0138u;
        // 0x2b013c: 0x24519720  addiu       $s1, $v0, -0x68E0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0138) {
            ctx->pc = 0x2B0144u;
            goto label_2b0144;
        }
    }
    ctx->pc = 0x2B0140u;
label_2b0140:
    // 0x2b0140: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2b0140u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2b0144:
    // 0x2b0144: 0x2a020035  slti        $v0, $s0, 0x35
    ctx->pc = 0x2b0144u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)53) ? 1 : 0);
    // 0x2b0148: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B0148u;
    {
        const bool branch_taken_0x2b0148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B014Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0148u;
        // 0x2b014c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0148) {
            ctx->pc = 0x2B0168u;
            goto label_2b0168;
        }
    }
    ctx->pc = 0x2B0150u;
    // 0x2b0150: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2b0150u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b0154: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x2B0154u;
    SET_GPR_U32(ctx, 31, 0x2B015Cu);
    ctx->pc = 0x2B0158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0154u;
    // 0x2b0158: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x2B0154u, 0x2B015Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B015Cu;
label_2b015c:
    // 0x2b015c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2B015Cu;
    {
        const bool branch_taken_0x2b015c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B0160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B015Cu;
        // 0x2b0160: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b015c) {
            ctx->pc = 0x2B0140u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b0140;
        }
    }
    ctx->pc = 0x2B0164u;
    // 0x2b0164: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2b0164u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b0168:
    // 0x2b0168: 0xdfb10088  ld          $s1, 0x88($sp)
    ctx->pc = 0x2b0168u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2b016c: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x2b016cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2b0170: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2b0170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2b0174: 0x3e00008  jr          $ra
    ctx->pc = 0x2B0174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B0178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0174u;
        // 0x2b0178: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B0174u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B017Cu;
    // 0x2b017c: 0x0  nop
    ctx->pc = 0x2b017cu;
    // NOP
    // 0x2b0180: 0xc4800468  lwc1        $f0, 0x468($a0)
    ctx->pc = 0x2b0180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b0184: 0x0  nop
    ctx->pc = 0x2b0184u;
    // NOP
    ctx->pc = 0x2b0188u;
}
