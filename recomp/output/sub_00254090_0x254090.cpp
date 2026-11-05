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

// Function: sub_00254090
// Address: 0x254090 - 0x254138
void sub_00254090_0x254090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00254090_0x254090");
#endif

    switch (ctx->pc) {
        case 0x2540d0u: goto label_2540d0;
        case 0x2540f8u: goto label_2540f8;
        case 0x254118u: goto label_254118;
        default: break;
    }

    ctx->pc = 0x254090u;

    // 0x254090: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x254090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x254094: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x254094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x254098: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x254098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25409c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x25409cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2540a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2540a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2540a4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2540a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2540a8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2540a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2540ac: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2540acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2540b0: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2540b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2540b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2540b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2540b8: 0xae021060  sw          $v0, 0x1060($s0)
    ctx->pc = 0x2540b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4192), GPR_U32(ctx, 2));
    // 0x2540bc: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x2540bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2540c0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2540C0u;
    {
        const bool branch_taken_0x2540c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2540C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2540C0u;
        // 0x2540c4: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2540c0) {
            ctx->pc = 0x2540D0u;
            goto label_2540d0;
        }
    }
    ctx->pc = 0x2540C8u;
    // 0x2540c8: 0xc0944da  jal         func_251368
    ctx->pc = 0x2540C8u;
    SET_GPR_U32(ctx, 31, 0x2540D0u);
    ctx->pc = 0x2540CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2540C8u;
    // 0x2540cc: 0x8e250014  lw          $a1, 0x14($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x251368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251368u, 0x2540C8u, 0x2540D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2540D0u;
label_2540d0:
    // 0x2540d0: 0x8e030fe8  lw          $v1, 0xFE8($s0)
    ctx->pc = 0x2540d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4072)));
    // 0x2540d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2540d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2540d8: 0x16400009  bnez        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x2540D8u;
    {
        const bool branch_taken_0x2540d8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2540DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2540D8u;
        // 0x2540dc: 0xac62035c  sw          $v0, 0x35C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 860), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2540d8) {
            ctx->pc = 0x254100u;
            goto label_254100;
        }
    }
    ctx->pc = 0x2540E0u;
    // 0x2540e0: 0x8e040fe4  lw          $a0, 0xFE4($s0)
    ctx->pc = 0x2540e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4068)));
    // 0x2540e4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2540e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2540e8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2540e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2540ec: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2540ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2540f0: 0xc061de6  jal         func_187798
    ctx->pc = 0x2540F0u;
    SET_GPR_U32(ctx, 31, 0x2540F8u);
    ctx->pc = 0x2540F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2540F0u;
    // 0x2540f4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187798u, 0x2540F0u, 0x2540F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2540F8u;
label_2540f8:
    // 0x2540f8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2540F8u;
    {
        const bool branch_taken_0x2540f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2540FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2540F8u;
        // 0x2540fc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2540f8) {
            ctx->pc = 0x25411Cu;
            goto label_25411c;
        }
    }
    ctx->pc = 0x254100u;
label_254100:
    // 0x254100: 0x8e040fe4  lw          $a0, 0xFE4($s0)
    ctx->pc = 0x254100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4068)));
    // 0x254104: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x254104u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254108: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x254108u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25410c: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x25410cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254110: 0xc061de6  jal         func_187798
    ctx->pc = 0x254110u;
    SET_GPR_U32(ctx, 31, 0x254118u);
    ctx->pc = 0x254114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254110u;
    // 0x254114: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187798u, 0x254110u, 0x254118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254118u;
label_254118:
    // 0x254118: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x254118u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_25411c:
    // 0x25411c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25411cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x254120: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x254120u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x254124: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x254124u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x254128: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x254128u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x25412c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x25412cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x254130: 0x3e00008  jr          $ra
    ctx->pc = 0x254130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x254134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254130u;
        // 0x254134: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254130u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x254138u;
}
