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

// Function: sub_0024CD78
// Address: 0x24cd78 - 0x24cff0
void sub_0024CD78_0x24cd78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024CD78_0x24cd78");
#endif

    switch (ctx->pc) {
        case 0x24cd78u: goto label_24cd78;
        case 0x24cd7cu: goto label_24cd7c;
        case 0x24cd80u: goto label_24cd80;
        case 0x24cd84u: goto label_24cd84;
        case 0x24cd88u: goto label_24cd88;
        case 0x24cd8cu: goto label_24cd8c;
        case 0x24cd90u: goto label_24cd90;
        case 0x24cd94u: goto label_24cd94;
        case 0x24cd98u: goto label_24cd98;
        case 0x24cd9cu: goto label_24cd9c;
        case 0x24cda0u: goto label_24cda0;
        case 0x24cda4u: goto label_24cda4;
        case 0x24cda8u: goto label_24cda8;
        case 0x24cdacu: goto label_24cdac;
        case 0x24cdb0u: goto label_24cdb0;
        case 0x24cdb4u: goto label_24cdb4;
        case 0x24cdb8u: goto label_24cdb8;
        case 0x24cdbcu: goto label_24cdbc;
        case 0x24cdc0u: goto label_24cdc0;
        case 0x24cdc4u: goto label_24cdc4;
        case 0x24cdc8u: goto label_24cdc8;
        case 0x24cdccu: goto label_24cdcc;
        case 0x24cdd0u: goto label_24cdd0;
        case 0x24cdd4u: goto label_24cdd4;
        case 0x24cdd8u: goto label_24cdd8;
        case 0x24cddcu: goto label_24cddc;
        case 0x24cde0u: goto label_24cde0;
        case 0x24cde4u: goto label_24cde4;
        case 0x24cde8u: goto label_24cde8;
        case 0x24cdecu: goto label_24cdec;
        case 0x24cdf0u: goto label_24cdf0;
        case 0x24cdf4u: goto label_24cdf4;
        case 0x24cdf8u: goto label_24cdf8;
        case 0x24cdfcu: goto label_24cdfc;
        case 0x24ce00u: goto label_24ce00;
        case 0x24ce04u: goto label_24ce04;
        case 0x24ce08u: goto label_24ce08;
        case 0x24ce0cu: goto label_24ce0c;
        case 0x24ce10u: goto label_24ce10;
        case 0x24ce14u: goto label_24ce14;
        case 0x24ce18u: goto label_24ce18;
        case 0x24ce1cu: goto label_24ce1c;
        case 0x24ce20u: goto label_24ce20;
        case 0x24ce24u: goto label_24ce24;
        case 0x24ce28u: goto label_24ce28;
        case 0x24ce2cu: goto label_24ce2c;
        case 0x24ce30u: goto label_24ce30;
        case 0x24ce34u: goto label_24ce34;
        case 0x24ce38u: goto label_24ce38;
        case 0x24ce3cu: goto label_24ce3c;
        case 0x24ce40u: goto label_24ce40;
        case 0x24ce44u: goto label_24ce44;
        case 0x24ce48u: goto label_24ce48;
        case 0x24ce4cu: goto label_24ce4c;
        case 0x24ce50u: goto label_24ce50;
        case 0x24ce54u: goto label_24ce54;
        case 0x24ce58u: goto label_24ce58;
        case 0x24ce5cu: goto label_24ce5c;
        case 0x24ce60u: goto label_24ce60;
        case 0x24ce64u: goto label_24ce64;
        case 0x24ce68u: goto label_24ce68;
        case 0x24ce6cu: goto label_24ce6c;
        case 0x24ce70u: goto label_24ce70;
        case 0x24ce74u: goto label_24ce74;
        case 0x24ce78u: goto label_24ce78;
        case 0x24ce7cu: goto label_24ce7c;
        case 0x24ce80u: goto label_24ce80;
        case 0x24ce84u: goto label_24ce84;
        case 0x24ce88u: goto label_24ce88;
        case 0x24ce8cu: goto label_24ce8c;
        case 0x24ce90u: goto label_24ce90;
        case 0x24ce94u: goto label_24ce94;
        case 0x24ce98u: goto label_24ce98;
        case 0x24ce9cu: goto label_24ce9c;
        case 0x24cea0u: goto label_24cea0;
        case 0x24cea4u: goto label_24cea4;
        case 0x24cea8u: goto label_24cea8;
        case 0x24ceacu: goto label_24ceac;
        case 0x24ceb0u: goto label_24ceb0;
        case 0x24ceb4u: goto label_24ceb4;
        case 0x24ceb8u: goto label_24ceb8;
        case 0x24cebcu: goto label_24cebc;
        case 0x24cec0u: goto label_24cec0;
        case 0x24cec4u: goto label_24cec4;
        case 0x24cec8u: goto label_24cec8;
        case 0x24ceccu: goto label_24cecc;
        case 0x24ced0u: goto label_24ced0;
        case 0x24ced4u: goto label_24ced4;
        case 0x24ced8u: goto label_24ced8;
        case 0x24cedcu: goto label_24cedc;
        case 0x24cee0u: goto label_24cee0;
        case 0x24cee4u: goto label_24cee4;
        case 0x24cee8u: goto label_24cee8;
        case 0x24ceecu: goto label_24ceec;
        case 0x24cef0u: goto label_24cef0;
        case 0x24cef4u: goto label_24cef4;
        case 0x24cef8u: goto label_24cef8;
        case 0x24cefcu: goto label_24cefc;
        case 0x24cf00u: goto label_24cf00;
        case 0x24cf04u: goto label_24cf04;
        case 0x24cf08u: goto label_24cf08;
        case 0x24cf0cu: goto label_24cf0c;
        case 0x24cf10u: goto label_24cf10;
        case 0x24cf14u: goto label_24cf14;
        case 0x24cf18u: goto label_24cf18;
        case 0x24cf1cu: goto label_24cf1c;
        case 0x24cf20u: goto label_24cf20;
        case 0x24cf24u: goto label_24cf24;
        case 0x24cf28u: goto label_24cf28;
        case 0x24cf2cu: goto label_24cf2c;
        case 0x24cf30u: goto label_24cf30;
        case 0x24cf34u: goto label_24cf34;
        case 0x24cf38u: goto label_24cf38;
        case 0x24cf3cu: goto label_24cf3c;
        case 0x24cf40u: goto label_24cf40;
        case 0x24cf44u: goto label_24cf44;
        case 0x24cf48u: goto label_24cf48;
        case 0x24cf4cu: goto label_24cf4c;
        case 0x24cf50u: goto label_24cf50;
        case 0x24cf54u: goto label_24cf54;
        case 0x24cf58u: goto label_24cf58;
        case 0x24cf5cu: goto label_24cf5c;
        case 0x24cf60u: goto label_24cf60;
        case 0x24cf64u: goto label_24cf64;
        case 0x24cf68u: goto label_24cf68;
        case 0x24cf6cu: goto label_24cf6c;
        case 0x24cf70u: goto label_24cf70;
        case 0x24cf74u: goto label_24cf74;
        case 0x24cf78u: goto label_24cf78;
        case 0x24cf7cu: goto label_24cf7c;
        case 0x24cf80u: goto label_24cf80;
        case 0x24cf84u: goto label_24cf84;
        case 0x24cf88u: goto label_24cf88;
        case 0x24cf8cu: goto label_24cf8c;
        case 0x24cf90u: goto label_24cf90;
        case 0x24cf94u: goto label_24cf94;
        case 0x24cf98u: goto label_24cf98;
        case 0x24cf9cu: goto label_24cf9c;
        case 0x24cfa0u: goto label_24cfa0;
        case 0x24cfa4u: goto label_24cfa4;
        case 0x24cfa8u: goto label_24cfa8;
        case 0x24cfacu: goto label_24cfac;
        case 0x24cfb0u: goto label_24cfb0;
        case 0x24cfb4u: goto label_24cfb4;
        case 0x24cfb8u: goto label_24cfb8;
        case 0x24cfbcu: goto label_24cfbc;
        case 0x24cfc0u: goto label_24cfc0;
        case 0x24cfc4u: goto label_24cfc4;
        case 0x24cfc8u: goto label_24cfc8;
        case 0x24cfccu: goto label_24cfcc;
        case 0x24cfd0u: goto label_24cfd0;
        case 0x24cfd4u: goto label_24cfd4;
        case 0x24cfd8u: goto label_24cfd8;
        case 0x24cfdcu: goto label_24cfdc;
        case 0x24cfe0u: goto label_24cfe0;
        case 0x24cfe4u: goto label_24cfe4;
        case 0x24cfe8u: goto label_24cfe8;
        case 0x24cfecu: goto label_24cfec;
        default: break;
    }

    ctx->pc = 0x24cd78u;

label_24cd78:
    // 0x24cd78: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x24cd78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_24cd7c:
    // 0x24cd7c: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x24cd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_24cd80:
    // 0x24cd80: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x24cd80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
label_24cd84:
    // 0x24cd84: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x24cd84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
label_24cd88:
    // 0x24cd88: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x24cd88u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_24cd8c:
    // 0x24cd8c: 0x8c433d10  lw          $v1, 0x3D10($v0)
    ctx->pc = 0x24cd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15632)));
label_24cd90:
    // 0x24cd90: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x24cd90u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24cd94:
    // 0x24cd94: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x24cd94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
label_24cd98:
    // 0x24cd98: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x24cd98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
label_24cd9c:
    // 0x24cd9c: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x24cd9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
label_24cda0:
    // 0x24cda0: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x24cda0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
label_24cda4:
    // 0x24cda4: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x24cda4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
label_24cda8:
    // 0x24cda8: 0xffb70078  sd          $s7, 0x78($sp)
    ctx->pc = 0x24cda8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 23));
label_24cdac:
    // 0x24cdac: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x24cdacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_24cdb0:
    // 0x24cdb0: 0x10600081  beqz        $v1, . + 4 + (0x81 << 2)
label_24cdb4:
    if (ctx->pc == 0x24CDB4u) {
        ctx->pc = 0x24CDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CDB0u;
        // 0x24cdb4: 0xe7b40090  swc1        $f20, 0x90($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CDB8u;
        goto label_24cdb8;
    }
    ctx->pc = 0x24CDB0u;
    {
        const bool branch_taken_0x24cdb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CDB0u;
        // 0x24cdb4: 0xe7b40090  swc1        $f20, 0x90($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cdb0) {
            ctx->pc = 0x24CFB8u;
            goto label_24cfb8;
        }
    }
    ctx->pc = 0x24CDB8u;
label_24cdb8:
    // 0x24cdb8: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x24cdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_24cdbc:
    // 0x24cdbc: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x24cdbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_24cdc0:
    // 0x24cdc0: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x24cdc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
label_24cdc4:
    // 0x24cdc4: 0x24423d20  addiu       $v0, $v0, 0x3D20
    ctx->pc = 0x24cdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15648));
label_24cdc8:
    // 0x24cdc8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x24cdc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_24cdcc:
    // 0x24cdcc: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x24cdccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_24cdd0:
    // 0x24cdd0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x24cdd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_24cdd4:
    // 0x24cdd4: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x24cdd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
label_24cdd8:
    // 0x24cdd8: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x24cdd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_24cddc:
    // 0x24cddc: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x24cddcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_24cde0:
    // 0x24cde0: 0x10600075  beqz        $v1, . + 4 + (0x75 << 2)
label_24cde4:
    if (ctx->pc == 0x24CDE4u) {
        ctx->pc = 0x24CDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CDE0u;
        // 0x24cde4: 0xafa0001c  sw          $zero, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CDE8u;
        goto label_24cde8;
    }
    ctx->pc = 0x24CDE0u;
    {
        const bool branch_taken_0x24cde0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CDE0u;
        // 0x24cde4: 0xafa0001c  sw          $zero, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cde0) {
            ctx->pc = 0x24CFB8u;
            goto label_24cfb8;
        }
    }
    ctx->pc = 0x24CDE8u;
label_24cde8:
    // 0x24cde8: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x24cde8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_24cdec:
    // 0x24cdec: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x24cdecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_24cdf0:
    // 0x24cdf0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x24cdf0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_24cdf4:
    // 0x24cdf4: 0x3c1642a0  lui         $s6, 0x42A0
    ctx->pc = 0x24cdf4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)17056 << 16));
label_24cdf8:
    // 0x24cdf8: 0x24573d00  addiu       $s7, $v0, 0x3D00
    ctx->pc = 0x24cdf8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 15616));
label_24cdfc:
    // 0x24cdfc: 0x26920120  addiu       $s2, $s4, 0x120
    ctx->pc = 0x24cdfcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 288));
label_24ce00:
    // 0x24ce00: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x24ce00u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_24ce04:
    // 0x24ce04: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x24ce04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_24ce08:
    // 0x24ce08: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x24ce08u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_24ce0c:
    // 0x24ce0c: 0x8e021060  lw          $v0, 0x1060($s0)
    ctx->pc = 0x24ce0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4192)));
label_24ce10:
    // 0x24ce10: 0x3842001b  xori        $v0, $v0, 0x1B
    ctx->pc = 0x24ce10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)27);
label_24ce14:
    // 0x24ce14: 0x1040005b  beqz        $v0, . + 4 + (0x5B << 2)
label_24ce18:
    if (ctx->pc == 0x24CE18u) {
        ctx->pc = 0x24CE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CE14u;
        // 0x24ce18: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CE1Cu;
        goto label_24ce1c;
    }
    ctx->pc = 0x24CE14u;
    {
        const bool branch_taken_0x24ce14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CE14u;
        // 0x24ce18: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ce14) {
            ctx->pc = 0x24CF84u;
            goto label_24cf84;
        }
    }
    ctx->pc = 0x24CE1Cu;
label_24ce1c:
    // 0x24ce1c: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x24ce1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_24ce20:
    // 0x24ce20: 0x10500058  beq         $v0, $s0, . + 4 + (0x58 << 2)
label_24ce24:
    if (ctx->pc == 0x24CE24u) {
        ctx->pc = 0x24CE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CE20u;
        // 0x24ce24: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CE28u;
        goto label_24ce28;
    }
    ctx->pc = 0x24CE20u;
    {
        const bool branch_taken_0x24ce20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x24CE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CE20u;
        // 0x24ce24: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ce20) {
            ctx->pc = 0x24CF84u;
            goto label_24cf84;
        }
    }
    ctx->pc = 0x24CE28u;
label_24ce28:
    // 0x24ce28: 0xc0f6a96  jal         func_3DAA58
label_24ce2c:
    if (ctx->pc == 0x24CE2Cu) {
        ctx->pc = 0x24CE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CE28u;
        // 0x24ce2c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CE30u;
        goto label_24ce30;
    }
    ctx->pc = 0x24CE28u;
    SET_GPR_U32(ctx, 31, 0x24CE30u);
    ctx->pc = 0x24CE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CE28u;
    // 0x24ce2c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x24CE28u, 0x24CE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CE30u;
label_24ce30:
    // 0x24ce30: 0x8e030104  lw          $v1, 0x104($s0)
    ctx->pc = 0x24ce30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_24ce34:
    // 0x24ce34: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x24ce34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_24ce38:
    // 0x24ce38: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x24ce38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_24ce3c:
    // 0x24ce3c: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x24ce3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_24ce40:
    // 0x24ce40: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x24ce40u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_24ce44:
    // 0x24ce44: 0xdae20000  lqc2        $vf2, 0x0($s7)
    ctx->pc = 0x24ce44u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
label_24ce48:
    // 0x24ce48: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x24ce48u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_24ce4c:
    // 0x24ce4c: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x24ce4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
label_24ce50:
    // 0x24ce50: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x24ce50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
label_24ce54:
    // 0x24ce54: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x24ce54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_24ce58:
    // 0x24ce58: 0xc6230004  lwc1        $f3, 0x4($s1)
    ctx->pc = 0x24ce58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_24ce5c:
    // 0x24ce5c: 0xc6240008  lwc1        $f4, 0x8($s1)
    ctx->pc = 0x24ce5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_24ce60:
    // 0x24ce60: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x24ce60u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_24ce64:
    // 0x24ce64: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x24ce64u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_24ce68:
    // 0x24ce68: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x24ce68u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_24ce6c:
    // 0x24ce6c: 0x46010044  c1          0x10044
    ctx->pc = 0x24ce6cu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
label_24ce70:
    // 0x24ce70: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x24ce70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_24ce74:
    // 0x24ce74: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24ce74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_24ce78:
    // 0x24ce78: 0x0  nop
    ctx->pc = 0x24ce78u;
    // NOP
label_24ce7c:
    // 0x24ce7c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x24ce7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_24ce80:
    // 0x24ce80: 0x0  nop
    ctx->pc = 0x24ce80u;
    // NOP
label_24ce84:
    // 0x24ce84: 0x4500003f  bc1f        . + 4 + (0x3F << 2)
label_24ce88:
    if (ctx->pc == 0x24CE88u) {
        ctx->pc = 0x24CE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CE84u;
        // 0x24ce88: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CE8Cu;
        goto label_24ce8c;
    }
    ctx->pc = 0x24CE84u;
    {
        const bool branch_taken_0x24ce84 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24CE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CE84u;
        // 0x24ce88: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ce84) {
            ctx->pc = 0x24CF84u;
            goto label_24cf84;
        }
    }
    ctx->pc = 0x24CE8Cu;
label_24ce8c:
    // 0x24ce8c: 0xc6800120  lwc1        $f0, 0x120($s4)
    ctx->pc = 0x24ce8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24ce90:
    // 0x24ce90: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x24ce90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_24ce94:
    // 0x24ce94: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x24ce94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24ce98:
    // 0x24ce98: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x24ce98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_24ce9c:
    // 0x24ce9c: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x24ce9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24cea0:
    // 0x24cea0: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x24cea0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_24cea4:
    // 0x24cea4: 0xc641000c  lwc1        $f1, 0xC($s2)
    ctx->pc = 0x24cea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24cea8:
    // 0x24cea8: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x24cea8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_24ceac:
    // 0x24ceac: 0xe7a1003c  swc1        $f1, 0x3C($sp)
    ctx->pc = 0x24ceacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_24ceb0:
    // 0x24ceb0: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x24ceb0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_24ceb4:
    // 0x24ceb4: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x24ceb4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_24ceb8:
    // 0x24ceb8: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x24ceb8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_24cebc:
    // 0x24cebc: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x24cebcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_24cec0:
    // 0x24cec0: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x24cec0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_24cec4:
    // 0x24cec4: 0x4a0003bf  vwaitq
    ctx->pc = 0x24cec4u;
    // VWAITQ (Q already resolved in this runtime)
label_24cec8:
    // 0x24cec8: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x24cec8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_24cecc:
    // 0x24cecc: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x24ceccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
label_24ced0:
    // 0x24ced0: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x24ced0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24ced4:
    // 0x24ced4: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x24ced4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24ced8:
    // 0x24ced8: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x24ced8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_24cedc:
    // 0x24cedc: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x24cedcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_24cee0:
    // 0x24cee0: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x24cee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_24cee4:
    // 0x24cee4: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x24cee4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_24cee8:
    // 0x24cee8: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x24cee8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_24ceec:
    // 0x24ceec: 0xda620000  lqc2        $vf2, 0x0($s3)
    ctx->pc = 0x24ceecu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_24cef0:
    // 0x24cef0: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x24cef0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_24cef4:
    // 0x24cef4: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x24cef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
label_24cef8:
    // 0x24cef8: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x24cef8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_24cefc:
    // 0x24cefc: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x24cefcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_24cf00:
    // 0x24cf00: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x24cf00u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_24cf04:
    // 0x24cf04: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x24cf04u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_24cf08:
    // 0x24cf08: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x24cf08u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_24cf0c:
    // 0x24cf0c: 0x4a0003bf  vwaitq
    ctx->pc = 0x24cf0cu;
    // VWAITQ (Q already resolved in this runtime)
label_24cf10:
    // 0x24cf10: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x24cf10u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_24cf14:
    // 0x24cf14: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x24cf14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
label_24cf18:
    // 0x24cf18: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x24cf18u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_24cf1c:
    // 0x24cf1c: 0x48b61000  qmtc2.ni    $s6, $vf2
    ctx->pc = 0x24cf1cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 22));
label_24cf20:
    // 0x24cf20: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x24cf20u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_24cf24:
    // 0x24cf24: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x24cf24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
label_24cf28:
    // 0x24cf28: 0x12000014  beqz        $s0, . + 4 + (0x14 << 2)
label_24cf2c:
    if (ctx->pc == 0x24CF2Cu) {
        ctx->pc = 0x24CF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CF28u;
        // 0x24cf2c: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CF30u;
        goto label_24cf30;
    }
    ctx->pc = 0x24CF28u;
    {
        const bool branch_taken_0x24cf28 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CF28u;
        // 0x24cf2c: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cf28) {
            ctx->pc = 0x24CF7Cu;
            goto label_24cf7c;
        }
    }
    ctx->pc = 0x24CF30u;
label_24cf30:
    // 0x24cf30: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x24cf30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_24cf34:
    // 0x24cf34: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
label_24cf38:
    if (ctx->pc == 0x24CF38u) {
        ctx->pc = 0x24CF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CF34u;
        // 0x24cf38: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CF3Cu;
        goto label_24cf3c;
    }
    ctx->pc = 0x24CF34u;
    {
        const bool branch_taken_0x24cf34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24cf34) {
            ctx->pc = 0x24CF38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24CF34u;
            // 0x24cf38: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24CF80u;
            goto label_24cf80;
        }
    }
    ctx->pc = 0x24CF3Cu;
label_24cf3c:
    // 0x24cf3c: 0xc083bc0  jal         func_20EF00
label_24cf40:
    if (ctx->pc == 0x24CF40u) {
        ctx->pc = 0x24CF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CF3Cu;
        // 0x24cf40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CF44u;
        goto label_24cf44;
    }
    ctx->pc = 0x24CF3Cu;
    SET_GPR_U32(ctx, 31, 0x24CF44u);
    ctx->pc = 0x24CF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CF3Cu;
    // 0x24cf40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20EF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20EF00u, 0x24CF3Cu, 0x24CF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CF44u;
label_24cf44:
    // 0x24cf44: 0x8e04010c  lw          $a0, 0x10C($s0)
    ctx->pc = 0x24cf44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_24cf48:
    // 0x24cf48: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x24cf48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_24cf4c:
    // 0x24cf4c: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x24cf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_24cf50:
    // 0x24cf50: 0x40f809  jalr        $v0
label_24cf54:
    if (ctx->pc == 0x24CF54u) {
        ctx->pc = 0x24CF58u;
        goto label_24cf58;
    }
    ctx->pc = 0x24CF50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24CF58u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24CF50u, 0x24CF58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24CF58u;
label_24cf58:
    // 0x24cf58: 0x8e04010c  lw          $a0, 0x10C($s0)
    ctx->pc = 0x24cf58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_24cf5c:
    // 0x24cf5c: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x24cf5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_24cf60:
    // 0x24cf60: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x24cf60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_24cf64:
    // 0x24cf64: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_24cf68:
    if (ctx->pc == 0x24CF68u) {
        ctx->pc = 0x24CF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CF64u;
        // 0x24cf68: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CF6Cu;
        goto label_24cf6c;
    }
    ctx->pc = 0x24CF64u;
    {
        const bool branch_taken_0x24cf64 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CF64u;
        // 0x24cf68: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cf64) {
            ctx->pc = 0x24CF74u;
            goto label_24cf74;
        }
    }
    ctx->pc = 0x24CF6Cu;
label_24cf6c:
    // 0x24cf6c: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
label_24cf70:
    if (ctx->pc == 0x24CF70u) {
        ctx->pc = 0x24CF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CF6Cu;
        // 0x24cf70: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CF74u;
        goto label_24cf74;
    }
    ctx->pc = 0x24CF6Cu;
    {
        const bool branch_taken_0x24cf6c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x24CF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CF6Cu;
        // 0x24cf70: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cf6c) {
            ctx->pc = 0x24CF80u;
            goto label_24cf80;
        }
    }
    ctx->pc = 0x24CF74u;
label_24cf74:
    // 0x24cf74: 0xc0b71e0  jal         func_2DC780
label_24cf78:
    if (ctx->pc == 0x24CF78u) {
        ctx->pc = 0x24CF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CF74u;
        // 0x24cf78: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CF7Cu;
        goto label_24cf7c;
    }
    ctx->pc = 0x24CF74u;
    SET_GPR_U32(ctx, 31, 0x24CF7Cu);
    ctx->pc = 0x24CF78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CF74u;
    // 0x24cf78: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC780u, 0x24CF74u, 0x24CF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CF7Cu;
label_24cf7c:
    // 0x24cf7c: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x24cf7cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24cf80:
    // 0x24cf80: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x24cf80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_24cf84:
    // 0x24cf84: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_24cf88:
    if (ctx->pc == 0x24CF88u) {
        ctx->pc = 0x24CF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CF84u;
        // 0x24cf88: 0x8fa2000c  lw          $v0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CF8Cu;
        goto label_24cf8c;
    }
    ctx->pc = 0x24CF84u;
    {
        const bool branch_taken_0x24cf84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24cf84) {
            ctx->pc = 0x24CF88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24CF84u;
            // 0x24cf88: 0x8fa2000c  lw          $v0, 0xC($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24CF98u;
            goto label_24cf98;
        }
    }
    ctx->pc = 0x24CF8Cu;
label_24cf8c:
    // 0x24cf8c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x24cf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_24cf90:
    // 0x24cf90: 0x10000005  b           . + 4 + (0x5 << 2)
label_24cf94:
    if (ctx->pc == 0x24CF94u) {
        ctx->pc = 0x24CF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CF90u;
        // 0x24cf94: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CF98u;
        goto label_24cf98;
    }
    ctx->pc = 0x24CF90u;
    {
        const bool branch_taken_0x24cf90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CF90u;
        // 0x24cf94: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cf90) {
            ctx->pc = 0x24CFA8u;
            goto label_24cfa8;
        }
    }
    ctx->pc = 0x24CF98u;
label_24cf98:
    // 0x24cf98: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_24cf9c:
    if (ctx->pc == 0x24CF9Cu) {
        ctx->pc = 0x24CF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CF98u;
        // 0x24cf9c: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CFA0u;
        goto label_24cfa0;
    }
    ctx->pc = 0x24CF98u;
    {
        const bool branch_taken_0x24cf98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CF98u;
        // 0x24cf9c: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cf98) {
            ctx->pc = 0x24CFACu;
            goto label_24cfac;
        }
    }
    ctx->pc = 0x24CFA0u;
label_24cfa0:
    // 0x24cfa0: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x24cfa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_24cfa4:
    // 0x24cfa4: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x24cfa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
label_24cfa8:
    // 0x24cfa8: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x24cfa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_24cfac:
    // 0x24cfac: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x24cfacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_24cfb0:
    // 0x24cfb0: 0x1462ff95  bne         $v1, $v0, . + 4 + (-0x6B << 2)
label_24cfb4:
    if (ctx->pc == 0x24CFB4u) {
        ctx->pc = 0x24CFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CFB0u;
        // 0x24cfb4: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CFB8u;
        goto label_24cfb8;
    }
    ctx->pc = 0x24CFB0u;
    {
        const bool branch_taken_0x24cfb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x24CFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CFB0u;
        // 0x24cfb4: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cfb0) {
            ctx->pc = 0x24CE08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24ce08;
        }
    }
    ctx->pc = 0x24CFB8u;
label_24cfb8:
    // 0x24cfb8: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x24cfb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_24cfbc:
    // 0x24cfbc: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x24cfbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_24cfc0:
    // 0x24cfc0: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x24cfc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_24cfc4:
    // 0x24cfc4: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x24cfc4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_24cfc8:
    // 0x24cfc8: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x24cfc8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_24cfcc:
    // 0x24cfcc: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x24cfccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_24cfd0:
    // 0x24cfd0: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x24cfd0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_24cfd4:
    // 0x24cfd4: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x24cfd4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_24cfd8:
    // 0x24cfd8: 0xdfb70078  ld          $s7, 0x78($sp)
    ctx->pc = 0x24cfd8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 120)));
label_24cfdc:
    // 0x24cfdc: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x24cfdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_24cfe0:
    // 0x24cfe0: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x24cfe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_24cfe4:
    // 0x24cfe4: 0x3e00008  jr          $ra
label_24cfe8:
    if (ctx->pc == 0x24CFE8u) {
        ctx->pc = 0x24CFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CFE4u;
        // 0x24cfe8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CFECu;
        goto label_24cfec;
    }
    ctx->pc = 0x24CFE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24CFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CFE4u;
        // 0x24cfe8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24CFE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24CFECu;
label_24cfec:
    // 0x24cfec: 0x0  nop
    ctx->pc = 0x24cfecu;
    // NOP
    ctx->pc = 0x24cff0u;
}
