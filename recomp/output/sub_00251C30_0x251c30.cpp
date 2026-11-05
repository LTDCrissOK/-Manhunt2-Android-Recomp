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

// Function: sub_00251C30
// Address: 0x251c30 - 0x251d98
void sub_00251C30_0x251c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00251C30_0x251c30");
#endif

    switch (ctx->pc) {
        case 0x251c4cu: goto label_251c4c;
        case 0x251c70u: goto label_251c70;
        case 0x251c84u: goto label_251c84;
        default: break;
    }

    ctx->pc = 0x251c30u;

    // 0x251c30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x251c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x251c34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x251c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x251c38: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x251c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x251c3c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x251c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x251c40: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x251c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x251c44: 0xc08dacc  jal         func_236B30
    ctx->pc = 0x251C44u;
    SET_GPR_U32(ctx, 31, 0x251C4Cu);
    ctx->pc = 0x251C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251C44u;
    // 0x251c48: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236B30u, 0x251C44u, 0x251C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251C4Cu;
label_251c4c:
    // 0x251c4c: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x251C4Cu;
    {
        const bool branch_taken_0x251c4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x251C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251C4Cu;
        // 0x251c50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251c4c) {
            ctx->pc = 0x251D7Cu;
            goto label_251d7c;
        }
    }
    ctx->pc = 0x251C54u;
    // 0x251c54: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x251c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x251c58: 0x3042020f  andi        $v0, $v0, 0x20F
    ctx->pc = 0x251c58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)527);
    // 0x251c5c: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x251c5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x251c60: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x251C60u;
    {
        const bool branch_taken_0x251c60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x251C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251C60u;
        // 0x251c64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251c60) {
            ctx->pc = 0x251D7Cu;
            goto label_251d7c;
        }
    }
    ctx->pc = 0x251C68u;
    // 0x251c68: 0xc06e0fa  jal         func_1B83E8
    ctx->pc = 0x251C68u;
    SET_GPR_U32(ctx, 31, 0x251C70u);
    ctx->pc = 0x251C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251C68u;
    // 0x251c6c: 0x8e040ff0  lw          $a0, 0xFF0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4080)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B83E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B83E8u, 0x251C68u, 0x251C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251C70u;
label_251c70:
    // 0x251c70: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x251C70u;
    {
        const bool branch_taken_0x251c70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x251C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251C70u;
        // 0x251c74: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251c70) {
            ctx->pc = 0x251D78u;
            goto label_251d78;
        }
    }
    ctx->pc = 0x251C78u;
    // 0x251c78: 0x8e110ff0  lw          $s1, 0xFF0($s0)
    ctx->pc = 0x251c78u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4080)));
    // 0x251c7c: 0xc06e0f0  jal         func_1B83C0
    ctx->pc = 0x251C7Cu;
    SET_GPR_U32(ctx, 31, 0x251C84u);
    ctx->pc = 0x251C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251C7Cu;
    // 0x251c80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B83C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B83C0u, 0x251C7Cu, 0x251C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251C84u;
label_251c84:
    // 0x251c84: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x251C84u;
    {
        const bool branch_taken_0x251c84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x251c84) {
            ctx->pc = 0x251C94u;
            goto label_251c94;
        }
    }
    ctx->pc = 0x251C8Cu;
    // 0x251c8c: 0x8e220220  lw          $v0, 0x220($s1)
    ctx->pc = 0x251c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 544)));
    // 0x251c90: 0x2902b  sltu        $s2, $zero, $v0
    ctx->pc = 0x251c90u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_251c94:
    // 0x251c94: 0x16400039  bnez        $s2, . + 4 + (0x39 << 2)
    ctx->pc = 0x251C94u;
    {
        const bool branch_taken_0x251c94 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x251C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251C94u;
        // 0x251c98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251c94) {
            ctx->pc = 0x251D7Cu;
            goto label_251d7c;
        }
    }
    ctx->pc = 0x251C9Cu;
    // 0x251c9c: 0x8e020fec  lw          $v0, 0xFEC($s0)
    ctx->pc = 0x251c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4076)));
    // 0x251ca0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x251ca0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x251ca4: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x251ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x251ca8: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x251ca8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x251cac: 0x0  nop
    ctx->pc = 0x251cacu;
    // NOP
    // 0x251cb0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x251CB0u;
    {
        const bool branch_taken_0x251cb0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x251CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251CB0u;
        // 0x251cb4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251cb0) {
            ctx->pc = 0x251CBCu;
            goto label_251cbc;
        }
    }
    ctx->pc = 0x251CB8u;
    // 0x251cb8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x251cb8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_251cbc:
    // 0x251cbc: 0x5060000f  beql        $v1, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x251CBCu;
    {
        const bool branch_taken_0x251cbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x251cbc) {
            ctx->pc = 0x251CC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x251CBCu;
            // 0x251cc0: 0x8e030334  lw          $v1, 0x334($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x251CFCu;
            goto label_251cfc;
        }
    }
    ctx->pc = 0x251CC4u;
    // 0x251cc4: 0xc44000a0  lwc1        $f0, 0xA0($v0)
    ctx->pc = 0x251cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x251cc8: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x251cc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x251ccc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x251cccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x251cd0: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x251cd0u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x251cd4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x251cd4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x251cd8: 0x0  nop
    ctx->pc = 0x251cd8u;
    // NOP
    // 0x251cdc: 0x45010027  bc1t        . + 4 + (0x27 << 2)
    ctx->pc = 0x251CDCu;
    {
        const bool branch_taken_0x251cdc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x251CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251CDCu;
        // 0x251ce0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251cdc) {
            ctx->pc = 0x251D7Cu;
            goto label_251d7c;
        }
    }
    ctx->pc = 0x251CE4u;
    // 0x251ce4: 0x8e030ff8  lw          $v1, 0xFF8($s0)
    ctx->pc = 0x251ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4088)));
    // 0x251ce8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x251ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x251cec: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x251cecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x251cf0: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x251CF0u;
    {
        const bool branch_taken_0x251cf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x251CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251CF0u;
        // 0x251cf4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251cf0) {
            ctx->pc = 0x251D7Cu;
            goto label_251d7c;
        }
    }
    ctx->pc = 0x251CF8u;
    // 0x251cf8: 0x8e030334  lw          $v1, 0x334($s0)
    ctx->pc = 0x251cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_251cfc:
    // 0x251cfc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x251cfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251d00: 0x8c640150  lw          $a0, 0x150($v1)
    ctx->pc = 0x251d00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
    // 0x251d04: 0x2c820002  sltiu       $v0, $a0, 0x2
    ctx->pc = 0x251d04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x251d08: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x251D08u;
    {
        const bool branch_taken_0x251d08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x251D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251D08u;
        // 0x251d0c: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251d08) {
            ctx->pc = 0x251D3Cu;
            goto label_251d3c;
        }
    }
    ctx->pc = 0x251D10u;
    // 0x251d10: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x251d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x251d14: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x251D14u;
    {
        const bool branch_taken_0x251d14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x251D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251D14u;
        // 0x251d18: 0x2402001b  addiu       $v0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251d14) {
            ctx->pc = 0x251D3Cu;
            goto label_251d3c;
        }
    }
    ctx->pc = 0x251D1Cu;
    // 0x251d1c: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x251D1Cu;
    {
        const bool branch_taken_0x251d1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x251D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251D1Cu;
        // 0x251d20: 0x24020046  addiu       $v0, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251d1c) {
            ctx->pc = 0x251D3Cu;
            goto label_251d3c;
        }
    }
    ctx->pc = 0x251D24u;
    // 0x251d24: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x251D24u;
    {
        const bool branch_taken_0x251d24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x251D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251D24u;
        // 0x251d28: 0x24020032  addiu       $v0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251d24) {
            ctx->pc = 0x251D3Cu;
            goto label_251d3c;
        }
    }
    ctx->pc = 0x251D2Cu;
    // 0x251d2c: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x251D2Cu;
    {
        const bool branch_taken_0x251d2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x251D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251D2Cu;
        // 0x251d30: 0x24020033  addiu       $v0, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251d2c) {
            ctx->pc = 0x251D3Cu;
            goto label_251d3c;
        }
    }
    ctx->pc = 0x251D34u;
    // 0x251d34: 0x14820002  bne         $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x251D34u;
    {
        const bool branch_taken_0x251d34 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x251d34) {
            ctx->pc = 0x251D40u;
            goto label_251d40;
        }
    }
    ctx->pc = 0x251D3Cu;
label_251d3c:
    // 0x251d3c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x251d3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_251d40:
    // 0x251d40: 0x14c0000e  bnez        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x251D40u;
    {
        const bool branch_taken_0x251d40 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x251D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251D40u;
        // 0x251d44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251d40) {
            ctx->pc = 0x251D7Cu;
            goto label_251d7c;
        }
    }
    ctx->pc = 0x251D48u;
    // 0x251d48: 0x8ca20150  lw          $v0, 0x150($a1)
    ctx->pc = 0x251d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 336)));
    // 0x251d4c: 0x2442fff7  addiu       $v0, $v0, -0x9
    ctx->pc = 0x251d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967287));
    // 0x251d50: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x251d50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x251d54: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x251D54u;
    {
        const bool branch_taken_0x251d54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x251D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251D54u;
        // 0x251d58: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251d54) {
            ctx->pc = 0x251D7Cu;
            goto label_251d7c;
        }
    }
    ctx->pc = 0x251D5Cu;
    // 0x251d5c: 0x8ca3014c  lw          $v1, 0x14C($a1)
    ctx->pc = 0x251d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 332)));
    // 0x251d60: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x251D60u;
    {
        const bool branch_taken_0x251d60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x251D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251D60u;
        // 0x251d64: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251d60) {
            ctx->pc = 0x251D80u;
            goto label_251d80;
        }
    }
    ctx->pc = 0x251D68u;
    // 0x251d68: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x251D68u;
    {
        const bool branch_taken_0x251d68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x251D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251D68u;
        // 0x251d6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251d68) {
            ctx->pc = 0x251D80u;
            goto label_251d80;
        }
    }
    ctx->pc = 0x251D70u;
    // 0x251d70: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x251D70u;
    {
        const bool branch_taken_0x251d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251D70u;
        // 0x251d74: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251d70) {
            ctx->pc = 0x251D80u;
            goto label_251d80;
        }
    }
    ctx->pc = 0x251D78u;
label_251d78:
    // 0x251d78: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x251d78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_251d7c:
    // 0x251d7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x251d7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_251d80:
    // 0x251d80: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x251d80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x251d84: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x251d84u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x251d88: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x251d88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x251d8c: 0x3e00008  jr          $ra
    ctx->pc = 0x251D8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x251D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251D8Cu;
        // 0x251d90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x251D8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x251D94u;
    // 0x251d94: 0x0  nop
    ctx->pc = 0x251d94u;
    // NOP
    ctx->pc = 0x251d98u;
}
