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

// Function: sub_00305838
// Address: 0x305838 - 0x3058e8
void sub_00305838_0x305838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00305838_0x305838");
#endif

    switch (ctx->pc) {
        case 0x30584cu: goto label_30584c;
        case 0x305898u: goto label_305898;
        case 0x3058bcu: goto label_3058bc;
        default: break;
    }

    ctx->pc = 0x305838u;

    // 0x305838: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x305838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x30583c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x30583cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x305840: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x305840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x305844: 0xc08ffae  jal         func_23FEB8
    ctx->pc = 0x305844u;
    SET_GPR_U32(ctx, 31, 0x30584Cu);
    ctx->pc = 0x305848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305844u;
    // 0x305848: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FEB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FEB8u, 0x305844u, 0x30584Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30584Cu;
label_30584c:
    // 0x30584c: 0x8e0211d8  lw          $v0, 0x11D8($s0)
    ctx->pc = 0x30584cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4568)));
    // 0x305850: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x305850u;
    {
        const bool branch_taken_0x305850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x305854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305850u;
        // 0x305854: 0xc60c0524  lwc1        $f12, 0x524($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x305850) {
            ctx->pc = 0x305880u;
            goto label_305880;
        }
    }
    ctx->pc = 0x305858u;
    // 0x305858: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x305858u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x30585c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x30585cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x305860: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x305860u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x305864: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x305864u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x305868: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x305868u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30586c: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x30586cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x305870: 0x460c0834  c.lt.s      $f1, $f12
    ctx->pc = 0x305870u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x305874: 0x0  nop
    ctx->pc = 0x305874u;
    // NOP
    // 0x305878: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x305878u;
    {
        const bool branch_taken_0x305878 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x305878) {
            ctx->pc = 0x30587Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x305878u;
            // 0x30587c: 0x46000b06  mov.s       $f12, $f1 (Delay Slot)
            ctx->f[12] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x305880u;
            goto label_305880;
        }
    }
    ctx->pc = 0x305880u;
label_305880:
    // 0x305880: 0x8e060334  lw          $a2, 0x334($s0)
    ctx->pc = 0x305880u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x305884: 0x8cc401e4  lw          $a0, 0x1E4($a2)
    ctx->pc = 0x305884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 484)));
    // 0x305888: 0x1480000a  bnez        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x305888u;
    {
        const bool branch_taken_0x305888 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x30588Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305888u;
        // 0x30588c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305888) {
            ctx->pc = 0x3058B4u;
            goto label_3058b4;
        }
    }
    ctx->pc = 0x305890u;
    // 0x305890: 0x24c301ec  addiu       $v1, $a2, 0x1EC
    ctx->pc = 0x305890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 492));
    // 0x305894: 0x0  nop
    ctx->pc = 0x305894u;
    // NOP
label_305898:
    // 0x305898: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x305898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30589c: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30589Cu;
    {
        const bool branch_taken_0x30589c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3058A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30589Cu;
        // 0x3058a0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30589c) {
            ctx->pc = 0x3058B4u;
            goto label_3058b4;
        }
    }
    ctx->pc = 0x3058A4u;
    // 0x3058a4: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x3058a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x3058a8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3058A8u;
    {
        const bool branch_taken_0x3058a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3058ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3058A8u;
        // 0x3058ac: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3058a8) {
            ctx->pc = 0x305898u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_305898;
        }
    }
    ctx->pc = 0x3058B0u;
    // 0x3058b0: 0x8cc401e8  lw          $a0, 0x1E8($a2)
    ctx->pc = 0x3058b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 488)));
label_3058b4:
    // 0x3058b4: 0xc073f08  jal         func_1CFC20
    ctx->pc = 0x3058B4u;
    SET_GPR_U32(ctx, 31, 0x3058BCu);
    ctx->pc = 0x3058B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3058B4u;
    // 0x3058b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFC20u, 0x3058B4u, 0x3058BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3058BCu;
label_3058bc:
    // 0x3058bc: 0x8e0205b0  lw          $v0, 0x5B0($s0)
    ctx->pc = 0x3058bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1456)));
    // 0x3058c0: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3058C0u;
    {
        const bool branch_taken_0x3058c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3058c0) {
            ctx->pc = 0x3058C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3058C0u;
            // 0x3058c4: 0x8e0200b8  lw          $v0, 0xB8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3058D0u;
            goto label_3058d0;
        }
    }
    ctx->pc = 0x3058C8u;
    // 0x3058c8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3058C8u;
    {
        const bool branch_taken_0x3058c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3058CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3058C8u;
        // 0x3058cc: 0xae0010c0  sw          $zero, 0x10C0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4288), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3058c8) {
            ctx->pc = 0x3058D8u;
            goto label_3058d8;
        }
    }
    ctx->pc = 0x3058D0u;
label_3058d0:
    // 0x3058d0: 0xc4401500  lwc1        $f0, 0x1500($v0)
    ctx->pc = 0x3058d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3058d4: 0xe60010c0  swc1        $f0, 0x10C0($s0)
    ctx->pc = 0x3058d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4288), bits); }
label_3058d8:
    // 0x3058d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3058d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3058dc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3058dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3058e0: 0x3e00008  jr          $ra
    ctx->pc = 0x3058E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3058E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3058E0u;
        // 0x3058e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3058E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3058E8u;
}
