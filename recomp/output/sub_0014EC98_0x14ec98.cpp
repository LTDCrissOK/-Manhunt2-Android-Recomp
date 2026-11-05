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

// Function: sub_0014EC98
// Address: 0x14ec98 - 0x14ecf8
void sub_0014EC98_0x14ec98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014EC98_0x14ec98");
#endif

    switch (ctx->pc) {
        case 0x14ecc8u: goto label_14ecc8;
        case 0x14ecd4u: goto label_14ecd4;
        case 0x14ece4u: goto label_14ece4;
        default: break;
    }

    ctx->pc = 0x14ec98u;

    // 0x14ec98: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x14ec98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x14ec9c: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x14ec9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x14eca0: 0xa21818  mult        $v1, $a1, $v0
    ctx->pc = 0x14eca0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x14eca4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14eca4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14eca8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x14eca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x14ecac: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x14ecacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x14ecb0: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x14ecb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14ecb4: 0x8cb004e4  lw          $s0, 0x4E4($a1)
    ctx->pc = 0x14ecb4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1252)));
    // 0x14ecb8: 0x5200000b  beql        $s0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x14ECB8u;
    {
        const bool branch_taken_0x14ecb8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ecb8) {
            ctx->pc = 0x14ECBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14ECB8u;
            // 0x14ecbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14ECE8u;
            goto label_14ece8;
        }
    }
    ctx->pc = 0x14ECC0u;
    // 0x14ecc0: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x14ECC0u;
    SET_GPR_U32(ctx, 31, 0x14ECC8u);
    ctx->pc = 0x14ECC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14ECC0u;
    // 0x14ecc4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x14ECC0u, 0x14ECC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14ECC8u;
label_14ecc8:
    // 0x14ecc8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14ecc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14eccc: 0xc0aafd2  jal         func_2ABF48
    ctx->pc = 0x14ECCCu;
    SET_GPR_U32(ctx, 31, 0x14ECD4u);
    ctx->pc = 0x14ECD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14ECCCu;
    // 0x14ecd0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF48u, 0x14ECCCu, 0x14ECD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14ECD4u;
label_14ecd4:
    // 0x14ecd4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14ecd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ecd8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x14ecd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ecdc: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x14ECDCu;
    SET_GPR_U32(ctx, 31, 0x14ECE4u);
    ctx->pc = 0x14ECE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14ECDCu;
    // 0x14ece0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x14ECDCu, 0x14ECE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14ECE4u;
label_14ece4:
    // 0x14ece4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x14ece4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14ece8:
    // 0x14ece8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x14ece8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14ecec: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x14ececu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14ecf0: 0x3e00008  jr          $ra
    ctx->pc = 0x14ECF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14ECF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ECF0u;
        // 0x14ecf4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14ECF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14ECF8u;
}
