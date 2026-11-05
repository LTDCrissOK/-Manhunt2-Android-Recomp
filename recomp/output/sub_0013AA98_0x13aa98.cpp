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

// Function: sub_0013AA98
// Address: 0x13aa98 - 0x13aaf8
void sub_0013AA98_0x13aa98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013AA98_0x13aa98");
#endif

    switch (ctx->pc) {
        case 0x13aab8u: goto label_13aab8;
        case 0x13aac0u: goto label_13aac0;
        case 0x13aae0u: goto label_13aae0;
        default: break;
    }

    ctx->pc = 0x13aa98u;

    // 0x13aa98: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13aa98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13aa9c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x13aa9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x13aaa0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x13aaa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x13aaa4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13aaa4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13aaa8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x13aaa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x13aaac: 0x30b000ff  andi        $s0, $a1, 0xFF
    ctx->pc = 0x13aaacu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x13aab0: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x13AAB0u;
    SET_GPR_U32(ctx, 31, 0x13AAB8u);
    ctx->pc = 0x13AAB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AAB0u;
    // 0x13aab4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x13AAB0u, 0x13AAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AAB8u;
label_13aab8:
    // 0x13aab8: 0xc0aafc4  jal         func_2ABF10
    ctx->pc = 0x13AAB8u;
    SET_GPR_U32(ctx, 31, 0x13AAC0u);
    ctx->pc = 0x13AABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AAB8u;
    // 0x13aabc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF10u, 0x13AAB8u, 0x13AAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AAC0u;
label_13aac0:
    // 0x13aac0: 0x2403005c  addiu       $v1, $zero, 0x5C
    ctx->pc = 0x13aac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x13aac4: 0x244202bc  addiu       $v0, $v0, 0x2BC
    ctx->pc = 0x13aac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 700));
    // 0x13aac8: 0x2038018  mult        $s0, $s0, $v1
    ctx->pc = 0x13aac8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x13aacc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x13aaccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13aad0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x13aad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13aad4: 0x2308821  addu        $s1, $s1, $s0
    ctx->pc = 0x13aad4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x13aad8: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x13AAD8u;
    SET_GPR_U32(ctx, 31, 0x13AAE0u);
    ctx->pc = 0x13AADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AAD8u;
    // 0x13aadc: 0xae22052c  sw          $v0, 0x52C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1324), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x13AAD8u, 0x13AAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AAE0u;
label_13aae0:
    // 0x13aae0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x13aae0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13aae4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x13aae4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13aae8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x13aae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13aaec: 0x3e00008  jr          $ra
    ctx->pc = 0x13AAECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13AAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AAECu;
        // 0x13aaf0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13AAECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13AAF4u;
    // 0x13aaf4: 0x0  nop
    ctx->pc = 0x13aaf4u;
    // NOP
    ctx->pc = 0x13aaf8u;
}
