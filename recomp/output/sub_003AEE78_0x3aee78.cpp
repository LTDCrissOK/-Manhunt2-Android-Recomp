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

// Function: sub_003AEE78
// Address: 0x3aee78 - 0x3aeff0
void sub_003AEE78_0x3aee78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AEE78_0x3aee78");
#endif

    switch (ctx->pc) {
        case 0x3aee78u: goto label_3aee78;
        case 0x3aee7cu: goto label_3aee7c;
        case 0x3aee80u: goto label_3aee80;
        case 0x3aee84u: goto label_3aee84;
        case 0x3aee88u: goto label_3aee88;
        case 0x3aee8cu: goto label_3aee8c;
        case 0x3aee90u: goto label_3aee90;
        case 0x3aee94u: goto label_3aee94;
        case 0x3aee98u: goto label_3aee98;
        case 0x3aee9cu: goto label_3aee9c;
        case 0x3aeea0u: goto label_3aeea0;
        case 0x3aeea4u: goto label_3aeea4;
        case 0x3aeea8u: goto label_3aeea8;
        case 0x3aeeacu: goto label_3aeeac;
        case 0x3aeeb0u: goto label_3aeeb0;
        case 0x3aeeb4u: goto label_3aeeb4;
        case 0x3aeeb8u: goto label_3aeeb8;
        case 0x3aeebcu: goto label_3aeebc;
        case 0x3aeec0u: goto label_3aeec0;
        case 0x3aeec4u: goto label_3aeec4;
        case 0x3aeec8u: goto label_3aeec8;
        case 0x3aeeccu: goto label_3aeecc;
        case 0x3aeed0u: goto label_3aeed0;
        case 0x3aeed4u: goto label_3aeed4;
        case 0x3aeed8u: goto label_3aeed8;
        case 0x3aeedcu: goto label_3aeedc;
        case 0x3aeee0u: goto label_3aeee0;
        case 0x3aeee4u: goto label_3aeee4;
        case 0x3aeee8u: goto label_3aeee8;
        case 0x3aeeecu: goto label_3aeeec;
        case 0x3aeef0u: goto label_3aeef0;
        case 0x3aeef4u: goto label_3aeef4;
        case 0x3aeef8u: goto label_3aeef8;
        case 0x3aeefcu: goto label_3aeefc;
        case 0x3aef00u: goto label_3aef00;
        case 0x3aef04u: goto label_3aef04;
        case 0x3aef08u: goto label_3aef08;
        case 0x3aef0cu: goto label_3aef0c;
        case 0x3aef10u: goto label_3aef10;
        case 0x3aef14u: goto label_3aef14;
        case 0x3aef18u: goto label_3aef18;
        case 0x3aef1cu: goto label_3aef1c;
        case 0x3aef20u: goto label_3aef20;
        case 0x3aef24u: goto label_3aef24;
        case 0x3aef28u: goto label_3aef28;
        case 0x3aef2cu: goto label_3aef2c;
        case 0x3aef30u: goto label_3aef30;
        case 0x3aef34u: goto label_3aef34;
        case 0x3aef38u: goto label_3aef38;
        case 0x3aef3cu: goto label_3aef3c;
        case 0x3aef40u: goto label_3aef40;
        case 0x3aef44u: goto label_3aef44;
        case 0x3aef48u: goto label_3aef48;
        case 0x3aef4cu: goto label_3aef4c;
        case 0x3aef50u: goto label_3aef50;
        case 0x3aef54u: goto label_3aef54;
        case 0x3aef58u: goto label_3aef58;
        case 0x3aef5cu: goto label_3aef5c;
        case 0x3aef60u: goto label_3aef60;
        case 0x3aef64u: goto label_3aef64;
        case 0x3aef68u: goto label_3aef68;
        case 0x3aef6cu: goto label_3aef6c;
        case 0x3aef70u: goto label_3aef70;
        case 0x3aef74u: goto label_3aef74;
        case 0x3aef78u: goto label_3aef78;
        case 0x3aef7cu: goto label_3aef7c;
        case 0x3aef80u: goto label_3aef80;
        case 0x3aef84u: goto label_3aef84;
        case 0x3aef88u: goto label_3aef88;
        case 0x3aef8cu: goto label_3aef8c;
        case 0x3aef90u: goto label_3aef90;
        case 0x3aef94u: goto label_3aef94;
        case 0x3aef98u: goto label_3aef98;
        case 0x3aef9cu: goto label_3aef9c;
        case 0x3aefa0u: goto label_3aefa0;
        case 0x3aefa4u: goto label_3aefa4;
        case 0x3aefa8u: goto label_3aefa8;
        case 0x3aefacu: goto label_3aefac;
        case 0x3aefb0u: goto label_3aefb0;
        case 0x3aefb4u: goto label_3aefb4;
        case 0x3aefb8u: goto label_3aefb8;
        case 0x3aefbcu: goto label_3aefbc;
        case 0x3aefc0u: goto label_3aefc0;
        case 0x3aefc4u: goto label_3aefc4;
        case 0x3aefc8u: goto label_3aefc8;
        case 0x3aefccu: goto label_3aefcc;
        case 0x3aefd0u: goto label_3aefd0;
        case 0x3aefd4u: goto label_3aefd4;
        case 0x3aefd8u: goto label_3aefd8;
        case 0x3aefdcu: goto label_3aefdc;
        case 0x3aefe0u: goto label_3aefe0;
        case 0x3aefe4u: goto label_3aefe4;
        case 0x3aefe8u: goto label_3aefe8;
        case 0x3aefecu: goto label_3aefec;
        default: break;
    }

    ctx->pc = 0x3aee78u;

label_3aee78:
    // 0x3aee78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3aee78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3aee7c:
    // 0x3aee7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3aee7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3aee80:
    // 0x3aee80: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3aee80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3aee84:
    // 0x3aee84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3aee84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3aee88:
    // 0x3aee88: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3aee88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_3aee8c:
    // 0x3aee8c: 0x26110048  addiu       $s1, $s0, 0x48
    ctx->pc = 0x3aee8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
label_3aee90:
    // 0x3aee90: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3aee90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_3aee94:
    // 0x3aee94: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3aee94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_3aee98:
    // 0x3aee98: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3aee98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3aee9c:
    // 0x3aee9c: 0x14620043  bne         $v1, $v0, . + 4 + (0x43 << 2)
label_3aeea0:
    if (ctx->pc == 0x3AEEA0u) {
        ctx->pc = 0x3AEEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEE9Cu;
        // 0x3aeea0: 0x8e320000  lw          $s2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AEEA4u;
        goto label_3aeea4;
    }
    ctx->pc = 0x3AEE9Cu;
    {
        const bool branch_taken_0x3aee9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3AEEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEE9Cu;
        // 0x3aeea0: 0x8e320000  lw          $s2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aee9c) {
            ctx->pc = 0x3AEFACu;
            goto label_3aefac;
        }
    }
    ctx->pc = 0x3AEEA4u;
label_3aeea4:
    // 0x3aeea4: 0xc0ec416  jal         func_3B1058
label_3aeea8:
    if (ctx->pc == 0x3AEEA8u) {
        ctx->pc = 0x3AEEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEEA4u;
        // 0x3aeea8: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AEEACu;
        goto label_3aeeac;
    }
    ctx->pc = 0x3AEEA4u;
    SET_GPR_U32(ctx, 31, 0x3AEEACu);
    ctx->pc = 0x3AEEA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AEEA4u;
    // 0x3aeea8: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1058u, 0x3AEEA4u, 0x3AEEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AEEACu;
label_3aeeac:
    // 0x3aeeac: 0x5440003f  bnel        $v0, $zero, . + 4 + (0x3F << 2)
label_3aeeb0:
    if (ctx->pc == 0x3AEEB0u) {
        ctx->pc = 0x3AEEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEEACu;
        // 0x3aeeb0: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AEEB4u;
        goto label_3aeeb4;
    }
    ctx->pc = 0x3AEEACu;
    {
        const bool branch_taken_0x3aeeac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3aeeac) {
            ctx->pc = 0x3AEEB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AEEACu;
            // 0x3aeeb0: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AEFACu;
            goto label_3aefac;
        }
    }
    ctx->pc = 0x3AEEB4u;
label_3aeeb4:
    // 0x3aeeb4: 0x8e04007c  lw          $a0, 0x7C($s0)
    ctx->pc = 0x3aeeb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_3aeeb8:
    // 0x3aeeb8: 0x26050068  addiu       $a1, $s0, 0x68
    ctx->pc = 0x3aeeb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
label_3aeebc:
    // 0x3aeebc: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x3aeebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
label_3aeec0:
    // 0x3aeec0: 0x2606006c  addiu       $a2, $s0, 0x6C
    ctx->pc = 0x3aeec0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_3aeec4:
    // 0x3aeec4: 0x40f809  jalr        $v0
label_3aeec8:
    if (ctx->pc == 0x3AEEC8u) {
        ctx->pc = 0x3AEEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEEC4u;
        // 0x3aeec8: 0x26070070  addiu       $a3, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AEECCu;
        goto label_3aeecc;
    }
    ctx->pc = 0x3AEEC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AEECCu);
        ctx->pc = 0x3AEEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEEC4u;
        // 0x3aeec8: 0x26070070  addiu       $a3, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AEEC4u, 0x3AEECCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AEECCu;
label_3aeecc:
    // 0x3aeecc: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x3aeeccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_3aeed0:
    // 0x3aeed0: 0x8e270020  lw          $a3, 0x20($s1)
    ctx->pc = 0x3aeed0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_3aeed4:
    // 0x3aeed4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3aeed4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3aeed8:
    // 0x3aeed8: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x3aeed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_3aeedc:
    // 0x3aeedc: 0x874823  subu        $t1, $a0, $a3
    ctx->pc = 0x3aeedcu;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_3aeee0:
    // 0x3aeee0: 0x8204000e  lb          $a0, 0xE($s0)
    ctx->pc = 0x3aeee0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_3aeee4:
    // 0x3aeee4: 0x69102a  slt         $v0, $v1, $t1
    ctx->pc = 0x3aeee4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_3aeee8:
    // 0x3aeee8: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x3aeee8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3aeeec:
    // 0x3aeeec: 0x62480b  movn        $t1, $v1, $v0
    ctx->pc = 0x3aeeecu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 3));
label_3aeef0:
    // 0x3aeef0: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x3aeef0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_3aeef4:
    // 0x3aeef4: 0x8e2b0014  lw          $t3, 0x14($s1)
    ctx->pc = 0x3aeef4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_3aeef8:
    // 0x3aeef8: 0xa9102a  slt         $v0, $a1, $t1
    ctx->pc = 0x3aeef8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_3aeefc:
    // 0x3aeefc: 0xa2480b  movn        $t1, $a1, $v0
    ctx->pc = 0x3aeefcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 5));
label_3aef00:
    // 0x3aef00: 0x1635021  addu        $t2, $t3, $v1
    ctx->pc = 0x3aef00u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
label_3aef04:
    // 0x3aef04: 0x14860016  bne         $a0, $a2, . + 4 + (0x16 << 2)
label_3aef08:
    if (ctx->pc == 0x3AEF08u) {
        ctx->pc = 0x3AEF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEF04u;
        // 0x3aef08: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AEF0Cu;
        goto label_3aef0c;
    }
    ctx->pc = 0x3AEF04u;
    {
        const bool branch_taken_0x3aef04 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x3AEF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEF04u;
        // 0x3aef08: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aef04) {
            ctx->pc = 0x3AEF60u;
            goto label_3aef60;
        }
    }
    ctx->pc = 0x3AEF0Cu;
label_3aef0c:
    // 0x3aef0c: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x3aef0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_3aef10:
    // 0x3aef10: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3aef10u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3aef14:
    // 0x3aef14: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x3aef14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_3aef18:
    // 0x3aef18: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3aef18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_3aef1c:
    // 0x3aef1c: 0x1920001b  blez        $t1, . + 4 + (0x1B << 2)
label_3aef20:
    if (ctx->pc == 0x3AEF20u) {
        ctx->pc = 0x3AEF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEF1Cu;
        // 0x3aef20: 0x1625821  addu        $t3, $t3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AEF24u;
        goto label_3aef24;
    }
    ctx->pc = 0x3AEF1Cu;
    {
        const bool branch_taken_0x3aef1c = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x3AEF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEF1Cu;
        // 0x3aef20: 0x1625821  addu        $t3, $t3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aef1c) {
            ctx->pc = 0x3AEF8Cu;
            goto label_3aef8c;
        }
    }
    ctx->pc = 0x3AEF24u;
label_3aef24:
    // 0x3aef24: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x3aef24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3aef28:
    // 0x3aef28: 0x81840  sll         $v1, $t0, 1
    ctx->pc = 0x3aef28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_3aef2c:
    // 0x3aef2c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3aef2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_3aef30:
    // 0x3aef30: 0x94e50000  lhu         $a1, 0x0($a3)
    ctx->pc = 0x3aef30u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
label_3aef34:
    // 0x3aef34: 0x6a2021  addu        $a0, $v1, $t2
    ctx->pc = 0x3aef34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
label_3aef38:
    // 0x3aef38: 0x109302a  slt         $a2, $t0, $t1
    ctx->pc = 0x3aef38u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_3aef3c:
    // 0x3aef3c: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x3aef3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
label_3aef40:
    // 0x3aef40: 0xa4850000  sh          $a1, 0x0($a0)
    ctx->pc = 0x3aef40u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 5));
label_3aef44:
    // 0x3aef44: 0x94e20002  lhu         $v0, 0x2($a3)
    ctx->pc = 0x3aef44u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
label_3aef48:
    // 0x3aef48: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x3aef48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_3aef4c:
    // 0x3aef4c: 0x14c0fff6  bnez        $a2, . + 4 + (-0xA << 2)
label_3aef50:
    if (ctx->pc == 0x3AEF50u) {
        ctx->pc = 0x3AEF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEF4Cu;
        // 0x3aef50: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AEF54u;
        goto label_3aef54;
    }
    ctx->pc = 0x3AEF4Cu;
    {
        const bool branch_taken_0x3aef4c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AEF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEF4Cu;
        // 0x3aef50: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aef4c) {
            ctx->pc = 0x3AEF28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3aef28;
        }
    }
    ctx->pc = 0x3AEF54u;
label_3aef54:
    // 0x3aef54: 0x1000000d  b           . + 4 + (0xD << 2)
label_3aef58:
    if (ctx->pc == 0x3AEF58u) {
        ctx->pc = 0x3AEF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEF54u;
        // 0x3aef58: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AEF5Cu;
        goto label_3aef5c;
    }
    ctx->pc = 0x3AEF54u;
    {
        const bool branch_taken_0x3aef54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AEF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEF54u;
        // 0x3aef58: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aef54) {
            ctx->pc = 0x3AEF8Cu;
            goto label_3aef8c;
        }
    }
    ctx->pc = 0x3AEF5Cu;
label_3aef5c:
    // 0x3aef5c: 0x0  nop
    ctx->pc = 0x3aef5cu;
    // NOP
label_3aef60:
    // 0x3aef60: 0x1920000a  blez        $t1, . + 4 + (0xA << 2)
label_3aef64:
    if (ctx->pc == 0x3AEF64u) {
        ctx->pc = 0x3AEF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEF60u;
        // 0x3aef64: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AEF68u;
        goto label_3aef68;
    }
    ctx->pc = 0x3AEF60u;
    {
        const bool branch_taken_0x3aef60 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x3AEF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEF60u;
        // 0x3aef64: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aef60) {
            ctx->pc = 0x3AEF8Cu;
            goto label_3aef8c;
        }
    }
    ctx->pc = 0x3AEF68u;
label_3aef68:
    // 0x3aef68: 0x81040  sll         $v0, $t0, 1
    ctx->pc = 0x3aef68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_3aef6c:
    // 0x3aef6c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3aef6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_3aef70:
    // 0x3aef70: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x3aef70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_3aef74:
    // 0x3aef74: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x3aef74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_3aef78:
    // 0x3aef78: 0x94640000  lhu         $a0, 0x0($v1)
    ctx->pc = 0x3aef78u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_3aef7c:
    // 0x3aef7c: 0x109282a  slt         $a1, $t0, $t1
    ctx->pc = 0x3aef7cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_3aef80:
    // 0x3aef80: 0x14a0fff9  bnez        $a1, . + 4 + (-0x7 << 2)
label_3aef84:
    if (ctx->pc == 0x3AEF84u) {
        ctx->pc = 0x3AEF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEF80u;
        // 0x3aef84: 0xa4440000  sh          $a0, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AEF88u;
        goto label_3aef88;
    }
    ctx->pc = 0x3AEF80u;
    {
        const bool branch_taken_0x3aef80 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AEF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEF80u;
        // 0x3aef84: 0xa4440000  sh          $a0, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aef80) {
            ctx->pc = 0x3AEF68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3aef68;
        }
    }
    ctx->pc = 0x3AEF88u;
label_3aef88:
    // 0x3aef88: 0x9203000e  lbu         $v1, 0xE($s0)
    ctx->pc = 0x3aef88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_3aef8c:
    // 0x3aef8c: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x3aef8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_3aef90:
    // 0x3aef90: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3aef90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3aef94:
    // 0x3aef94: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x3aef94u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_3aef98:
    // 0x3aef98: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x3aef98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_3aef9c:
    // 0x3aef9c: 0x1221018  mult        $v0, $t1, $v0
    ctx->pc = 0x3aef9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_3aefa0:
    // 0x3aefa0: 0xae090090  sw          $t1, 0x90($s0)
    ctx->pc = 0x3aefa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 9));
label_3aefa4:
    // 0x3aefa4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3aefa4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_3aefa8:
    // 0x3aefa8: 0xae020094  sw          $v0, 0x94($s0)
    ctx->pc = 0x3aefa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
label_3aefac:
    // 0x3aefac: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3aefacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3aefb0:
    // 0x3aefb0: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
label_3aefb4:
    if (ctx->pc == 0x3AEFB4u) {
        ctx->pc = 0x3AEFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEFB0u;
        // 0x3aefb4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AEFB8u;
        goto label_3aefb8;
    }
    ctx->pc = 0x3AEFB0u;
    {
        const bool branch_taken_0x3aefb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3aefb0) {
            ctx->pc = 0x3AEFB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AEFB0u;
            // 0x3aefb4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AEFD8u;
            goto label_3aefd8;
        }
    }
    ctx->pc = 0x3AEFB8u;
label_3aefb8:
    // 0x3aefb8: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x3aefb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_3aefbc:
    // 0x3aefbc: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x3aefbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_3aefc0:
    // 0x3aefc0: 0x8e050094  lw          $a1, 0x94($s0)
    ctx->pc = 0x3aefc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_3aefc4:
    // 0x3aefc4: 0x60f809  jalr        $v1
label_3aefc8:
    if (ctx->pc == 0x3AEFC8u) {
        ctx->pc = 0x3AEFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEFC4u;
        // 0x3aefc8: 0x8e060090  lw          $a2, 0x90($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AEFCCu;
        goto label_3aefcc;
    }
    ctx->pc = 0x3AEFC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3AEFCCu);
        ctx->pc = 0x3AEFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEFC4u;
        // 0x3aefc8: 0x8e060090  lw          $a2, 0x90($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AEFC4u, 0x3AEFCCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AEFCCu;
label_3aefcc:
    // 0x3aefcc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3aefccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3aefd0:
    // 0x3aefd0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x3aefd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_3aefd4:
    // 0x3aefd4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3aefd4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3aefd8:
    // 0x3aefd8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3aefd8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3aefdc:
    // 0x3aefdc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3aefdcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3aefe0:
    // 0x3aefe0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3aefe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_3aefe4:
    // 0x3aefe4: 0x3e00008  jr          $ra
label_3aefe8:
    if (ctx->pc == 0x3AEFE8u) {
        ctx->pc = 0x3AEFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEFE4u;
        // 0x3aefe8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AEFECu;
        goto label_3aefec;
    }
    ctx->pc = 0x3AEFE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AEFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEFE4u;
        // 0x3aefe8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AEFE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AEFECu;
label_3aefec:
    // 0x3aefec: 0x0  nop
    ctx->pc = 0x3aefecu;
    // NOP
    ctx->pc = 0x3aeff0u;
}
