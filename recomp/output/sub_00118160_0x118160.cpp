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

// Function: sub_00118160
// Address: 0x118160 - 0x1181f8
void sub_00118160_0x118160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00118160_0x118160");
#endif

    ctx->pc = 0x118160u;

    // 0x118160: 0x10a0002a  beqz        $a1, . + 4 + (0x2A << 2)
    ctx->pc = 0x118160u;
    {
        const bool branch_taken_0x118160 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x118164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118160u;
        // 0x118164: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118160) {
            ctx->pc = 0x11820Cu;
            return;
        }
    }
    ctx->pc = 0x118168u;
    // 0x118168: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x118168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11816c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x11816cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x118170: 0x0  nop
    ctx->pc = 0x118170u;
    // NOP
    // 0x118174: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x118174u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x118178: 0x0  nop
    ctx->pc = 0x118178u;
    // NOP
    // 0x11817c: 0x4502000c  bc1fl       . + 4 + (0xC << 2)
    ctx->pc = 0x11817Cu;
    {
        const bool branch_taken_0x11817c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x11817c) {
            ctx->pc = 0x118180u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11817Cu;
            // 0x118180: 0x8cc20004  lw          $v0, 0x4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1181B0u;
            goto label_1181b0;
        }
    }
    ctx->pc = 0x118184u;
    // 0x118184: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x118184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x118188: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x118188u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11818c: 0x0  nop
    ctx->pc = 0x11818cu;
    // NOP
    // 0x118190: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x118190u;
    {
        const bool branch_taken_0x118190 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x118190) {
            ctx->pc = 0x118194u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x118190u;
            // 0x118194: 0x8cc20004  lw          $v0, 0x4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1181B0u;
            goto label_1181b0;
        }
    }
    ctx->pc = 0x118198u;
    // 0x118198: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x118198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11819c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x11819cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1181a0: 0x0  nop
    ctx->pc = 0x1181a0u;
    // NOP
    // 0x1181a4: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x1181A4u;
    {
        const bool branch_taken_0x1181a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1181a4) {
            ctx->pc = 0x11820Cu;
            return;
        }
    }
    ctx->pc = 0x1181ACu;
    // 0x1181ac: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x1181acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_1181b0:
    // 0x1181b0: 0x2444fffb  addiu       $a0, $v0, -0x5
    ctx->pc = 0x1181b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967291));
    // 0x1181b4: 0x2c830012  sltiu       $v1, $a0, 0x12
    ctx->pc = 0x1181b4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)18) ? 1 : 0);
    // 0x1181b8: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1181B8u;
    {
        const bool branch_taken_0x1181b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1181BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1181B8u;
        // 0x1181bc: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1181b8) {
            ctx->pc = 0x118204u;
            return;
        }
    }
    ctx->pc = 0x1181C0u;
    // 0x1181c0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1181c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1181c4: 0x2442b220  addiu       $v0, $v0, -0x4DE0
    ctx->pc = 0x1181c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947360));
    // 0x1181c8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1181c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1181cc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1181ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1181d0: 0x800008  jr          $a0
    ctx->pc = 0x1181D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1181D8u: goto label_1181d8;
            case 0x1181E8u: goto label_1181e8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1181D0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1181D8u;
label_1181d8:
    // 0x1181d8: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x1181d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1181dc: 0x24c20060  addiu       $v0, $a2, 0x60
    ctx->pc = 0x1181dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 96));
    // 0x1181e0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1181E0u;
    {
        const bool branch_taken_0x1181e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1181E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1181E0u;
        // 0x1181e4: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1181e0) {
            ctx->pc = 0x118204u;
            return;
        }
    }
    ctx->pc = 0x1181E8u;
label_1181e8:
    // 0x1181e8: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x1181e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1181ec: 0x24c20060  addiu       $v0, $a2, 0x60
    ctx->pc = 0x1181ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 96));
    // 0x1181f0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1181F0u;
    {
        const bool branch_taken_0x1181f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1181F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1181F0u;
        // 0x1181f4: 0xac62000c  sw          $v0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1181f0) {
            ctx->pc = 0x118204u;
            return;
        }
    }
    ctx->pc = 0x1181F8u;
}
