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

// Function: sub_00397A80
// Address: 0x397a80 - 0x397af8
void sub_00397A80_0x397a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00397A80_0x397a80");
#endif

    switch (ctx->pc) {
        case 0x397ae4u: goto label_397ae4;
        case 0x397aecu: goto label_397aec;
        default: break;
    }

    ctx->pc = 0x397a80u;

    // 0x397a80: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x397a80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x397a84: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x397a84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x397a88: 0x8c439200  lw          $v1, -0x6E00($v0)
    ctx->pc = 0x397a88u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x409200u));
    // 0x397a8c: 0xffa500b8  sd          $a1, 0xB8($sp)
    ctx->pc = 0x397a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 5));
    // 0x397a90: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x397a90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397a94: 0xffa600c0  sd          $a2, 0xC0($sp)
    ctx->pc = 0x397a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 6));
    // 0x397a98: 0x27a600b8  addiu       $a2, $sp, 0xB8
    ctx->pc = 0x397a98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x397a9c: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x397a9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x397aa0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x397aa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397aa4: 0xffa700c8  sd          $a3, 0xC8($sp)
    ctx->pc = 0x397aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 7));
    // 0x397aa8: 0xffa800d0  sd          $t0, 0xD0($sp)
    ctx->pc = 0x397aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 8));
    // 0x397aac: 0xffa900d8  sd          $t1, 0xD8($sp)
    ctx->pc = 0x397aacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 9));
    // 0x397ab0: 0xffaa00e0  sd          $t2, 0xE0($sp)
    ctx->pc = 0x397ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 10));
    // 0x397ab4: 0xffab00e8  sd          $t3, 0xE8($sp)
    ctx->pc = 0x397ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 11));
    // 0x397ab8: 0xe7ac0098  swc1        $f12, 0x98($sp)
    ctx->pc = 0x397ab8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x397abc: 0xe7ad009c  swc1        $f13, 0x9C($sp)
    ctx->pc = 0x397abcu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x397ac0: 0xe7ae00a0  swc1        $f14, 0xA0($sp)
    ctx->pc = 0x397ac0u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x397ac4: 0xe7af00a4  swc1        $f15, 0xA4($sp)
    ctx->pc = 0x397ac4u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x397ac8: 0xe7b000a8  swc1        $f16, 0xA8($sp)
    ctx->pc = 0x397ac8u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x397acc: 0xe7b100ac  swc1        $f17, 0xAC($sp)
    ctx->pc = 0x397accu;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x397ad0: 0xe7b200b0  swc1        $f18, 0xB0($sp)
    ctx->pc = 0x397ad0u;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x397ad4: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x397AD4u;
    {
        const bool branch_taken_0x397ad4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x397AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397AD4u;
        // 0x397ad8: 0xe7b300b4  swc1        $f19, 0xB4($sp) (Delay Slot)
        { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x397ad4) {
            ctx->pc = 0x397AECu;
            goto label_397aec;
        }
    }
    ctx->pc = 0x397ADCu;
    // 0x397adc: 0xc0f0242  jal         func_3C0908
    ctx->pc = 0x397ADCu;
    SET_GPR_U32(ctx, 31, 0x397AE4u);
    ctx->pc = 0x3C0908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C0908u, 0x397ADCu, 0x397AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397AE4u;
label_397ae4:
    // 0x397ae4: 0xc0f3050  jal         func_3CC140
    ctx->pc = 0x397AE4u;
    SET_GPR_U32(ctx, 31, 0x397AECu);
    ctx->pc = 0x397AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397AE4u;
    // 0x397ae8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CC140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CC140u, 0x397AE4u, 0x397AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397AECu;
label_397aec:
    // 0x397aec: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x397aecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x397af0: 0x3e00008  jr          $ra
    ctx->pc = 0x397AF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x397AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397AF0u;
        // 0x397af4: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x397AF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x397AF8u;
}
