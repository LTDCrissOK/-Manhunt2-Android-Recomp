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

// Function: sub_002C4980
// Address: 0x2c4980 - 0x2c4ac0
void sub_002C4980_0x2c4980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C4980_0x2c4980");
#endif

    switch (ctx->pc) {
        case 0x2c49b4u: goto label_2c49b4;
        case 0x2c4a14u: goto label_2c4a14;
        default: break;
    }

    ctx->pc = 0x2c4980u;

    // 0x2c4980: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c4980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c4984: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2c4984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2c4988: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c4988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c498c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c498cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4990: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c4990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c4994: 0x14b10003  bne         $a1, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C4994u;
    {
        const bool branch_taken_0x2c4994 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 17));
        ctx->pc = 0x2C4998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4994u;
        // 0x2c4998: 0xe7b40020  swc1        $f20, 0x20($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4994) {
            ctx->pc = 0x2C49A4u;
            goto label_2c49a4;
        }
    }
    ctx->pc = 0x2C499Cu;
    // 0x2c499c: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x2C499Cu;
    {
        const bool branch_taken_0x2c499c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C49A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C499Cu;
        // 0x2c49a0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c499c) {
            ctx->pc = 0x2C4AA8u;
            goto label_2c4aa8;
        }
    }
    ctx->pc = 0x2C49A4u;
label_2c49a4:
    // 0x2c49a4: 0xb11023  subu        $v0, $a1, $s1
    ctx->pc = 0x2c49a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x2c49a8: 0x28200  sll         $s0, $v0, 8
    ctx->pc = 0x2c49a8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2c49ac: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x2C49ACu;
    SET_GPR_U32(ctx, 31, 0x2C49B4u);
    ctx->pc = 0x2C49B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C49ACu;
    // 0x2c49b0: 0x2028023  subu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x2C49ACu, 0x2C49B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C49B4u;
label_2c49b4:
    // 0x2c49b4: 0x50001b  divu        $zero, $v0, $s0
    ctx->pc = 0x2c49b4u;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2c49b8: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2C49B8u;
    {
        const bool branch_taken_0x2c49b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c49b8) {
            ctx->pc = 0x2C49BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C49B8u;
            // 0x2c49bc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C49C0u;
            goto label_2c49c0;
        }
    }
    ctx->pc = 0x2C49C0u;
label_2c49c0:
    // 0x2c49c0: 0x1010  mfhi        $v0
    ctx->pc = 0x2c49c0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2c49c4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C49C4u;
    {
        const bool branch_taken_0x2c49c4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2C49C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C49C4u;
        // 0x2c49c8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c49c4) {
            ctx->pc = 0x2C49E0u;
            goto label_2c49e0;
        }
    }
    ctx->pc = 0x2C49CCu;
    // 0x2c49cc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c49ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c49d0: 0x0  nop
    ctx->pc = 0x2c49d0u;
    // NOP
    // 0x2c49d4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2c49d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2c49d8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2C49D8u;
    {
        const bool branch_taken_0x2c49d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c49d8) {
            ctx->pc = 0x2C49F8u;
            goto label_2c49f8;
        }
    }
    ctx->pc = 0x2C49E0u;
label_2c49e0:
    // 0x2c49e0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c49e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c49e4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2c49e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2c49e8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c49e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c49ec: 0x0  nop
    ctx->pc = 0x2c49ecu;
    // NOP
    // 0x2c49f0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2c49f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2c49f4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2c49f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2c49f8:
    // 0x2c49f8: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x2c49f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x2c49fc: 0x34218081  ori         $at, $at, 0x8081
    ctx->pc = 0x2c49fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32897);
    // 0x2c4a00: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c4a00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c4a04: 0x0  nop
    ctx->pc = 0x2c4a04u;
    // NOP
    // 0x2c4a08: 0x46000d02  mul.s       $f20, $f1, $f0
    ctx->pc = 0x2c4a08u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c4a0c: 0xc0dde53  jal         func_37794C
    ctx->pc = 0x2C4A0Cu;
    SET_GPR_U32(ctx, 31, 0x2C4A14u);
    ctx->pc = 0x2C4A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4A0Cu;
    // 0x2c4a10: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x37794Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37794Cu, 0x2C4A0Cu, 0x2C4A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4A14u;
label_2c4a14:
    // 0x2c4a14: 0x6200006  bltz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C4A14u;
    {
        const bool branch_taken_0x2c4a14 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x2C4A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4A14u;
        // 0x2c4a18: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4a14) {
            ctx->pc = 0x2C4A30u;
            goto label_2c4a30;
        }
    }
    ctx->pc = 0x2C4A1Cu;
    // 0x2c4a1c: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x2c4a1cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c4a20: 0x0  nop
    ctx->pc = 0x2c4a20u;
    // NOP
    // 0x2c4a24: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c4a24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c4a28: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2C4A28u;
    {
        const bool branch_taken_0x2c4a28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4A28u;
        // 0x2c4a2c: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4a28) {
            ctx->pc = 0x2C4A50u;
            goto label_2c4a50;
        }
    }
    ctx->pc = 0x2C4A30u;
label_2c4a30:
    // 0x2c4a30: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x2c4a30u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
    // 0x2c4a34: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x2c4a34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x2c4a38: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2c4a38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2c4a3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c4a3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c4a40: 0x0  nop
    ctx->pc = 0x2c4a40u;
    // NOP
    // 0x2c4a44: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c4a44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c4a48: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2c4a48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2c4a4c: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x2c4a4cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_2c4a50:
    // 0x2c4a50: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C4A50u;
    {
        const bool branch_taken_0x2c4a50 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2C4A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4A50u;
        // 0x2c4a54: 0x30820001  andi        $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4a50) {
            ctx->pc = 0x2C4A6Cu;
            goto label_2c4a6c;
        }
    }
    ctx->pc = 0x2C4A58u;
    // 0x2c4a58: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2c4a58u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c4a5c: 0x0  nop
    ctx->pc = 0x2c4a5cu;
    // NOP
    // 0x2c4a60: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2c4a60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2c4a64: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2C4A64u;
    {
        const bool branch_taken_0x2c4a64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4A64u;
        // 0x2c4a68: 0x4601a041  sub.s       $f1, $f20, $f1 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4a64) {
            ctx->pc = 0x2C4A88u;
            goto label_2c4a88;
        }
    }
    ctx->pc = 0x2C4A6Cu;
label_2c4a6c:
    // 0x2c4a6c: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x2c4a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x2c4a70: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2c4a70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2c4a74: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c4a74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c4a78: 0x0  nop
    ctx->pc = 0x2c4a78u;
    // NOP
    // 0x2c4a7c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2c4a7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2c4a80: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2c4a80u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x2c4a84: 0x4601a041  sub.s       $f1, $f20, $f1
    ctx->pc = 0x2c4a84u;
    ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
label_2c4a88:
    // 0x2c4a88: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2c4a88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2c4a8c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c4a8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c4a90: 0x0  nop
    ctx->pc = 0x2c4a90u;
    // NOP
    // 0x2c4a94: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2c4a94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c4a98: 0x0  nop
    ctx->pc = 0x2c4a98u;
    // NOP
    // 0x2c4a9c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2C4A9Cu;
    {
        const bool branch_taken_0x2c4a9c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c4a9c) {
            ctx->pc = 0x2C4AA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C4A9Cu;
            // 0x2c4aa0: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C4AA4u;
            goto label_2c4aa4;
        }
    }
    ctx->pc = 0x2C4AA4u;
label_2c4aa4:
    // 0x2c4aa4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2c4aa4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c4aa8:
    // 0x2c4aa8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c4aa8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c4aac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2c4aacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c4ab0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c4ab0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c4ab4: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x2c4ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2c4ab8: 0x3e00008  jr          $ra
    ctx->pc = 0x2C4AB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C4ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4AB8u;
        // 0x2c4abc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C4AB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C4AC0u;
}
