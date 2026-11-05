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

// Function: sub_0023FC80
// Address: 0x23fc80 - 0x23feb8
void sub_0023FC80_0x23fc80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023FC80_0x23fc80");
#endif

    switch (ctx->pc) {
        case 0x23fc80u: goto label_23fc80;
        case 0x23fc84u: goto label_23fc84;
        case 0x23fc88u: goto label_23fc88;
        case 0x23fc8cu: goto label_23fc8c;
        case 0x23fc90u: goto label_23fc90;
        case 0x23fc94u: goto label_23fc94;
        case 0x23fc98u: goto label_23fc98;
        case 0x23fc9cu: goto label_23fc9c;
        case 0x23fca0u: goto label_23fca0;
        case 0x23fca4u: goto label_23fca4;
        case 0x23fca8u: goto label_23fca8;
        case 0x23fcacu: goto label_23fcac;
        case 0x23fcb0u: goto label_23fcb0;
        case 0x23fcb4u: goto label_23fcb4;
        case 0x23fcb8u: goto label_23fcb8;
        case 0x23fcbcu: goto label_23fcbc;
        case 0x23fcc0u: goto label_23fcc0;
        case 0x23fcc4u: goto label_23fcc4;
        case 0x23fcc8u: goto label_23fcc8;
        case 0x23fcccu: goto label_23fccc;
        case 0x23fcd0u: goto label_23fcd0;
        case 0x23fcd4u: goto label_23fcd4;
        case 0x23fcd8u: goto label_23fcd8;
        case 0x23fcdcu: goto label_23fcdc;
        case 0x23fce0u: goto label_23fce0;
        case 0x23fce4u: goto label_23fce4;
        case 0x23fce8u: goto label_23fce8;
        case 0x23fcecu: goto label_23fcec;
        case 0x23fcf0u: goto label_23fcf0;
        case 0x23fcf4u: goto label_23fcf4;
        case 0x23fcf8u: goto label_23fcf8;
        case 0x23fcfcu: goto label_23fcfc;
        case 0x23fd00u: goto label_23fd00;
        case 0x23fd04u: goto label_23fd04;
        case 0x23fd08u: goto label_23fd08;
        case 0x23fd0cu: goto label_23fd0c;
        case 0x23fd10u: goto label_23fd10;
        case 0x23fd14u: goto label_23fd14;
        case 0x23fd18u: goto label_23fd18;
        case 0x23fd1cu: goto label_23fd1c;
        case 0x23fd20u: goto label_23fd20;
        case 0x23fd24u: goto label_23fd24;
        case 0x23fd28u: goto label_23fd28;
        case 0x23fd2cu: goto label_23fd2c;
        case 0x23fd30u: goto label_23fd30;
        case 0x23fd34u: goto label_23fd34;
        case 0x23fd38u: goto label_23fd38;
        case 0x23fd3cu: goto label_23fd3c;
        case 0x23fd40u: goto label_23fd40;
        case 0x23fd44u: goto label_23fd44;
        case 0x23fd48u: goto label_23fd48;
        case 0x23fd4cu: goto label_23fd4c;
        case 0x23fd50u: goto label_23fd50;
        case 0x23fd54u: goto label_23fd54;
        case 0x23fd58u: goto label_23fd58;
        case 0x23fd5cu: goto label_23fd5c;
        case 0x23fd60u: goto label_23fd60;
        case 0x23fd64u: goto label_23fd64;
        case 0x23fd68u: goto label_23fd68;
        case 0x23fd6cu: goto label_23fd6c;
        case 0x23fd70u: goto label_23fd70;
        case 0x23fd74u: goto label_23fd74;
        case 0x23fd78u: goto label_23fd78;
        case 0x23fd7cu: goto label_23fd7c;
        case 0x23fd80u: goto label_23fd80;
        case 0x23fd84u: goto label_23fd84;
        case 0x23fd88u: goto label_23fd88;
        case 0x23fd8cu: goto label_23fd8c;
        case 0x23fd90u: goto label_23fd90;
        case 0x23fd94u: goto label_23fd94;
        case 0x23fd98u: goto label_23fd98;
        case 0x23fd9cu: goto label_23fd9c;
        case 0x23fda0u: goto label_23fda0;
        case 0x23fda4u: goto label_23fda4;
        case 0x23fda8u: goto label_23fda8;
        case 0x23fdacu: goto label_23fdac;
        case 0x23fdb0u: goto label_23fdb0;
        case 0x23fdb4u: goto label_23fdb4;
        case 0x23fdb8u: goto label_23fdb8;
        case 0x23fdbcu: goto label_23fdbc;
        case 0x23fdc0u: goto label_23fdc0;
        case 0x23fdc4u: goto label_23fdc4;
        case 0x23fdc8u: goto label_23fdc8;
        case 0x23fdccu: goto label_23fdcc;
        case 0x23fdd0u: goto label_23fdd0;
        case 0x23fdd4u: goto label_23fdd4;
        case 0x23fdd8u: goto label_23fdd8;
        case 0x23fddcu: goto label_23fddc;
        case 0x23fde0u: goto label_23fde0;
        case 0x23fde4u: goto label_23fde4;
        case 0x23fde8u: goto label_23fde8;
        case 0x23fdecu: goto label_23fdec;
        case 0x23fdf0u: goto label_23fdf0;
        case 0x23fdf4u: goto label_23fdf4;
        case 0x23fdf8u: goto label_23fdf8;
        case 0x23fdfcu: goto label_23fdfc;
        case 0x23fe00u: goto label_23fe00;
        case 0x23fe04u: goto label_23fe04;
        case 0x23fe08u: goto label_23fe08;
        case 0x23fe0cu: goto label_23fe0c;
        case 0x23fe10u: goto label_23fe10;
        case 0x23fe14u: goto label_23fe14;
        case 0x23fe18u: goto label_23fe18;
        case 0x23fe1cu: goto label_23fe1c;
        case 0x23fe20u: goto label_23fe20;
        case 0x23fe24u: goto label_23fe24;
        case 0x23fe28u: goto label_23fe28;
        case 0x23fe2cu: goto label_23fe2c;
        case 0x23fe30u: goto label_23fe30;
        case 0x23fe34u: goto label_23fe34;
        case 0x23fe38u: goto label_23fe38;
        case 0x23fe3cu: goto label_23fe3c;
        case 0x23fe40u: goto label_23fe40;
        case 0x23fe44u: goto label_23fe44;
        case 0x23fe48u: goto label_23fe48;
        case 0x23fe4cu: goto label_23fe4c;
        case 0x23fe50u: goto label_23fe50;
        case 0x23fe54u: goto label_23fe54;
        case 0x23fe58u: goto label_23fe58;
        case 0x23fe5cu: goto label_23fe5c;
        case 0x23fe60u: goto label_23fe60;
        case 0x23fe64u: goto label_23fe64;
        case 0x23fe68u: goto label_23fe68;
        case 0x23fe6cu: goto label_23fe6c;
        case 0x23fe70u: goto label_23fe70;
        case 0x23fe74u: goto label_23fe74;
        case 0x23fe78u: goto label_23fe78;
        case 0x23fe7cu: goto label_23fe7c;
        case 0x23fe80u: goto label_23fe80;
        case 0x23fe84u: goto label_23fe84;
        case 0x23fe88u: goto label_23fe88;
        case 0x23fe8cu: goto label_23fe8c;
        case 0x23fe90u: goto label_23fe90;
        case 0x23fe94u: goto label_23fe94;
        case 0x23fe98u: goto label_23fe98;
        case 0x23fe9cu: goto label_23fe9c;
        case 0x23fea0u: goto label_23fea0;
        case 0x23fea4u: goto label_23fea4;
        case 0x23fea8u: goto label_23fea8;
        case 0x23feacu: goto label_23feac;
        case 0x23feb0u: goto label_23feb0;
        case 0x23feb4u: goto label_23feb4;
        default: break;
    }

    ctx->pc = 0x23fc80u;

label_23fc80:
    // 0x23fc80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23fc80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_23fc84:
    // 0x23fc84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23fc84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_23fc88:
    // 0x23fc88: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x23fc88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_23fc8c:
    // 0x23fc8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23fc8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23fc90:
    // 0x23fc90: 0x8e020334  lw          $v0, 0x334($s0)
    ctx->pc = 0x23fc90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_23fc94:
    // 0x23fc94: 0x8c430160  lw          $v1, 0x160($v0)
    ctx->pc = 0x23fc94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 352)));
label_23fc98:
    // 0x23fc98: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_23fc9c:
    if (ctx->pc == 0x23FC9Cu) {
        ctx->pc = 0x23FC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FC98u;
        // 0x23fc9c: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FCA0u;
        goto label_23fca0;
    }
    ctx->pc = 0x23FC98u;
    {
        const bool branch_taken_0x23fc98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FC98u;
        // 0x23fc9c: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fc98) {
            ctx->pc = 0x23FCA8u;
            goto label_23fca8;
        }
    }
    ctx->pc = 0x23FCA0u;
label_23fca0:
    // 0x23fca0: 0xc08fed2  jal         func_23FB48
label_23fca4:
    if (ctx->pc == 0x23FCA4u) {
        ctx->pc = 0x23FCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FCA0u;
        // 0x23fca4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FCA8u;
        goto label_23fca8;
    }
    ctx->pc = 0x23FCA0u;
    SET_GPR_U32(ctx, 31, 0x23FCA8u);
    ctx->pc = 0x23FCA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FCA0u;
    // 0x23fca4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x23FCA0u, 0x23FCA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FCA8u;
label_23fca8:
    // 0x23fca8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23fca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23fcac:
    // 0x23fcac: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x23fcacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_23fcb0:
    // 0x23fcb0: 0xc08fed2  jal         func_23FB48
label_23fcb4:
    if (ctx->pc == 0x23FCB4u) {
        ctx->pc = 0x23FCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FCB0u;
        // 0x23fcb4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FCB8u;
        goto label_23fcb8;
    }
    ctx->pc = 0x23FCB0u;
    SET_GPR_U32(ctx, 31, 0x23FCB8u);
    ctx->pc = 0x23FCB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FCB0u;
    // 0x23fcb4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x23FCB0u, 0x23FCB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FCB8u;
label_23fcb8:
    // 0x23fcb8: 0x8e020418  lw          $v0, 0x418($s0)
    ctx->pc = 0x23fcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1048)));
label_23fcbc:
    // 0x23fcbc: 0x2842000a  slti        $v0, $v0, 0xA
    ctx->pc = 0x23fcbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
label_23fcc0:
    // 0x23fcc0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_23fcc4:
    if (ctx->pc == 0x23FCC4u) {
        ctx->pc = 0x23FCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FCC0u;
        // 0x23fcc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FCC8u;
        goto label_23fcc8;
    }
    ctx->pc = 0x23FCC0u;
    {
        const bool branch_taken_0x23fcc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FCC0u;
        // 0x23fcc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fcc0) {
            ctx->pc = 0x23FCECu;
            goto label_23fcec;
        }
    }
    ctx->pc = 0x23FCC8u;
label_23fcc8:
    // 0x23fcc8: 0x8e02036c  lw          $v0, 0x36C($s0)
    ctx->pc = 0x23fcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
label_23fccc:
    // 0x23fccc: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x23fcccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
label_23fcd0:
    // 0x23fcd0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_23fcd4:
    if (ctx->pc == 0x23FCD4u) {
        ctx->pc = 0x23FCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FCD0u;
        // 0x23fcd4: 0x24054000  addiu       $a1, $zero, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FCD8u;
        goto label_23fcd8;
    }
    ctx->pc = 0x23FCD0u;
    {
        const bool branch_taken_0x23fcd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23FCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FCD0u;
        // 0x23fcd4: 0x24054000  addiu       $a1, $zero, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fcd0) {
            ctx->pc = 0x23FCF0u;
            goto label_23fcf0;
        }
    }
    ctx->pc = 0x23FCD8u;
label_23fcd8:
    // 0x23fcd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23fcd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23fcdc:
    // 0x23fcdc: 0xc08fed2  jal         func_23FB48
label_23fce0:
    if (ctx->pc == 0x23FCE0u) {
        ctx->pc = 0x23FCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FCDCu;
        // 0x23fce0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FCE4u;
        goto label_23fce4;
    }
    ctx->pc = 0x23FCDCu;
    SET_GPR_U32(ctx, 31, 0x23FCE4u);
    ctx->pc = 0x23FCE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FCDCu;
    // 0x23fce0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x23FCDCu, 0x23FCE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FCE4u;
label_23fce4:
    // 0x23fce4: 0x10000005  b           . + 4 + (0x5 << 2)
label_23fce8:
    if (ctx->pc == 0x23FCE8u) {
        ctx->pc = 0x23FCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FCE4u;
        // 0x23fce8: 0x8e02010c  lw          $v0, 0x10C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FCECu;
        goto label_23fcec;
    }
    ctx->pc = 0x23FCE4u;
    {
        const bool branch_taken_0x23fce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FCE4u;
        // 0x23fce8: 0x8e02010c  lw          $v0, 0x10C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fce4) {
            ctx->pc = 0x23FCFCu;
            goto label_23fcfc;
        }
    }
    ctx->pc = 0x23FCECu;
label_23fcec:
    // 0x23fcec: 0x24054000  addiu       $a1, $zero, 0x4000
    ctx->pc = 0x23fcecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
label_23fcf0:
    // 0x23fcf0: 0xc08fed2  jal         func_23FB48
label_23fcf4:
    if (ctx->pc == 0x23FCF4u) {
        ctx->pc = 0x23FCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FCF0u;
        // 0x23fcf4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FCF8u;
        goto label_23fcf8;
    }
    ctx->pc = 0x23FCF0u;
    SET_GPR_U32(ctx, 31, 0x23FCF8u);
    ctx->pc = 0x23FCF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FCF0u;
    // 0x23fcf4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x23FCF0u, 0x23FCF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FCF8u;
label_23fcf8:
    // 0x23fcf8: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x23fcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_23fcfc:
    // 0x23fcfc: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x23fcfcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
label_23fd00:
    // 0x23fd00: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x23fd00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_23fd04:
    // 0x23fd04: 0xac600038  sw          $zero, 0x38($v1)
    ctx->pc = 0x23fd04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 0));
label_23fd08:
    // 0x23fd08: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x23fd08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_23fd0c:
    // 0x23fd0c: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x23fd0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_23fd10:
    // 0x23fd10: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_23fd14:
    if (ctx->pc == 0x23FD14u) {
        ctx->pc = 0x23FD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FD10u;
        // 0x23fd14: 0x3c030004  lui         $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FD18u;
        goto label_23fd18;
    }
    ctx->pc = 0x23FD10u;
    {
        const bool branch_taken_0x23fd10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23FD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FD10u;
        // 0x23fd14: 0x3c030004  lui         $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fd10) {
            ctx->pc = 0x23FD28u;
            goto label_23fd28;
        }
    }
    ctx->pc = 0x23FD18u;
label_23fd18:
    // 0x23fd18: 0x8e0211c0  lw          $v0, 0x11C0($s0)
    ctx->pc = 0x23fd18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
label_23fd1c:
    // 0x23fd1c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x23fd1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_23fd20:
    // 0x23fd20: 0x50430004  beql        $v0, $v1, . + 4 + (0x4 << 2)
label_23fd24:
    if (ctx->pc == 0x23FD24u) {
        ctx->pc = 0x23FD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FD20u;
        // 0x23fd24: 0x8e020218  lw          $v0, 0x218($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FD28u;
        goto label_23fd28;
    }
    ctx->pc = 0x23FD20u;
    {
        const bool branch_taken_0x23fd20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x23fd20) {
            ctx->pc = 0x23FD24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23FD20u;
            // 0x23fd24: 0x8e020218  lw          $v0, 0x218($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23FD34u;
            goto label_23fd34;
        }
    }
    ctx->pc = 0x23FD28u;
label_23fd28:
    // 0x23fd28: 0xc08e528  jal         func_2394A0
label_23fd2c:
    if (ctx->pc == 0x23FD2Cu) {
        ctx->pc = 0x23FD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FD28u;
        // 0x23fd2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FD30u;
        goto label_23fd30;
    }
    ctx->pc = 0x23FD28u;
    SET_GPR_U32(ctx, 31, 0x23FD30u);
    ctx->pc = 0x23FD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FD28u;
    // 0x23fd2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2394A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2394A0u, 0x23FD28u, 0x23FD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FD30u;
label_23fd30:
    // 0x23fd30: 0x8e020218  lw          $v0, 0x218($s0)
    ctx->pc = 0x23fd30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_23fd34:
    // 0x23fd34: 0x8c4301cc  lw          $v1, 0x1CC($v0)
    ctx->pc = 0x23fd34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 460)));
label_23fd38:
    // 0x23fd38: 0x60f809  jalr        $v1
label_23fd3c:
    if (ctx->pc == 0x23FD3Cu) {
        ctx->pc = 0x23FD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FD38u;
        // 0x23fd3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FD40u;
        goto label_23fd40;
    }
    ctx->pc = 0x23FD38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x23FD40u);
        ctx->pc = 0x23FD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FD38u;
        // 0x23fd3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23FD38u, 0x23FD40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23FD40u;
label_23fd40:
    // 0x23fd40: 0x8e0300c0  lw          $v1, 0xC0($s0)
    ctx->pc = 0x23fd40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_23fd44:
    // 0x23fd44: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x23fd44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_23fd48:
    // 0x23fd48: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_23fd4c:
    if (ctx->pc == 0x23FD4Cu) {
        ctx->pc = 0x23FD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FD48u;
        // 0x23fd4c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FD50u;
        goto label_23fd50;
    }
    ctx->pc = 0x23FD48u;
    {
        const bool branch_taken_0x23fd48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23FD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FD48u;
        // 0x23fd4c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fd48) {
            ctx->pc = 0x23FD5Cu;
            goto label_23fd5c;
        }
    }
    ctx->pc = 0x23FD50u;
label_23fd50:
    // 0x23fd50: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x23fd50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_23fd54:
    // 0x23fd54: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_23fd58:
    if (ctx->pc == 0x23FD58u) {
        ctx->pc = 0x23FD5Cu;
        goto label_23fd5c;
    }
    ctx->pc = 0x23FD54u;
    {
        const bool branch_taken_0x23fd54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23fd54) {
            ctx->pc = 0x23FD60u;
            goto label_23fd60;
        }
    }
    ctx->pc = 0x23FD5Cu;
label_23fd5c:
    // 0x23fd5c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x23fd5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23fd60:
    // 0x23fd60: 0x1080004e  beqz        $a0, . + 4 + (0x4E << 2)
label_23fd64:
    if (ctx->pc == 0x23FD64u) {
        ctx->pc = 0x23FD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FD60u;
        // 0x23fd64: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FD68u;
        goto label_23fd68;
    }
    ctx->pc = 0x23FD60u;
    {
        const bool branch_taken_0x23fd60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FD60u;
        // 0x23fd64: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fd60) {
            ctx->pc = 0x23FE9Cu;
            goto label_23fe9c;
        }
    }
    ctx->pc = 0x23FD68u;
label_23fd68:
    // 0x23fd68: 0x8e060334  lw          $a2, 0x334($s0)
    ctx->pc = 0x23fd68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_23fd6c:
    // 0x23fd6c: 0x8cc20160  lw          $v0, 0x160($a2)
    ctx->pc = 0x23fd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 352)));
label_23fd70:
    // 0x23fd70: 0x1440004a  bnez        $v0, . + 4 + (0x4A << 2)
label_23fd74:
    if (ctx->pc == 0x23FD74u) {
        ctx->pc = 0x23FD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FD70u;
        // 0x23fd74: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FD78u;
        goto label_23fd78;
    }
    ctx->pc = 0x23FD70u;
    {
        const bool branch_taken_0x23fd70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23FD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FD70u;
        // 0x23fd74: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fd70) {
            ctx->pc = 0x23FE9Cu;
            goto label_23fe9c;
        }
    }
    ctx->pc = 0x23FD78u;
label_23fd78:
    // 0x23fd78: 0x8cc30158  lw          $v1, 0x158($a2)
    ctx->pc = 0x23fd78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 344)));
label_23fd7c:
    // 0x23fd7c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x23fd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_23fd80:
    // 0x23fd80: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_23fd84:
    if (ctx->pc == 0x23FD84u) {
        ctx->pc = 0x23FD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FD80u;
        // 0x23fd84: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FD88u;
        goto label_23fd88;
    }
    ctx->pc = 0x23FD80u;
    {
        const bool branch_taken_0x23fd80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23FD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FD80u;
        // 0x23fd84: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fd80) {
            ctx->pc = 0x23FD90u;
            goto label_23fd90;
        }
    }
    ctx->pc = 0x23FD88u;
label_23fd88:
    // 0x23fd88: 0x14620044  bne         $v1, $v0, . + 4 + (0x44 << 2)
label_23fd8c:
    if (ctx->pc == 0x23FD8Cu) {
        ctx->pc = 0x23FD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FD88u;
        // 0x23fd8c: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FD90u;
        goto label_23fd90;
    }
    ctx->pc = 0x23FD88u;
    {
        const bool branch_taken_0x23fd88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23FD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FD88u;
        // 0x23fd8c: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fd88) {
            ctx->pc = 0x23FE9Cu;
            goto label_23fe9c;
        }
    }
    ctx->pc = 0x23FD90u;
label_23fd90:
    // 0x23fd90: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x23fd90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_23fd94:
    // 0x23fd94: 0x8e05040c  lw          $a1, 0x40C($s0)
    ctx->pc = 0x23fd94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1036)));
label_23fd98:
    // 0x23fd98: 0x8c432b00  lw          $v1, 0x2B00($v0)
    ctx->pc = 0x23fd98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11008)));
label_23fd9c:
    // 0x23fd9c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x23fd9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
label_23fda0:
    // 0x23fda0: 0x8c8298c0  lw          $v0, -0x6740($a0)
    ctx->pc = 0x23fda0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294940864)));
label_23fda4:
    // 0x23fda4: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x23fda4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_23fda8:
    // 0x23fda8: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x23fda8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_23fdac:
    // 0x23fdac: 0x5040003e  beql        $v0, $zero, . + 4 + (0x3E << 2)
label_23fdb0:
    if (ctx->pc == 0x23FDB0u) {
        ctx->pc = 0x23FDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FDACu;
        // 0x23fdb0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FDB4u;
        goto label_23fdb4;
    }
    ctx->pc = 0x23FDACu;
    {
        const bool branch_taken_0x23fdac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23fdac) {
            ctx->pc = 0x23FDB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23FDACu;
            // 0x23fdb0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23FEA8u;
            goto label_23fea8;
        }
    }
    ctx->pc = 0x23FDB4u;
label_23fdb4:
    // 0x23fdb4: 0x8e02036c  lw          $v0, 0x36C($s0)
    ctx->pc = 0x23fdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
label_23fdb8:
    // 0x23fdb8: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x23fdb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_23fdbc:
    // 0x23fdbc: 0x5440003a  bnel        $v0, $zero, . + 4 + (0x3A << 2)
label_23fdc0:
    if (ctx->pc == 0x23FDC0u) {
        ctx->pc = 0x23FDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FDBCu;
        // 0x23fdc0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FDC4u;
        goto label_23fdc4;
    }
    ctx->pc = 0x23FDBCu;
    {
        const bool branch_taken_0x23fdbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23fdbc) {
            ctx->pc = 0x23FDC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23FDBCu;
            // 0x23fdc0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23FEA8u;
            goto label_23fea8;
        }
    }
    ctx->pc = 0x23FDC4u;
label_23fdc4:
    // 0x23fdc4: 0x8e0200b8  lw          $v0, 0xB8($s0)
    ctx->pc = 0x23fdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
label_23fdc8:
    // 0x23fdc8: 0xc44313cc  lwc1        $f3, 0x13CC($v0)
    ctx->pc = 0x23fdc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5068)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_23fdcc:
    // 0x23fdcc: 0xc44213c8  lwc1        $f2, 0x13C8($v0)
    ctx->pc = 0x23fdccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_23fdd0:
    // 0x23fdd0: 0x46031032  c.eq.s      $f2, $f3
    ctx->pc = 0x23fdd0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_23fdd4:
    // 0x23fdd4: 0x0  nop
    ctx->pc = 0x23fdd4u;
    // NOP
label_23fdd8:
    // 0x23fdd8: 0x45030033  bc1tl       . + 4 + (0x33 << 2)
label_23fddc:
    if (ctx->pc == 0x23FDDCu) {
        ctx->pc = 0x23FDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FDD8u;
        // 0x23fddc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FDE0u;
        goto label_23fde0;
    }
    ctx->pc = 0x23FDD8u;
    {
        const bool branch_taken_0x23fdd8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23fdd8) {
            ctx->pc = 0x23FDDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23FDD8u;
            // 0x23fddc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23FEA8u;
            goto label_23fea8;
        }
    }
    ctx->pc = 0x23FDE0u;
label_23fde0:
    // 0x23fde0: 0x8e040104  lw          $a0, 0x104($s0)
    ctx->pc = 0x23fde0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_23fde4:
    // 0x23fde4: 0x24c301ec  addiu       $v1, $a2, 0x1EC
    ctx->pc = 0x23fde4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 492));
label_23fde8:
    // 0x23fde8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23fde8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23fdec:
    // 0x23fdec: 0x0  nop
    ctx->pc = 0x23fdecu;
    // NOP
label_23fdf0:
    // 0x23fdf0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x23fdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_23fdf4:
    // 0x23fdf4: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_23fdf8:
    if (ctx->pc == 0x23FDF8u) {
        ctx->pc = 0x23FDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FDF4u;
        // 0x23fdf8: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FDFCu;
        goto label_23fdfc;
    }
    ctx->pc = 0x23FDF4u;
    {
        const bool branch_taken_0x23fdf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23fdf4) {
            ctx->pc = 0x23FDF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23FDF4u;
            // 0x23fdf8: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23FE10u;
            goto label_23fe10;
        }
    }
    ctx->pc = 0x23FDFCu;
label_23fdfc:
    // 0x23fdfc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x23fdfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_23fe00:
    // 0x23fe00: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x23fe00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
label_23fe04:
    // 0x23fe04: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_23fe08:
    if (ctx->pc == 0x23FE08u) {
        ctx->pc = 0x23FE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FE04u;
        // 0x23fe08: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FE0Cu;
        goto label_23fe0c;
    }
    ctx->pc = 0x23FE04u;
    {
        const bool branch_taken_0x23fe04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23FE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FE04u;
        // 0x23fe08: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fe04) {
            ctx->pc = 0x23FDF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23fdf0;
        }
    }
    ctx->pc = 0x23FE0Cu;
label_23fe0c:
    // 0x23fe0c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x23fe0cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23fe10:
    // 0x23fe10: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
label_23fe14:
    if (ctx->pc == 0x23FE14u) {
        ctx->pc = 0x23FE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FE10u;
        // 0x23fe14: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FE18u;
        goto label_23fe18;
    }
    ctx->pc = 0x23FE10u;
    {
        const bool branch_taken_0x23fe10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FE10u;
        // 0x23fe14: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fe10) {
            ctx->pc = 0x23FE74u;
            goto label_23fe74;
        }
    }
    ctx->pc = 0x23FE18u;
label_23fe18:
    // 0x23fe18: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x23fe18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_23fe1c:
    // 0x23fe1c: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x23fe1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_23fe20:
    // 0x23fe20: 0xc461001c  lwc1        $f1, 0x1C($v1)
    ctx->pc = 0x23fe20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_23fe24:
    // 0x23fe24: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x23fe24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23fe28:
    // 0x23fe28: 0x0  nop
    ctx->pc = 0x23fe28u;
    // NOP
label_23fe2c:
    // 0x23fe2c: 0x0  nop
    ctx->pc = 0x23fe2cu;
    // NOP
label_23fe30:
    // 0x23fe30: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x23fe30u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_23fe34:
    // 0x23fe34: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_23fe38:
    if (ctx->pc == 0x23FE38u) {
        ctx->pc = 0x23FE3Cu;
        goto label_23fe3c;
    }
    ctx->pc = 0x23FE34u;
    {
        const bool branch_taken_0x23fe34 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23fe34) {
            ctx->pc = 0x23FE54u;
            goto label_23fe54;
        }
    }
    ctx->pc = 0x23FE3Cu;
label_23fe3c:
    // 0x23fe3c: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x23fe3cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_23fe40:
    // 0x23fe40: 0x0  nop
    ctx->pc = 0x23fe40u;
    // NOP
label_23fe44:
    // 0x23fe44: 0x4500000b  bc1f        . + 4 + (0xB << 2)
label_23fe48:
    if (ctx->pc == 0x23FE48u) {
        ctx->pc = 0x23FE4Cu;
        goto label_23fe4c;
    }
    ctx->pc = 0x23FE44u;
    {
        const bool branch_taken_0x23fe44 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23fe44) {
            ctx->pc = 0x23FE74u;
            goto label_23fe74;
        }
    }
    ctx->pc = 0x23FE4Cu;
label_23fe4c:
    // 0x23fe4c: 0x10000005  b           . + 4 + (0x5 << 2)
label_23fe50:
    if (ctx->pc == 0x23FE50u) {
        ctx->pc = 0x23FE54u;
        goto label_23fe54;
    }
    ctx->pc = 0x23FE4Cu;
    {
        const bool branch_taken_0x23fe4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23fe4c) {
            ctx->pc = 0x23FE64u;
            goto label_23fe64;
        }
    }
    ctx->pc = 0x23FE54u;
label_23fe54:
    // 0x23fe54: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x23fe54u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_23fe58:
    // 0x23fe58: 0x0  nop
    ctx->pc = 0x23fe58u;
    // NOP
label_23fe5c:
    // 0x23fe5c: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_23fe60:
    if (ctx->pc == 0x23FE60u) {
        ctx->pc = 0x23FE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FE5Cu;
        // 0x23fe60: 0x24050436  addiu       $a1, $zero, 0x436 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1078));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FE64u;
        goto label_23fe64;
    }
    ctx->pc = 0x23FE5Cu;
    {
        const bool branch_taken_0x23fe5c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23fe5c) {
            ctx->pc = 0x23FE60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23FE5Cu;
            // 0x23fe60: 0x24050436  addiu       $a1, $zero, 0x436 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1078));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23FE74u;
            goto label_23fe74;
        }
    }
    ctx->pc = 0x23FE64u;
label_23fe64:
    // 0x23fe64: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x23fe64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_23fe68:
    // 0x23fe68: 0x0  nop
    ctx->pc = 0x23fe68u;
    // NOP
label_23fe6c:
    // 0x23fe6c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_23fe70:
    if (ctx->pc == 0x23FE70u) {
        ctx->pc = 0x23FE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FE6Cu;
        // 0x23fe70: 0x24050436  addiu       $a1, $zero, 0x436 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1078));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FE74u;
        goto label_23fe74;
    }
    ctx->pc = 0x23FE6Cu;
    {
        const bool branch_taken_0x23fe6c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23fe6c) {
            ctx->pc = 0x23FE70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23FE6Cu;
            // 0x23fe70: 0x24050436  addiu       $a1, $zero, 0x436 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1078));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23FE74u;
            goto label_23fe74;
        }
    }
    ctx->pc = 0x23FE74u;
label_23fe74:
    // 0x23fe74: 0xc0c3254  jal         func_30C950
label_23fe78:
    if (ctx->pc == 0x23FE78u) {
        ctx->pc = 0x23FE7Cu;
        goto label_23fe7c;
    }
    ctx->pc = 0x23FE74u;
    SET_GPR_U32(ctx, 31, 0x23FE7Cu);
    ctx->pc = 0x30C950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C950u, 0x23FE74u, 0x23FE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FE7Cu;
label_23fe7c:
    // 0x23fe7c: 0x8e03033c  lw          $v1, 0x33C($s0)
    ctx->pc = 0x23fe7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 828)));
label_23fe80:
    // 0x23fe80: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23fe80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_23fe84:
    // 0x23fe84: 0x8e040110  lw          $a0, 0x110($s0)
    ctx->pc = 0x23fe84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_23fe88:
    // 0x23fe88: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23fe88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_23fe8c:
    // 0x23fe8c: 0xc0757c0  jal         func_1D5F00
label_23fe90:
    if (ctx->pc == 0x23FE90u) {
        ctx->pc = 0x23FE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FE8Cu;
        // 0x23fe90: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FE94u;
        goto label_23fe94;
    }
    ctx->pc = 0x23FE8Cu;
    SET_GPR_U32(ctx, 31, 0x23FE94u);
    ctx->pc = 0x23FE90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FE8Cu;
    // 0x23fe90: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5F00u, 0x23FE8Cu, 0x23FE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FE94u;
label_23fe94:
    // 0x23fe94: 0x10000004  b           . + 4 + (0x4 << 2)
label_23fe98:
    if (ctx->pc == 0x23FE98u) {
        ctx->pc = 0x23FE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FE94u;
        // 0x23fe98: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FE9Cu;
        goto label_23fe9c;
    }
    ctx->pc = 0x23FE94u;
    {
        const bool branch_taken_0x23fe94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FE94u;
        // 0x23fe98: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fe94) {
            ctx->pc = 0x23FEA8u;
            goto label_23fea8;
        }
    }
    ctx->pc = 0x23FE9Cu;
label_23fe9c:
    // 0x23fe9c: 0x8c432b00  lw          $v1, 0x2B00($v0)
    ctx->pc = 0x23fe9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11008)));
label_23fea0:
    // 0x23fea0: 0xae03040c  sw          $v1, 0x40C($s0)
    ctx->pc = 0x23fea0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1036), GPR_U32(ctx, 3));
label_23fea4:
    // 0x23fea4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23fea4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23fea8:
    // 0x23fea8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x23fea8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_23feac:
    // 0x23feac: 0x3e00008  jr          $ra
label_23feb0:
    if (ctx->pc == 0x23FEB0u) {
        ctx->pc = 0x23FEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FEACu;
        // 0x23feb0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FEB4u;
        goto label_23feb4;
    }
    ctx->pc = 0x23FEACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23FEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FEACu;
        // 0x23feb0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23FEACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23FEB4u;
label_23feb4:
    // 0x23feb4: 0x0  nop
    ctx->pc = 0x23feb4u;
    // NOP
    ctx->pc = 0x23feb8u;
}
