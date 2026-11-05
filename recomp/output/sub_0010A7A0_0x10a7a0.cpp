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

// Function: sub_0010A7A0
// Address: 0x10a7a0 - 0x10a838
void sub_0010A7A0_0x10a7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010A7A0_0x10a7a0");
#endif

    switch (ctx->pc) {
        case 0x10a7c8u: goto label_10a7c8;
        case 0x10a7f0u: goto label_10a7f0;
        case 0x10a818u: goto label_10a818;
        default: break;
    }

    ctx->pc = 0x10a7a0u;

    // 0x10a7a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10a7a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10a7a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10a7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10a7a8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x10a7a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x10a7ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10a7acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a7b0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10a7b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10a7b4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x10a7b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a7b8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x10a7b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x10a7bc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10a7bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10a7c0: 0xc043366  jal         func_10CD98
    ctx->pc = 0x10A7C0u;
    SET_GPR_U32(ctx, 31, 0x10A7C8u);
    ctx->pc = 0x10A7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A7C0u;
    // 0x10a7c4: 0x2612000c  addiu       $s2, $s0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CD98u, 0x10A7C0u, 0x10A7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A7C8u;
label_10a7c8:
    // 0x10a7c8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x10a7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x10a7cc: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x10a7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x10a7d0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x10a7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10a7d4: 0x8c71001c  lw          $s1, 0x1C($v1)
    ctx->pc = 0x10a7d4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x10a7d8: 0x8e2200d0  lw          $v0, 0xD0($s1)
    ctx->pc = 0x10a7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 208)));
    // 0x10a7dc: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x10A7DCu;
    {
        const bool branch_taken_0x10a7dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10A7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A7DCu;
        // 0x10a7e0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a7dc) {
            ctx->pc = 0x10A81Cu;
            goto label_10a81c;
        }
    }
    ctx->pc = 0x10A7E4u;
    // 0x10a7e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a7e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a7e8: 0xc043366  jal         func_10CD98
    ctx->pc = 0x10A7E8u;
    SET_GPR_U32(ctx, 31, 0x10A7F0u);
    ctx->pc = 0x10A7ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A7E8u;
    // 0x10a7ec: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CD98u, 0x10A7E8u, 0x10A7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A7F0u;
label_10a7f0:
    // 0x10a7f0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x10a7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x10a7f4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x10a7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x10a7f8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x10a7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10a7fc: 0x8c63001c  lw          $v1, 0x1C($v1)
    ctx->pc = 0x10a7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x10a800: 0x8c6200d0  lw          $v0, 0xD0($v1)
    ctx->pc = 0x10a800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 208)));
    // 0x10a804: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x10A804u;
    {
        const bool branch_taken_0x10a804 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10a804) {
            ctx->pc = 0x10A808u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10A804u;
            // 0x10a808: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10A81Cu;
            goto label_10a81c;
        }
    }
    ctx->pc = 0x10A80Cu;
    // 0x10a80c: 0x8c650010  lw          $a1, 0x10($v1)
    ctx->pc = 0x10a80cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x10a810: 0xc044150  jal         func_110540
    ctx->pc = 0x10A810u;
    SET_GPR_U32(ctx, 31, 0x10A818u);
    ctx->pc = 0x10A814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A810u;
    // 0x10a814: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110540u, 0x10A810u, 0x10A818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A818u;
label_10a818:
    // 0x10a818: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x10a818u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_10a81c:
    // 0x10a81c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10a81cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10a820: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10a820u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10a824: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x10a824u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10a828: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x10a828u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10a82c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10a82cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10a830: 0x3e00008  jr          $ra
    ctx->pc = 0x10A830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A830u;
        // 0x10a834: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10A830u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10A838u;
}
