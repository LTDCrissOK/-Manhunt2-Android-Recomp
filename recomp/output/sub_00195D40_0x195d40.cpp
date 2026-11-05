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

// Function: sub_00195D40
// Address: 0x195d40 - 0x195e38
void sub_00195D40_0x195d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00195D40_0x195d40");
#endif

    switch (ctx->pc) {
        case 0x195d40u: goto label_195d40;
        case 0x195d44u: goto label_195d44;
        case 0x195d48u: goto label_195d48;
        case 0x195d4cu: goto label_195d4c;
        case 0x195d50u: goto label_195d50;
        case 0x195d54u: goto label_195d54;
        case 0x195d58u: goto label_195d58;
        case 0x195d5cu: goto label_195d5c;
        case 0x195d60u: goto label_195d60;
        case 0x195d64u: goto label_195d64;
        case 0x195d68u: goto label_195d68;
        case 0x195d6cu: goto label_195d6c;
        case 0x195d70u: goto label_195d70;
        case 0x195d74u: goto label_195d74;
        case 0x195d78u: goto label_195d78;
        case 0x195d7cu: goto label_195d7c;
        case 0x195d80u: goto label_195d80;
        case 0x195d84u: goto label_195d84;
        case 0x195d88u: goto label_195d88;
        case 0x195d8cu: goto label_195d8c;
        case 0x195d90u: goto label_195d90;
        case 0x195d94u: goto label_195d94;
        case 0x195d98u: goto label_195d98;
        case 0x195d9cu: goto label_195d9c;
        case 0x195da0u: goto label_195da0;
        case 0x195da4u: goto label_195da4;
        case 0x195da8u: goto label_195da8;
        case 0x195dacu: goto label_195dac;
        case 0x195db0u: goto label_195db0;
        case 0x195db4u: goto label_195db4;
        case 0x195db8u: goto label_195db8;
        case 0x195dbcu: goto label_195dbc;
        case 0x195dc0u: goto label_195dc0;
        case 0x195dc4u: goto label_195dc4;
        case 0x195dc8u: goto label_195dc8;
        case 0x195dccu: goto label_195dcc;
        case 0x195dd0u: goto label_195dd0;
        case 0x195dd4u: goto label_195dd4;
        case 0x195dd8u: goto label_195dd8;
        case 0x195ddcu: goto label_195ddc;
        case 0x195de0u: goto label_195de0;
        case 0x195de4u: goto label_195de4;
        case 0x195de8u: goto label_195de8;
        case 0x195decu: goto label_195dec;
        case 0x195df0u: goto label_195df0;
        case 0x195df4u: goto label_195df4;
        case 0x195df8u: goto label_195df8;
        case 0x195dfcu: goto label_195dfc;
        case 0x195e00u: goto label_195e00;
        case 0x195e04u: goto label_195e04;
        case 0x195e08u: goto label_195e08;
        case 0x195e0cu: goto label_195e0c;
        case 0x195e10u: goto label_195e10;
        case 0x195e14u: goto label_195e14;
        case 0x195e18u: goto label_195e18;
        case 0x195e1cu: goto label_195e1c;
        case 0x195e20u: goto label_195e20;
        case 0x195e24u: goto label_195e24;
        case 0x195e28u: goto label_195e28;
        case 0x195e2cu: goto label_195e2c;
        case 0x195e30u: goto label_195e30;
        case 0x195e34u: goto label_195e34;
        default: break;
    }

    ctx->pc = 0x195d40u;

label_195d40:
    // 0x195d40: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x195d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_195d44:
    // 0x195d44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x195d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_195d48:
    // 0x195d48: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x195d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_195d4c:
    // 0x195d4c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x195d4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_195d50:
    // 0x195d50: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x195d50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_195d54:
    // 0x195d54: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x195d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_195d58:
    // 0x195d58: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x195d58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_195d5c:
    // 0x195d5c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x195d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_195d60:
    // 0x195d60: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x195d60u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_195d64:
    // 0x195d64: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x195d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_195d68:
    // 0x195d68: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x195d68u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_195d6c:
    // 0x195d6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x195d6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_195d70:
    // 0x195d70: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x195d70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_195d74:
    // 0x195d74: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x195d74u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_195d78:
    // 0x195d78: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x195d78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_195d7c:
    // 0x195d7c: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
label_195d80:
    if (ctx->pc == 0x195D80u) {
        ctx->pc = 0x195D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195D7Cu;
        // 0x195d80: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195D84u;
        goto label_195d84;
    }
    ctx->pc = 0x195D7Cu;
    {
        const bool branch_taken_0x195d7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x195D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195D7Cu;
        // 0x195d80: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195d7c) {
            ctx->pc = 0x195DB0u;
            goto label_195db0;
        }
    }
    ctx->pc = 0x195D84u;
label_195d84:
    // 0x195d84: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x195d84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_195d88:
    // 0x195d88: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_195d8c:
    if (ctx->pc == 0x195D8Cu) {
        ctx->pc = 0x195D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195D88u;
        // 0x195d8c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195D90u;
        goto label_195d90;
    }
    ctx->pc = 0x195D88u;
    {
        const bool branch_taken_0x195d88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x195D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195D88u;
        // 0x195d8c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195d88) {
            ctx->pc = 0x195DA0u;
            goto label_195da0;
        }
    }
    ctx->pc = 0x195D90u;
label_195d90:
    // 0x195d90: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
label_195d94:
    if (ctx->pc == 0x195D94u) {
        ctx->pc = 0x195D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195D90u;
        // 0x195d94: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195D98u;
        goto label_195d98;
    }
    ctx->pc = 0x195D90u;
    {
        const bool branch_taken_0x195d90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x195D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195D90u;
        // 0x195d94: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195d90) {
            ctx->pc = 0x195DC0u;
            goto label_195dc0;
        }
    }
    ctx->pc = 0x195D98u;
label_195d98:
    // 0x195d98: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_195d9c:
    if (ctx->pc == 0x195D9Cu) {
        ctx->pc = 0x195DA0u;
        goto label_195da0;
    }
    ctx->pc = 0x195D98u;
    {
        const bool branch_taken_0x195d98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x195d98) {
            ctx->pc = 0x195DB0u;
            goto label_195db0;
        }
    }
    ctx->pc = 0x195DA0u;
label_195da0:
    // 0x195da0: 0x3c0140e0  lui         $at, 0x40E0
    ctx->pc = 0x195da0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16608 << 16));
label_195da4:
    // 0x195da4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x195da4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_195da8:
    // 0x195da8: 0x10000007  b           . + 4 + (0x7 << 2)
label_195dac:
    if (ctx->pc == 0x195DACu) {
        ctx->pc = 0x195DB0u;
        goto label_195db0;
    }
    ctx->pc = 0x195DA8u;
    {
        const bool branch_taken_0x195da8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x195da8) {
            ctx->pc = 0x195DC8u;
            goto label_195dc8;
        }
    }
    ctx->pc = 0x195DB0u;
label_195db0:
    // 0x195db0: 0x3c014140  lui         $at, 0x4140
    ctx->pc = 0x195db0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16704 << 16));
label_195db4:
    // 0x195db4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x195db4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_195db8:
    // 0x195db8: 0x10000003  b           . + 4 + (0x3 << 2)
label_195dbc:
    if (ctx->pc == 0x195DBCu) {
        ctx->pc = 0x195DC0u;
        goto label_195dc0;
    }
    ctx->pc = 0x195DB8u;
    {
        const bool branch_taken_0x195db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x195db8) {
            ctx->pc = 0x195DC8u;
            goto label_195dc8;
        }
    }
    ctx->pc = 0x195DC0u;
label_195dc0:
    // 0x195dc0: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x195dc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_195dc4:
    // 0x195dc4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x195dc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_195dc8:
    // 0x195dc8: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x195dc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
label_195dcc:
    // 0x195dcc: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x195dccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_195dd0:
    // 0x195dd0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x195dd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_195dd4:
    // 0x195dd4: 0xc0e3f1c  jal         func_38FC70
label_195dd8:
    if (ctx->pc == 0x195DD8u) {
        ctx->pc = 0x195DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195DD4u;
        // 0x195dd8: 0x8e30000c  lw          $s0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195DDCu;
        goto label_195ddc;
    }
    ctx->pc = 0x195DD4u;
    SET_GPR_U32(ctx, 31, 0x195DDCu);
    ctx->pc = 0x195DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195DD4u;
    // 0x195dd8: 0x8e30000c  lw          $s0, 0xC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FC70u, 0x195DD4u, 0x195DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195DDCu;
label_195ddc:
    // 0x195ddc: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x195ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_195de0:
    // 0x195de0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x195de0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_195de4:
    // 0x195de4: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x195de4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_195de8:
    // 0x195de8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x195de8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_195dec:
    // 0x195dec: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x195decu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_195df0:
    // 0x195df0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x195df0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_195df4:
    // 0x195df4: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x195df4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_195df8:
    // 0x195df8: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x195df8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_195dfc:
    // 0x195dfc: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x195dfcu;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
label_195e00:
    // 0x195e00: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x195e00u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_195e04:
    // 0x195e04: 0x40f809  jalr        $v0
label_195e08:
    if (ctx->pc == 0x195E08u) {
        ctx->pc = 0x195E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195E04u;
        // 0x195e08: 0x24090004  addiu       $t1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195E0Cu;
        goto label_195e0c;
    }
    ctx->pc = 0x195E04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x195E0Cu);
        ctx->pc = 0x195E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195E04u;
        // 0x195e08: 0x24090004  addiu       $t1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195E04u, 0x195E0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x195E0Cu;
label_195e0c:
    // 0x195e0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x195e0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_195e10:
    // 0x195e10: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x195e10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_195e14:
    // 0x195e14: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x195e14u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_195e18:
    // 0x195e18: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x195e18u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_195e1c:
    // 0x195e1c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x195e1cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_195e20:
    // 0x195e20: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x195e20u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_195e24:
    // 0x195e24: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x195e24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_195e28:
    // 0x195e28: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x195e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_195e2c:
    // 0x195e2c: 0x3e00008  jr          $ra
label_195e30:
    if (ctx->pc == 0x195E30u) {
        ctx->pc = 0x195E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195E2Cu;
        // 0x195e30: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195E34u;
        goto label_195e34;
    }
    ctx->pc = 0x195E2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195E2Cu;
        // 0x195e30: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195E2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195E34u;
label_195e34:
    // 0x195e34: 0x0  nop
    ctx->pc = 0x195e34u;
    // NOP
    ctx->pc = 0x195e38u;
}
