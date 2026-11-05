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

// Function: sub_0010A048
// Address: 0x10a048 - 0x10a0d8
void sub_0010A048_0x10a048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010A048_0x10a048");
#endif

    switch (ctx->pc) {
        case 0x10a074u: goto label_10a074;
        case 0x10a0a0u: goto label_10a0a0;
        case 0x10a0b4u: goto label_10a0b4;
        default: break;
    }

    ctx->pc = 0x10a048u;

    // 0x10a048: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10a048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10a04c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10a04cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10a050: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10a050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10a054: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10a054u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a058: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x10a058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x10a05c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x10a05cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x10a060: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x10a060u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a064: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10a064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10a068: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x10a068u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a06c: 0xc043366  jal         func_10CD98
    ctx->pc = 0x10A06Cu;
    SET_GPR_U32(ctx, 31, 0x10A074u);
    ctx->pc = 0x10A070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A06Cu;
    // 0x10a070: 0x100982d  daddu       $s3, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CD98u, 0x10A06Cu, 0x10A074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A074u;
label_10a074:
    // 0x10a074: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x10a074u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x10a078: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x10a078u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x10a07c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x10a07cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x10a080: 0x8c50001c  lw          $s0, 0x1C($v0)
    ctx->pc = 0x10a080u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x10a084: 0x8e0300d0  lw          $v1, 0xD0($s0)
    ctx->pc = 0x10a084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
    // 0x10a088: 0x5460000b  bnel        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x10A088u;
    {
        const bool branch_taken_0x10a088 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x10a088) {
            ctx->pc = 0x10A08Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10A088u;
            // 0x10a08c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10A0B8u;
            goto label_10a0b8;
        }
    }
    ctx->pc = 0x10A090u;
    // 0x10a090: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x10a090u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x10a094: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10a094u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a098: 0xc04786e  jal         func_11E1B8
    ctx->pc = 0x10A098u;
    SET_GPR_U32(ctx, 31, 0x10A0A0u);
    ctx->pc = 0x10A09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A098u;
    // 0x10a09c: 0x24849a08  addiu       $a0, $a0, -0x65F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E1B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E1B8u, 0x10A098u, 0x10A0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A0A0u;
label_10a0a0:
    // 0x10a0a0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10a0a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a0a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a0a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a0a8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x10a0a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a0ac: 0xc044118  jal         func_110460
    ctx->pc = 0x10A0ACu;
    SET_GPR_U32(ctx, 31, 0x10A0B4u);
    ctx->pc = 0x10A0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A0ACu;
    // 0x10a0b0: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110460u, 0x10A0ACu, 0x10A0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A0B4u;
label_10a0b4:
    // 0x10a0b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10a0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10a0b8:
    // 0x10a0b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10a0b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10a0bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10a0bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10a0c0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x10a0c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10a0c4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x10a0c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10a0c8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10a0c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10a0cc: 0x3e00008  jr          $ra
    ctx->pc = 0x10A0CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A0CCu;
        // 0x10a0d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10A0CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10A0D4u;
    // 0x10a0d4: 0x0  nop
    ctx->pc = 0x10a0d4u;
    // NOP
    ctx->pc = 0x10a0d8u;
}
