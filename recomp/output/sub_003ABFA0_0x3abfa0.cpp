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

// Function: sub_003ABFA0
// Address: 0x3abfa0 - 0x3ac0c0
void sub_003ABFA0_0x3abfa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003ABFA0_0x3abfa0");
#endif

    switch (ctx->pc) {
        case 0x3abfa0u: goto label_3abfa0;
        case 0x3abfa4u: goto label_3abfa4;
        case 0x3abfa8u: goto label_3abfa8;
        case 0x3abfacu: goto label_3abfac;
        case 0x3abfb0u: goto label_3abfb0;
        case 0x3abfb4u: goto label_3abfb4;
        case 0x3abfb8u: goto label_3abfb8;
        case 0x3abfbcu: goto label_3abfbc;
        case 0x3abfc0u: goto label_3abfc0;
        case 0x3abfc4u: goto label_3abfc4;
        case 0x3abfc8u: goto label_3abfc8;
        case 0x3abfccu: goto label_3abfcc;
        case 0x3abfd0u: goto label_3abfd0;
        case 0x3abfd4u: goto label_3abfd4;
        case 0x3abfd8u: goto label_3abfd8;
        case 0x3abfdcu: goto label_3abfdc;
        case 0x3abfe0u: goto label_3abfe0;
        case 0x3abfe4u: goto label_3abfe4;
        case 0x3abfe8u: goto label_3abfe8;
        case 0x3abfecu: goto label_3abfec;
        case 0x3abff0u: goto label_3abff0;
        case 0x3abff4u: goto label_3abff4;
        case 0x3abff8u: goto label_3abff8;
        case 0x3abffcu: goto label_3abffc;
        case 0x3ac000u: goto label_3ac000;
        case 0x3ac004u: goto label_3ac004;
        case 0x3ac008u: goto label_3ac008;
        case 0x3ac00cu: goto label_3ac00c;
        case 0x3ac010u: goto label_3ac010;
        case 0x3ac014u: goto label_3ac014;
        case 0x3ac018u: goto label_3ac018;
        case 0x3ac01cu: goto label_3ac01c;
        case 0x3ac020u: goto label_3ac020;
        case 0x3ac024u: goto label_3ac024;
        case 0x3ac028u: goto label_3ac028;
        case 0x3ac02cu: goto label_3ac02c;
        case 0x3ac030u: goto label_3ac030;
        case 0x3ac034u: goto label_3ac034;
        case 0x3ac038u: goto label_3ac038;
        case 0x3ac03cu: goto label_3ac03c;
        case 0x3ac040u: goto label_3ac040;
        case 0x3ac044u: goto label_3ac044;
        case 0x3ac048u: goto label_3ac048;
        case 0x3ac04cu: goto label_3ac04c;
        case 0x3ac050u: goto label_3ac050;
        case 0x3ac054u: goto label_3ac054;
        case 0x3ac058u: goto label_3ac058;
        case 0x3ac05cu: goto label_3ac05c;
        case 0x3ac060u: goto label_3ac060;
        case 0x3ac064u: goto label_3ac064;
        case 0x3ac068u: goto label_3ac068;
        case 0x3ac06cu: goto label_3ac06c;
        case 0x3ac070u: goto label_3ac070;
        case 0x3ac074u: goto label_3ac074;
        case 0x3ac078u: goto label_3ac078;
        case 0x3ac07cu: goto label_3ac07c;
        case 0x3ac080u: goto label_3ac080;
        case 0x3ac084u: goto label_3ac084;
        case 0x3ac088u: goto label_3ac088;
        case 0x3ac08cu: goto label_3ac08c;
        case 0x3ac090u: goto label_3ac090;
        case 0x3ac094u: goto label_3ac094;
        case 0x3ac098u: goto label_3ac098;
        case 0x3ac09cu: goto label_3ac09c;
        case 0x3ac0a0u: goto label_3ac0a0;
        case 0x3ac0a4u: goto label_3ac0a4;
        case 0x3ac0a8u: goto label_3ac0a8;
        case 0x3ac0acu: goto label_3ac0ac;
        case 0x3ac0b0u: goto label_3ac0b0;
        case 0x3ac0b4u: goto label_3ac0b4;
        case 0x3ac0b8u: goto label_3ac0b8;
        case 0x3ac0bcu: goto label_3ac0bc;
        default: break;
    }

    ctx->pc = 0x3abfa0u;

label_3abfa0:
    // 0x3abfa0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3abfa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3abfa4:
    // 0x3abfa4: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x3abfa4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3abfa8:
    // 0x3abfa8: 0x15000009  bnez        $t0, . + 4 + (0x9 << 2)
label_3abfac:
    if (ctx->pc == 0x3ABFACu) {
        ctx->pc = 0x3ABFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABFA8u;
        // 0x3abfac: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABFB0u;
        goto label_3abfb0;
    }
    ctx->pc = 0x3ABFA8u;
    {
        const bool branch_taken_0x3abfa8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x3ABFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABFA8u;
        // 0x3abfac: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abfa8) {
            ctx->pc = 0x3ABFD0u;
            goto label_3abfd0;
        }
    }
    ctx->pc = 0x3ABFB0u;
label_3abfb0:
    // 0x3abfb0: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3abfb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_3abfb4:
    // 0x3abfb4: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3abfb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_3abfb8:
    // 0x3abfb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3abfb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3abfbc:
    // 0x3abfbc: 0x2484f1a8  addiu       $a0, $a0, -0xE58
    ctx->pc = 0x3abfbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963624));
label_3abfc0:
    // 0x3abfc0: 0x24a5f098  addiu       $a1, $a1, -0xF68
    ctx->pc = 0x3abfc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963352));
label_3abfc4:
    // 0x3abfc4: 0x80ead68  j           func_3AB5A0
label_3abfc8:
    if (ctx->pc == 0x3ABFC8u) {
        ctx->pc = 0x3ABFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABFC4u;
        // 0x3abfc8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABFCCu;
        goto label_3abfcc;
    }
    ctx->pc = 0x3ABFC4u;
    ctx->pc = 0x3ABFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABFC4u;
    // 0x3abfc8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AB5A0u;
    sub_003AB5A0_0x3ab5a0(rdram, ctx, runtime); return;
    ctx->pc = 0x3ABFCCu;
label_3abfcc:
    // 0x3abfcc: 0x0  nop
    ctx->pc = 0x3abfccu;
    // NOP
label_3abfd0:
    // 0x3abfd0: 0x81020004  lb          $v0, 0x4($t0)
    ctx->pc = 0x3abfd0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 4)));
label_3abfd4:
    // 0x3abfd4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_3abfd8:
    if (ctx->pc == 0x3ABFD8u) {
        ctx->pc = 0x3ABFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABFD4u;
        // 0x3abfd8: 0x2ca20004  sltiu       $v0, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABFDCu;
        goto label_3abfdc;
    }
    ctx->pc = 0x3ABFD4u;
    {
        const bool branch_taken_0x3abfd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3ABFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABFD4u;
        // 0x3abfd8: 0x2ca20004  sltiu       $v0, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abfd4) {
            ctx->pc = 0x3ABFF8u;
            goto label_3abff8;
        }
    }
    ctx->pc = 0x3ABFDCu;
label_3abfdc:
    // 0x3abfdc: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3abfdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_3abfe0:
    // 0x3abfe0: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3abfe0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_3abfe4:
    // 0x3abfe4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3abfe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3abfe8:
    // 0x3abfe8: 0x2484f1b8  addiu       $a0, $a0, -0xE48
    ctx->pc = 0x3abfe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963640));
label_3abfec:
    // 0x3abfec: 0x24a5f0c8  addiu       $a1, $a1, -0xF38
    ctx->pc = 0x3abfecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963400));
label_3abff0:
    // 0x3abff0: 0x80ead68  j           func_3AB5A0
label_3abff4:
    if (ctx->pc == 0x3ABFF4u) {
        ctx->pc = 0x3ABFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABFF0u;
        // 0x3abff4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABFF8u;
        goto label_3abff8;
    }
    ctx->pc = 0x3ABFF0u;
    ctx->pc = 0x3ABFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABFF0u;
    // 0x3abff4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AB5A0u;
    sub_003AB5A0_0x3ab5a0(rdram, ctx, runtime); return;
    ctx->pc = 0x3ABFF8u;
label_3abff8:
    // 0x3abff8: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
label_3abffc:
    if (ctx->pc == 0x3ABFFCu) {
        ctx->pc = 0x3ABFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABFF8u;
        // 0x3abffc: 0x8d020028  lw          $v0, 0x28($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC000u;
        goto label_3ac000;
    }
    ctx->pc = 0x3ABFF8u;
    {
        const bool branch_taken_0x3abff8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3abff8) {
            ctx->pc = 0x3ABFFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ABFF8u;
            // 0x3abffc: 0x8d020028  lw          $v0, 0x28($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AC068u;
            goto label_3ac068;
        }
    }
    ctx->pc = 0x3AC000u;
label_3ac000:
    // 0x3ac000: 0x8cca0004  lw          $t2, 0x4($a2)
    ctx->pc = 0x3ac000u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_3ac004:
    // 0x3ac004: 0x1940002c  blez        $t2, . + 4 + (0x2C << 2)
label_3ac008:
    if (ctx->pc == 0x3AC008u) {
        ctx->pc = 0x3AC008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC004u;
        // 0x3ac008: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC00Cu;
        goto label_3ac00c;
    }
    ctx->pc = 0x3AC004u;
    {
        const bool branch_taken_0x3ac004 = (GPR_S32(ctx, 10) <= 0);
        ctx->pc = 0x3AC008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC004u;
        // 0x3ac008: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac004) {
            ctx->pc = 0x3AC0B8u;
            goto label_3ac0b8;
        }
    }
    ctx->pc = 0x3AC00Cu;
label_3ac00c:
    // 0x3ac00c: 0x8cc90000  lw          $t1, 0x0($a2)
    ctx->pc = 0x3ac00cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_3ac010:
    // 0x3ac010: 0x11200029  beqz        $t1, . + 4 + (0x29 << 2)
label_3ac014:
    if (ctx->pc == 0x3AC014u) {
        ctx->pc = 0x3AC014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC010u;
        // 0x3ac014: 0x52880  sll         $a1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC018u;
        goto label_3ac018;
    }
    ctx->pc = 0x3AC010u;
    {
        const bool branch_taken_0x3ac010 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC010u;
        // 0x3ac014: 0x52880  sll         $a1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac010) {
            ctx->pc = 0x3AC0B8u;
            goto label_3ac0b8;
        }
    }
    ctx->pc = 0x3AC018u;
label_3ac018:
    // 0x3ac018: 0x250b0008  addiu       $t3, $t0, 0x8
    ctx->pc = 0x3ac018u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
label_3ac01c:
    // 0x3ac01c: 0x81020005  lb          $v0, 0x5($t0)
    ctx->pc = 0x3ac01cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 5)));
label_3ac020:
    // 0x3ac020: 0xab1821  addu        $v1, $a1, $t3
    ctx->pc = 0x3ac020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
label_3ac024:
    // 0x3ac024: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3ac024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ac028:
    // 0x3ac028: 0x1444000b  bne         $v0, $a0, . + 4 + (0xB << 2)
label_3ac02c:
    if (ctx->pc == 0x3AC02Cu) {
        ctx->pc = 0x3AC02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC028u;
        // 0x3ac02c: 0x8c670010  lw          $a3, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC030u;
        goto label_3ac030;
    }
    ctx->pc = 0x3AC028u;
    {
        const bool branch_taken_0x3ac028 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x3AC02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC028u;
        // 0x3ac02c: 0x8c670010  lw          $a3, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac028) {
            ctx->pc = 0x3AC058u;
            goto label_3ac058;
        }
    }
    ctx->pc = 0x3AC030u;
label_3ac030:
    // 0x3ac030: 0x10e00009  beqz        $a3, . + 4 + (0x9 << 2)
label_3ac034:
    if (ctx->pc == 0x3AC034u) {
        ctx->pc = 0x3AC034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC030u;
        // 0x3ac034: 0x12a1021  addu        $v0, $t1, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC038u;
        goto label_3ac038;
    }
    ctx->pc = 0x3AC030u;
    {
        const bool branch_taken_0x3ac030 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC030u;
        // 0x3ac034: 0x12a1021  addu        $v0, $t1, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac030) {
            ctx->pc = 0x3AC058u;
            goto label_3ac058;
        }
    }
    ctx->pc = 0x3AC038u;
label_3ac038:
    // 0x3ac038: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x3ac038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_3ac03c:
    // 0x3ac03c: 0x54430007  bnel        $v0, $v1, . + 4 + (0x7 << 2)
label_3ac040:
    if (ctx->pc == 0x3AC040u) {
        ctx->pc = 0x3AC040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC03Cu;
        // 0x3ac040: 0x8d070014  lw          $a3, 0x14($t0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC044u;
        goto label_3ac044;
    }
    ctx->pc = 0x3AC03Cu;
    {
        const bool branch_taken_0x3ac03c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3ac03c) {
            ctx->pc = 0x3AC040u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AC03Cu;
            // 0x3ac040: 0x8d070014  lw          $a3, 0x14($t0) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AC05Cu;
            goto label_3ac05c;
        }
    }
    ctx->pc = 0x3AC044u;
label_3ac044:
    // 0x3ac044: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x3ac044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_3ac048:
    // 0x3ac048: 0xace90008  sw          $t1, 0x8($a3)
    ctx->pc = 0x3ac048u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 9));
label_3ac04c:
    // 0x3ac04c: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x3ac04cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_3ac050:
    // 0x3ac050: 0x10000019  b           . + 4 + (0x19 << 2)
label_3ac054:
    if (ctx->pc == 0x3AC054u) {
        ctx->pc = 0x3AC054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC050u;
        // 0x3ac054: 0xace2000c  sw          $v0, 0xC($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC058u;
        goto label_3ac058;
    }
    ctx->pc = 0x3AC050u;
    {
        const bool branch_taken_0x3ac050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC050u;
        // 0x3ac054: 0xace2000c  sw          $v0, 0xC($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac050) {
            ctx->pc = 0x3AC0B8u;
            goto label_3ac0b8;
        }
    }
    ctx->pc = 0x3AC058u;
label_3ac058:
    // 0x3ac058: 0x8d070014  lw          $a3, 0x14($t0)
    ctx->pc = 0x3ac058u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
label_3ac05c:
    // 0x3ac05c: 0x54e0000a  bnel        $a3, $zero, . + 4 + (0xA << 2)
label_3ac060:
    if (ctx->pc == 0x3AC060u) {
        ctx->pc = 0x3AC060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC05Cu;
        // 0x3ac060: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC064u;
        goto label_3ac064;
    }
    ctx->pc = 0x3AC05Cu;
    {
        const bool branch_taken_0x3ac05c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ac05c) {
            ctx->pc = 0x3AC060u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AC05Cu;
            // 0x3ac060: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AC088u;
            goto label_3ac088;
        }
    }
    ctx->pc = 0x3AC064u;
label_3ac064:
    // 0x3ac064: 0x8d020028  lw          $v0, 0x28($t0)
    ctx->pc = 0x3ac064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 40)));
label_3ac068:
    // 0x3ac068: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_3ac06c:
    if (ctx->pc == 0x3AC06Cu) {
        ctx->pc = 0x3AC06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC068u;
        // 0x3ac06c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC070u;
        goto label_3ac070;
    }
    ctx->pc = 0x3AC068u;
    {
        const bool branch_taken_0x3ac068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC068u;
        // 0x3ac06c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac068) {
            ctx->pc = 0x3AC0B8u;
            goto label_3ac0b8;
        }
    }
    ctx->pc = 0x3AC070u;
label_3ac070:
    // 0x3ac070: 0x8d04002c  lw          $a0, 0x2C($t0)
    ctx->pc = 0x3ac070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 44)));
label_3ac074:
    // 0x3ac074: 0x40f809  jalr        $v0
label_3ac078:
    if (ctx->pc == 0x3AC078u) {
        ctx->pc = 0x3AC078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC074u;
        // 0x3ac078: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC07Cu;
        goto label_3ac07c;
    }
    ctx->pc = 0x3AC074u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AC07Cu);
        ctx->pc = 0x3AC078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC074u;
        // 0x3ac078: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AC074u, 0x3AC07Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AC07Cu;
label_3ac07c:
    // 0x3ac07c: 0x1000000e  b           . + 4 + (0xE << 2)
label_3ac080:
    if (ctx->pc == 0x3AC080u) {
        ctx->pc = 0x3AC080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC07Cu;
        // 0x3ac080: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC084u;
        goto label_3ac084;
    }
    ctx->pc = 0x3AC07Cu;
    {
        const bool branch_taken_0x3ac07c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC07Cu;
        // 0x3ac080: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac07c) {
            ctx->pc = 0x3AC0B8u;
            goto label_3ac0b8;
        }
    }
    ctx->pc = 0x3AC084u;
label_3ac084:
    // 0x3ac084: 0x0  nop
    ctx->pc = 0x3ac084u;
    // NOP
label_3ac088:
    // 0x3ac088: 0x24a30010  addiu       $v1, $a1, 0x10
    ctx->pc = 0x3ac088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_3ac08c:
    // 0x3ac08c: 0x1631821  addu        $v1, $t3, $v1
    ctx->pc = 0x3ac08cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
label_3ac090:
    // 0x3ac090: 0x68c40007  ldl         $a0, 0x7($a2)
    ctx->pc = 0x3ac090u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_3ac094:
    // 0x3ac094: 0x6cc40000  ldr         $a0, 0x0($a2)
    ctx->pc = 0x3ac094u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_3ac098:
    // 0x3ac098: 0xb0e4000f  sdl         $a0, 0xF($a3)
    ctx->pc = 0x3ac098u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3ac09c:
    // 0x3ac09c: 0xb4e40008  sdr         $a0, 0x8($a3)
    ctx->pc = 0x3ac09cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3ac0a0:
    // 0x3ac0a0: 0xad020014  sw          $v0, 0x14($t0)
    ctx->pc = 0x3ac0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 2));
label_3ac0a4:
    // 0x3ac0a4: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x3ac0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_3ac0a8:
    // 0x3ac0a8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3ac0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3ac0ac:
    // 0x3ac0ac: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x3ac0acu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
label_3ac0b0:
    // 0x3ac0b0: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x3ac0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
label_3ac0b4:
    // 0x3ac0b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ac0b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3ac0b8:
    // 0x3ac0b8: 0x3e00008  jr          $ra
label_3ac0bc:
    if (ctx->pc == 0x3AC0BCu) {
        ctx->pc = 0x3AC0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC0B8u;
        // 0x3ac0bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC0C0u;
        goto label_fallthrough_0x3ac0b8;
    }
    ctx->pc = 0x3AC0B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AC0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC0B8u;
        // 0x3ac0bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AC0B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3ac0b8:
    ctx->pc = 0x3AC0C0u;
}
