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

// Function: sub_00358350
// Address: 0x358350 - 0x3583e0
void sub_00358350_0x358350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00358350_0x358350");
#endif

    switch (ctx->pc) {
        case 0x3583b0u: goto label_3583b0;
        default: break;
    }

    ctx->pc = 0x358350u;

    // 0x358350: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x358350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x358354: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x358354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x358358: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x358358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x35835c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x35835Cu;
    {
        const bool branch_taken_0x35835c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35835c) {
            ctx->pc = 0x358360u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35835Cu;
            // 0x358360: 0x8ca30104  lw          $v1, 0x104($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35836Cu;
            goto label_35836c;
        }
    }
    ctx->pc = 0x358364u;
    // 0x358364: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x358364u;
    {
        const bool branch_taken_0x358364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x358368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358364u;
        // 0x358368: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358364) {
            ctx->pc = 0x3583D4u;
            goto label_3583d4;
        }
    }
    ctx->pc = 0x35836Cu;
label_35836c:
    // 0x35836c: 0x8c840060  lw          $a0, 0x60($a0)
    ctx->pc = 0x35836cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x358370: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x358370u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358374: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x358374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x358378: 0xc4400070  lwc1        $f0, 0x70($v0)
    ctx->pc = 0x358378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35837c: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x35837cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x358380: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x358380u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x358384: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x358384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x358388: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x358388u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x35838c: 0x460c0840  add.s       $f1, $f1, $f12
    ctx->pc = 0x35838cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[12]);
    // 0x358390: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x358390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x358394: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x358394u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x358398: 0xc442000c  lwc1        $f2, 0xC($v0)
    ctx->pc = 0x358398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x35839c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x35839cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3583a0: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x3583A0u;
    {
        const bool branch_taken_0x3583a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3583A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3583A0u;
        // 0x3583a4: 0xe7a2000c  swc1        $f2, 0xC($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3583a0) {
            ctx->pc = 0x3583D0u;
            goto label_3583d0;
        }
    }
    ctx->pc = 0x3583A8u;
    // 0x3583a8: 0xc0d6c4c  jal         func_35B130
    ctx->pc = 0x3583A8u;
    SET_GPR_U32(ctx, 31, 0x3583B0u);
    ctx->pc = 0x3583ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3583A8u;
    // 0x3583ac: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35B130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35B130u, 0x3583A8u, 0x3583B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3583B0u;
label_3583b0:
    // 0x3583b0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3583b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3583b4: 0x0  nop
    ctx->pc = 0x3583b4u;
    // NOP
    // 0x3583b8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3583b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3583bc: 0x0  nop
    ctx->pc = 0x3583bcu;
    // NOP
    // 0x3583c0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x3583C0u;
    {
        const bool branch_taken_0x3583c0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3583C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3583C0u;
        // 0x3583c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3583c0) {
            ctx->pc = 0x3583CCu;
            goto label_3583cc;
        }
    }
    ctx->pc = 0x3583C8u;
    // 0x3583c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3583c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3583cc:
    // 0x3583cc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3583ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3583d0:
    // 0x3583d0: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x3583d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3583d4:
    // 0x3583d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3583d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3583d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3583D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3583DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3583D8u;
        // 0x3583dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3583D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3583E0u;
}
