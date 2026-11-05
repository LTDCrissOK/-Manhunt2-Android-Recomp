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

// Function: sub_0039EE48
// Address: 0x39ee48 - 0x39eed0
void sub_0039EE48_0x39ee48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039EE48_0x39ee48");
#endif

    switch (ctx->pc) {
        case 0x39ee80u: goto label_39ee80;
        case 0x39ee90u: goto label_39ee90;
        case 0x39eea0u: goto label_39eea0;
        case 0x39eea8u: goto label_39eea8;
        default: break;
    }

    ctx->pc = 0x39ee48u;

    // 0x39ee48: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x39ee48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x39ee4c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x39ee4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x39ee50: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x39ee50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ee54: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x39ee54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x39ee58: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x39ee58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ee5c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x39ee5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x39ee60: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x39ee60u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ee64: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x39ee64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ee68: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x39ee68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ee6c: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x39ee6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x39ee70: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x39ee70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x39ee74: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x39ee74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x39ee78: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x39EE78u;
    SET_GPR_U32(ctx, 31, 0x39EE80u);
    ctx->pc = 0x39EE7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39EE78u;
    // 0x39ee7c: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x39EE78u, 0x39EE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39EE80u;
label_39ee80:
    // 0x39ee80: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x39ee80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    // 0x39ee84: 0xafb00004  sw          $s0, 0x4($sp)
    ctx->pc = 0x39ee84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 16));
    // 0x39ee88: 0xc0ecbe4  jal         func_3B2F90
    ctx->pc = 0x39EE88u;
    SET_GPR_U32(ctx, 31, 0x39EE90u);
    ctx->pc = 0x39EE8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39EE88u;
    // 0x39ee8c: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2F90u, 0x39EE88u, 0x39EE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39EE90u;
label_39ee90:
    // 0x39ee90: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x39ee90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ee94: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x39ee94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ee98: 0xc0e7bb4  jal         func_39EED0
    ctx->pc = 0x39EE98u;
    SET_GPR_U32(ctx, 31, 0x39EEA0u);
    ctx->pc = 0x39EE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39EE98u;
    // 0x39ee9c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39EED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39EED0u, 0x39EE98u, 0x39EEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39EEA0u;
label_39eea0:
    // 0x39eea0: 0xc0ecbea  jal         func_3B2FA8
    ctx->pc = 0x39EEA0u;
    SET_GPR_U32(ctx, 31, 0x39EEA8u);
    ctx->pc = 0x39EEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39EEA0u;
    // 0x39eea4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2FA8u, 0x39EEA0u, 0x39EEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39EEA8u;
label_39eea8:
    // 0x39eea8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x39eea8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x39eeac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x39eeacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39eeb0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x39eeb0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39eeb4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x39eeb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39eeb8: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x39eeb8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x39eebc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x39eebcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x39eec0: 0x3e00008  jr          $ra
    ctx->pc = 0x39EEC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39EEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EEC0u;
        // 0x39eec4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39EEC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39EEC8u;
    // 0x39eec8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x39eec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x39eecc: 0x0  nop
    ctx->pc = 0x39eeccu;
    // NOP
    ctx->pc = 0x39eed0u;
}
