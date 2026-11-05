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

// Function: sub_001B09A0
// Address: 0x1b09a0 - 0x1b0ab0
void sub_001B09A0_0x1b09a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B09A0_0x1b09a0");
#endif

    switch (ctx->pc) {
        case 0x1b09e8u: goto label_1b09e8;
        default: break;
    }

    ctx->pc = 0x1b09a0u;

    // 0x1b09a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b09a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b09a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b09a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b09a8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b09a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b09ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b09acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b09b0: 0x8e0200a0  lw          $v0, 0xA0($s0)
    ctx->pc = 0x1b09b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x1b09b4: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B09B4u;
    {
        const bool branch_taken_0x1b09b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b09b4) {
            ctx->pc = 0x1B09B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B09B4u;
            // 0x1b09b8: 0x8e0200f0  lw          $v0, 0xF0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B09C4u;
            goto label_1b09c4;
        }
    }
    ctx->pc = 0x1B09BCu;
    // 0x1b09bc: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x1B09BCu;
    {
        const bool branch_taken_0x1b09bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B09C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B09BCu;
        // 0x1b09c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b09bc) {
            ctx->pc = 0x1B0A9Cu;
            goto label_1b0a9c;
        }
    }
    ctx->pc = 0x1B09C4u;
label_1b09c4:
    // 0x1b09c4: 0x14400035  bnez        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x1B09C4u;
    {
        const bool branch_taken_0x1b09c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B09C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B09C4u;
        // 0x1b09c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b09c4) {
            ctx->pc = 0x1B0A9Cu;
            goto label_1b0a9c;
        }
    }
    ctx->pc = 0x1B09CCu;
    // 0x1b09cc: 0x8e020084  lw          $v0, 0x84($s0)
    ctx->pc = 0x1b09ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x1b09d0: 0x2442fffa  addiu       $v0, $v0, -0x6
    ctx->pc = 0x1b09d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967290));
    // 0x1b09d4: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x1b09d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x1b09d8: 0x14400030  bnez        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x1B09D8u;
    {
        const bool branch_taken_0x1b09d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B09DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B09D8u;
        // 0x1b09dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b09d8) {
            ctx->pc = 0x1B0A9Cu;
            goto label_1b0a9c;
        }
    }
    ctx->pc = 0x1B09E0u;
    // 0x1b09e0: 0xc06c4f4  jal         func_1B13D0
    ctx->pc = 0x1B09E0u;
    SET_GPR_U32(ctx, 31, 0x1B09E8u);
    ctx->pc = 0x1B09E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B09E0u;
    // 0x1b09e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B13D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B13D0u, 0x1B09E0u, 0x1B09E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B09E8u;
label_1b09e8:
    // 0x1b09e8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1b09e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b09ec: 0x240500c0  addiu       $a1, $zero, 0xC0
    ctx->pc = 0x1b09ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x1b09f0: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x1b09f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
    // 0x1b09f4: 0x8e070088  lw          $a3, 0x88($s0)
    ctx->pc = 0x1b09f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x1b09f8: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x1b09f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x1b09fc: 0x24634dd0  addiu       $v1, $v1, 0x4DD0
    ctx->pc = 0x1b09fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19920));
    // 0x1b0a00: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x1b0a00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b0a04: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x1b0a04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1b0a08: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1b0a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1b0a0c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1b0a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b0a10: 0x24620040  addiu       $v0, $v1, 0x40
    ctx->pc = 0x1b0a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x1b0a14: 0x10e60010  beq         $a3, $a2, . + 4 + (0x10 << 2)
    ctx->pc = 0x1B0A14u;
    {
        const bool branch_taken_0x1b0a14 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 6));
        ctx->pc = 0x1B0A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0A14u;
        // 0x1b0a18: 0x24640050  addiu       $a0, $v1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0a14) {
            ctx->pc = 0x1B0A58u;
            goto label_1b0a58;
        }
    }
    ctx->pc = 0x1B0A1Cu;
    // 0x1b0a1c: 0x28e20008  slti        $v0, $a3, 0x8
    ctx->pc = 0x1b0a1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1b0a20: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B0A20u;
    {
        const bool branch_taken_0x1b0a20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0A20u;
        // 0x1b0a24: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0a20) {
            ctx->pc = 0x1B0A38u;
            goto label_1b0a38;
        }
    }
    ctx->pc = 0x1B0A28u;
    // 0x1b0a28: 0x10e20008  beq         $a3, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B0A28u;
    {
        const bool branch_taken_0x1b0a28 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B0A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0A28u;
        // 0x1b0a2c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0a28) {
            ctx->pc = 0x1B0A4Cu;
            goto label_1b0a4c;
        }
    }
    ctx->pc = 0x1B0A30u;
    // 0x1b0a30: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1B0A30u;
    {
        const bool branch_taken_0x1b0a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0A30u;
        // 0x1b0a34: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0a30) {
            ctx->pc = 0x1B0AA0u;
            goto label_1b0aa0;
        }
    }
    ctx->pc = 0x1B0A38u;
label_1b0a38:
    // 0x1b0a38: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1b0a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1b0a3c: 0x10e20009  beq         $a3, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B0A3Cu;
    {
        const bool branch_taken_0x1b0a3c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B0A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0A3Cu;
        // 0x1b0a40: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0a3c) {
            ctx->pc = 0x1B0A64u;
            goto label_1b0a64;
        }
    }
    ctx->pc = 0x1B0A44u;
    // 0x1b0a44: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1B0A44u;
    {
        const bool branch_taken_0x1b0a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0A44u;
        // 0x1b0a48: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0a44) {
            ctx->pc = 0x1B0AA0u;
            goto label_1b0aa0;
        }
    }
    ctx->pc = 0x1B0A4Cu;
label_1b0a4c:
    // 0x1b0a4c: 0xc4620050  lwc1        $f2, 0x50($v1)
    ctx->pc = 0x1b0a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b0a50: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1B0A50u;
    {
        const bool branch_taken_0x1b0a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0A50u;
        // 0x1b0a54: 0xc4600040  lwc1        $f0, 0x40($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0a50) {
            ctx->pc = 0x1B0A6Cu;
            goto label_1b0a6c;
        }
    }
    ctx->pc = 0x1B0A58u;
label_1b0a58:
    // 0x1b0a58: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1b0a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b0a5c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B0A5Cu;
    {
        const bool branch_taken_0x1b0a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0A5Cu;
        // 0x1b0a60: 0xc4820004  lwc1        $f2, 0x4($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0a5c) {
            ctx->pc = 0x1B0A6Cu;
            goto label_1b0a6c;
        }
    }
    ctx->pc = 0x1B0A64u;
label_1b0a64:
    // 0x1b0a64: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1B0A64u;
    {
        const bool branch_taken_0x1b0a64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0A64u;
        // 0x1b0a68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0a64) {
            ctx->pc = 0x1B0A9Cu;
            goto label_1b0a9c;
        }
    }
    ctx->pc = 0x1B0A6Cu;
label_1b0a6c:
    // 0x1b0a6c: 0x8e0200a0  lw          $v0, 0xA0($s0)
    ctx->pc = 0x1b0a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x1b0a70: 0xc441001c  lwc1        $f1, 0x1C($v0)
    ctx->pc = 0x1b0a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b0a74: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1b0a74u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b0a78: 0x0  nop
    ctx->pc = 0x1b0a78u;
    // NOP
    // 0x1b0a7c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1B0A7Cu;
    {
        const bool branch_taken_0x1b0a7c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B0A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0A7Cu;
        // 0x1b0a80: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0a7c) {
            ctx->pc = 0x1B0A98u;
            goto label_1b0a98;
        }
    }
    ctx->pc = 0x1B0A84u;
    // 0x1b0a84: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1b0a84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1b0a88: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b0a88u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b0a8c: 0x0  nop
    ctx->pc = 0x1b0a8cu;
    // NOP
    // 0x1b0a90: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1B0A90u;
    {
        const bool branch_taken_0x1b0a90 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b0a90) {
            ctx->pc = 0x1B0A94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B0A90u;
            // 0x1b0a94: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B0A98u;
            goto label_1b0a98;
        }
    }
    ctx->pc = 0x1B0A98u;
label_1b0a98:
    // 0x1b0a98: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1b0a98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1b0a9c:
    // 0x1b0a9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b0a9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b0aa0:
    // 0x1b0aa0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b0aa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b0aa4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B0AA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B0AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0AA4u;
        // 0x1b0aa8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B0AA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B0AACu;
    // 0x1b0aac: 0x0  nop
    ctx->pc = 0x1b0aacu;
    // NOP
    ctx->pc = 0x1b0ab0u;
}
