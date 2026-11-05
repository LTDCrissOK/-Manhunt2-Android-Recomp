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

// Function: sub_0022FDC0
// Address: 0x22fdc0 - 0x2300b8
void sub_0022FDC0_0x22fdc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022FDC0_0x22fdc0");
#endif

    switch (ctx->pc) {
        case 0x22fdc0u: goto label_22fdc0;
        case 0x22fdc4u: goto label_22fdc4;
        case 0x22fdc8u: goto label_22fdc8;
        case 0x22fdccu: goto label_22fdcc;
        case 0x22fdd0u: goto label_22fdd0;
        case 0x22fdd4u: goto label_22fdd4;
        case 0x22fdd8u: goto label_22fdd8;
        case 0x22fddcu: goto label_22fddc;
        case 0x22fde0u: goto label_22fde0;
        case 0x22fde4u: goto label_22fde4;
        case 0x22fde8u: goto label_22fde8;
        case 0x22fdecu: goto label_22fdec;
        case 0x22fdf0u: goto label_22fdf0;
        case 0x22fdf4u: goto label_22fdf4;
        case 0x22fdf8u: goto label_22fdf8;
        case 0x22fdfcu: goto label_22fdfc;
        case 0x22fe00u: goto label_22fe00;
        case 0x22fe04u: goto label_22fe04;
        case 0x22fe08u: goto label_22fe08;
        case 0x22fe0cu: goto label_22fe0c;
        case 0x22fe10u: goto label_22fe10;
        case 0x22fe14u: goto label_22fe14;
        case 0x22fe18u: goto label_22fe18;
        case 0x22fe1cu: goto label_22fe1c;
        case 0x22fe20u: goto label_22fe20;
        case 0x22fe24u: goto label_22fe24;
        case 0x22fe28u: goto label_22fe28;
        case 0x22fe2cu: goto label_22fe2c;
        case 0x22fe30u: goto label_22fe30;
        case 0x22fe34u: goto label_22fe34;
        case 0x22fe38u: goto label_22fe38;
        case 0x22fe3cu: goto label_22fe3c;
        case 0x22fe40u: goto label_22fe40;
        case 0x22fe44u: goto label_22fe44;
        case 0x22fe48u: goto label_22fe48;
        case 0x22fe4cu: goto label_22fe4c;
        case 0x22fe50u: goto label_22fe50;
        case 0x22fe54u: goto label_22fe54;
        case 0x22fe58u: goto label_22fe58;
        case 0x22fe5cu: goto label_22fe5c;
        case 0x22fe60u: goto label_22fe60;
        case 0x22fe64u: goto label_22fe64;
        case 0x22fe68u: goto label_22fe68;
        case 0x22fe6cu: goto label_22fe6c;
        case 0x22fe70u: goto label_22fe70;
        case 0x22fe74u: goto label_22fe74;
        case 0x22fe78u: goto label_22fe78;
        case 0x22fe7cu: goto label_22fe7c;
        case 0x22fe80u: goto label_22fe80;
        case 0x22fe84u: goto label_22fe84;
        case 0x22fe88u: goto label_22fe88;
        case 0x22fe8cu: goto label_22fe8c;
        case 0x22fe90u: goto label_22fe90;
        case 0x22fe94u: goto label_22fe94;
        case 0x22fe98u: goto label_22fe98;
        case 0x22fe9cu: goto label_22fe9c;
        case 0x22fea0u: goto label_22fea0;
        case 0x22fea4u: goto label_22fea4;
        case 0x22fea8u: goto label_22fea8;
        case 0x22feacu: goto label_22feac;
        case 0x22feb0u: goto label_22feb0;
        case 0x22feb4u: goto label_22feb4;
        case 0x22feb8u: goto label_22feb8;
        case 0x22febcu: goto label_22febc;
        case 0x22fec0u: goto label_22fec0;
        case 0x22fec4u: goto label_22fec4;
        case 0x22fec8u: goto label_22fec8;
        case 0x22feccu: goto label_22fecc;
        case 0x22fed0u: goto label_22fed0;
        case 0x22fed4u: goto label_22fed4;
        case 0x22fed8u: goto label_22fed8;
        case 0x22fedcu: goto label_22fedc;
        case 0x22fee0u: goto label_22fee0;
        case 0x22fee4u: goto label_22fee4;
        case 0x22fee8u: goto label_22fee8;
        case 0x22feecu: goto label_22feec;
        case 0x22fef0u: goto label_22fef0;
        case 0x22fef4u: goto label_22fef4;
        case 0x22fef8u: goto label_22fef8;
        case 0x22fefcu: goto label_22fefc;
        case 0x22ff00u: goto label_22ff00;
        case 0x22ff04u: goto label_22ff04;
        case 0x22ff08u: goto label_22ff08;
        case 0x22ff0cu: goto label_22ff0c;
        case 0x22ff10u: goto label_22ff10;
        case 0x22ff14u: goto label_22ff14;
        case 0x22ff18u: goto label_22ff18;
        case 0x22ff1cu: goto label_22ff1c;
        case 0x22ff20u: goto label_22ff20;
        case 0x22ff24u: goto label_22ff24;
        case 0x22ff28u: goto label_22ff28;
        case 0x22ff2cu: goto label_22ff2c;
        case 0x22ff30u: goto label_22ff30;
        case 0x22ff34u: goto label_22ff34;
        case 0x22ff38u: goto label_22ff38;
        case 0x22ff3cu: goto label_22ff3c;
        case 0x22ff40u: goto label_22ff40;
        case 0x22ff44u: goto label_22ff44;
        case 0x22ff48u: goto label_22ff48;
        case 0x22ff4cu: goto label_22ff4c;
        case 0x22ff50u: goto label_22ff50;
        case 0x22ff54u: goto label_22ff54;
        case 0x22ff58u: goto label_22ff58;
        case 0x22ff5cu: goto label_22ff5c;
        case 0x22ff60u: goto label_22ff60;
        case 0x22ff64u: goto label_22ff64;
        case 0x22ff68u: goto label_22ff68;
        case 0x22ff6cu: goto label_22ff6c;
        case 0x22ff70u: goto label_22ff70;
        case 0x22ff74u: goto label_22ff74;
        case 0x22ff78u: goto label_22ff78;
        case 0x22ff7cu: goto label_22ff7c;
        case 0x22ff80u: goto label_22ff80;
        case 0x22ff84u: goto label_22ff84;
        case 0x22ff88u: goto label_22ff88;
        case 0x22ff8cu: goto label_22ff8c;
        case 0x22ff90u: goto label_22ff90;
        case 0x22ff94u: goto label_22ff94;
        case 0x22ff98u: goto label_22ff98;
        case 0x22ff9cu: goto label_22ff9c;
        case 0x22ffa0u: goto label_22ffa0;
        case 0x22ffa4u: goto label_22ffa4;
        case 0x22ffa8u: goto label_22ffa8;
        case 0x22ffacu: goto label_22ffac;
        case 0x22ffb0u: goto label_22ffb0;
        case 0x22ffb4u: goto label_22ffb4;
        case 0x22ffb8u: goto label_22ffb8;
        case 0x22ffbcu: goto label_22ffbc;
        case 0x22ffc0u: goto label_22ffc0;
        case 0x22ffc4u: goto label_22ffc4;
        case 0x22ffc8u: goto label_22ffc8;
        case 0x22ffccu: goto label_22ffcc;
        case 0x22ffd0u: goto label_22ffd0;
        case 0x22ffd4u: goto label_22ffd4;
        case 0x22ffd8u: goto label_22ffd8;
        case 0x22ffdcu: goto label_22ffdc;
        case 0x22ffe0u: goto label_22ffe0;
        case 0x22ffe4u: goto label_22ffe4;
        case 0x22ffe8u: goto label_22ffe8;
        case 0x22ffecu: goto label_22ffec;
        case 0x22fff0u: goto label_22fff0;
        case 0x22fff4u: goto label_22fff4;
        case 0x22fff8u: goto label_22fff8;
        case 0x22fffcu: goto label_22fffc;
        case 0x230000u: goto label_230000;
        case 0x230004u: goto label_230004;
        case 0x230008u: goto label_230008;
        case 0x23000cu: goto label_23000c;
        case 0x230010u: goto label_230010;
        case 0x230014u: goto label_230014;
        case 0x230018u: goto label_230018;
        case 0x23001cu: goto label_23001c;
        case 0x230020u: goto label_230020;
        case 0x230024u: goto label_230024;
        case 0x230028u: goto label_230028;
        case 0x23002cu: goto label_23002c;
        case 0x230030u: goto label_230030;
        case 0x230034u: goto label_230034;
        case 0x230038u: goto label_230038;
        case 0x23003cu: goto label_23003c;
        case 0x230040u: goto label_230040;
        case 0x230044u: goto label_230044;
        case 0x230048u: goto label_230048;
        case 0x23004cu: goto label_23004c;
        case 0x230050u: goto label_230050;
        case 0x230054u: goto label_230054;
        case 0x230058u: goto label_230058;
        case 0x23005cu: goto label_23005c;
        case 0x230060u: goto label_230060;
        case 0x230064u: goto label_230064;
        case 0x230068u: goto label_230068;
        case 0x23006cu: goto label_23006c;
        case 0x230070u: goto label_230070;
        case 0x230074u: goto label_230074;
        case 0x230078u: goto label_230078;
        case 0x23007cu: goto label_23007c;
        case 0x230080u: goto label_230080;
        case 0x230084u: goto label_230084;
        case 0x230088u: goto label_230088;
        case 0x23008cu: goto label_23008c;
        case 0x230090u: goto label_230090;
        case 0x230094u: goto label_230094;
        case 0x230098u: goto label_230098;
        case 0x23009cu: goto label_23009c;
        case 0x2300a0u: goto label_2300a0;
        case 0x2300a4u: goto label_2300a4;
        case 0x2300a8u: goto label_2300a8;
        case 0x2300acu: goto label_2300ac;
        case 0x2300b0u: goto label_2300b0;
        case 0x2300b4u: goto label_2300b4;
        default: break;
    }

    ctx->pc = 0x22fdc0u;

label_22fdc0:
    // 0x22fdc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22fdc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_22fdc4:
    // 0x22fdc4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22fdc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_22fdc8:
    // 0x22fdc8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x22fdc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_22fdcc:
    // 0x22fdcc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22fdccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22fdd0:
    // 0x22fdd0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x22fdd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_22fdd4:
    // 0x22fdd4: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x22fdd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_22fdd8:
    // 0x22fdd8: 0x8c830150  lw          $v1, 0x150($a0)
    ctx->pc = 0x22fdd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
label_22fddc:
    // 0x22fddc: 0x2462ffcf  addiu       $v0, $v1, -0x31
    ctx->pc = 0x22fddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967247));
label_22fde0:
    // 0x22fde0: 0x2c420007  sltiu       $v0, $v0, 0x7
    ctx->pc = 0x22fde0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_22fde4:
    // 0x22fde4: 0x104000ae  beqz        $v0, . + 4 + (0xAE << 2)
label_22fde8:
    if (ctx->pc == 0x22FDE8u) {
        ctx->pc = 0x22FDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FDE4u;
        // 0x22fde8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FDECu;
        goto label_22fdec;
    }
    ctx->pc = 0x22FDE4u;
    {
        const bool branch_taken_0x22fde4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FDE4u;
        // 0x22fde8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fde4) {
            ctx->pc = 0x2300A0u;
            goto label_2300a0;
        }
    }
    ctx->pc = 0x22FDECu;
label_22fdec:
    // 0x22fdec: 0x54c00011  bnel        $a2, $zero, . + 4 + (0x11 << 2)
label_22fdf0:
    if (ctx->pc == 0x22FDF0u) {
        ctx->pc = 0x22FDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FDECu;
        // 0x22fdf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FDF4u;
        goto label_22fdf4;
    }
    ctx->pc = 0x22FDECu;
    {
        const bool branch_taken_0x22fdec = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x22fdec) {
            ctx->pc = 0x22FDF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22FDECu;
            // 0x22fdf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22FE34u;
            goto label_22fe34;
        }
    }
    ctx->pc = 0x22FDF4u;
label_22fdf4:
    // 0x22fdf4: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x22fdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
label_22fdf8:
    // 0x22fdf8: 0x106200a9  beq         $v1, $v0, . + 4 + (0xA9 << 2)
label_22fdfc:
    if (ctx->pc == 0x22FDFCu) {
        ctx->pc = 0x22FDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FDF8u;
        // 0x22fdfc: 0x24020037  addiu       $v0, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FE00u;
        goto label_22fe00;
    }
    ctx->pc = 0x22FDF8u;
    {
        const bool branch_taken_0x22fdf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22FDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FDF8u;
        // 0x22fdfc: 0x24020037  addiu       $v0, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fdf8) {
            ctx->pc = 0x2300A0u;
            goto label_2300a0;
        }
    }
    ctx->pc = 0x22FE00u;
label_22fe00:
    // 0x22fe00: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
label_22fe04:
    if (ctx->pc == 0x22FE04u) {
        ctx->pc = 0x22FE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FE00u;
        // 0x22fe04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FE08u;
        goto label_22fe08;
    }
    ctx->pc = 0x22FE00u;
    {
        const bool branch_taken_0x22fe00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x22FE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FE00u;
        // 0x22fe04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fe00) {
            ctx->pc = 0x22FE28u;
            goto label_22fe28;
        }
    }
    ctx->pc = 0x22FE08u;
label_22fe08:
    // 0x22fe08: 0x8c8201e4  lw          $v0, 0x1E4($a0)
    ctx->pc = 0x22fe08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 484)));
label_22fe0c:
    // 0x22fe0c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x22fe0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_22fe10:
    // 0x22fe10: 0xc441001c  lwc1        $f1, 0x1C($v0)
    ctx->pc = 0x22fe10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22fe14:
    // 0x22fe14: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x22fe14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22fe18:
    // 0x22fe18: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22fe18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22fe1c:
    // 0x22fe1c: 0x0  nop
    ctx->pc = 0x22fe1cu;
    // NOP
label_22fe20:
    // 0x22fe20: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_22fe24:
    if (ctx->pc == 0x22FE24u) {
        ctx->pc = 0x22FE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FE20u;
        // 0x22fe24: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FE28u;
        goto label_22fe28;
    }
    ctx->pc = 0x22FE20u;
    {
        const bool branch_taken_0x22fe20 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22fe20) {
            ctx->pc = 0x22FE24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22FE20u;
            // 0x22fe24: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22FE28u;
            goto label_22fe28;
        }
    }
    ctx->pc = 0x22FE28u;
label_22fe28:
    // 0x22fe28: 0x54a0009e  bnel        $a1, $zero, . + 4 + (0x9E << 2)
label_22fe2c:
    if (ctx->pc == 0x22FE2Cu) {
        ctx->pc = 0x22FE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FE28u;
        // 0x22fe2c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FE30u;
        goto label_22fe30;
    }
    ctx->pc = 0x22FE28u;
    {
        const bool branch_taken_0x22fe28 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x22fe28) {
            ctx->pc = 0x22FE2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22FE28u;
            // 0x22fe2c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2300A4u;
            goto label_2300a4;
        }
    }
    ctx->pc = 0x22FE30u;
label_22fe30:
    // 0x22fe30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22fe30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22fe34:
    // 0x22fe34: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x22fe34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_22fe38:
    // 0x22fe38: 0xc08fed2  jal         func_23FB48
label_22fe3c:
    if (ctx->pc == 0x22FE3Cu) {
        ctx->pc = 0x22FE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FE38u;
        // 0x22fe3c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FE40u;
        goto label_22fe40;
    }
    ctx->pc = 0x22FE38u;
    SET_GPR_U32(ctx, 31, 0x22FE40u);
    ctx->pc = 0x22FE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FE38u;
    // 0x22fe3c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x22FE38u, 0x22FE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FE40u;
label_22fe40:
    // 0x22fe40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22fe40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22fe44:
    // 0x22fe44: 0x3c050002  lui         $a1, 0x2
    ctx->pc = 0x22fe44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
label_22fe48:
    // 0x22fe48: 0xc08fed2  jal         func_23FB48
label_22fe4c:
    if (ctx->pc == 0x22FE4Cu) {
        ctx->pc = 0x22FE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FE48u;
        // 0x22fe4c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FE50u;
        goto label_22fe50;
    }
    ctx->pc = 0x22FE48u;
    SET_GPR_U32(ctx, 31, 0x22FE50u);
    ctx->pc = 0x22FE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FE48u;
    // 0x22fe4c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x22FE48u, 0x22FE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FE50u;
label_22fe50:
    // 0x22fe50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22fe50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22fe54:
    // 0x22fe54: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x22fe54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
label_22fe58:
    // 0x22fe58: 0xc08fed2  jal         func_23FB48
label_22fe5c:
    if (ctx->pc == 0x22FE5Cu) {
        ctx->pc = 0x22FE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FE58u;
        // 0x22fe5c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FE60u;
        goto label_22fe60;
    }
    ctx->pc = 0x22FE58u;
    SET_GPR_U32(ctx, 31, 0x22FE60u);
    ctx->pc = 0x22FE5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FE58u;
    // 0x22fe5c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x22FE58u, 0x22FE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FE60u;
label_22fe60:
    // 0x22fe60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22fe60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22fe64:
    // 0x22fe64: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x22fe64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
label_22fe68:
    // 0x22fe68: 0xc08fed2  jal         func_23FB48
label_22fe6c:
    if (ctx->pc == 0x22FE6Cu) {
        ctx->pc = 0x22FE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FE68u;
        // 0x22fe6c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FE70u;
        goto label_22fe70;
    }
    ctx->pc = 0x22FE68u;
    SET_GPR_U32(ctx, 31, 0x22FE70u);
    ctx->pc = 0x22FE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FE68u;
    // 0x22fe6c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x22FE68u, 0x22FE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FE70u;
label_22fe70:
    // 0x22fe70: 0x12200023  beqz        $s1, . + 4 + (0x23 << 2)
label_22fe74:
    if (ctx->pc == 0x22FE74u) {
        ctx->pc = 0x22FE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FE70u;
        // 0x22fe74: 0x24020037  addiu       $v0, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FE78u;
        goto label_22fe78;
    }
    ctx->pc = 0x22FE70u;
    {
        const bool branch_taken_0x22fe70 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FE70u;
        // 0x22fe74: 0x24020037  addiu       $v0, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fe70) {
            ctx->pc = 0x22FF00u;
            goto label_22ff00;
        }
    }
    ctx->pc = 0x22FE78u;
label_22fe78:
    // 0x22fe78: 0x8e050334  lw          $a1, 0x334($s0)
    ctx->pc = 0x22fe78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_22fe7c:
    // 0x22fe7c: 0x8ca30150  lw          $v1, 0x150($a1)
    ctx->pc = 0x22fe7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 336)));
label_22fe80:
    // 0x22fe80: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_22fe84:
    if (ctx->pc == 0x22FE84u) {
        ctx->pc = 0x22FE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FE80u;
        // 0x22fe84: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FE88u;
        goto label_22fe88;
    }
    ctx->pc = 0x22FE80u;
    {
        const bool branch_taken_0x22fe80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22FE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FE80u;
        // 0x22fe84: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fe80) {
            ctx->pc = 0x22FEA0u;
            goto label_22fea0;
        }
    }
    ctx->pc = 0x22FE88u;
label_22fe88:
    // 0x22fe88: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x22fe88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_22fe8c:
    // 0x22fe8c: 0x240407a1  addiu       $a0, $zero, 0x7A1
    ctx->pc = 0x22fe8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1953));
label_22fe90:
    // 0x22fe90: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x22fe90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_22fe94:
    // 0x22fe94: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x22fe94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_22fe98:
    // 0x22fe98: 0x54640003  bnel        $v1, $a0, . + 4 + (0x3 << 2)
label_22fe9c:
    if (ctx->pc == 0x22FE9Cu) {
        ctx->pc = 0x22FE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FE98u;
        // 0x22fe9c: 0x8e030418  lw          $v1, 0x418($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1048)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FEA0u;
        goto label_22fea0;
    }
    ctx->pc = 0x22FE98u;
    {
        const bool branch_taken_0x22fe98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x22fe98) {
            ctx->pc = 0x22FE9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22FE98u;
            // 0x22fe9c: 0x8e030418  lw          $v1, 0x418($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1048)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22FEA8u;
            goto label_22fea8;
        }
    }
    ctx->pc = 0x22FEA0u;
label_22fea0:
    // 0x22fea0: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x22fea0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22fea4:
    // 0x22fea4: 0x8e030418  lw          $v1, 0x418($s0)
    ctx->pc = 0x22fea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1048)));
label_22fea8:
    // 0x22fea8: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x22fea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_22feac:
    // 0x22feac: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_22feb0:
    if (ctx->pc == 0x22FEB0u) {
        ctx->pc = 0x22FEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FEACu;
        // 0x22feb0: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FEB4u;
        goto label_22feb4;
    }
    ctx->pc = 0x22FEACu;
    {
        const bool branch_taken_0x22feac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x22FEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FEACu;
        // 0x22feb0: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22feac) {
            ctx->pc = 0x22FEC4u;
            goto label_22fec4;
        }
    }
    ctx->pc = 0x22FEB4u;
label_22feb4:
    // 0x22feb4: 0xc069c14  jal         func_1A7050
label_22feb8:
    if (ctx->pc == 0x22FEB8u) {
        ctx->pc = 0x22FEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FEB4u;
        // 0x22feb8: 0x24050799  addiu       $a1, $zero, 0x799 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1945));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FEBCu;
        goto label_22febc;
    }
    ctx->pc = 0x22FEB4u;
    SET_GPR_U32(ctx, 31, 0x22FEBCu);
    ctx->pc = 0x22FEB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FEB4u;
    // 0x22feb8: 0x24050799  addiu       $a1, $zero, 0x799 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1945));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7050u, 0x22FEB4u, 0x22FEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FEBCu;
label_22febc:
    // 0x22febc: 0x10000004  b           . + 4 + (0x4 << 2)
label_22fec0:
    if (ctx->pc == 0x22FEC0u) {
        ctx->pc = 0x22FEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FEBCu;
        // 0x22fec0: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FEC4u;
        goto label_22fec4;
    }
    ctx->pc = 0x22FEBCu;
    {
        const bool branch_taken_0x22febc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FEBCu;
        // 0x22fec0: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22febc) {
            ctx->pc = 0x22FED0u;
            goto label_22fed0;
        }
    }
    ctx->pc = 0x22FEC4u;
label_22fec4:
    // 0x22fec4: 0xc069c14  jal         func_1A7050
label_22fec8:
    if (ctx->pc == 0x22FEC8u) {
        ctx->pc = 0x22FEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FEC4u;
        // 0x22fec8: 0x24050796  addiu       $a1, $zero, 0x796 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1942));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FECCu;
        goto label_22fecc;
    }
    ctx->pc = 0x22FEC4u;
    SET_GPR_U32(ctx, 31, 0x22FECCu);
    ctx->pc = 0x22FEC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FEC4u;
    // 0x22fec8: 0x24050796  addiu       $a1, $zero, 0x796 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1942));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7050u, 0x22FEC4u, 0x22FECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FECCu;
label_22fecc:
    // 0x22fecc: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x22feccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_22fed0:
    // 0x22fed0: 0xc06a05e  jal         func_1A8178
label_22fed4:
    if (ctx->pc == 0x22FED4u) {
        ctx->pc = 0x22FED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FED0u;
        // 0x22fed4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FED8u;
        goto label_22fed8;
    }
    ctx->pc = 0x22FED0u;
    SET_GPR_U32(ctx, 31, 0x22FED8u);
    ctx->pc = 0x22FED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FED0u;
    // 0x22fed4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8178u, 0x22FED0u, 0x22FED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FED8u;
label_22fed8:
    // 0x22fed8: 0x8e040110  lw          $a0, 0x110($s0)
    ctx->pc = 0x22fed8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_22fedc:
    // 0x22fedc: 0xc0757d2  jal         func_1D5F48
label_22fee0:
    if (ctx->pc == 0x22FEE0u) {
        ctx->pc = 0x22FEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FEDCu;
        // 0x22fee0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FEE4u;
        goto label_22fee4;
    }
    ctx->pc = 0x22FEDCu;
    SET_GPR_U32(ctx, 31, 0x22FEE4u);
    ctx->pc = 0x22FEE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FEDCu;
    // 0x22fee0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5F48u, 0x22FEDCu, 0x22FEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FEE4u;
label_22fee4:
    // 0x22fee4: 0x56200046  bnel        $s1, $zero, . + 4 + (0x46 << 2)
label_22fee8:
    if (ctx->pc == 0x22FEE8u) {
        ctx->pc = 0x22FEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FEE4u;
        // 0x22fee8: 0x8e0200bc  lw          $v0, 0xBC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FEECu;
        goto label_22feec;
    }
    ctx->pc = 0x22FEE4u;
    {
        const bool branch_taken_0x22fee4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x22fee4) {
            ctx->pc = 0x22FEE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22FEE4u;
            // 0x22fee8: 0x8e0200bc  lw          $v0, 0xBC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x230000u;
            goto label_230000;
        }
    }
    ctx->pc = 0x22FEECu;
label_22feec:
    // 0x22feec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22feecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22fef0:
    // 0x22fef0: 0xc08bbf4  jal         func_22EFD0
label_22fef4:
    if (ctx->pc == 0x22FEF4u) {
        ctx->pc = 0x22FEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FEF0u;
        // 0x22fef4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FEF8u;
        goto label_22fef8;
    }
    ctx->pc = 0x22FEF0u;
    SET_GPR_U32(ctx, 31, 0x22FEF8u);
    ctx->pc = 0x22FEF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FEF0u;
    // 0x22fef4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EFD0u, 0x22FEF0u, 0x22FEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FEF8u;
label_22fef8:
    // 0x22fef8: 0x10000041  b           . + 4 + (0x41 << 2)
label_22fefc:
    if (ctx->pc == 0x22FEFCu) {
        ctx->pc = 0x22FEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FEF8u;
        // 0x22fefc: 0x8e0200bc  lw          $v0, 0xBC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FF00u;
        goto label_22ff00;
    }
    ctx->pc = 0x22FEF8u;
    {
        const bool branch_taken_0x22fef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FEF8u;
        // 0x22fefc: 0x8e0200bc  lw          $v0, 0xBC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fef8) {
            ctx->pc = 0x230000u;
            goto label_230000;
        }
    }
    ctx->pc = 0x22FF00u;
label_22ff00:
    // 0x22ff00: 0x8e020334  lw          $v0, 0x334($s0)
    ctx->pc = 0x22ff00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_22ff04:
    // 0x22ff04: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22ff04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22ff08:
    // 0x22ff08: 0x24040037  addiu       $a0, $zero, 0x37
    ctx->pc = 0x22ff08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
label_22ff0c:
    // 0x22ff0c: 0x8c430150  lw          $v1, 0x150($v0)
    ctx->pc = 0x22ff0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
label_22ff10:
    // 0x22ff10: 0x14640009  bne         $v1, $a0, . + 4 + (0x9 << 2)
label_22ff14:
    if (ctx->pc == 0x22FF14u) {
        ctx->pc = 0x22FF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FF10u;
        // 0x22ff14: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FF18u;
        goto label_22ff18;
    }
    ctx->pc = 0x22FF10u;
    {
        const bool branch_taken_0x22ff10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x22FF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FF10u;
        // 0x22ff14: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ff10) {
            ctx->pc = 0x22FF38u;
            goto label_22ff38;
        }
    }
    ctx->pc = 0x22FF18u;
label_22ff18:
    // 0x22ff18: 0x8ca201e4  lw          $v0, 0x1E4($a1)
    ctx->pc = 0x22ff18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 484)));
label_22ff1c:
    // 0x22ff1c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x22ff1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_22ff20:
    // 0x22ff20: 0xc441001c  lwc1        $f1, 0x1C($v0)
    ctx->pc = 0x22ff20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22ff24:
    // 0x22ff24: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x22ff24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22ff28:
    // 0x22ff28: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x22ff28u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22ff2c:
    // 0x22ff2c: 0x0  nop
    ctx->pc = 0x22ff2cu;
    // NOP
label_22ff30:
    // 0x22ff30: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_22ff34:
    if (ctx->pc == 0x22FF34u) {
        ctx->pc = 0x22FF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FF30u;
        // 0x22ff34: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FF38u;
        goto label_22ff38;
    }
    ctx->pc = 0x22FF30u;
    {
        const bool branch_taken_0x22ff30 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22ff30) {
            ctx->pc = 0x22FF34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22FF30u;
            // 0x22ff34: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22FF38u;
            goto label_22ff38;
        }
    }
    ctx->pc = 0x22FF38u;
label_22ff38:
    // 0x22ff38: 0x50c00021  beql        $a2, $zero, . + 4 + (0x21 << 2)
label_22ff3c:
    if (ctx->pc == 0x22FF3Cu) {
        ctx->pc = 0x22FF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FF38u;
        // 0x22ff3c: 0x8ca60150  lw          $a2, 0x150($a1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 336)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FF40u;
        goto label_22ff40;
    }
    ctx->pc = 0x22FF38u;
    {
        const bool branch_taken_0x22ff38 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ff38) {
            ctx->pc = 0x22FF3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22FF38u;
            // 0x22ff3c: 0x8ca60150  lw          $a2, 0x150($a1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 336)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22FFC0u;
            goto label_22ffc0;
        }
    }
    ctx->pc = 0x22FF40u;
label_22ff40:
    // 0x22ff40: 0xc069992  jal         func_1A6648
label_22ff44:
    if (ctx->pc == 0x22FF44u) {
        ctx->pc = 0x22FF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FF40u;
        // 0x22ff44: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FF48u;
        goto label_22ff48;
    }
    ctx->pc = 0x22FF40u;
    SET_GPR_U32(ctx, 31, 0x22FF48u);
    ctx->pc = 0x22FF44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FF40u;
    // 0x22ff44: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6648u, 0x22FF40u, 0x22FF48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FF48u;
label_22ff48:
    // 0x22ff48: 0xc06a328  jal         func_1A8CA0
label_22ff4c:
    if (ctx->pc == 0x22FF4Cu) {
        ctx->pc = 0x22FF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FF48u;
        // 0x22ff4c: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FF50u;
        goto label_22ff50;
    }
    ctx->pc = 0x22FF48u;
    SET_GPR_U32(ctx, 31, 0x22FF50u);
    ctx->pc = 0x22FF4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FF48u;
    // 0x22ff4c: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8CA0u, 0x22FF48u, 0x22FF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FF50u;
label_22ff50:
    // 0x22ff50: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x22ff50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_22ff54:
    // 0x22ff54: 0xc06a23e  jal         func_1A88F8
label_22ff58:
    if (ctx->pc == 0x22FF58u) {
        ctx->pc = 0x22FF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FF54u;
        // 0x22ff58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FF5Cu;
        goto label_22ff5c;
    }
    ctx->pc = 0x22FF54u;
    SET_GPR_U32(ctx, 31, 0x22FF5Cu);
    ctx->pc = 0x22FF58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FF54u;
    // 0x22ff58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A88F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A88F8u, 0x22FF54u, 0x22FF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FF5Cu;
label_22ff5c:
    // 0x22ff5c: 0x8e020338  lw          $v0, 0x338($s0)
    ctx->pc = 0x22ff5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
label_22ff60:
    // 0x22ff60: 0x8c430088  lw          $v1, 0x88($v0)
    ctx->pc = 0x22ff60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
label_22ff64:
    // 0x22ff64: 0x54600026  bnel        $v1, $zero, . + 4 + (0x26 << 2)
label_22ff68:
    if (ctx->pc == 0x22FF68u) {
        ctx->pc = 0x22FF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FF64u;
        // 0x22ff68: 0x8e0200bc  lw          $v0, 0xBC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FF6Cu;
        goto label_22ff6c;
    }
    ctx->pc = 0x22FF64u;
    {
        const bool branch_taken_0x22ff64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22ff64) {
            ctx->pc = 0x22FF68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22FF64u;
            // 0x22ff68: 0x8e0200bc  lw          $v0, 0xBC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x230000u;
            goto label_230000;
        }
    }
    ctx->pc = 0x22FF6Cu;
label_22ff6c:
    // 0x22ff6c: 0xc08da92  jal         func_236A48
label_22ff70:
    if (ctx->pc == 0x22FF70u) {
        ctx->pc = 0x22FF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FF6Cu;
        // 0x22ff70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FF74u;
        goto label_22ff74;
    }
    ctx->pc = 0x22FF6Cu;
    SET_GPR_U32(ctx, 31, 0x22FF74u);
    ctx->pc = 0x22FF70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FF6Cu;
    // 0x22ff70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236A48u, 0x22FF6Cu, 0x22FF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FF74u;
label_22ff74:
    // 0x22ff74: 0x54400022  bnel        $v0, $zero, . + 4 + (0x22 << 2)
label_22ff78:
    if (ctx->pc == 0x22FF78u) {
        ctx->pc = 0x22FF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FF74u;
        // 0x22ff78: 0x8e0200bc  lw          $v0, 0xBC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FF7Cu;
        goto label_22ff7c;
    }
    ctx->pc = 0x22FF74u;
    {
        const bool branch_taken_0x22ff74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22ff74) {
            ctx->pc = 0x22FF78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22FF74u;
            // 0x22ff78: 0x8e0200bc  lw          $v0, 0xBC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x230000u;
            goto label_230000;
        }
    }
    ctx->pc = 0x22FF7Cu;
label_22ff7c:
    // 0x22ff7c: 0xc0899bc  jal         func_2266F0
label_22ff80:
    if (ctx->pc == 0x22FF80u) {
        ctx->pc = 0x22FF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FF7Cu;
        // 0x22ff80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FF84u;
        goto label_22ff84;
    }
    ctx->pc = 0x22FF7Cu;
    SET_GPR_U32(ctx, 31, 0x22FF84u);
    ctx->pc = 0x22FF80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FF7Cu;
    // 0x22ff80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x22FF7Cu, 0x22FF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FF84u;
label_22ff84:
    // 0x22ff84: 0xc097f26  jal         func_25FC98
label_22ff88:
    if (ctx->pc == 0x22FF88u) {
        ctx->pc = 0x22FF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FF84u;
        // 0x22ff88: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FF8Cu;
        goto label_22ff8c;
    }
    ctx->pc = 0x22FF84u;
    SET_GPR_U32(ctx, 31, 0x22FF8Cu);
    ctx->pc = 0x22FF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FF84u;
    // 0x22ff88: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x22FF84u, 0x22FF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FF8Cu;
label_22ff8c:
    // 0x22ff8c: 0x2403006e  addiu       $v1, $zero, 0x6E
    ctx->pc = 0x22ff8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
label_22ff90:
    // 0x22ff90: 0x5043001b  beql        $v0, $v1, . + 4 + (0x1B << 2)
label_22ff94:
    if (ctx->pc == 0x22FF94u) {
        ctx->pc = 0x22FF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FF90u;
        // 0x22ff94: 0x8e0200bc  lw          $v0, 0xBC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FF98u;
        goto label_22ff98;
    }
    ctx->pc = 0x22FF90u;
    {
        const bool branch_taken_0x22ff90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x22ff90) {
            ctx->pc = 0x22FF94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22FF90u;
            // 0x22ff94: 0x8e0200bc  lw          $v0, 0xBC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x230000u;
            goto label_230000;
        }
    }
    ctx->pc = 0x22FF98u;
label_22ff98:
    // 0x22ff98: 0xc06b88a  jal         func_1AE228
label_22ff9c:
    if (ctx->pc == 0x22FF9Cu) {
        ctx->pc = 0x22FF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FF98u;
        // 0x22ff9c: 0x8e040338  lw          $a0, 0x338($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FFA0u;
        goto label_22ffa0;
    }
    ctx->pc = 0x22FF98u;
    SET_GPR_U32(ctx, 31, 0x22FFA0u);
    ctx->pc = 0x22FF9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FF98u;
    // 0x22ff9c: 0x8e040338  lw          $a0, 0x338($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE228u, 0x22FF98u, 0x22FFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FFA0u;
label_22ffa0:
    // 0x22ffa0: 0x8e030338  lw          $v1, 0x338($s0)
    ctx->pc = 0x22ffa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
label_22ffa4:
    // 0x22ffa4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22ffa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22ffa8:
    // 0x22ffa8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22ffa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22ffac:
    // 0x22ffac: 0xac6200b0  sw          $v0, 0xB0($v1)
    ctx->pc = 0x22ffacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 176), GPR_U32(ctx, 2));
label_22ffb0:
    // 0x22ffb0: 0xc06c546  jal         func_1B1518
label_22ffb4:
    if (ctx->pc == 0x22FFB4u) {
        ctx->pc = 0x22FFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FFB0u;
        // 0x22ffb4: 0x8e040338  lw          $a0, 0x338($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FFB8u;
        goto label_22ffb8;
    }
    ctx->pc = 0x22FFB0u;
    SET_GPR_U32(ctx, 31, 0x22FFB8u);
    ctx->pc = 0x22FFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FFB0u;
    // 0x22ffb4: 0x8e040338  lw          $a0, 0x338($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1518u, 0x22FFB0u, 0x22FFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FFB8u;
label_22ffb8:
    // 0x22ffb8: 0x10000011  b           . + 4 + (0x11 << 2)
label_22ffbc:
    if (ctx->pc == 0x22FFBCu) {
        ctx->pc = 0x22FFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FFB8u;
        // 0x22ffbc: 0x8e0200bc  lw          $v0, 0xBC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FFC0u;
        goto label_22ffc0;
    }
    ctx->pc = 0x22FFB8u;
    {
        const bool branch_taken_0x22ffb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FFB8u;
        // 0x22ffbc: 0x8e0200bc  lw          $v0, 0xBC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ffb8) {
            ctx->pc = 0x230000u;
            goto label_230000;
        }
    }
    ctx->pc = 0x22FFC0u;
label_22ffc0:
    // 0x22ffc0: 0x240207a1  addiu       $v0, $zero, 0x7A1
    ctx->pc = 0x22ffc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1953));
label_22ffc4:
    // 0x22ffc4: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x22ffc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_22ffc8:
    // 0x22ffc8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x22ffc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_22ffcc:
    // 0x22ffcc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x22ffccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_22ffd0:
    // 0x22ffd0: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
label_22ffd4:
    if (ctx->pc == 0x22FFD4u) {
        ctx->pc = 0x22FFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FFD0u;
        // 0x22ffd4: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FFD8u;
        goto label_22ffd8;
    }
    ctx->pc = 0x22FFD0u;
    {
        const bool branch_taken_0x22ffd0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x22FFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FFD0u;
        // 0x22ffd4: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ffd0) {
            ctx->pc = 0x22FFF0u;
            goto label_22fff0;
        }
    }
    ctx->pc = 0x22FFD8u;
label_22ffd8:
    // 0x22ffd8: 0x8e030418  lw          $v1, 0x418($s0)
    ctx->pc = 0x22ffd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1048)));
label_22ffdc:
    // 0x22ffdc: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
label_22ffe0:
    if (ctx->pc == 0x22FFE0u) {
        ctx->pc = 0x22FFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FFDCu;
        // 0x22ffe0: 0x8e0200bc  lw          $v0, 0xBC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FFE4u;
        goto label_22ffe4;
    }
    ctx->pc = 0x22FFDCu;
    {
        const bool branch_taken_0x22ffdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x22ffdc) {
            ctx->pc = 0x22FFE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22FFDCu;
            // 0x22ffe0: 0x8e0200bc  lw          $v0, 0xBC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x230000u;
            goto label_230000;
        }
    }
    ctx->pc = 0x22FFE4u;
label_22ffe4:
    // 0x22ffe4: 0x24020037  addiu       $v0, $zero, 0x37
    ctx->pc = 0x22ffe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
label_22ffe8:
    // 0x22ffe8: 0x54c20005  bnel        $a2, $v0, . + 4 + (0x5 << 2)
label_22ffec:
    if (ctx->pc == 0x22FFECu) {
        ctx->pc = 0x22FFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FFE8u;
        // 0x22ffec: 0x8e0200bc  lw          $v0, 0xBC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FFF0u;
        goto label_22fff0;
    }
    ctx->pc = 0x22FFE8u;
    {
        const bool branch_taken_0x22ffe8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x22ffe8) {
            ctx->pc = 0x22FFECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22FFE8u;
            // 0x22ffec: 0x8e0200bc  lw          $v0, 0xBC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x230000u;
            goto label_230000;
        }
    }
    ctx->pc = 0x22FFF0u;
label_22fff0:
    // 0x22fff0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x22fff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_22fff4:
    // 0x22fff4: 0xc069c14  jal         func_1A7050
label_22fff8:
    if (ctx->pc == 0x22FFF8u) {
        ctx->pc = 0x22FFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FFF4u;
        // 0x22fff8: 0x2405079a  addiu       $a1, $zero, 0x79A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1946));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FFFCu;
        goto label_22fffc;
    }
    ctx->pc = 0x22FFF4u;
    SET_GPR_U32(ctx, 31, 0x22FFFCu);
    ctx->pc = 0x22FFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FFF4u;
    // 0x22fff8: 0x2405079a  addiu       $a1, $zero, 0x79A (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1946));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7050u, 0x22FFF4u, 0x22FFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FFFCu;
label_22fffc:
    // 0x22fffc: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x22fffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_230000:
    // 0x230000: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x230000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_230004:
    // 0x230004: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_230008:
    if (ctx->pc == 0x230008u) {
        ctx->pc = 0x230008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230004u;
        // 0x230008: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23000Cu;
        goto label_23000c;
    }
    ctx->pc = 0x230004u;
    {
        const bool branch_taken_0x230004 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x230008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230004u;
        // 0x230008: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230004) {
            ctx->pc = 0x23001Cu;
            goto label_23001c;
        }
    }
    ctx->pc = 0x23000Cu;
label_23000c:
    // 0x23000c: 0xc08bd96  jal         func_22F658
label_230010:
    if (ctx->pc == 0x230010u) {
        ctx->pc = 0x230010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23000Cu;
        // 0x230010: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230014u;
        goto label_230014;
    }
    ctx->pc = 0x23000Cu;
    SET_GPR_U32(ctx, 31, 0x230014u);
    ctx->pc = 0x230010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23000Cu;
    // 0x230010: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F658u, 0x23000Cu, 0x230014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230014u;
label_230014:
    // 0x230014: 0x10000004  b           . + 4 + (0x4 << 2)
label_230018:
    if (ctx->pc == 0x230018u) {
        ctx->pc = 0x230018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230014u;
        // 0x230018: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23001Cu;
        goto label_23001c;
    }
    ctx->pc = 0x230014u;
    {
        const bool branch_taken_0x230014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230014u;
        // 0x230018: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230014) {
            ctx->pc = 0x230028u;
            goto label_230028;
        }
    }
    ctx->pc = 0x23001Cu;
label_23001c:
    // 0x23001c: 0xc08bd96  jal         func_22F658
label_230020:
    if (ctx->pc == 0x230020u) {
        ctx->pc = 0x230020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23001Cu;
        // 0x230020: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230024u;
        goto label_230024;
    }
    ctx->pc = 0x23001Cu;
    SET_GPR_U32(ctx, 31, 0x230024u);
    ctx->pc = 0x230020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23001Cu;
    // 0x230020: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F658u, 0x23001Cu, 0x230024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230024u;
label_230024:
    // 0x230024: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x230024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_230028:
    // 0x230028: 0x24054000  addiu       $a1, $zero, 0x4000
    ctx->pc = 0x230028u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
label_23002c:
    // 0x23002c: 0xc08fed2  jal         func_23FB48
label_230030:
    if (ctx->pc == 0x230030u) {
        ctx->pc = 0x230030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23002Cu;
        // 0x230030: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230034u;
        goto label_230034;
    }
    ctx->pc = 0x23002Cu;
    SET_GPR_U32(ctx, 31, 0x230034u);
    ctx->pc = 0x230030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23002Cu;
    // 0x230030: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x23002Cu, 0x230034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230034u;
label_230034:
    // 0x230034: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x230034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_230038:
    // 0x230038: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x230038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_23003c:
    // 0x23003c: 0xc08fed2  jal         func_23FB48
label_230040:
    if (ctx->pc == 0x230040u) {
        ctx->pc = 0x230040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23003Cu;
        // 0x230040: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230044u;
        goto label_230044;
    }
    ctx->pc = 0x23003Cu;
    SET_GPR_U32(ctx, 31, 0x230044u);
    ctx->pc = 0x230040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23003Cu;
    // 0x230040: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x23003Cu, 0x230044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230044u;
label_230044:
    // 0x230044: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x230044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_230048:
    // 0x230048: 0x24050400  addiu       $a1, $zero, 0x400
    ctx->pc = 0x230048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_23004c:
    // 0x23004c: 0xc08fed2  jal         func_23FB48
label_230050:
    if (ctx->pc == 0x230050u) {
        ctx->pc = 0x230050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23004Cu;
        // 0x230050: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230054u;
        goto label_230054;
    }
    ctx->pc = 0x23004Cu;
    SET_GPR_U32(ctx, 31, 0x230054u);
    ctx->pc = 0x230050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23004Cu;
    // 0x230050: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x23004Cu, 0x230054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230054u;
label_230054:
    // 0x230054: 0x8e020218  lw          $v0, 0x218($s0)
    ctx->pc = 0x230054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_230058:
    // 0x230058: 0x8c4301cc  lw          $v1, 0x1CC($v0)
    ctx->pc = 0x230058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 460)));
label_23005c:
    // 0x23005c: 0x60f809  jalr        $v1
label_230060:
    if (ctx->pc == 0x230060u) {
        ctx->pc = 0x230060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23005Cu;
        // 0x230060: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230064u;
        goto label_230064;
    }
    ctx->pc = 0x23005Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x230064u);
        ctx->pc = 0x230060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23005Cu;
        // 0x230060: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23005Cu, 0x230064u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x230064u;
label_230064:
    // 0x230064: 0x8e0206a0  lw          $v0, 0x6A0($s0)
    ctx->pc = 0x230064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1696)));
label_230068:
    // 0x230068: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
label_23006c:
    if (ctx->pc == 0x23006Cu) {
        ctx->pc = 0x23006Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230068u;
        // 0x23006c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230070u;
        goto label_230070;
    }
    ctx->pc = 0x230068u;
    {
        const bool branch_taken_0x230068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x230068) {
            ctx->pc = 0x23006Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x230068u;
            // 0x23006c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2300A4u;
            goto label_2300a4;
        }
    }
    ctx->pc = 0x230070u;
label_230070:
    // 0x230070: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x230070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_230074:
    // 0x230074: 0xc06974a  jal         func_1A5D28
label_230078:
    if (ctx->pc == 0x230078u) {
        ctx->pc = 0x230078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230074u;
        // 0x230078: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23007Cu;
        goto label_23007c;
    }
    ctx->pc = 0x230074u;
    SET_GPR_U32(ctx, 31, 0x23007Cu);
    ctx->pc = 0x230078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230074u;
    // 0x230078: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5D28u, 0x230074u, 0x23007Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23007Cu;
label_23007c:
    // 0x23007c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23007cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_230080:
    // 0x230080: 0xc08bbf4  jal         func_22EFD0
label_230084:
    if (ctx->pc == 0x230084u) {
        ctx->pc = 0x230084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230080u;
        // 0x230084: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230088u;
        goto label_230088;
    }
    ctx->pc = 0x230080u;
    SET_GPR_U32(ctx, 31, 0x230088u);
    ctx->pc = 0x230084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230080u;
    // 0x230084: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EFD0u, 0x230080u, 0x230088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230088u;
label_230088:
    // 0x230088: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x230088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_23008c:
    // 0x23008c: 0xc06a05e  jal         func_1A8178
label_230090:
    if (ctx->pc == 0x230090u) {
        ctx->pc = 0x230090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23008Cu;
        // 0x230090: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230094u;
        goto label_230094;
    }
    ctx->pc = 0x23008Cu;
    SET_GPR_U32(ctx, 31, 0x230094u);
    ctx->pc = 0x230090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23008Cu;
    // 0x230090: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8178u, 0x23008Cu, 0x230094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230094u;
label_230094:
    // 0x230094: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x230094u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_230098:
    // 0x230098: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x230098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23009c:
    // 0x23009c: 0xa062bb00  sb          $v0, -0x4500($v1)
    ctx->pc = 0x23009cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294949632), (uint8_t)GPR_U32(ctx, 2));
label_2300a0:
    // 0x2300a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2300a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2300a4:
    // 0x2300a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2300a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2300a8:
    // 0x2300a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2300a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2300ac:
    // 0x2300ac: 0x3e00008  jr          $ra
label_2300b0:
    if (ctx->pc == 0x2300B0u) {
        ctx->pc = 0x2300B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2300ACu;
        // 0x2300b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2300B4u;
        goto label_2300b4;
    }
    ctx->pc = 0x2300ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2300B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2300ACu;
        // 0x2300b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2300ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2300B4u;
label_2300b4:
    // 0x2300b4: 0x0  nop
    ctx->pc = 0x2300b4u;
    // NOP
    ctx->pc = 0x2300b8u;
}
