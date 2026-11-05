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

// Function: sub_00118278
// Address: 0x118278 - 0x1182f0
void sub_00118278_0x118278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00118278_0x118278");
#endif

    ctx->pc = 0x118278u;

    // 0x118278: 0x10a0001a  beqz        $a1, . + 4 + (0x1A << 2)
    ctx->pc = 0x118278u;
    {
        const bool branch_taken_0x118278 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x118278) {
            ctx->pc = 0x1182E4u;
            goto label_1182e4;
        }
    }
    ctx->pc = 0x118280u;
    // 0x118280: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x118280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x118284: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x118284u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x118288: 0x0  nop
    ctx->pc = 0x118288u;
    // NOP
    // 0x11828c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x11828cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x118290: 0x0  nop
    ctx->pc = 0x118290u;
    // NOP
    // 0x118294: 0x4502000c  bc1fl       . + 4 + (0xC << 2)
    ctx->pc = 0x118294u;
    {
        const bool branch_taken_0x118294 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x118294) {
            ctx->pc = 0x118298u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x118294u;
            // 0x118298: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1182C8u;
            goto label_1182c8;
        }
    }
    ctx->pc = 0x11829Cu;
    // 0x11829c: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x11829cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1182a0: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1182a0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1182a4: 0x0  nop
    ctx->pc = 0x1182a4u;
    // NOP
    // 0x1182a8: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x1182A8u;
    {
        const bool branch_taken_0x1182a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1182a8) {
            ctx->pc = 0x1182ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1182A8u;
            // 0x1182ac: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1182C8u;
            goto label_1182c8;
        }
    }
    ctx->pc = 0x1182B0u;
    // 0x1182b0: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x1182b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1182b4: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1182b4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1182b8: 0x0  nop
    ctx->pc = 0x1182b8u;
    // NOP
    // 0x1182bc: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x1182BCu;
    {
        const bool branch_taken_0x1182bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1182bc) {
            ctx->pc = 0x1182E4u;
            goto label_1182e4;
        }
    }
    ctx->pc = 0x1182C4u;
    // 0x1182c4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1182c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1182c8:
    // 0x1182c8: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x1182c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1182cc: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1182CCu;
    {
        const bool branch_taken_0x1182cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1182D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1182CCu;
        // 0x1182d0: 0x24820070  addiu       $v0, $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1182cc) {
            ctx->pc = 0x1182DCu;
            goto label_1182dc;
        }
    }
    ctx->pc = 0x1182D4u;
    // 0x1182d4: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1182d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1182d8: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x1182d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_1182dc:
    // 0x1182dc: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x1182dcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1182e0: 0xf8810070  sqc2        $vf1, 0x70($a0)
    ctx->pc = 0x1182e0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 112), _mm_castps_si128(ctx->vu0_vf[1]));
label_1182e4:
    // 0x1182e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1182E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1182E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1182ECu;
    // 0x1182ec: 0x0  nop
    ctx->pc = 0x1182ecu;
    // NOP
    ctx->pc = 0x1182f0u;
}
