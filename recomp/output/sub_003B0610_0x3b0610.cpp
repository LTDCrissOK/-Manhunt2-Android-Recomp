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

// Function: sub_003B0610
// Address: 0x3b0610 - 0x3b0698
void sub_003B0610_0x3b0610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B0610_0x3b0610");
#endif

    switch (ctx->pc) {
        case 0x3b063cu: goto label_3b063c;
        case 0x3b0644u: goto label_3b0644;
        case 0x3b065cu: goto label_3b065c;
        case 0x3b0664u: goto label_3b0664;
        case 0x3b0670u: goto label_3b0670;
        default: break;
    }

    ctx->pc = 0x3b0610u;

    // 0x3b0610: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3b0610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3b0614: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3b0614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3b0618: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3b0618u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b061c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3b061cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3b0620: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x3b0620u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0624: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3b0624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3b0628: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3b0628u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b062c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3b062cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0630: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3b0630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3b0634: 0xc0ec142  jal         func_3B0508
    ctx->pc = 0x3B0634u;
    SET_GPR_U32(ctx, 31, 0x3B063Cu);
    ctx->pc = 0x3B0638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0634u;
    // 0x3b0638: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B0508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B0508u, 0x3B0634u, 0x3B063Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B063Cu;
label_3b063c:
    // 0x3b063c: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x3B063Cu;
    SET_GPR_U32(ctx, 31, 0x3B0644u);
    ctx->pc = 0x3B0640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B063Cu;
    // 0x3b0640: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x3B063Cu, 0x3B0644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0644u;
label_3b0644:
    // 0x3b0644: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3b0644u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x3b0648: 0x2228823  subu        $s1, $s1, $v0
    ctx->pc = 0x3b0648u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x3b064c: 0x24a5fdf8  addiu       $a1, $a1, -0x208
    ctx->pc = 0x3b064cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966776));
    // 0x3b0650: 0x2626ffff  addiu       $a2, $s1, -0x1
    ctx->pc = 0x3b0650u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x3b0654: 0xc0efc80  jal         func_3BF200
    ctx->pc = 0x3B0654u;
    SET_GPR_U32(ctx, 31, 0x3B065Cu);
    ctx->pc = 0x3B0658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0654u;
    // 0x3b0658: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF200u, 0x3B0654u, 0x3B065Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B065Cu;
label_3b065c:
    // 0x3b065c: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x3B065Cu;
    SET_GPR_U32(ctx, 31, 0x3B0664u);
    ctx->pc = 0x3B0660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B065Cu;
    // 0x3b0660: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x3B065Cu, 0x3B0664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0664u;
label_3b0664:
    // 0x3b0664: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b0664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0668: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x3B0668u;
    SET_GPR_U32(ctx, 31, 0x3B0670u);
    ctx->pc = 0x3B066Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0668u;
    // 0x3b066c: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x3B0668u, 0x3B0670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0670u;
label_3b0670:
    // 0x3b0670: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3b0670u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3b0674: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3b0674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0678: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3b0678u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b067c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b067cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b0680: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3b0680u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3b0684: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3b0684u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b0688: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3b0688u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3b068c: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x3b068cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x3b0690: 0x80ec142  j           func_3B0508
    ctx->pc = 0x3B0690u;
    ctx->pc = 0x3B0694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0690u;
    // 0x3b0694: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B0508u;
    sub_003B0508_0x3b0508(rdram, ctx, runtime); return;
    ctx->pc = 0x3B0698u;
}
