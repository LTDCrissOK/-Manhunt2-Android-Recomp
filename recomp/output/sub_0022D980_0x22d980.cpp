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

// Function: sub_0022D980
// Address: 0x22d980 - 0x22dac8
void sub_0022D980_0x22d980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022D980_0x22d980");
#endif

    switch (ctx->pc) {
        case 0x22da38u: goto label_22da38;
        case 0x22da84u: goto label_22da84;
        case 0x22dab4u: goto label_22dab4;
        default: break;
    }

    ctx->pc = 0x22d980u;

    // 0x22d980: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22d980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22d984: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22d984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22d988: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x22d988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x22d98c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22d98cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d990: 0x8e030334  lw          $v1, 0x334($s0)
    ctx->pc = 0x22d990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x22d994: 0x8c630150  lw          $v1, 0x150($v1)
    ctx->pc = 0x22d994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
    // 0x22d998: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x22d998u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x22d99c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x22D99Cu;
    {
        const bool branch_taken_0x22d99c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22D9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D99Cu;
        // 0x22d9a0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d99c) {
            ctx->pc = 0x22D9D0u;
            goto label_22d9d0;
        }
    }
    ctx->pc = 0x22D9A4u;
    // 0x22d9a4: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x22d9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x22d9a8: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x22D9A8u;
    {
        const bool branch_taken_0x22d9a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22D9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D9A8u;
        // 0x22d9ac: 0x2402001b  addiu       $v0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d9a8) {
            ctx->pc = 0x22D9D0u;
            goto label_22d9d0;
        }
    }
    ctx->pc = 0x22D9B0u;
    // 0x22d9b0: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x22D9B0u;
    {
        const bool branch_taken_0x22d9b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22D9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D9B0u;
        // 0x22d9b4: 0x24020046  addiu       $v0, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d9b0) {
            ctx->pc = 0x22D9D0u;
            goto label_22d9d0;
        }
    }
    ctx->pc = 0x22D9B8u;
    // 0x22d9b8: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22D9B8u;
    {
        const bool branch_taken_0x22d9b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22D9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D9B8u;
        // 0x22d9bc: 0x24020032  addiu       $v0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d9b8) {
            ctx->pc = 0x22D9D0u;
            goto label_22d9d0;
        }
    }
    ctx->pc = 0x22D9C0u;
    // 0x22d9c0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22D9C0u;
    {
        const bool branch_taken_0x22d9c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22D9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D9C0u;
        // 0x22d9c4: 0x24020033  addiu       $v0, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d9c0) {
            ctx->pc = 0x22D9D0u;
            goto label_22d9d0;
        }
    }
    ctx->pc = 0x22D9C8u;
    // 0x22d9c8: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22D9C8u;
    {
        const bool branch_taken_0x22d9c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x22d9c8) {
            ctx->pc = 0x22D9CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22D9C8u;
            // 0x22d9cc: 0x8e020334  lw          $v0, 0x334($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22D9D8u;
            goto label_22d9d8;
        }
    }
    ctx->pc = 0x22D9D0u;
label_22d9d0:
    // 0x22d9d0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x22d9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22d9d4: 0x8e020334  lw          $v0, 0x334($s0)
    ctx->pc = 0x22d9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_22d9d8:
    // 0x22d9d8: 0x4382b  sltu        $a3, $zero, $a0
    ctx->pc = 0x22d9d8u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x22d9dc: 0x24040016  addiu       $a0, $zero, 0x16
    ctx->pc = 0x22d9dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x22d9e0: 0x8c430150  lw          $v1, 0x150($v0)
    ctx->pc = 0x22d9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
    // 0x22d9e4: 0x38630037  xori        $v1, $v1, 0x37
    ctx->pc = 0x22d9e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)55);
    // 0x22d9e8: 0x14a40015  bne         $a1, $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x22D9E8u;
    {
        const bool branch_taken_0x22d9e8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x22D9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D9E8u;
        // 0x22d9ec: 0x2c660001  sltiu       $a2, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d9e8) {
            ctx->pc = 0x22DA40u;
            goto label_22da40;
        }
    }
    ctx->pc = 0x22D9F0u;
    // 0x22d9f0: 0x8e02036c  lw          $v0, 0x36C($s0)
    ctx->pc = 0x22d9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
    // 0x22d9f4: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x22d9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x22d9f8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x22d9f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x22d9fc: 0x54430011  bnel        $v0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x22D9FCu;
    {
        const bool branch_taken_0x22d9fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x22d9fc) {
            ctx->pc = 0x22DA00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22D9FCu;
            // 0x22da00: 0x24020015  addiu       $v0, $zero, 0x15 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22DA44u;
            goto label_22da44;
        }
    }
    ctx->pc = 0x22DA04u;
    // 0x22da04: 0xc60104f8  lwc1        $f1, 0x4F8($s0)
    ctx->pc = 0x22da04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22da08: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22da08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22da0c: 0x0  nop
    ctx->pc = 0x22da0cu;
    // NOP
    // 0x22da10: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x22da10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22da14: 0x0  nop
    ctx->pc = 0x22da14u;
    // NOP
    // 0x22da18: 0x45010018  bc1t        . + 4 + (0x18 << 2)
    ctx->pc = 0x22DA18u;
    {
        const bool branch_taken_0x22da18 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22da18) {
            ctx->pc = 0x22DA7Cu;
            goto label_22da7c;
        }
    }
    ctx->pc = 0x22DA20u;
    // 0x22da20: 0x14e00003  bnez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x22DA20u;
    {
        const bool branch_taken_0x22da20 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x22DA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DA20u;
        // 0x22da24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22da20) {
            ctx->pc = 0x22DA30u;
            goto label_22da30;
        }
    }
    ctx->pc = 0x22DA28u;
    // 0x22da28: 0x10c00023  beqz        $a2, . + 4 + (0x23 << 2)
    ctx->pc = 0x22DA28u;
    {
        const bool branch_taken_0x22da28 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DA28u;
        // 0x22da2c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22da28) {
            ctx->pc = 0x22DAB8u;
            goto label_22dab8;
        }
    }
    ctx->pc = 0x22DA30u;
label_22da30:
    // 0x22da30: 0xc08b39e  jal         func_22CE78
    ctx->pc = 0x22DA30u;
    SET_GPR_U32(ctx, 31, 0x22DA38u);
    ctx->pc = 0x22DA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DA30u;
    // 0x22da34: 0x24050016  addiu       $a1, $zero, 0x16 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CE78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CE78u, 0x22DA30u, 0x22DA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DA38u;
label_22da38:
    // 0x22da38: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x22DA38u;
    {
        const bool branch_taken_0x22da38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DA38u;
        // 0x22da3c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22da38) {
            ctx->pc = 0x22DAB8u;
            goto label_22dab8;
        }
    }
    ctx->pc = 0x22DA40u;
label_22da40:
    // 0x22da40: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x22da40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_22da44:
    // 0x22da44: 0x54a2001c  bnel        $a1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x22DA44u;
    {
        const bool branch_taken_0x22da44 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x22da44) {
            ctx->pc = 0x22DA48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22DA44u;
            // 0x22da48: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22DAB8u;
            goto label_22dab8;
        }
    }
    ctx->pc = 0x22DA4Cu;
    // 0x22da4c: 0x8e02036c  lw          $v0, 0x36C($s0)
    ctx->pc = 0x22da4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
    // 0x22da50: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x22da50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x22da54: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x22da54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x22da58: 0x54430017  bnel        $v0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x22DA58u;
    {
        const bool branch_taken_0x22da58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x22da58) {
            ctx->pc = 0x22DA5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22DA58u;
            // 0x22da5c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22DAB8u;
            goto label_22dab8;
        }
    }
    ctx->pc = 0x22DA60u;
    // 0x22da60: 0xc60104f8  lwc1        $f1, 0x4F8($s0)
    ctx->pc = 0x22da60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22da64: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22da64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22da68: 0x0  nop
    ctx->pc = 0x22da68u;
    // NOP
    // 0x22da6c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x22da6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22da70: 0x0  nop
    ctx->pc = 0x22da70u;
    // NOP
    // 0x22da74: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x22DA74u;
    {
        const bool branch_taken_0x22da74 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22da74) {
            ctx->pc = 0x22DA9Cu;
            goto label_22da9c;
        }
    }
    ctx->pc = 0x22DA7Cu;
label_22da7c:
    // 0x22da7c: 0xc08c02e  jal         func_2300B8
    ctx->pc = 0x22DA7Cu;
    SET_GPR_U32(ctx, 31, 0x22DA84u);
    ctx->pc = 0x22DA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DA7Cu;
    // 0x22da80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2300B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2300B8u, 0x22DA7Cu, 0x22DA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DA84u;
label_22da84:
    // 0x22da84: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x22da84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x22da88: 0xc60004f8  lwc1        $f0, 0x4F8($s0)
    ctx->pc = 0x22da88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22da8c: 0xc4412b30  lwc1        $f1, 0x2B30($v0)
    ctx->pc = 0x22da8cu;
    { uint32_t bits = FAST_READ32(0x482B30u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22da90: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x22da90u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x22da94: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x22DA94u;
    {
        const bool branch_taken_0x22da94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DA94u;
        // 0x22da98: 0xe60004f8  swc1        $f0, 0x4F8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1272), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22da94) {
            ctx->pc = 0x22DAB4u;
            goto label_22dab4;
        }
    }
    ctx->pc = 0x22DA9Cu;
label_22da9c:
    // 0x22da9c: 0x14e00003  bnez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x22DA9Cu;
    {
        const bool branch_taken_0x22da9c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x22DAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DA9Cu;
        // 0x22daa0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22da9c) {
            ctx->pc = 0x22DAACu;
            goto label_22daac;
        }
    }
    ctx->pc = 0x22DAA4u;
    // 0x22daa4: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x22DAA4u;
    {
        const bool branch_taken_0x22daa4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DAA4u;
        // 0x22daa8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22daa4) {
            ctx->pc = 0x22DAB8u;
            goto label_22dab8;
        }
    }
    ctx->pc = 0x22DAACu;
label_22daac:
    // 0x22daac: 0xc08b39e  jal         func_22CE78
    ctx->pc = 0x22DAACu;
    SET_GPR_U32(ctx, 31, 0x22DAB4u);
    ctx->pc = 0x22DAB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DAACu;
    // 0x22dab0: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CE78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CE78u, 0x22DAACu, 0x22DAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DAB4u;
label_22dab4:
    // 0x22dab4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22dab4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22dab8:
    // 0x22dab8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x22dab8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22dabc: 0x3e00008  jr          $ra
    ctx->pc = 0x22DABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22DAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DABCu;
        // 0x22dac0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22DABCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22DAC4u;
    // 0x22dac4: 0x0  nop
    ctx->pc = 0x22dac4u;
    // NOP
    ctx->pc = 0x22dac8u;
}
