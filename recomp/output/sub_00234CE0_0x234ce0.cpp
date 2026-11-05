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

// Function: sub_00234CE0
// Address: 0x234ce0 - 0x235030
void sub_00234CE0_0x234ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00234CE0_0x234ce0");
#endif

    switch (ctx->pc) {
        case 0x234e80u: goto label_234e80;
        case 0x234f6cu: goto label_234f6c;
        case 0x234f8cu: goto label_234f8c;
        case 0x234ffcu: goto label_234ffc;
        case 0x23501cu: goto label_23501c;
        default: break;
    }

    ctx->pc = 0x234ce0u;

    // 0x234ce0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x234ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x234ce4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x234ce4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x234ce8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x234ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x234cec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x234cecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234cf0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x234cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x234cf4: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x234cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x234cf8: 0x8c44bd50  lw          $a0, -0x42B0($v0)
    ctx->pc = 0x234cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3FBD50u));
    // 0x234cfc: 0x8c8211d8  lw          $v0, 0x11D8($a0)
    ctx->pc = 0x234cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4568)));
    // 0x234d00: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x234D00u;
    {
        const bool branch_taken_0x234d00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x234D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234D00u;
        // 0x234d04: 0x247045c0  addiu       $s0, $v1, 0x45C0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 17856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234d00) {
            ctx->pc = 0x234DBCu;
            goto label_234dbc;
        }
    }
    ctx->pc = 0x234D08u;
    // 0x234d08: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x234d08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x234d0c: 0x8e0300b0  lw          $v1, 0xB0($s0)
    ctx->pc = 0x234d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x234d10: 0x8c42a9d4  lw          $v0, -0x562C($v0)
    ctx->pc = 0x234d10u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FA9D4u));
    // 0x234d14: 0x10620027  beq         $v1, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x234D14u;
    {
        const bool branch_taken_0x234d14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x234D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234D14u;
        // 0x234d18: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234d14) {
            ctx->pc = 0x234DB4u;
            goto label_234db4;
        }
    }
    ctx->pc = 0x234D1Cu;
    // 0x234d1c: 0x8e03006c  lw          $v1, 0x6C($s0)
    ctx->pc = 0x234d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x234d20: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x234D20u;
    {
        const bool branch_taken_0x234d20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x234D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234D20u;
        // 0x234d24: 0xae0200b0  sw          $v0, 0xB0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234d20) {
            ctx->pc = 0x234D44u;
            goto label_234d44;
        }
    }
    ctx->pc = 0x234D28u;
    // 0x234d28: 0xc46100d0  lwc1        $f1, 0xD0($v1)
    ctx->pc = 0x234d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x234d2c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x234d2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x234d30: 0x0  nop
    ctx->pc = 0x234d30u;
    // NOP
    // 0x234d34: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x234d34u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x234d38: 0x0  nop
    ctx->pc = 0x234d38u;
    // NOP
    // 0x234d3c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x234D3Cu;
    {
        const bool branch_taken_0x234d3c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x234d3c) {
            ctx->pc = 0x234D40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234D3Cu;
            // 0x234d40: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x234D44u;
            goto label_234d44;
        }
    }
    ctx->pc = 0x234D44u;
label_234d44:
    // 0x234d44: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x234D44u;
    {
        const bool branch_taken_0x234d44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x234d44) {
            ctx->pc = 0x234D48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234D44u;
            // 0x234d48: 0x8e0200b4  lw          $v0, 0xB4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x234D54u;
            goto label_234d54;
        }
    }
    ctx->pc = 0x234D4Cu;
    // 0x234d4c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x234D4Cu;
    {
        const bool branch_taken_0x234d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234D4Cu;
        // 0x234d50: 0xae0000b4  sw          $zero, 0xB4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234d4c) {
            ctx->pc = 0x234DA0u;
            goto label_234da0;
        }
    }
    ctx->pc = 0x234D54u;
label_234d54:
    // 0x234d54: 0x54400032  bnel        $v0, $zero, . + 4 + (0x32 << 2)
    ctx->pc = 0x234D54u;
    {
        const bool branch_taken_0x234d54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x234d54) {
            ctx->pc = 0x234D58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234D54u;
            // 0x234d58: 0xae0000b4  sw          $zero, 0xB4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x234E20u;
            goto label_234e20;
        }
    }
    ctx->pc = 0x234D5Cu;
    // 0x234d5c: 0x8e06008c  lw          $a2, 0x8C($s0)
    ctx->pc = 0x234d5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x234d60: 0x10c00014  beqz        $a2, . + 4 + (0x14 << 2)
    ctx->pc = 0x234D60u;
    {
        const bool branch_taken_0x234d60 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x234D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234D60u;
        // 0x234d64: 0x8ca4bd50  lw          $a0, -0x42B0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294950224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234d60) {
            ctx->pc = 0x234DB4u;
            goto label_234db4;
        }
    }
    ctx->pc = 0x234D68u;
    // 0x234d68: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x234d68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234d6c: 0x8e05006c  lw          $a1, 0x6C($s0)
    ctx->pc = 0x234d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x234d70: 0x8c82121c  lw          $v0, 0x121C($a0)
    ctx->pc = 0x234d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4636)));
    // 0x234d74: 0x8c8311c0  lw          $v1, 0x11C0($a0)
    ctx->pc = 0x234d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4544)));
    // 0x234d78: 0x461026  xor         $v0, $v0, $a2
    ctx->pc = 0x234d78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 6));
    // 0x234d7c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x234d7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x234d80: 0x14c50005  bne         $a2, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x234D80u;
    {
        const bool branch_taken_0x234d80 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        ctx->pc = 0x234D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234D80u;
        // 0x234d84: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x234d80) {
            ctx->pc = 0x234D98u;
            goto label_234d98;
        }
    }
    ctx->pc = 0x234D88u;
    // 0x234d88: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x234D88u;
    {
        const bool branch_taken_0x234d88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x234d88) {
            ctx->pc = 0x234D8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234D88u;
            // 0x234d8c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x234D98u;
            goto label_234d98;
        }
    }
    ctx->pc = 0x234D90u;
    // 0x234d90: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x234D90u;
    {
        const bool branch_taken_0x234d90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x234d90) {
            ctx->pc = 0x234D94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234D90u;
            // 0x234d94: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x234D98u;
            goto label_234d98;
        }
    }
    ctx->pc = 0x234D98u;
label_234d98:
    // 0x234d98: 0x50e00021  beql        $a3, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x234D98u;
    {
        const bool branch_taken_0x234d98 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x234d98) {
            ctx->pc = 0x234D9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234D98u;
            // 0x234d9c: 0xae0000b4  sw          $zero, 0xB4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x234E20u;
            goto label_234e20;
        }
    }
    ctx->pc = 0x234DA0u;
label_234da0:
    // 0x234da0: 0xae00006c  sw          $zero, 0x6C($s0)
    ctx->pc = 0x234da0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 0));
    // 0x234da4: 0xa2000078  sb          $zero, 0x78($s0)
    ctx->pc = 0x234da4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 120), (uint8_t)GPR_U32(ctx, 0));
    // 0x234da8: 0xa2000088  sb          $zero, 0x88($s0)
    ctx->pc = 0x234da8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 136), (uint8_t)GPR_U32(ctx, 0));
    // 0x234dac: 0xa2000089  sb          $zero, 0x89($s0)
    ctx->pc = 0x234dacu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 137), (uint8_t)GPR_U32(ctx, 0));
    // 0x234db0: 0xae0000ac  sw          $zero, 0xAC($s0)
    ctx->pc = 0x234db0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 0));
label_234db4:
    // 0x234db4: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x234DB4u;
    {
        const bool branch_taken_0x234db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234DB4u;
        // 0x234db8: 0xae0000b4  sw          $zero, 0xB4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234db4) {
            ctx->pc = 0x234E20u;
            goto label_234e20;
        }
    }
    ctx->pc = 0x234DBCu;
label_234dbc:
    // 0x234dbc: 0x8c82121c  lw          $v0, 0x121C($a0)
    ctx->pc = 0x234dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4636)));
    // 0x234dc0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x234dc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234dc4: 0x8e05008c  lw          $a1, 0x8C($s0)
    ctx->pc = 0x234dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x234dc8: 0x8c8311c0  lw          $v1, 0x11C0($a0)
    ctx->pc = 0x234dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4544)));
    // 0x234dcc: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x234dccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x234dd0: 0x8e04006c  lw          $a0, 0x6C($s0)
    ctx->pc = 0x234dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x234dd4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x234dd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x234dd8: 0x14a40005  bne         $a1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x234DD8u;
    {
        const bool branch_taken_0x234dd8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x234DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234DD8u;
        // 0x234ddc: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x234dd8) {
            ctx->pc = 0x234DF0u;
            goto label_234df0;
        }
    }
    ctx->pc = 0x234DE0u;
    // 0x234de0: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x234DE0u;
    {
        const bool branch_taken_0x234de0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x234de0) {
            ctx->pc = 0x234DE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234DE0u;
            // 0x234de4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x234DF0u;
            goto label_234df0;
        }
    }
    ctx->pc = 0x234DE8u;
    // 0x234de8: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x234DE8u;
    {
        const bool branch_taken_0x234de8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x234de8) {
            ctx->pc = 0x234DECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234DE8u;
            // 0x234dec: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x234DF0u;
            goto label_234df0;
        }
    }
    ctx->pc = 0x234DF0u;
label_234df0:
    // 0x234df0: 0x50c00008  beql        $a2, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x234DF0u;
    {
        const bool branch_taken_0x234df0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x234df0) {
            ctx->pc = 0x234DF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234DF0u;
            // 0x234df4: 0xae0000b4  sw          $zero, 0xB4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x234E14u;
            goto label_234e14;
        }
    }
    ctx->pc = 0x234DF8u;
    // 0x234df8: 0xae00006c  sw          $zero, 0x6C($s0)
    ctx->pc = 0x234df8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 0));
    // 0x234dfc: 0xa2000078  sb          $zero, 0x78($s0)
    ctx->pc = 0x234dfcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 120), (uint8_t)GPR_U32(ctx, 0));
    // 0x234e00: 0xa2000088  sb          $zero, 0x88($s0)
    ctx->pc = 0x234e00u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 136), (uint8_t)GPR_U32(ctx, 0));
    // 0x234e04: 0xa2000089  sb          $zero, 0x89($s0)
    ctx->pc = 0x234e04u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 137), (uint8_t)GPR_U32(ctx, 0));
    // 0x234e08: 0xae0000ac  sw          $zero, 0xAC($s0)
    ctx->pc = 0x234e08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 0));
    // 0x234e0c: 0xae00008c  sw          $zero, 0x8C($s0)
    ctx->pc = 0x234e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 0));
    // 0x234e10: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x234e10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
label_234e14:
    // 0x234e14: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x234e14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
    // 0x234e18: 0xae0000ac  sw          $zero, 0xAC($s0)
    ctx->pc = 0x234e18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 0));
    // 0x234e1c: 0xae00008c  sw          $zero, 0x8C($s0)
    ctx->pc = 0x234e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 0));
label_234e20:
    // 0x234e20: 0x8e04006c  lw          $a0, 0x6C($s0)
    ctx->pc = 0x234e20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x234e24: 0x1080007d  beqz        $a0, . + 4 + (0x7D << 2)
    ctx->pc = 0x234E24u;
    {
        const bool branch_taken_0x234e24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x234E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234E24u;
        // 0x234e28: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234e24) {
            ctx->pc = 0x23501Cu;
            goto label_23501c;
        }
    }
    ctx->pc = 0x234E2Cu;
    // 0x234e2c: 0x90435aec  lbu         $v1, 0x5AEC($v0)
    ctx->pc = 0x234e2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 23276)));
    // 0x234e30: 0x5060007b  beql        $v1, $zero, . + 4 + (0x7B << 2)
    ctx->pc = 0x234E30u;
    {
        const bool branch_taken_0x234e30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x234e30) {
            ctx->pc = 0x234E34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234E30u;
            // 0x234e34: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x235020u;
            goto label_235020;
        }
    }
    ctx->pc = 0x234E38u;
    // 0x234e38: 0x8c8200c0  lw          $v0, 0xC0($a0)
    ctx->pc = 0x234e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 192)));
    // 0x234e3c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x234e3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x234e40: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x234E40u;
    {
        const bool branch_taken_0x234e40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x234E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234E40u;
        // 0x234e44: 0x3c030067  lui         $v1, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234e40) {
            ctx->pc = 0x234E50u;
            goto label_234e50;
        }
    }
    ctx->pc = 0x234E48u;
    // 0x234e48: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x234E48u;
    {
        const bool branch_taken_0x234e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234E48u;
        // 0x234e4c: 0xae00006c  sw          $zero, 0x6C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234e48) {
            ctx->pc = 0x23501Cu;
            goto label_23501c;
        }
    }
    ctx->pc = 0x234E50u;
label_234e50:
    // 0x234e50: 0x8c62cb34  lw          $v0, -0x34CC($v1)
    ctx->pc = 0x234e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294953780)));
    // 0x234e54: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x234E54u;
    {
        const bool branch_taken_0x234e54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x234E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234E54u;
        // 0x234e58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234e54) {
            ctx->pc = 0x234E78u;
            goto label_234e78;
        }
    }
    ctx->pc = 0x234E5Cu;
    // 0x234e5c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x234e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x234e60: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x234e60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x234e64: 0x8c44a450  lw          $a0, -0x5BB0($v0)
    ctx->pc = 0x234e64u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3FA450u));
    // 0x234e68: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x234E68u;
    {
        const bool branch_taken_0x234e68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x234E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234E68u;
        // 0x234e6c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234e68) {
            ctx->pc = 0x234E78u;
            goto label_234e78;
        }
    }
    ctx->pc = 0x234E70u;
    // 0x234e70: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x234E70u;
    {
        const bool branch_taken_0x234e70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x234e70) {
            ctx->pc = 0x234E88u;
            goto label_234e88;
        }
    }
    ctx->pc = 0x234E78u;
label_234e78:
    // 0x234e78: 0xc0a0340  jal         func_280D00
    ctx->pc = 0x234E78u;
    SET_GPR_U32(ctx, 31, 0x234E80u);
    ctx->pc = 0x280D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280D00u, 0x234E78u, 0x234E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234E80u;
label_234e80:
    // 0x234e80: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x234e80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x234e84: 0x2c450001  sltiu       $a1, $v0, 0x1
    ctx->pc = 0x234e84u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_234e88:
    // 0x234e88: 0x54a00065  bnel        $a1, $zero, . + 4 + (0x65 << 2)
    ctx->pc = 0x234E88u;
    {
        const bool branch_taken_0x234e88 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x234e88) {
            ctx->pc = 0x234E8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234E88u;
            // 0x234e8c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x235020u;
            goto label_235020;
        }
    }
    ctx->pc = 0x234E90u;
    // 0x234e90: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x234e90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x234e94: 0x8c62bdc0  lw          $v0, -0x4240($v1)
    ctx->pc = 0x234e94u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FBDC0u));
    // 0x234e98: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x234E98u;
    {
        const bool branch_taken_0x234e98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x234E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234E98u;
        // 0x234e9c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234e98) {
            ctx->pc = 0x234EC0u;
            goto label_234ec0;
        }
    }
    ctx->pc = 0x234EA0u;
    // 0x234ea0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x234ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x234ea4: 0x9043bdad  lbu         $v1, -0x4253($v0)
    ctx->pc = 0x234ea4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3FBDADu));
    // 0x234ea8: 0x54600006  bnel        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x234EA8u;
    {
        const bool branch_taken_0x234ea8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x234ea8) {
            ctx->pc = 0x234EACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234EA8u;
            // 0x234eac: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x234EC4u;
            goto label_234ec4;
        }
    }
    ctx->pc = 0x234EB0u;
    // 0x234eb0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x234eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x234eb4: 0x9043bdac  lbu         $v1, -0x4254($v0)
    ctx->pc = 0x234eb4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3FBDACu));
    // 0x234eb8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x234EB8u;
    {
        const bool branch_taken_0x234eb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x234EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234EB8u;
        // 0x234ebc: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234eb8) {
            ctx->pc = 0x234EC8u;
            goto label_234ec8;
        }
    }
    ctx->pc = 0x234EC0u;
label_234ec0:
    // 0x234ec0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x234ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_234ec4:
    // 0x234ec4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x234ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_234ec8:
    // 0x234ec8: 0x8c422b40  lw          $v0, 0x2B40($v0)
    ctx->pc = 0x234ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11072)));
    // 0x234ecc: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x234ECCu;
    {
        const bool branch_taken_0x234ecc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x234ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234ECCu;
        // 0x234ed0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234ecc) {
            ctx->pc = 0x234EE8u;
            goto label_234ee8;
        }
    }
    ctx->pc = 0x234ED4u;
    // 0x234ed4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x234ed4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x234ed8: 0x0  nop
    ctx->pc = 0x234ed8u;
    // NOP
    // 0x234edc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x234edcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x234ee0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x234EE0u;
    {
        const bool branch_taken_0x234ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x234ee0) {
            ctx->pc = 0x234F00u;
            goto label_234f00;
        }
    }
    ctx->pc = 0x234EE8u;
label_234ee8:
    // 0x234ee8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x234ee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x234eec: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x234eecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x234ef0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x234ef0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x234ef4: 0x0  nop
    ctx->pc = 0x234ef4u;
    // NOP
    // 0x234ef8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x234ef8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x234efc: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x234efcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_234f00:
    // 0x234f00: 0x3c013cf5  lui         $at, 0x3CF5
    ctx->pc = 0x234f00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15605 << 16));
    // 0x234f04: 0x3421c330  ori         $at, $at, 0xC330
    ctx->pc = 0x234f04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49968);
    // 0x234f08: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x234f08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x234f0c: 0x92020078  lbu         $v0, 0x78($s0)
    ctx->pc = 0x234f0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x234f10: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x234F10u;
    {
        const bool branch_taken_0x234f10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x234F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234F10u;
        // 0x234f14: 0x46000882  mul.s       $f2, $f1, $f0 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x234f10) {
            ctx->pc = 0x234F94u;
            goto label_234f94;
        }
    }
    ctx->pc = 0x234F18u;
    // 0x234f18: 0xc6000070  lwc1        $f0, 0x70($s0)
    ctx->pc = 0x234f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x234f1c: 0xc6010064  lwc1        $f1, 0x64($s0)
    ctx->pc = 0x234f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x234f20: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x234f20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x234f24: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x234f24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x234f28: 0x0  nop
    ctx->pc = 0x234f28u;
    // NOP
    // 0x234f2c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x234F2Cu;
    {
        const bool branch_taken_0x234f2c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x234F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234F2Cu;
        // 0x234f30: 0xe6000070  swc1        $f0, 0x70($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x234f2c) {
            ctx->pc = 0x234F38u;
            goto label_234f38;
        }
    }
    ctx->pc = 0x234F34u;
    // 0x234f34: 0xe6010070  swc1        $f1, 0x70($s0)
    ctx->pc = 0x234f34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
label_234f38:
    // 0x234f38: 0xc6010074  lwc1        $f1, 0x74($s0)
    ctx->pc = 0x234f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x234f3c: 0xc6000068  lwc1        $f0, 0x68($s0)
    ctx->pc = 0x234f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x234f40: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x234f40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x234f44: 0x0  nop
    ctx->pc = 0x234f44u;
    // NOP
    // 0x234f48: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x234F48u;
    {
        const bool branch_taken_0x234f48 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x234f48) {
            ctx->pc = 0x234F74u;
            goto label_234f74;
        }
    }
    ctx->pc = 0x234F50u;
    // 0x234f50: 0x46020800  add.s       $f0, $f1, $f2
    ctx->pc = 0x234f50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x234f54: 0x1480000d  bnez        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x234F54u;
    {
        const bool branch_taken_0x234f54 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x234F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234F54u;
        // 0x234f58: 0xe6000074  swc1        $f0, 0x74($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x234f54) {
            ctx->pc = 0x234F8Cu;
            goto label_234f8c;
        }
    }
    ctx->pc = 0x234F5Cu;
    // 0x234f5c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x234f5cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x234f60: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x234f60u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x234f64: 0xc08d41c  jal         func_235070
    ctx->pc = 0x234F64u;
    SET_GPR_U32(ctx, 31, 0x234F6Cu);
    ctx->pc = 0x234F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234F64u;
    // 0x234f68: 0x8e04006c  lw          $a0, 0x6C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235070u, 0x234F64u, 0x234F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234F6Cu;
label_234f6c:
    // 0x234f6c: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x234F6Cu;
    {
        const bool branch_taken_0x234f6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234F6Cu;
        // 0x234f70: 0xa2000078  sb          $zero, 0x78($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 120), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234f6c) {
            ctx->pc = 0x23501Cu;
            goto label_23501c;
        }
    }
    ctx->pc = 0x234F74u;
label_234f74:
    // 0x234f74: 0x54800029  bnel        $a0, $zero, . + 4 + (0x29 << 2)
    ctx->pc = 0x234F74u;
    {
        const bool branch_taken_0x234f74 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x234f74) {
            ctx->pc = 0x234F78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234F74u;
            // 0x234f78: 0xa2000078  sb          $zero, 0x78($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 120), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23501Cu;
            goto label_23501c;
        }
    }
    ctx->pc = 0x234F7Cu;
    // 0x234f7c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x234f7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x234f80: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x234f80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x234f84: 0xc08d42c  jal         func_2350B0
    ctx->pc = 0x234F84u;
    SET_GPR_U32(ctx, 31, 0x234F8Cu);
    ctx->pc = 0x234F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234F84u;
    // 0x234f88: 0x8e04006c  lw          $a0, 0x6C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2350B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2350B0u, 0x234F84u, 0x234F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234F8Cu;
label_234f8c:
    // 0x234f8c: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x234F8Cu;
    {
        const bool branch_taken_0x234f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234F8Cu;
        // 0x234f90: 0xa2000078  sb          $zero, 0x78($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 120), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234f8c) {
            ctx->pc = 0x23501Cu;
            goto label_23501c;
        }
    }
    ctx->pc = 0x234F94u;
label_234f94:
    // 0x234f94: 0x8e0200ac  lw          $v0, 0xAC($s0)
    ctx->pc = 0x234f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
    // 0x234f98: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x234F98u;
    {
        const bool branch_taken_0x234f98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x234f98) {
            ctx->pc = 0x235004u;
            goto label_235004;
        }
    }
    ctx->pc = 0x234FA0u;
    // 0x234fa0: 0xc6000074  lwc1        $f0, 0x74($s0)
    ctx->pc = 0x234fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x234fa4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x234fa4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x234fa8: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x234fa8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x234fac: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x234facu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x234fb0: 0x0  nop
    ctx->pc = 0x234fb0u;
    // NOP
    // 0x234fb4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x234FB4u;
    {
        const bool branch_taken_0x234fb4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x234FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234FB4u;
        // 0x234fb8: 0xe6000074  swc1        $f0, 0x74($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x234fb4) {
            ctx->pc = 0x234FC0u;
            goto label_234fc0;
        }
    }
    ctx->pc = 0x234FBCu;
    // 0x234fbc: 0xe6010074  swc1        $f1, 0x74($s0)
    ctx->pc = 0x234fbcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
label_234fc0:
    // 0x234fc0: 0xc6000070  lwc1        $f0, 0x70($s0)
    ctx->pc = 0x234fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x234fc4: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x234fc4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x234fc8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x234fc8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x234fcc: 0x0  nop
    ctx->pc = 0x234fccu;
    // NOP
    // 0x234fd0: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x234FD0u;
    {
        const bool branch_taken_0x234fd0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x234FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234FD0u;
        // 0x234fd4: 0xe6000070  swc1        $f0, 0x70($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x234fd0) {
            ctx->pc = 0x234FE4u;
            goto label_234fe4;
        }
    }
    ctx->pc = 0x234FD8u;
    // 0x234fd8: 0xe6010070  swc1        $f1, 0x70($s0)
    ctx->pc = 0x234fd8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x234fdc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x234FDCu;
    {
        const bool branch_taken_0x234fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234FDCu;
        // 0x234fe0: 0xa2000088  sb          $zero, 0x88($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 136), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234fdc) {
            ctx->pc = 0x23501Cu;
            goto label_23501c;
        }
    }
    ctx->pc = 0x234FE4u;
label_234fe4:
    // 0x234fe4: 0x5480000e  bnel        $a0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x234FE4u;
    {
        const bool branch_taken_0x234fe4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x234fe4) {
            ctx->pc = 0x234FE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234FE4u;
            // 0x234fe8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x235020u;
            goto label_235020;
        }
    }
    ctx->pc = 0x234FECu;
    // 0x234fec: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x234fecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x234ff0: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x234ff0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x234ff4: 0xc08d40c  jal         func_235030
    ctx->pc = 0x234FF4u;
    SET_GPR_U32(ctx, 31, 0x234FFCu);
    ctx->pc = 0x234FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234FF4u;
    // 0x234ff8: 0x8e04006c  lw          $a0, 0x6C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235030u, 0x234FF4u, 0x234FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234FFCu;
label_234ffc:
    // 0x234ffc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x234FFCu;
    {
        const bool branch_taken_0x234ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234FFCu;
        // 0x235000: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234ffc) {
            ctx->pc = 0x235020u;
            goto label_235020;
        }
    }
    ctx->pc = 0x235004u;
label_235004:
    // 0x235004: 0x54800006  bnel        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x235004u;
    {
        const bool branch_taken_0x235004 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x235004) {
            ctx->pc = 0x235008u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235004u;
            // 0x235008: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x235020u;
            goto label_235020;
        }
    }
    ctx->pc = 0x23500Cu;
    // 0x23500c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x23500cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x235010: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x235010u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x235014: 0xc08d42c  jal         func_2350B0
    ctx->pc = 0x235014u;
    SET_GPR_U32(ctx, 31, 0x23501Cu);
    ctx->pc = 0x235018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235014u;
    // 0x235018: 0x8e04006c  lw          $a0, 0x6C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2350B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2350B0u, 0x235014u, 0x23501Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23501Cu;
label_23501c:
    // 0x23501c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23501cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_235020:
    // 0x235020: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x235020u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x235024: 0x3e00008  jr          $ra
    ctx->pc = 0x235024u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x235028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235024u;
        // 0x235028: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235024u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23502Cu;
    // 0x23502c: 0x0  nop
    ctx->pc = 0x23502cu;
    // NOP
    ctx->pc = 0x235030u;
}
