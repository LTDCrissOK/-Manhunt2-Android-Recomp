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

// Function: sub_0026BDB0
// Address: 0x26bdb0 - 0x26be78
void sub_0026BDB0_0x26bdb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026BDB0_0x26bdb0");
#endif

    switch (ctx->pc) {
        case 0x26bdb0u: goto label_26bdb0;
        case 0x26bdb4u: goto label_26bdb4;
        case 0x26bdb8u: goto label_26bdb8;
        case 0x26bdbcu: goto label_26bdbc;
        case 0x26bdc0u: goto label_26bdc0;
        case 0x26bdc4u: goto label_26bdc4;
        case 0x26bdc8u: goto label_26bdc8;
        case 0x26bdccu: goto label_26bdcc;
        case 0x26bdd0u: goto label_26bdd0;
        case 0x26bdd4u: goto label_26bdd4;
        case 0x26bdd8u: goto label_26bdd8;
        case 0x26bddcu: goto label_26bddc;
        case 0x26bde0u: goto label_26bde0;
        case 0x26bde4u: goto label_26bde4;
        case 0x26bde8u: goto label_26bde8;
        case 0x26bdecu: goto label_26bdec;
        case 0x26bdf0u: goto label_26bdf0;
        case 0x26bdf4u: goto label_26bdf4;
        case 0x26bdf8u: goto label_26bdf8;
        case 0x26bdfcu: goto label_26bdfc;
        case 0x26be00u: goto label_26be00;
        case 0x26be04u: goto label_26be04;
        case 0x26be08u: goto label_26be08;
        case 0x26be0cu: goto label_26be0c;
        case 0x26be10u: goto label_26be10;
        case 0x26be14u: goto label_26be14;
        case 0x26be18u: goto label_26be18;
        case 0x26be1cu: goto label_26be1c;
        case 0x26be20u: goto label_26be20;
        case 0x26be24u: goto label_26be24;
        case 0x26be28u: goto label_26be28;
        case 0x26be2cu: goto label_26be2c;
        case 0x26be30u: goto label_26be30;
        case 0x26be34u: goto label_26be34;
        case 0x26be38u: goto label_26be38;
        case 0x26be3cu: goto label_26be3c;
        case 0x26be40u: goto label_26be40;
        case 0x26be44u: goto label_26be44;
        case 0x26be48u: goto label_26be48;
        case 0x26be4cu: goto label_26be4c;
        case 0x26be50u: goto label_26be50;
        case 0x26be54u: goto label_26be54;
        case 0x26be58u: goto label_26be58;
        case 0x26be5cu: goto label_26be5c;
        case 0x26be60u: goto label_26be60;
        case 0x26be64u: goto label_26be64;
        case 0x26be68u: goto label_26be68;
        case 0x26be6cu: goto label_26be6c;
        case 0x26be70u: goto label_26be70;
        case 0x26be74u: goto label_26be74;
        default: break;
    }

    ctx->pc = 0x26bdb0u;

label_26bdb0:
    // 0x26bdb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x26bdb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_26bdb4:
    // 0x26bdb4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x26bdb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_26bdb8:
    // 0x26bdb8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x26bdb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_26bdbc:
    // 0x26bdbc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x26bdbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_26bdc0:
    // 0x26bdc0: 0xc0f5240  jal         func_3D4900
label_26bdc4:
    if (ctx->pc == 0x26BDC4u) {
        ctx->pc = 0x26BDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BDC0u;
        // 0x26bdc4: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BDC8u;
        goto label_26bdc8;
    }
    ctx->pc = 0x26BDC0u;
    SET_GPR_U32(ctx, 31, 0x26BDC8u);
    ctx->pc = 0x26BDC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BDC0u;
    // 0x26bdc4: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x26BDC0u, 0x26BDC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BDC8u;
label_26bdc8:
    // 0x26bdc8: 0xae020264  sw          $v0, 0x264($s0)
    ctx->pc = 0x26bdc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 612), GPR_U32(ctx, 2));
label_26bdcc:
    // 0x26bdcc: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x26bdccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_26bdd0:
    // 0x26bdd0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x26bdd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_26bdd4:
    // 0x26bdd4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x26bdd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_26bdd8:
    // 0x26bdd8: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x26bdd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_26bddc:
    // 0x26bddc: 0xc0f5240  jal         func_3D4900
label_26bde0:
    if (ctx->pc == 0x26BDE0u) {
        ctx->pc = 0x26BDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BDDCu;
        // 0x26bde0: 0xac40000c  sw          $zero, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BDE4u;
        goto label_26bde4;
    }
    ctx->pc = 0x26BDDCu;
    SET_GPR_U32(ctx, 31, 0x26BDE4u);
    ctx->pc = 0x26BDE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BDDCu;
    // 0x26bde0: 0xac40000c  sw          $zero, 0xC($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x26BDDCu, 0x26BDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BDE4u;
label_26bde4:
    // 0x26bde4: 0xae020268  sw          $v0, 0x268($s0)
    ctx->pc = 0x26bde4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 616), GPR_U32(ctx, 2));
label_26bde8:
    // 0x26bde8: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x26bde8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_26bdec:
    // 0x26bdec: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x26bdecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_26bdf0:
    // 0x26bdf0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x26bdf0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_26bdf4:
    // 0x26bdf4: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x26bdf4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_26bdf8:
    // 0x26bdf8: 0xc0f5240  jal         func_3D4900
label_26bdfc:
    if (ctx->pc == 0x26BDFCu) {
        ctx->pc = 0x26BDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BDF8u;
        // 0x26bdfc: 0xac40000c  sw          $zero, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BE00u;
        goto label_26be00;
    }
    ctx->pc = 0x26BDF8u;
    SET_GPR_U32(ctx, 31, 0x26BE00u);
    ctx->pc = 0x26BDFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BDF8u;
    // 0x26bdfc: 0xac40000c  sw          $zero, 0xC($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x26BDF8u, 0x26BE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BE00u;
label_26be00:
    // 0x26be00: 0x8e0400b8  lw          $a0, 0xB8($s0)
    ctx->pc = 0x26be00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
label_26be04:
    // 0x26be04: 0xae02026c  sw          $v0, 0x26C($s0)
    ctx->pc = 0x26be04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 620), GPR_U32(ctx, 2));
label_26be08:
    // 0x26be08: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x26be08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_26be0c:
    // 0x26be0c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x26be0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_26be10:
    // 0x26be10: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x26be10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_26be14:
    // 0x26be14: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x26be14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
label_26be18:
    // 0x26be18: 0x8482000c  lh          $v0, 0xC($a0)
    ctx->pc = 0x26be18u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
label_26be1c:
    // 0x26be1c: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
label_26be20:
    if (ctx->pc == 0x26BE20u) {
        ctx->pc = 0x26BE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BE1Cu;
        // 0x26be20: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BE24u;
        goto label_26be24;
    }
    ctx->pc = 0x26BE1Cu;
    {
        const bool branch_taken_0x26be1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26be1c) {
            ctx->pc = 0x26BE20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26BE1Cu;
            // 0x26be20: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26BE28u;
            goto label_26be28;
        }
    }
    ctx->pc = 0x26BE24u;
label_26be24:
    // 0x26be24: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x26be24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_26be28:
    // 0x26be28: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x26be28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
label_26be2c:
    // 0x26be2c: 0xc0efb95  jal         func_3BEE54
label_26be30:
    if (ctx->pc == 0x26BE30u) {
        ctx->pc = 0x26BE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BE2Cu;
        // 0x26be30: 0x24a57ba8  addiu       $a1, $a1, 0x7BA8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31656));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BE34u;
        goto label_26be34;
    }
    ctx->pc = 0x26BE2Cu;
    SET_GPR_U32(ctx, 31, 0x26BE34u);
    ctx->pc = 0x26BE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BE2Cu;
    // 0x26be30: 0x24a57ba8  addiu       $a1, $a1, 0x7BA8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x26BE2Cu, 0x26BE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BE34u;
label_26be34:
    // 0x26be34: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_26be38:
    if (ctx->pc == 0x26BE38u) {
        ctx->pc = 0x26BE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BE34u;
        // 0x26be38: 0x8e0200b8  lw          $v0, 0xB8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BE3Cu;
        goto label_26be3c;
    }
    ctx->pc = 0x26BE34u;
    {
        const bool branch_taken_0x26be34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26be34) {
            ctx->pc = 0x26BE38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26BE34u;
            // 0x26be38: 0x8e0200b8  lw          $v0, 0xB8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26BE48u;
            goto label_26be48;
        }
    }
    ctx->pc = 0x26BE3Cu;
label_26be3c:
    // 0x26be3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26be3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26be40:
    // 0x26be40: 0xae020278  sw          $v0, 0x278($s0)
    ctx->pc = 0x26be40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 632), GPR_U32(ctx, 2));
label_26be44:
    // 0x26be44: 0x8e0200b8  lw          $v0, 0xB8($s0)
    ctx->pc = 0x26be44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
label_26be48:
    // 0x26be48: 0x90430010  lbu         $v1, 0x10($v0)
    ctx->pc = 0x26be48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 16)));
label_26be4c:
    // 0x26be4c: 0x54600007  bnel        $v1, $zero, . + 4 + (0x7 << 2)
label_26be50:
    if (ctx->pc == 0x26BE50u) {
        ctx->pc = 0x26BE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BE4Cu;
        // 0x26be50: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BE54u;
        goto label_26be54;
    }
    ctx->pc = 0x26BE4Cu;
    {
        const bool branch_taken_0x26be4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26be4c) {
            ctx->pc = 0x26BE50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26BE4Cu;
            // 0x26be50: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26BE6Cu;
            goto label_26be6c;
        }
    }
    ctx->pc = 0x26BE54u;
label_26be54:
    // 0x26be54: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x26be54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_26be58:
    // 0x26be58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26be58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26be5c:
    // 0x26be5c: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x26be5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_26be60:
    // 0x26be60: 0x40f809  jalr        $v0
label_26be64:
    if (ctx->pc == 0x26BE64u) {
        ctx->pc = 0x26BE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BE60u;
        // 0x26be64: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BE68u;
        goto label_26be68;
    }
    ctx->pc = 0x26BE60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26BE68u);
        ctx->pc = 0x26BE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BE60u;
        // 0x26be64: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26BE60u, 0x26BE68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26BE68u;
label_26be68:
    // 0x26be68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x26be68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_26be6c:
    // 0x26be6c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x26be6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_26be70:
    // 0x26be70: 0x3e00008  jr          $ra
label_26be74:
    if (ctx->pc == 0x26BE74u) {
        ctx->pc = 0x26BE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BE70u;
        // 0x26be74: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BE78u;
        goto label_fallthrough_0x26be70;
    }
    ctx->pc = 0x26BE70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26BE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BE70u;
        // 0x26be74: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26BE70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x26be70:
    ctx->pc = 0x26BE78u;
}
