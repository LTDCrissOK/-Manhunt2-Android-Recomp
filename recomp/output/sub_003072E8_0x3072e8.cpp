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

// Function: sub_003072E8
// Address: 0x3072e8 - 0x307390
void sub_003072E8_0x3072e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003072E8_0x3072e8");
#endif

    switch (ctx->pc) {
        case 0x3072fcu: goto label_3072fc;
        case 0x307328u: goto label_307328;
        case 0x307374u: goto label_307374;
        default: break;
    }

    ctx->pc = 0x3072e8u;

    // 0x3072e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3072e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3072ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3072ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3072f0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3072f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3072f4: 0xc09098c  jal         func_242630
    ctx->pc = 0x3072F4u;
    SET_GPR_U32(ctx, 31, 0x3072FCu);
    ctx->pc = 0x3072F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3072F4u;
    // 0x3072f8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x242630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242630u, 0x3072F4u, 0x3072FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3072FCu;
label_3072fc:
    // 0x3072fc: 0x8e050334  lw          $a1, 0x334($s0)
    ctx->pc = 0x3072fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x307300: 0x24030036  addiu       $v1, $zero, 0x36
    ctx->pc = 0x307300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x307304: 0x8ca20158  lw          $v0, 0x158($a1)
    ctx->pc = 0x307304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 344)));
    // 0x307308: 0x5443001b  bnel        $v0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x307308u;
    {
        const bool branch_taken_0x307308 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x307308) {
            ctx->pc = 0x30730Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307308u;
            // 0x30730c: 0x8e02010c  lw          $v0, 0x10C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x307378u;
            goto label_307378;
        }
    }
    ctx->pc = 0x307310u;
    // 0x307310: 0x8ca201e4  lw          $v0, 0x1E4($a1)
    ctx->pc = 0x307310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 484)));
    // 0x307314: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x307314u;
    {
        const bool branch_taken_0x307314 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x307314) {
            ctx->pc = 0x307318u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307314u;
            // 0x307318: 0xc4410014  lwc1        $f1, 0x14($v0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x30734Cu;
            goto label_30734c;
        }
    }
    ctx->pc = 0x30731Cu;
    // 0x30731c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x30731cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307320: 0x24a301ec  addiu       $v1, $a1, 0x1EC
    ctx->pc = 0x307320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 492));
    // 0x307324: 0x0  nop
    ctx->pc = 0x307324u;
    // NOP
label_307328:
    // 0x307328: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x307328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30732c: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x30732Cu;
    {
        const bool branch_taken_0x30732c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30732c) {
            ctx->pc = 0x307330u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30732Cu;
            // 0x307330: 0xc4410014  lwc1        $f1, 0x14($v0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x30734Cu;
            goto label_30734c;
        }
    }
    ctx->pc = 0x307334u;
    // 0x307334: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x307334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x307338: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x307338u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x30733c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x30733Cu;
    {
        const bool branch_taken_0x30733c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x307340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30733Cu;
        // 0x307340: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30733c) {
            ctx->pc = 0x307328u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_307328;
        }
    }
    ctx->pc = 0x307344u;
    // 0x307344: 0x8ca201e8  lw          $v0, 0x1E8($a1)
    ctx->pc = 0x307344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 488)));
    // 0x307348: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x307348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_30734c:
    // 0x30734c: 0x3c013f7d  lui         $at, 0x3F7D
    ctx->pc = 0x30734cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16253 << 16));
    // 0x307350: 0x342170a4  ori         $at, $at, 0x70A4
    ctx->pc = 0x307350u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28836);
    // 0x307354: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x307354u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x307358: 0x0  nop
    ctx->pc = 0x307358u;
    // NOP
    // 0x30735c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x30735cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x307360: 0x0  nop
    ctx->pc = 0x307360u;
    // NOP
    // 0x307364: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x307364u;
    {
        const bool branch_taken_0x307364 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x307364) {
            ctx->pc = 0x307368u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307364u;
            // 0x307368: 0x8e02010c  lw          $v0, 0x10C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x307378u;
            goto label_307378;
        }
    }
    ctx->pc = 0x30736Cu;
    // 0x30736c: 0xc0bb688  jal         func_2EDA20
    ctx->pc = 0x30736Cu;
    SET_GPR_U32(ctx, 31, 0x307374u);
    ctx->pc = 0x307370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30736Cu;
    // 0x307370: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDA20u, 0x30736Cu, 0x307374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307374u;
label_307374:
    // 0x307374: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x307374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_307378:
    // 0x307378: 0x7c400030  sq          $zero, 0x30($v0)
    ctx->pc = 0x307378u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), GPR_VEC(ctx, 0));
    // 0x30737c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x30737cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x307380: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x307380u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x307384: 0x3e00008  jr          $ra
    ctx->pc = 0x307384u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x307388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307384u;
        // 0x307388: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x307384u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30738Cu;
    // 0x30738c: 0x0  nop
    ctx->pc = 0x30738cu;
    // NOP
    ctx->pc = 0x307390u;
}
