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

// Function: sub_0012BF38
// Address: 0x12bf38 - 0x12bfb8
void sub_0012BF38_0x12bf38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012BF38_0x12bf38");
#endif

    switch (ctx->pc) {
        case 0x12bf70u: goto label_12bf70;
        case 0x12bf80u: goto label_12bf80;
        case 0x12bf90u: goto label_12bf90;
        default: break;
    }

    ctx->pc = 0x12bf38u;

    // 0x12bf38: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x12bf38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12bf3c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x12bf3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x12bf40: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12bf40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12bf44: 0x30d200ff  andi        $s2, $a2, 0xFF
    ctx->pc = 0x12bf44u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x12bf48: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x12bf48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bf4c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x12bf4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x12bf50: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x12bf50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x12bf54: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x12bf54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x12bf58: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x12bf58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x12bf5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12bf5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12bf60: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x12bf60u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x12bf64: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x12bf64u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bf68: 0xc05f466  jal         func_17D198
    ctx->pc = 0x12BF68u;
    SET_GPR_U32(ctx, 31, 0x12BF70u);
    ctx->pc = 0x12BF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BF68u;
    // 0x12bf6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D198u, 0x12BF68u, 0x12BF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BF70u;
label_12bf70:
    // 0x12bf70: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x12bf70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x12bf74: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12bf74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bf78: 0xc0420fe  jal         func_1083F8
    ctx->pc = 0x12BF78u;
    SET_GPR_U32(ctx, 31, 0x12BF80u);
    ctx->pc = 0x12BF7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BF78u;
    // 0x12bf7c: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1083F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1083F8u, 0x12BF78u, 0x12BF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BF80u;
label_12bf80:
    // 0x12bf80: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12bf80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bf84: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x12bf84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bf88: 0xc04afc8  jal         func_12BF20
    ctx->pc = 0x12BF88u;
    SET_GPR_U32(ctx, 31, 0x12BF90u);
    ctx->pc = 0x12BF8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BF88u;
    // 0x12bf8c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BF20u, 0x12BF88u, 0x12BF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BF90u;
label_12bf90:
    // 0x12bf90: 0x92220084  lbu         $v0, 0x84($s1)
    ctx->pc = 0x12bf90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 132)));
    // 0x12bf94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12bf94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12bf98: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x12bf98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x12bf9c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x12bf9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12bfa0: 0xa2220084  sb          $v0, 0x84($s1)
    ctx->pc = 0x12bfa0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 132), (uint8_t)GPR_U32(ctx, 2));
    // 0x12bfa4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12bfa4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12bfa8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x12bfa8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12bfac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x12bfacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12bfb0: 0x3e00008  jr          $ra
    ctx->pc = 0x12BFB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12BFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BFB0u;
        // 0x12bfb4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12BFB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12BFB8u;
}
