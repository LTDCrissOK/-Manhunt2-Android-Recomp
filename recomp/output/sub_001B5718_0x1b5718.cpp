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

// Function: sub_001B5718
// Address: 0x1b5718 - 0x1b5800
void sub_001B5718_0x1b5718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B5718_0x1b5718");
#endif

    switch (ctx->pc) {
        case 0x1b573cu: goto label_1b573c;
        case 0x1b5788u: goto label_1b5788;
        default: break;
    }

    ctx->pc = 0x1b5718u;

    // 0x1b5718: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1b5718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1b571c: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x1b571cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B00u));
    // 0x1b5720: 0x4400008  bltz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B5720u;
    {
        const bool branch_taken_0x1b5720 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1B5724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5720u;
        // 0x1b5724: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5720) {
            ctx->pc = 0x1B5744u;
            goto label_1b5744;
        }
    }
    ctx->pc = 0x1B5728u;
    // 0x1b5728: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b5728u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b572c: 0x0  nop
    ctx->pc = 0x1b572cu;
    // NOP
    // 0x1b5730: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1b5730u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b5734: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1B5734u;
    {
        const bool branch_taken_0x1b5734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5734) {
            ctx->pc = 0x1B575Cu;
            goto label_1b575c;
        }
    }
    ctx->pc = 0x1B573Cu;
label_1b573c:
    // 0x1b573c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B573Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B573Cu;
        // 0x1b5740: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B573Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B5744u;
label_1b5744:
    // 0x1b5744: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b5744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1b5748: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b5748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b574c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b574cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b5750: 0x0  nop
    ctx->pc = 0x1b5750u;
    // NOP
    // 0x1b5754: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1b5754u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b5758: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1b5758u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1b575c:
    // 0x1b575c: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1b575cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1b5760: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1b5760u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1b5764: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b5764u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b5768: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1b5768u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1b576c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1b576cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1b5770: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x1b5770u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x1b5774: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b5774u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b5778: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1b5778u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b577c: 0x24458998  addiu       $a1, $v0, -0x7668
    ctx->pc = 0x1b577cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936984));
    // 0x1b5780: 0x24638990  addiu       $v1, $v1, -0x7670
    ctx->pc = 0x1b5780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936976));
    // 0x1b5784: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b5784u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b5788:
    // 0x1b5788: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1b5788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b578c: 0x1044ffeb  beq         $v0, $a0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1B578Cu;
    {
        const bool branch_taken_0x1b578c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x1b578c) {
            ctx->pc = 0x1B573Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b573c;
        }
    }
    ctx->pc = 0x1B5794u;
    // 0x1b5794: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x1b5794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b5798: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b5798u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b579c: 0x0  nop
    ctx->pc = 0x1b579cu;
    // NOP
    // 0x1b57a0: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1B57A0u;
    {
        const bool branch_taken_0x1b57a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b57a0) {
            ctx->pc = 0x1B57B4u;
            goto label_1b57b4;
        }
    }
    ctx->pc = 0x1B57A8u;
    // 0x1b57a8: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1b57a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x1b57ac: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1b57acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1b57b0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1b57b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1b57b4:
    // 0x1b57b4: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B57B4u;
    {
        const bool branch_taken_0x1b57b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b57b4) {
            ctx->pc = 0x1B57B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B57B4u;
            // 0x1b57b8: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B57D8u;
            goto label_1b57d8;
        }
    }
    ctx->pc = 0x1B57BCu;
    // 0x1b57bc: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x1b57bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b57c0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1b57c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1b57c4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1b57c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b57c8: 0x0  nop
    ctx->pc = 0x1b57c8u;
    // NOP
    // 0x1b57cc: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1B57CCu;
    {
        const bool branch_taken_0x1b57cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B57D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B57CCu;
        // 0x1b57d0: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b57cc) {
            ctx->pc = 0x1B57E4u;
            goto label_1b57e4;
        }
    }
    ctx->pc = 0x1B57D4u;
    // 0x1b57d4: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1b57d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_1b57d8:
    // 0x1b57d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b57d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b57dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1B57DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B57E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B57DCu;
        // 0x1b57e0: 0xe4a10000  swc1        $f1, 0x0($a1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B57DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B57E4u;
label_1b57e4:
    // 0x1b57e4: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1b57e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1b57e8: 0x2cc20002  sltiu       $v0, $a2, 0x2
    ctx->pc = 0x1b57e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1b57ec: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x1B57ECu;
    {
        const bool branch_taken_0x1b57ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B57F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B57ECu;
        // 0x1b57f0: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b57ec) {
            ctx->pc = 0x1B5788u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b5788;
        }
    }
    ctx->pc = 0x1B57F4u;
    // 0x1b57f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B57F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B57F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B57F4u;
        // 0x1b57f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B57F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B57FCu;
    // 0x1b57fc: 0x0  nop
    ctx->pc = 0x1b57fcu;
    // NOP
    ctx->pc = 0x1b5800u;
}
