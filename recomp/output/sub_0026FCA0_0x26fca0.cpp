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

// Function: sub_0026FCA0
// Address: 0x26fca0 - 0x26fe18
void sub_0026FCA0_0x26fca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026FCA0_0x26fca0");
#endif

    switch (ctx->pc) {
        case 0x26fca0u: goto label_26fca0;
        case 0x26fca4u: goto label_26fca4;
        case 0x26fca8u: goto label_26fca8;
        case 0x26fcacu: goto label_26fcac;
        case 0x26fcb0u: goto label_26fcb0;
        case 0x26fcb4u: goto label_26fcb4;
        case 0x26fcb8u: goto label_26fcb8;
        case 0x26fcbcu: goto label_26fcbc;
        case 0x26fcc0u: goto label_26fcc0;
        case 0x26fcc4u: goto label_26fcc4;
        case 0x26fcc8u: goto label_26fcc8;
        case 0x26fcccu: goto label_26fccc;
        case 0x26fcd0u: goto label_26fcd0;
        case 0x26fcd4u: goto label_26fcd4;
        case 0x26fcd8u: goto label_26fcd8;
        case 0x26fcdcu: goto label_26fcdc;
        case 0x26fce0u: goto label_26fce0;
        case 0x26fce4u: goto label_26fce4;
        case 0x26fce8u: goto label_26fce8;
        case 0x26fcecu: goto label_26fcec;
        case 0x26fcf0u: goto label_26fcf0;
        case 0x26fcf4u: goto label_26fcf4;
        case 0x26fcf8u: goto label_26fcf8;
        case 0x26fcfcu: goto label_26fcfc;
        case 0x26fd00u: goto label_26fd00;
        case 0x26fd04u: goto label_26fd04;
        case 0x26fd08u: goto label_26fd08;
        case 0x26fd0cu: goto label_26fd0c;
        case 0x26fd10u: goto label_26fd10;
        case 0x26fd14u: goto label_26fd14;
        case 0x26fd18u: goto label_26fd18;
        case 0x26fd1cu: goto label_26fd1c;
        case 0x26fd20u: goto label_26fd20;
        case 0x26fd24u: goto label_26fd24;
        case 0x26fd28u: goto label_26fd28;
        case 0x26fd2cu: goto label_26fd2c;
        case 0x26fd30u: goto label_26fd30;
        case 0x26fd34u: goto label_26fd34;
        case 0x26fd38u: goto label_26fd38;
        case 0x26fd3cu: goto label_26fd3c;
        case 0x26fd40u: goto label_26fd40;
        case 0x26fd44u: goto label_26fd44;
        case 0x26fd48u: goto label_26fd48;
        case 0x26fd4cu: goto label_26fd4c;
        case 0x26fd50u: goto label_26fd50;
        case 0x26fd54u: goto label_26fd54;
        case 0x26fd58u: goto label_26fd58;
        case 0x26fd5cu: goto label_26fd5c;
        case 0x26fd60u: goto label_26fd60;
        case 0x26fd64u: goto label_26fd64;
        case 0x26fd68u: goto label_26fd68;
        case 0x26fd6cu: goto label_26fd6c;
        case 0x26fd70u: goto label_26fd70;
        case 0x26fd74u: goto label_26fd74;
        case 0x26fd78u: goto label_26fd78;
        case 0x26fd7cu: goto label_26fd7c;
        case 0x26fd80u: goto label_26fd80;
        case 0x26fd84u: goto label_26fd84;
        case 0x26fd88u: goto label_26fd88;
        case 0x26fd8cu: goto label_26fd8c;
        case 0x26fd90u: goto label_26fd90;
        case 0x26fd94u: goto label_26fd94;
        case 0x26fd98u: goto label_26fd98;
        case 0x26fd9cu: goto label_26fd9c;
        case 0x26fda0u: goto label_26fda0;
        case 0x26fda4u: goto label_26fda4;
        case 0x26fda8u: goto label_26fda8;
        case 0x26fdacu: goto label_26fdac;
        case 0x26fdb0u: goto label_26fdb0;
        case 0x26fdb4u: goto label_26fdb4;
        case 0x26fdb8u: goto label_26fdb8;
        case 0x26fdbcu: goto label_26fdbc;
        case 0x26fdc0u: goto label_26fdc0;
        case 0x26fdc4u: goto label_26fdc4;
        case 0x26fdc8u: goto label_26fdc8;
        case 0x26fdccu: goto label_26fdcc;
        case 0x26fdd0u: goto label_26fdd0;
        case 0x26fdd4u: goto label_26fdd4;
        case 0x26fdd8u: goto label_26fdd8;
        case 0x26fddcu: goto label_26fddc;
        case 0x26fde0u: goto label_26fde0;
        case 0x26fde4u: goto label_26fde4;
        case 0x26fde8u: goto label_26fde8;
        case 0x26fdecu: goto label_26fdec;
        case 0x26fdf0u: goto label_26fdf0;
        case 0x26fdf4u: goto label_26fdf4;
        case 0x26fdf8u: goto label_26fdf8;
        case 0x26fdfcu: goto label_26fdfc;
        case 0x26fe00u: goto label_26fe00;
        case 0x26fe04u: goto label_26fe04;
        case 0x26fe08u: goto label_26fe08;
        case 0x26fe0cu: goto label_26fe0c;
        case 0x26fe10u: goto label_26fe10;
        case 0x26fe14u: goto label_26fe14;
        default: break;
    }

    ctx->pc = 0x26fca0u;

label_26fca0:
    // 0x26fca0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x26fca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_26fca4:
    // 0x26fca4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x26fca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_26fca8:
    // 0x26fca8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x26fca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_26fcac:
    // 0x26fcac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x26fcacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_26fcb0:
    // 0x26fcb0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x26fcb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_26fcb4:
    // 0x26fcb4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x26fcb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_26fcb8:
    // 0x26fcb8: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x26fcb8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_26fcbc:
    // 0x26fcbc: 0x8e250220  lw          $a1, 0x220($s1)
    ctx->pc = 0x26fcbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 544)));
label_26fcc0:
    // 0x26fcc0: 0x10a0003f  beqz        $a1, . + 4 + (0x3F << 2)
label_26fcc4:
    if (ctx->pc == 0x26FCC4u) {
        ctx->pc = 0x26FCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FCC0u;
        // 0x26fcc4: 0x8e3200b8  lw          $s2, 0xB8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FCC8u;
        goto label_26fcc8;
    }
    ctx->pc = 0x26FCC0u;
    {
        const bool branch_taken_0x26fcc0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FCC0u;
        // 0x26fcc4: 0x8e3200b8  lw          $s2, 0xB8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fcc0) {
            ctx->pc = 0x26FDC0u;
            goto label_26fdc0;
        }
    }
    ctx->pc = 0x26FCC8u;
label_26fcc8:
    // 0x26fcc8: 0x3c100049  lui         $s0, 0x49
    ctx->pc = 0x26fcc8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)73 << 16));
label_26fccc:
    // 0x26fccc: 0x26100480  addiu       $s0, $s0, 0x480
    ctx->pc = 0x26fcccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1152));
label_26fcd0:
    // 0x26fcd0: 0xc07b148  jal         func_1EC520
label_26fcd4:
    if (ctx->pc == 0x26FCD4u) {
        ctx->pc = 0x26FCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FCD0u;
        // 0x26fcd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FCD8u;
        goto label_26fcd8;
    }
    ctx->pc = 0x26FCD0u;
    SET_GPR_U32(ctx, 31, 0x26FCD8u);
    ctx->pc = 0x26FCD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FCD0u;
    // 0x26fcd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EC520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EC520u, 0x26FCD0u, 0x26FCD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FCD8u;
label_26fcd8:
    // 0x26fcd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26fcd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26fcdc:
    // 0x26fcdc: 0xc07b148  jal         func_1EC520
label_26fce0:
    if (ctx->pc == 0x26FCE0u) {
        ctx->pc = 0x26FCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FCDCu;
        // 0x26fce0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FCE4u;
        goto label_26fce4;
    }
    ctx->pc = 0x26FCDCu;
    SET_GPR_U32(ctx, 31, 0x26FCE4u);
    ctx->pc = 0x26FCE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FCDCu;
    // 0x26fce0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EC520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EC520u, 0x26FCDCu, 0x26FCE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FCE4u;
label_26fce4:
    // 0x26fce4: 0x8e240220  lw          $a0, 0x220($s1)
    ctx->pc = 0x26fce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 544)));
label_26fce8:
    // 0x26fce8: 0x240506aa  addiu       $a1, $zero, 0x6AA
    ctx->pc = 0x26fce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1706));
label_26fcec:
    // 0x26fcec: 0x8c830334  lw          $v1, 0x334($a0)
    ctx->pc = 0x26fcecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 820)));
label_26fcf0:
    // 0x26fcf0: 0x8c620150  lw          $v0, 0x150($v1)
    ctx->pc = 0x26fcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
label_26fcf4:
    // 0x26fcf4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x26fcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_26fcf8:
    // 0x26fcf8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x26fcf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_26fcfc:
    // 0x26fcfc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x26fcfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_26fd00:
    // 0x26fd00: 0x5485000c  bnel        $a0, $a1, . + 4 + (0xC << 2)
label_26fd04:
    if (ctx->pc == 0x26FD04u) {
        ctx->pc = 0x26FD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FD00u;
        // 0x26fd04: 0x8e220254  lw          $v0, 0x254($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 596)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FD08u;
        goto label_26fd08;
    }
    ctx->pc = 0x26FD00u;
    {
        const bool branch_taken_0x26fd00 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x26fd00) {
            ctx->pc = 0x26FD04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26FD00u;
            // 0x26fd04: 0x8e220254  lw          $v0, 0x254($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 596)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26FD34u;
            goto label_26fd34;
        }
    }
    ctx->pc = 0x26FD08u;
label_26fd08:
    // 0x26fd08: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x26fd08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_26fd0c:
    // 0x26fd0c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x26fd0cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_26fd10:
    // 0x26fd10: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x26fd10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26fd14:
    // 0x26fd14: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x26fd14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
label_26fd18:
    // 0x26fd18: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x26fd18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_26fd1c:
    // 0x26fd1c: 0xc0bff42  jal         func_2FFD08
label_26fd20:
    if (ctx->pc == 0x26FD20u) {
        ctx->pc = 0x26FD24u;
        goto label_26fd24;
    }
    ctx->pc = 0x26FD1Cu;
    SET_GPR_U32(ctx, 31, 0x26FD24u);
    ctx->pc = 0x2FFD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FFD08u, 0x26FD1Cu, 0x26FD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FD24u;
label_26fd24:
    // 0x26fd24: 0x8e220220  lw          $v0, 0x220($s1)
    ctx->pc = 0x26fd24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 544)));
label_26fd28:
    // 0x26fd28: 0xc092aa2  jal         func_24AA88
label_26fd2c:
    if (ctx->pc == 0x26FD2Cu) {
        ctx->pc = 0x26FD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FD28u;
        // 0x26fd2c: 0x8c440334  lw          $a0, 0x334($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FD30u;
        goto label_26fd30;
    }
    ctx->pc = 0x26FD28u;
    SET_GPR_U32(ctx, 31, 0x26FD30u);
    ctx->pc = 0x26FD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FD28u;
    // 0x26fd2c: 0x8c440334  lw          $a0, 0x334($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24AA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24AA88u, 0x26FD28u, 0x26FD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FD30u;
label_26fd30:
    // 0x26fd30: 0x8e220254  lw          $v0, 0x254($s1)
    ctx->pc = 0x26fd30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 596)));
label_26fd34:
    // 0x26fd34: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
label_26fd38:
    if (ctx->pc == 0x26FD38u) {
        ctx->pc = 0x26FD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FD34u;
        // 0x26fd38: 0x8e240220  lw          $a0, 0x220($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 544)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FD3Cu;
        goto label_26fd3c;
    }
    ctx->pc = 0x26FD34u;
    {
        const bool branch_taken_0x26fd34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26fd34) {
            ctx->pc = 0x26FD38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26FD34u;
            // 0x26fd38: 0x8e240220  lw          $a0, 0x220($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 544)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26FD98u;
            goto label_26fd98;
        }
    }
    ctx->pc = 0x26FD3Cu;
label_26fd3c:
    // 0x26fd3c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x26fd3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_26fd40:
    // 0x26fd40: 0xc0899bc  jal         func_2266F0
label_26fd44:
    if (ctx->pc == 0x26FD44u) {
        ctx->pc = 0x26FD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FD40u;
        // 0x26fd44: 0x8e240220  lw          $a0, 0x220($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 544)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FD48u;
        goto label_26fd48;
    }
    ctx->pc = 0x26FD40u;
    SET_GPR_U32(ctx, 31, 0x26FD48u);
    ctx->pc = 0x26FD44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FD40u;
    // 0x26fd44: 0x8e240220  lw          $a0, 0x220($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 544)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x26FD40u, 0x26FD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FD48u;
label_26fd48:
    // 0x26fd48: 0x8c44025c  lw          $a0, 0x25C($v0)
    ctx->pc = 0x26fd48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 604)));
label_26fd4c:
    // 0x26fd4c: 0xc073e86  jal         func_1CFA18
label_26fd50:
    if (ctx->pc == 0x26FD50u) {
        ctx->pc = 0x26FD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FD4Cu;
        // 0x26fd50: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FD54u;
        goto label_26fd54;
    }
    ctx->pc = 0x26FD4Cu;
    SET_GPR_U32(ctx, 31, 0x26FD54u);
    ctx->pc = 0x26FD50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FD4Cu;
    // 0x26fd50: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFA18u, 0x26FD4Cu, 0x26FD54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FD54u;
label_26fd54:
    // 0x26fd54: 0xc0899bc  jal         func_2266F0
label_26fd58:
    if (ctx->pc == 0x26FD58u) {
        ctx->pc = 0x26FD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FD54u;
        // 0x26fd58: 0x8e240220  lw          $a0, 0x220($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 544)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FD5Cu;
        goto label_26fd5c;
    }
    ctx->pc = 0x26FD54u;
    SET_GPR_U32(ctx, 31, 0x26FD5Cu);
    ctx->pc = 0x26FD58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FD54u;
    // 0x26fd58: 0x8e240220  lw          $a0, 0x220($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 544)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x26FD54u, 0x26FD5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FD5Cu;
label_26fd5c:
    // 0x26fd5c: 0x8c43025c  lw          $v1, 0x25C($v0)
    ctx->pc = 0x26fd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 604)));
label_26fd60:
    // 0x26fd60: 0xe4740024  swc1        $f20, 0x24($v1)
    ctx->pc = 0x26fd60u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
label_26fd64:
    // 0x26fd64: 0xc0899bc  jal         func_2266F0
label_26fd68:
    if (ctx->pc == 0x26FD68u) {
        ctx->pc = 0x26FD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FD64u;
        // 0x26fd68: 0x8e240220  lw          $a0, 0x220($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 544)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FD6Cu;
        goto label_26fd6c;
    }
    ctx->pc = 0x26FD64u;
    SET_GPR_U32(ctx, 31, 0x26FD6Cu);
    ctx->pc = 0x26FD68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FD64u;
    // 0x26fd68: 0x8e240220  lw          $a0, 0x220($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 544)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x26FD64u, 0x26FD6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FD6Cu;
label_26fd6c:
    // 0x26fd6c: 0x8c430218  lw          $v1, 0x218($v0)
    ctx->pc = 0x26fd6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 536)));
label_26fd70:
    // 0x26fd70: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26fd70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26fd74:
    // 0x26fd74: 0x8c6200a4  lw          $v0, 0xA4($v1)
    ctx->pc = 0x26fd74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 164)));
label_26fd78:
    // 0x26fd78: 0x40f809  jalr        $v0
label_26fd7c:
    if (ctx->pc == 0x26FD7Cu) {
        ctx->pc = 0x26FD80u;
        goto label_26fd80;
    }
    ctx->pc = 0x26FD78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26FD80u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26FD78u, 0x26FD80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26FD80u;
label_26fd80:
    // 0x26fd80: 0xc0899bc  jal         func_2266F0
label_26fd84:
    if (ctx->pc == 0x26FD84u) {
        ctx->pc = 0x26FD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FD80u;
        // 0x26fd84: 0x8e240220  lw          $a0, 0x220($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 544)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FD88u;
        goto label_26fd88;
    }
    ctx->pc = 0x26FD80u;
    SET_GPR_U32(ctx, 31, 0x26FD88u);
    ctx->pc = 0x26FD84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FD80u;
    // 0x26fd84: 0x8e240220  lw          $a0, 0x220($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 544)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x26FD80u, 0x26FD88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FD88u;
label_26fd88:
    // 0x26fd88: 0xc098514  jal         func_261450
label_26fd8c:
    if (ctx->pc == 0x26FD8Cu) {
        ctx->pc = 0x26FD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FD88u;
        // 0x26fd8c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FD90u;
        goto label_26fd90;
    }
    ctx->pc = 0x26FD88u;
    SET_GPR_U32(ctx, 31, 0x26FD90u);
    ctx->pc = 0x26FD8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FD88u;
    // 0x26fd8c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261450u, 0x26FD88u, 0x26FD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FD90u;
label_26fd90:
    // 0x26fd90: 0xae200254  sw          $zero, 0x254($s1)
    ctx->pc = 0x26fd90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 596), GPR_U32(ctx, 0));
label_26fd94:
    // 0x26fd94: 0x8e240220  lw          $a0, 0x220($s1)
    ctx->pc = 0x26fd94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 544)));
label_26fd98:
    // 0x26fd98: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26fd98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26fd9c:
    // 0x26fd9c: 0xc08fed2  jal         func_23FB48
label_26fda0:
    if (ctx->pc == 0x26FDA0u) {
        ctx->pc = 0x26FDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FD9Cu;
        // 0x26fda0: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FDA4u;
        goto label_26fda4;
    }
    ctx->pc = 0x26FD9Cu;
    SET_GPR_U32(ctx, 31, 0x26FDA4u);
    ctx->pc = 0x26FDA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FD9Cu;
    // 0x26fda0: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x26FD9Cu, 0x26FDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FDA4u;
label_26fda4:
    // 0x26fda4: 0x8e240220  lw          $a0, 0x220($s1)
    ctx->pc = 0x26fda4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 544)));
label_26fda8:
    // 0x26fda8: 0xc08e3b2  jal         func_238EC8
label_26fdac:
    if (ctx->pc == 0x26FDACu) {
        ctx->pc = 0x26FDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FDA8u;
        // 0x26fdac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FDB0u;
        goto label_26fdb0;
    }
    ctx->pc = 0x26FDA8u;
    SET_GPR_U32(ctx, 31, 0x26FDB0u);
    ctx->pc = 0x26FDACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FDA8u;
    // 0x26fdac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238EC8u, 0x26FDA8u, 0x26FDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FDB0u;
label_26fdb0:
    // 0x26fdb0: 0x8e240220  lw          $a0, 0x220($s1)
    ctx->pc = 0x26fdb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 544)));
label_26fdb4:
    // 0x26fdb4: 0xc08dbd8  jal         func_236F60
label_26fdb8:
    if (ctx->pc == 0x26FDB8u) {
        ctx->pc = 0x26FDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FDB4u;
        // 0x26fdb8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FDBCu;
        goto label_26fdbc;
    }
    ctx->pc = 0x26FDB4u;
    SET_GPR_U32(ctx, 31, 0x26FDBCu);
    ctx->pc = 0x26FDB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FDB4u;
    // 0x26fdb8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236F60u, 0x26FDB4u, 0x26FDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FDBCu;
label_26fdbc:
    // 0x26fdbc: 0xae200220  sw          $zero, 0x220($s1)
    ctx->pc = 0x26fdbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 544), GPR_U32(ctx, 0));
label_26fdc0:
    // 0x26fdc0: 0x8e420200  lw          $v0, 0x200($s2)
    ctx->pc = 0x26fdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 512)));
label_26fdc4:
    // 0x26fdc4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_26fdc8:
    if (ctx->pc == 0x26FDC8u) {
        ctx->pc = 0x26FDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FDC4u;
        // 0x26fdc8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FDCCu;
        goto label_26fdcc;
    }
    ctx->pc = 0x26FDC4u;
    {
        const bool branch_taken_0x26fdc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FDC4u;
        // 0x26fdc8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fdc4) {
            ctx->pc = 0x26FE00u;
            goto label_26fe00;
        }
    }
    ctx->pc = 0x26FDCCu;
label_26fdcc:
    // 0x26fdcc: 0x8e4201fc  lw          $v0, 0x1FC($s2)
    ctx->pc = 0x26fdccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 508)));
label_26fdd0:
    // 0x26fdd0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_26fdd4:
    if (ctx->pc == 0x26FDD4u) {
        ctx->pc = 0x26FDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FDD0u;
        // 0x26fdd4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FDD8u;
        goto label_26fdd8;
    }
    ctx->pc = 0x26FDD0u;
    {
        const bool branch_taken_0x26fdd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FDD0u;
        // 0x26fdd4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fdd0) {
            ctx->pc = 0x26FDE4u;
            goto label_26fde4;
        }
    }
    ctx->pc = 0x26FDD8u;
label_26fdd8:
    // 0x26fdd8: 0x8e230240  lw          $v1, 0x240($s1)
    ctx->pc = 0x26fdd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 576)));
label_26fddc:
    // 0x26fddc: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
label_26fde0:
    if (ctx->pc == 0x26FDE0u) {
        ctx->pc = 0x26FDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FDDCu;
        // 0x26fde0: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FDE4u;
        goto label_26fde4;
    }
    ctx->pc = 0x26FDDCu;
    {
        const bool branch_taken_0x26fddc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x26fddc) {
            ctx->pc = 0x26FDE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26FDDCu;
            // 0x26fde0: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26FE04u;
            goto label_26fe04;
        }
    }
    ctx->pc = 0x26FDE4u;
label_26fde4:
    // 0x26fde4: 0xae200240  sw          $zero, 0x240($s1)
    ctx->pc = 0x26fde4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 576), GPR_U32(ctx, 0));
label_26fde8:
    // 0x26fde8: 0x8e42020c  lw          $v0, 0x20C($s2)
    ctx->pc = 0x26fde8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 524)));
label_26fdec:
    // 0x26fdec: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_26fdf0:
    if (ctx->pc == 0x26FDF0u) {
        ctx->pc = 0x26FDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FDECu;
        // 0x26fdf0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FDF4u;
        goto label_26fdf4;
    }
    ctx->pc = 0x26FDECu;
    {
        const bool branch_taken_0x26fdec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FDECu;
        // 0x26fdf0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fdec) {
            ctx->pc = 0x26FDFCu;
            goto label_26fdfc;
        }
    }
    ctx->pc = 0x26FDF4u;
label_26fdf4:
    // 0x26fdf4: 0xc0848ba  jal         func_2122E8
label_26fdf8:
    if (ctx->pc == 0x26FDF8u) {
        ctx->pc = 0x26FDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FDF4u;
        // 0x26fdf8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FDFCu;
        goto label_26fdfc;
    }
    ctx->pc = 0x26FDF4u;
    SET_GPR_U32(ctx, 31, 0x26FDFCu);
    ctx->pc = 0x26FDF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FDF4u;
    // 0x26fdf8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2122E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2122E8u, 0x26FDF4u, 0x26FDFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FDFCu;
label_26fdfc:
    // 0x26fdfc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x26fdfcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_26fe00:
    // 0x26fe00: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x26fe00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_26fe04:
    // 0x26fe04: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x26fe04u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_26fe08:
    // 0x26fe08: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x26fe08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_26fe0c:
    // 0x26fe0c: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x26fe0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_26fe10:
    // 0x26fe10: 0x3e00008  jr          $ra
label_26fe14:
    if (ctx->pc == 0x26FE14u) {
        ctx->pc = 0x26FE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FE10u;
        // 0x26fe14: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FE18u;
        goto label_fallthrough_0x26fe10;
    }
    ctx->pc = 0x26FE10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26FE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FE10u;
        // 0x26fe14: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26FE10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x26fe10:
    ctx->pc = 0x26FE18u;
}
