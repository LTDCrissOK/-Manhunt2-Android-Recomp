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

// Function: sub_00296B90
// Address: 0x296b90 - 0x296bf8
void sub_00296B90_0x296b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00296B90_0x296b90");
#endif

    switch (ctx->pc) {
        case 0x296bb0u: goto label_296bb0;
        case 0x296bd0u: goto label_296bd0;
        case 0x296be0u: goto label_296be0;
        default: break;
    }

    ctx->pc = 0x296b90u;

    // 0x296b90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x296b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x296b94: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x296b94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x296b98: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x296b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x296b9c: 0x24a5baf8  addiu       $a1, $a1, -0x4508
    ctx->pc = 0x296b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949624));
    // 0x296ba0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x296ba0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296ba4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x296ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x296ba8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x296BA8u;
    SET_GPR_U32(ctx, 31, 0x296BB0u);
    ctx->pc = 0x296BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296BA8u;
    // 0x296bac: 0x26040008  addiu       $a0, $s0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x296BA8u, 0x296BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296BB0u;
label_296bb0:
    // 0x296bb0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x296bb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x296bb4: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x296BB4u;
    {
        const bool branch_taken_0x296bb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x296bb4) {
            ctx->pc = 0x296BB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x296BB4u;
            // 0x296bb8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x296BE8u;
            goto label_296be8;
        }
    }
    ctx->pc = 0x296BBCu;
    // 0x296bbc: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x296bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x296bc0: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x296bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x296bc4: 0x24844ec0  addiu       $a0, $a0, 0x4EC0
    ctx->pc = 0x296bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20160));
    // 0x296bc8: 0xc0aebd6  jal         func_2BAF58
    ctx->pc = 0x296BC8u;
    SET_GPR_U32(ctx, 31, 0x296BD0u);
    ctx->pc = 0x296BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296BC8u;
    // 0x296bcc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAF58u, 0x296BC8u, 0x296BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296BD0u;
label_296bd0:
    // 0x296bd0: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x296bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x296bd4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x296bd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296bd8: 0xc09f60e  jal         func_27D838
    ctx->pc = 0x296BD8u;
    SET_GPR_U32(ctx, 31, 0x296BE0u);
    ctx->pc = 0x296BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296BD8u;
    // 0x296bdc: 0xc60c0020  lwc1        $f12, 0x20($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D838u, 0x296BD8u, 0x296BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296BE0u;
label_296be0:
    // 0x296be0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x296BE0u;
    {
        const bool branch_taken_0x296be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x296BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296BE0u;
        // 0x296be4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296be0) {
            ctx->pc = 0x296BECu;
            goto label_296bec;
        }
    }
    ctx->pc = 0x296BE8u;
label_296be8:
    // 0x296be8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x296be8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_296bec:
    // 0x296bec: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x296becu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x296bf0: 0x3e00008  jr          $ra
    ctx->pc = 0x296BF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x296BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296BF0u;
        // 0x296bf4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296BF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x296BF8u;
}
