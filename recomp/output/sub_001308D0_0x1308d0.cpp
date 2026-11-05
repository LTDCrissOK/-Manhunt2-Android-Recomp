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

// Function: sub_001308D0
// Address: 0x1308d0 - 0x130968
void sub_001308D0_0x1308d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001308D0_0x1308d0");
#endif

    switch (ctx->pc) {
        case 0x13090cu: goto label_13090c;
        case 0x130918u: goto label_130918;
        case 0x130930u: goto label_130930;
        case 0x13093cu: goto label_13093c;
        case 0x130944u: goto label_130944;
        default: break;
    }

    ctx->pc = 0x1308d0u;

    // 0x1308d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1308d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1308d4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1308d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1308d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1308d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1308dc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1308dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1308e0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1308e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1308e4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1308e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1308e8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1308e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1308ec: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1308ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1308f0: 0x8c430258  lw          $v1, 0x258($v0)
    ctx->pc = 0x1308f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 600)));
    // 0x1308f4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1308F4u;
    {
        const bool branch_taken_0x1308f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1308F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1308F4u;
        // 0x1308f8: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1308f4) {
            ctx->pc = 0x130904u;
            goto label_130904;
        }
    }
    ctx->pc = 0x1308FCu;
    // 0x1308fc: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1308FCu;
    {
        const bool branch_taken_0x1308fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1308FCu;
        // 0x130900: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1308fc) {
            ctx->pc = 0x13094Cu;
            goto label_13094c;
        }
    }
    ctx->pc = 0x130904u;
label_130904:
    // 0x130904: 0xc046044  jal         func_118110
    ctx->pc = 0x130904u;
    SET_GPR_U32(ctx, 31, 0x13090Cu);
    ctx->pc = 0x130908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130904u;
    // 0x130908: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118110u, 0x130904u, 0x13090Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13090Cu;
label_13090c:
    // 0x13090c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x13090cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x130910: 0xc043920  jal         func_10E480
    ctx->pc = 0x130910u;
    SET_GPR_U32(ctx, 31, 0x130918u);
    ctx->pc = 0x130914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130910u;
    // 0x130914: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E480u, 0x130910u, 0x130918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130918u;
label_130918:
    // 0x130918: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x130918u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13091c: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x13091Cu;
    {
        const bool branch_taken_0x13091c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x130920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13091Cu;
        // 0x130920: 0x3a420001  xori        $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13091c) {
            ctx->pc = 0x13094Cu;
            goto label_13094c;
        }
    }
    ctx->pc = 0x130924u;
    // 0x130924: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x130924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130928: 0xc04c5ca  jal         func_131728
    ctx->pc = 0x130928u;
    SET_GPR_U32(ctx, 31, 0x130930u);
    ctx->pc = 0x13092Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130928u;
    // 0x13092c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131728u, 0x130928u, 0x130930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130930u;
label_130930:
    // 0x130930: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x130930u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130934: 0xc094f8c  jal         func_253E30
    ctx->pc = 0x130934u;
    SET_GPR_U32(ctx, 31, 0x13093Cu);
    ctx->pc = 0x130938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130934u;
    // 0x130938: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253E30u, 0x130934u, 0x13093Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13093Cu;
label_13093c:
    // 0x13093c: 0xc095216  jal         func_254858
    ctx->pc = 0x13093Cu;
    SET_GPR_U32(ctx, 31, 0x130944u);
    ctx->pc = 0x130940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13093Cu;
    // 0x130940: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254858u, 0x13093Cu, 0x130944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130944u;
label_130944:
    // 0x130944: 0x2900a  movz        $s2, $zero, $v0
    ctx->pc = 0x130944u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 0));
    // 0x130948: 0x3a420001  xori        $v0, $s2, 0x1
    ctx->pc = 0x130948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)1);
label_13094c:
    // 0x13094c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13094cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x130950: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x130950u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x130954: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x130954u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x130958: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x130958u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13095c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x13095cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x130960: 0x3e00008  jr          $ra
    ctx->pc = 0x130960u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130960u;
        // 0x130964: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x130960u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x130968u;
}
