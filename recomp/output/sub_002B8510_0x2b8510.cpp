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

// Function: sub_002B8510
// Address: 0x2b8510 - 0x2b85e8
void sub_002B8510_0x2b8510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B8510_0x2b8510");
#endif

    switch (ctx->pc) {
        case 0x2b8524u: goto label_2b8524;
        case 0x2b8594u: goto label_2b8594;
        case 0x2b859cu: goto label_2b859c;
        case 0x2b85b0u: goto label_2b85b0;
        case 0x2b85ccu: goto label_2b85cc;
        default: break;
    }

    ctx->pc = 0x2b8510u;

    // 0x2b8510: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b8510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b8514: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b8514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b8518: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2b8518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2b851c: 0xc076100  jal         func_1D8400
    ctx->pc = 0x2B851Cu;
    SET_GPR_U32(ctx, 31, 0x2B8524u);
    ctx->pc = 0x2B8520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B851Cu;
    // 0x2b8520: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8400u, 0x2B851Cu, 0x2B8524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8524u;
label_2b8524:
    // 0x2b8524: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B8524u;
    {
        const bool branch_taken_0x2b8524 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2B8528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8524u;
        // 0x2b8528: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8524) {
            ctx->pc = 0x2B8540u;
            goto label_2b8540;
        }
    }
    ctx->pc = 0x2B852Cu;
    // 0x2b852c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2b852cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2b8530: 0x0  nop
    ctx->pc = 0x2b8530u;
    // NOP
    // 0x2b8534: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2b8534u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2b8538: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2B8538u;
    {
        const bool branch_taken_0x2b8538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b8538) {
            ctx->pc = 0x2B8558u;
            goto label_2b8558;
        }
    }
    ctx->pc = 0x2B8540u;
label_2b8540:
    // 0x2b8540: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2b8540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2b8544: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2b8544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2b8548: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2b8548u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2b854c: 0x0  nop
    ctx->pc = 0x2b854cu;
    // NOP
    // 0x2b8550: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2b8550u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2b8554: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x2b8554u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_2b8558:
    // 0x2b8558: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x2b8558u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x2b855c: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x2b855cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x2b8560: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b8560u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b8564: 0xc6015900  lwc1        $f1, 0x5900($s0)
    ctx->pc = 0x2b8564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 22784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b8568: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2b8568u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2b856c: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x2b856cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x2b8570: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2b8570u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2b8574: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x2b8574u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2b8578: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2b8578u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2b857c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2b857cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b8580: 0x0  nop
    ctx->pc = 0x2b8580u;
    // NOP
    // 0x2b8584: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x2B8584u;
    {
        const bool branch_taken_0x2b8584 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B8588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8584u;
        // 0x2b8588: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8584) {
            ctx->pc = 0x2B85D8u;
            goto label_2b85d8;
        }
    }
    ctx->pc = 0x2B858Cu;
    // 0x2b858c: 0xc0ade76  jal         func_2B79D8
    ctx->pc = 0x2B858Cu;
    SET_GPR_U32(ctx, 31, 0x2B8594u);
    ctx->pc = 0x2B8590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B858Cu;
    // 0x2b8590: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B79D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B79D8u, 0x2B858Cu, 0x2B8594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8594u;
label_2b8594:
    // 0x2b8594: 0xc0ace0e  jal         func_2B3838
    ctx->pc = 0x2B8594u;
    SET_GPR_U32(ctx, 31, 0x2B859Cu);
    ctx->pc = 0x2B8598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8594u;
    // 0x2b8598: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3838u, 0x2B8594u, 0x2B859Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B859Cu;
label_2b859c:
    // 0x2b859c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B859Cu;
    {
        const bool branch_taken_0x2b859c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B85A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B859Cu;
        // 0x2b85a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b859c) {
            ctx->pc = 0x2B85C0u;
            goto label_2b85c0;
        }
    }
    ctx->pc = 0x2B85A4u;
    // 0x2b85a4: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x2b85a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2b85a8: 0xc0ad6cc  jal         func_2B5B30
    ctx->pc = 0x2B85A8u;
    SET_GPR_U32(ctx, 31, 0x2B85B0u);
    ctx->pc = 0x2B85ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B85A8u;
    // 0x2b85ac: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5B30u, 0x2B85A8u, 0x2B85B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B85B0u;
label_2b85b0:
    // 0x2b85b0: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x2b85b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x2b85b4: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x2b85b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x2b85b8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2B85B8u;
    {
        const bool branch_taken_0x2b85b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B85BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B85B8u;
        // 0x2b85bc: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b85b8) {
            ctx->pc = 0x2B85D8u;
            goto label_2b85d8;
        }
    }
    ctx->pc = 0x2B85C0u;
label_2b85c0:
    // 0x2b85c0: 0x24050024  addiu       $a1, $zero, 0x24
    ctx->pc = 0x2b85c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x2b85c4: 0xc0ad6cc  jal         func_2B5B30
    ctx->pc = 0x2B85C4u;
    SET_GPR_U32(ctx, 31, 0x2B85CCu);
    ctx->pc = 0x2B85C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B85C4u;
    // 0x2b85c8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5B30u, 0x2B85C4u, 0x2B85CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B85CCu;
label_2b85cc:
    // 0x2b85cc: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x2b85ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2b85d0: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x2b85d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2b85d4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2b85d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_2b85d8:
    // 0x2b85d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b85d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b85dc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2b85dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b85e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2B85E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B85E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B85E0u;
        // 0x2b85e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B85E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B85E8u;
}
