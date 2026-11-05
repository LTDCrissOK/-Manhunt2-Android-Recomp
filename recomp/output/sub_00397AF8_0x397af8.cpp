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

// Function: sub_00397AF8
// Address: 0x397af8 - 0x397b78
void sub_00397AF8_0x397af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00397AF8_0x397af8");
#endif

    switch (ctx->pc) {
        case 0x397b64u: goto label_397b64;
        case 0x397b6cu: goto label_397b6c;
        default: break;
    }

    ctx->pc = 0x397af8u;

    // 0x397af8: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x397af8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x397afc: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x397afcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x397b00: 0x8c4c9200  lw          $t4, -0x6E00($v0)
    ctx->pc = 0x397b00u;
    SET_GPR_S32(ctx, 12, (int32_t)FAST_READ32(0x409200u));
    // 0x397b04: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x397b04u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397b08: 0x240d0002  addiu       $t5, $zero, 0x2
    ctx->pc = 0x397b08u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x397b0c: 0xffa500b8  sd          $a1, 0xB8($sp)
    ctx->pc = 0x397b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 5));
    // 0x397b10: 0xffa600c0  sd          $a2, 0xC0($sp)
    ctx->pc = 0x397b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 6));
    // 0x397b14: 0x27a600b8  addiu       $a2, $sp, 0xB8
    ctx->pc = 0x397b14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x397b18: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x397b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x397b1c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x397b1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397b20: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x397b20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397b24: 0xffa700c8  sd          $a3, 0xC8($sp)
    ctx->pc = 0x397b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 7));
    // 0x397b28: 0xffa800d0  sd          $t0, 0xD0($sp)
    ctx->pc = 0x397b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 8));
    // 0x397b2c: 0xffa900d8  sd          $t1, 0xD8($sp)
    ctx->pc = 0x397b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 9));
    // 0x397b30: 0xffaa00e0  sd          $t2, 0xE0($sp)
    ctx->pc = 0x397b30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 10));
    // 0x397b34: 0xffab00e8  sd          $t3, 0xE8($sp)
    ctx->pc = 0x397b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 11));
    // 0x397b38: 0xe7ac0098  swc1        $f12, 0x98($sp)
    ctx->pc = 0x397b38u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x397b3c: 0xe7ad009c  swc1        $f13, 0x9C($sp)
    ctx->pc = 0x397b3cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x397b40: 0xe7ae00a0  swc1        $f14, 0xA0($sp)
    ctx->pc = 0x397b40u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x397b44: 0xe7af00a4  swc1        $f15, 0xA4($sp)
    ctx->pc = 0x397b44u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x397b48: 0xe7b000a8  swc1        $f16, 0xA8($sp)
    ctx->pc = 0x397b48u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x397b4c: 0xe7b100ac  swc1        $f17, 0xAC($sp)
    ctx->pc = 0x397b4cu;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x397b50: 0xe7b200b0  swc1        $f18, 0xB0($sp)
    ctx->pc = 0x397b50u;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x397b54: 0x118d0005  beq         $t4, $t5, . + 4 + (0x5 << 2)
    ctx->pc = 0x397B54u;
    {
        const bool branch_taken_0x397b54 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 13));
        ctx->pc = 0x397B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397B54u;
        // 0x397b58: 0xe7b300b4  swc1        $f19, 0xB4($sp) (Delay Slot)
        { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x397b54) {
            ctx->pc = 0x397B6Cu;
            goto label_397b6c;
        }
    }
    ctx->pc = 0x397B5Cu;
    // 0x397b5c: 0xc0f0242  jal         func_3C0908
    ctx->pc = 0x397B5Cu;
    SET_GPR_U32(ctx, 31, 0x397B64u);
    ctx->pc = 0x3C0908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C0908u, 0x397B5Cu, 0x397B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397B64u;
label_397b64:
    // 0x397b64: 0xc0f3050  jal         func_3CC140
    ctx->pc = 0x397B64u;
    SET_GPR_U32(ctx, 31, 0x397B6Cu);
    ctx->pc = 0x397B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397B64u;
    // 0x397b68: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CC140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CC140u, 0x397B64u, 0x397B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397B6Cu;
label_397b6c:
    // 0x397b6c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x397b6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x397b70: 0x3e00008  jr          $ra
    ctx->pc = 0x397B70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x397B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397B70u;
        // 0x397b74: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x397B70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x397B78u;
}
