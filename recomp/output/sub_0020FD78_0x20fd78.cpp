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

// Function: sub_0020FD78
// Address: 0x20fd78 - 0x20fea8
void sub_0020FD78_0x20fd78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020FD78_0x20fd78");
#endif

    switch (ctx->pc) {
        case 0x20fd78u: goto label_20fd78;
        case 0x20fd7cu: goto label_20fd7c;
        case 0x20fd80u: goto label_20fd80;
        case 0x20fd84u: goto label_20fd84;
        case 0x20fd88u: goto label_20fd88;
        case 0x20fd8cu: goto label_20fd8c;
        case 0x20fd90u: goto label_20fd90;
        case 0x20fd94u: goto label_20fd94;
        case 0x20fd98u: goto label_20fd98;
        case 0x20fd9cu: goto label_20fd9c;
        case 0x20fda0u: goto label_20fda0;
        case 0x20fda4u: goto label_20fda4;
        case 0x20fda8u: goto label_20fda8;
        case 0x20fdacu: goto label_20fdac;
        case 0x20fdb0u: goto label_20fdb0;
        case 0x20fdb4u: goto label_20fdb4;
        case 0x20fdb8u: goto label_20fdb8;
        case 0x20fdbcu: goto label_20fdbc;
        case 0x20fdc0u: goto label_20fdc0;
        case 0x20fdc4u: goto label_20fdc4;
        case 0x20fdc8u: goto label_20fdc8;
        case 0x20fdccu: goto label_20fdcc;
        case 0x20fdd0u: goto label_20fdd0;
        case 0x20fdd4u: goto label_20fdd4;
        case 0x20fdd8u: goto label_20fdd8;
        case 0x20fddcu: goto label_20fddc;
        case 0x20fde0u: goto label_20fde0;
        case 0x20fde4u: goto label_20fde4;
        case 0x20fde8u: goto label_20fde8;
        case 0x20fdecu: goto label_20fdec;
        case 0x20fdf0u: goto label_20fdf0;
        case 0x20fdf4u: goto label_20fdf4;
        case 0x20fdf8u: goto label_20fdf8;
        case 0x20fdfcu: goto label_20fdfc;
        case 0x20fe00u: goto label_20fe00;
        case 0x20fe04u: goto label_20fe04;
        case 0x20fe08u: goto label_20fe08;
        case 0x20fe0cu: goto label_20fe0c;
        case 0x20fe10u: goto label_20fe10;
        case 0x20fe14u: goto label_20fe14;
        case 0x20fe18u: goto label_20fe18;
        case 0x20fe1cu: goto label_20fe1c;
        case 0x20fe20u: goto label_20fe20;
        case 0x20fe24u: goto label_20fe24;
        case 0x20fe28u: goto label_20fe28;
        case 0x20fe2cu: goto label_20fe2c;
        case 0x20fe30u: goto label_20fe30;
        case 0x20fe34u: goto label_20fe34;
        case 0x20fe38u: goto label_20fe38;
        case 0x20fe3cu: goto label_20fe3c;
        case 0x20fe40u: goto label_20fe40;
        case 0x20fe44u: goto label_20fe44;
        case 0x20fe48u: goto label_20fe48;
        case 0x20fe4cu: goto label_20fe4c;
        case 0x20fe50u: goto label_20fe50;
        case 0x20fe54u: goto label_20fe54;
        case 0x20fe58u: goto label_20fe58;
        case 0x20fe5cu: goto label_20fe5c;
        case 0x20fe60u: goto label_20fe60;
        case 0x20fe64u: goto label_20fe64;
        case 0x20fe68u: goto label_20fe68;
        case 0x20fe6cu: goto label_20fe6c;
        case 0x20fe70u: goto label_20fe70;
        case 0x20fe74u: goto label_20fe74;
        case 0x20fe78u: goto label_20fe78;
        case 0x20fe7cu: goto label_20fe7c;
        case 0x20fe80u: goto label_20fe80;
        case 0x20fe84u: goto label_20fe84;
        case 0x20fe88u: goto label_20fe88;
        case 0x20fe8cu: goto label_20fe8c;
        case 0x20fe90u: goto label_20fe90;
        case 0x20fe94u: goto label_20fe94;
        case 0x20fe98u: goto label_20fe98;
        case 0x20fe9cu: goto label_20fe9c;
        case 0x20fea0u: goto label_20fea0;
        case 0x20fea4u: goto label_20fea4;
        default: break;
    }

    ctx->pc = 0x20fd78u;

label_20fd78:
    // 0x20fd78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20fd78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_20fd7c:
    // 0x20fd7c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x20fd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_20fd80:
    // 0x20fd80: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20fd80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_20fd84:
    // 0x20fd84: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x20fd84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_20fd88:
    // 0x20fd88: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20fd88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20fd8c:
    // 0x20fd8c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x20fd8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_20fd90:
    // 0x20fd90: 0x8c4415b0  lw          $a0, 0x15B0($v0)
    ctx->pc = 0x20fd90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5552)));
label_20fd94:
    // 0x20fd94: 0x92030114  lbu         $v1, 0x114($s0)
    ctx->pc = 0x20fd94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 276)));
label_20fd98:
    // 0x20fd98: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x20fd98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_20fd9c:
    // 0x20fd9c: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x20fd9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_20fda0:
    // 0x20fda0: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x20fda0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_20fda4:
    // 0x20fda4: 0x1440003a  bnez        $v0, . + 4 + (0x3A << 2)
label_20fda8:
    if (ctx->pc == 0x20FDA8u) {
        ctx->pc = 0x20FDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FDA4u;
        // 0x20fda8: 0xa2030114  sb          $v1, 0x114($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 276), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FDACu;
        goto label_20fdac;
    }
    ctx->pc = 0x20FDA4u;
    {
        const bool branch_taken_0x20fda4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20FDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FDA4u;
        // 0x20fda8: 0xa2030114  sb          $v1, 0x114($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 276), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fda4) {
            ctx->pc = 0x20FE90u;
            goto label_20fe90;
        }
    }
    ctx->pc = 0x20FDACu;
label_20fdac:
    // 0x20fdac: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x20fdacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_20fdb0:
    // 0x20fdb0: 0x92030115  lbu         $v1, 0x115($s0)
    ctx->pc = 0x20fdb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 277)));
label_20fdb4:
    // 0x20fdb4: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x20fdb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
label_20fdb8:
    // 0x20fdb8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x20fdb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_20fdbc:
    // 0x20fdbc: 0xae0200c0  sw          $v0, 0xC0($s0)
    ctx->pc = 0x20fdbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 2));
label_20fdc0:
    // 0x20fdc0: 0xc0797fe  jal         func_1E5FF8
label_20fdc4:
    if (ctx->pc == 0x20FDC4u) {
        ctx->pc = 0x20FDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FDC0u;
        // 0x20fdc4: 0xa2030115  sb          $v1, 0x115($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 277), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FDC8u;
        goto label_20fdc8;
    }
    ctx->pc = 0x20FDC0u;
    SET_GPR_U32(ctx, 31, 0x20FDC8u);
    ctx->pc = 0x20FDC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FDC0u;
    // 0x20fdc4: 0xa2030115  sb          $v1, 0x115($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 277), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E5FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5FF8u, 0x20FDC0u, 0x20FDC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FDC8u;
label_20fdc8:
    // 0x20fdc8: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_20fdcc:
    if (ctx->pc == 0x20FDCCu) {
        ctx->pc = 0x20FDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FDC8u;
        // 0x20fdcc: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FDD0u;
        goto label_20fdd0;
    }
    ctx->pc = 0x20FDC8u;
    {
        const bool branch_taken_0x20fdc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FDC8u;
        // 0x20fdcc: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fdc8) {
            ctx->pc = 0x20FE4Cu;
            goto label_20fe4c;
        }
    }
    ctx->pc = 0x20FDD0u;
label_20fdd0:
    // 0x20fdd0: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x20fdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_20fdd4:
    // 0x20fdd4: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x20fdd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_20fdd8:
    // 0x20fdd8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x20fdd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_20fddc:
    // 0x20fddc: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x20fddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_20fde0:
    // 0x20fde0: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x20fde0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_20fde4:
    // 0x20fde4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_20fde8:
    if (ctx->pc == 0x20FDE8u) {
        ctx->pc = 0x20FDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FDE4u;
        // 0x20fde8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FDECu;
        goto label_20fdec;
    }
    ctx->pc = 0x20FDE4u;
    {
        const bool branch_taken_0x20fde4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20FDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FDE4u;
        // 0x20fde8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fde4) {
            ctx->pc = 0x20FE04u;
            goto label_20fe04;
        }
    }
    ctx->pc = 0x20FDECu;
label_20fdec:
    // 0x20fdec: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x20fdecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_20fdf0:
    // 0x20fdf0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_20fdf4:
    if (ctx->pc == 0x20FDF4u) {
        ctx->pc = 0x20FDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FDF0u;
        // 0x20fdf4: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FDF8u;
        goto label_20fdf8;
    }
    ctx->pc = 0x20FDF0u;
    {
        const bool branch_taken_0x20fdf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x20FDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FDF0u;
        // 0x20fdf4: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fdf0) {
            ctx->pc = 0x20FE00u;
            goto label_20fe00;
        }
    }
    ctx->pc = 0x20FDF8u;
label_20fdf8:
    // 0x20fdf8: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_20fdfc:
    if (ctx->pc == 0x20FDFCu) {
        ctx->pc = 0x20FDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FDF8u;
        // 0x20fdfc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FE00u;
        goto label_20fe00;
    }
    ctx->pc = 0x20FDF8u;
    {
        const bool branch_taken_0x20fdf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x20FDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FDF8u;
        // 0x20fdfc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fdf8) {
            ctx->pc = 0x20FE04u;
            goto label_20fe04;
        }
    }
    ctx->pc = 0x20FE00u;
label_20fe00:
    // 0x20fe00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20fe00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20fe04:
    // 0x20fe04: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20fe04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_20fe08:
    // 0x20fe08: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_20fe0c:
    if (ctx->pc == 0x20FE0Cu) {
        ctx->pc = 0x20FE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FE08u;
        // 0x20fe0c: 0x3c110040  lui         $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FE10u;
        goto label_20fe10;
    }
    ctx->pc = 0x20FE08u;
    {
        const bool branch_taken_0x20fe08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FE08u;
        // 0x20fe0c: 0x3c110040  lui         $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fe08) {
            ctx->pc = 0x20FE48u;
            goto label_20fe48;
        }
    }
    ctx->pc = 0x20FE10u;
label_20fe10:
    // 0x20fe10: 0x8e2291e4  lw          $v0, -0x6E1C($s1)
    ctx->pc = 0x20fe10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294939108)));
label_20fe14:
    // 0x20fe14: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_20fe18:
    if (ctx->pc == 0x20FE18u) {
        ctx->pc = 0x20FE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FE14u;
        // 0x20fe18: 0x8e04010c  lw          $a0, 0x10C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FE1Cu;
        goto label_20fe1c;
    }
    ctx->pc = 0x20FE14u;
    {
        const bool branch_taken_0x20fe14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20fe14) {
            ctx->pc = 0x20FE18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20FE14u;
            // 0x20fe18: 0x8e04010c  lw          $a0, 0x10C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20FE30u;
            goto label_20fe30;
        }
    }
    ctx->pc = 0x20FE1Cu;
label_20fe1c:
    // 0x20fe1c: 0xc0796d4  jal         func_1E5B50
label_20fe20:
    if (ctx->pc == 0x20FE20u) {
        ctx->pc = 0x20FE24u;
        goto label_20fe24;
    }
    ctx->pc = 0x20FE1Cu;
    SET_GPR_U32(ctx, 31, 0x20FE24u);
    ctx->pc = 0x1E5B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5B50u, 0x20FE1Cu, 0x20FE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FE24u;
label_20fe24:
    // 0x20fe24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20fe24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20fe28:
    // 0x20fe28: 0xae2291e4  sw          $v0, -0x6E1C($s1)
    ctx->pc = 0x20fe28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294939108), GPR_U32(ctx, 2));
label_20fe2c:
    // 0x20fe2c: 0x8e04010c  lw          $a0, 0x10C($s0)
    ctx->pc = 0x20fe2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_20fe30:
    // 0x20fe30: 0x3c050049  lui         $a1, 0x49
    ctx->pc = 0x20fe30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)73 << 16));
label_20fe34:
    // 0x20fe34: 0x24a501d0  addiu       $a1, $a1, 0x1D0
    ctx->pc = 0x20fe34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 464));
label_20fe38:
    // 0x20fe38: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x20fe38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_20fe3c:
    // 0x20fe3c: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x20fe3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_20fe40:
    // 0x20fe40: 0x40f809  jalr        $v0
label_20fe44:
    if (ctx->pc == 0x20FE44u) {
        ctx->pc = 0x20FE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FE40u;
        // 0x20fe44: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FE48u;
        goto label_20fe48;
    }
    ctx->pc = 0x20FE40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20FE48u);
        ctx->pc = 0x20FE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FE40u;
        // 0x20fe44: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20FE40u, 0x20FE48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20FE48u;
label_20fe48:
    // 0x20fe48: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x20fe48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_20fe4c:
    // 0x20fe4c: 0x92030115  lbu         $v1, 0x115($s0)
    ctx->pc = 0x20fe4cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 277)));
label_20fe50:
    // 0x20fe50: 0x8c4415b4  lw          $a0, 0x15B4($v0)
    ctx->pc = 0x20fe50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5556)));
label_20fe54:
    // 0x20fe54: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x20fe54u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_20fe58:
    // 0x20fe58: 0x5460000e  bnel        $v1, $zero, . + 4 + (0xE << 2)
label_20fe5c:
    if (ctx->pc == 0x20FE5Cu) {
        ctx->pc = 0x20FE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FE58u;
        // 0x20fe5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FE60u;
        goto label_20fe60;
    }
    ctx->pc = 0x20FE58u;
    {
        const bool branch_taken_0x20fe58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x20fe58) {
            ctx->pc = 0x20FE5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20FE58u;
            // 0x20fe5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20FE94u;
            goto label_20fe94;
        }
    }
    ctx->pc = 0x20FE60u;
label_20fe60:
    // 0x20fe60: 0x8e04010c  lw          $a0, 0x10C($s0)
    ctx->pc = 0x20fe60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_20fe64:
    // 0x20fe64: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x20fe64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_20fe68:
    // 0x20fe68: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x20fe68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_20fe6c:
    // 0x20fe6c: 0x40f809  jalr        $v0
label_20fe70:
    if (ctx->pc == 0x20FE70u) {
        ctx->pc = 0x20FE74u;
        goto label_20fe74;
    }
    ctx->pc = 0x20FE6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20FE74u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20FE6Cu, 0x20FE74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20FE74u;
label_20fe74:
    // 0x20fe74: 0x8e0300c0  lw          $v1, 0xC0($s0)
    ctx->pc = 0x20fe74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_20fe78:
    // 0x20fe78: 0x2402efff  addiu       $v0, $zero, -0x1001
    ctx->pc = 0x20fe78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
label_20fe7c:
    // 0x20fe7c: 0xa2000115  sb          $zero, 0x115($s0)
    ctx->pc = 0x20fe7cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 277), (uint8_t)GPR_U32(ctx, 0));
label_20fe80:
    // 0x20fe80: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x20fe80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_20fe84:
    // 0x20fe84: 0xae0300c0  sw          $v1, 0xC0($s0)
    ctx->pc = 0x20fe84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 3));
label_20fe88:
    // 0x20fe88: 0x10000002  b           . + 4 + (0x2 << 2)
label_20fe8c:
    if (ctx->pc == 0x20FE8Cu) {
        ctx->pc = 0x20FE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FE88u;
        // 0x20fe8c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FE90u;
        goto label_20fe90;
    }
    ctx->pc = 0x20FE88u;
    {
        const bool branch_taken_0x20fe88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FE88u;
        // 0x20fe8c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fe88) {
            ctx->pc = 0x20FE94u;
            goto label_20fe94;
        }
    }
    ctx->pc = 0x20FE90u;
label_20fe90:
    // 0x20fe90: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x20fe90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20fe94:
    // 0x20fe94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20fe94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20fe98:
    // 0x20fe98: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20fe98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_20fe9c:
    // 0x20fe9c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20fe9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_20fea0:
    // 0x20fea0: 0x3e00008  jr          $ra
label_20fea4:
    if (ctx->pc == 0x20FEA4u) {
        ctx->pc = 0x20FEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FEA0u;
        // 0x20fea4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FEA8u;
        goto label_fallthrough_0x20fea0;
    }
    ctx->pc = 0x20FEA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20FEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FEA0u;
        // 0x20fea4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20FEA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x20fea0:
    ctx->pc = 0x20FEA8u;
}
