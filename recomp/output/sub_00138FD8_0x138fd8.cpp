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

// Function: sub_00138FD8
// Address: 0x138fd8 - 0x139080
void sub_00138FD8_0x138fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00138FD8_0x138fd8");
#endif

    switch (ctx->pc) {
        case 0x139000u: goto label_139000;
        case 0x139014u: goto label_139014;
        case 0x139020u: goto label_139020;
        case 0x139030u: goto label_139030;
        case 0x139038u: goto label_139038;
        case 0x139060u: goto label_139060;
        default: break;
    }

    ctx->pc = 0x138fd8u;

    // 0x138fd8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x138fd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x138fdc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x138fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x138fe0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x138fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x138fe4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x138fe4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138fe8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x138fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x138fec: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x138fecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138ff0: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x138FF0u;
    {
        const bool branch_taken_0x138ff0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x138FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138FF0u;
        // 0x138ff4: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138ff0) {
            ctx->pc = 0x139008u;
            goto label_139008;
        }
    }
    ctx->pc = 0x138FF8u;
    // 0x138ff8: 0xc04e0c0  jal         func_138300
    ctx->pc = 0x138FF8u;
    SET_GPR_U32(ctx, 31, 0x139000u);
    ctx->pc = 0x138FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138FF8u;
    // 0x138ffc: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138300u, 0x138FF8u, 0x139000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139000u;
label_139000:
    // 0x139000: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x139000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x139004: 0xae0204c8  sw          $v0, 0x4C8($s0)
    ctx->pc = 0x139004u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1224), GPR_U32(ctx, 2));
label_139008:
    // 0x139008: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x139008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13900c: 0xc04d7dc  jal         func_135F70
    ctx->pc = 0x13900Cu;
    SET_GPR_U32(ctx, 31, 0x139014u);
    ctx->pc = 0x139010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13900Cu;
    // 0x139010: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135F70u, 0x13900Cu, 0x139014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139014u;
label_139014:
    // 0x139014: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x139014u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x139018: 0xc04e046  jal         func_138118
    ctx->pc = 0x139018u;
    SET_GPR_U32(ctx, 31, 0x139020u);
    ctx->pc = 0x13901Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139018u;
    // 0x13901c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138118u, 0x139018u, 0x139020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139020u;
label_139020:
    // 0x139020: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x139020u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x139024: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x139024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139028: 0xc04da44  jal         func_136910
    ctx->pc = 0x139028u;
    SET_GPR_U32(ctx, 31, 0x139030u);
    ctx->pc = 0x13902Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139028u;
    // 0x13902c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136910u, 0x139028u, 0x139030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139030u;
label_139030:
    // 0x139030: 0xc04e420  jal         func_139080
    ctx->pc = 0x139030u;
    SET_GPR_U32(ctx, 31, 0x139038u);
    ctx->pc = 0x139034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139030u;
    // 0x139034: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139080u, 0x139030u, 0x139038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139038u;
label_139038:
    // 0x139038: 0x8e0304d8  lw          $v1, 0x4D8($s0)
    ctx->pc = 0x139038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1240)));
    // 0x13903c: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x13903Cu;
    {
        const bool branch_taken_0x13903c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x139040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13903Cu;
        // 0x139040: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13903c) {
            ctx->pc = 0x139064u;
            goto label_139064;
        }
    }
    ctx->pc = 0x139044u;
    // 0x139044: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x139044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x139048: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x139048u;
    {
        const bool branch_taken_0x139048 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x139048) {
            ctx->pc = 0x13904Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x139048u;
            // 0x13904c: 0xae5102b0  sw          $s1, 0x2B0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 688), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x139064u;
            goto label_139064;
        }
    }
    ctx->pc = 0x139050u;
    // 0x139050: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x139050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139054: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x139054u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139058: 0xc04d9f0  jal         func_1367C0
    ctx->pc = 0x139058u;
    SET_GPR_U32(ctx, 31, 0x139060u);
    ctx->pc = 0x13905Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139058u;
    // 0x13905c: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1367C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1367C0u, 0x139058u, 0x139060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139060u;
label_139060:
    // 0x139060: 0xae5102b0  sw          $s1, 0x2B0($s2)
    ctx->pc = 0x139060u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 688), GPR_U32(ctx, 17));
label_139064:
    // 0x139064: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x139064u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x139068: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x139068u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13906c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x13906cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x139070: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x139070u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x139074: 0x3e00008  jr          $ra
    ctx->pc = 0x139074u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x139078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139074u;
        // 0x139078: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x139074u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13907Cu;
    // 0x13907c: 0x0  nop
    ctx->pc = 0x13907cu;
    // NOP
    ctx->pc = 0x139080u;
}
