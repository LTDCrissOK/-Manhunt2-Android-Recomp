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

// Function: sub_00141930
// Address: 0x141930 - 0x141b60
void sub_00141930_0x141930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00141930_0x141930");
#endif

    switch (ctx->pc) {
        case 0x141930u: goto label_141930;
        case 0x141934u: goto label_141934;
        case 0x141938u: goto label_141938;
        case 0x14193cu: goto label_14193c;
        case 0x141940u: goto label_141940;
        case 0x141944u: goto label_141944;
        case 0x141948u: goto label_141948;
        case 0x14194cu: goto label_14194c;
        case 0x141950u: goto label_141950;
        case 0x141954u: goto label_141954;
        case 0x141958u: goto label_141958;
        case 0x14195cu: goto label_14195c;
        case 0x141960u: goto label_141960;
        case 0x141964u: goto label_141964;
        case 0x141968u: goto label_141968;
        case 0x14196cu: goto label_14196c;
        case 0x141970u: goto label_141970;
        case 0x141974u: goto label_141974;
        case 0x141978u: goto label_141978;
        case 0x14197cu: goto label_14197c;
        case 0x141980u: goto label_141980;
        case 0x141984u: goto label_141984;
        case 0x141988u: goto label_141988;
        case 0x14198cu: goto label_14198c;
        case 0x141990u: goto label_141990;
        case 0x141994u: goto label_141994;
        case 0x141998u: goto label_141998;
        case 0x14199cu: goto label_14199c;
        case 0x1419a0u: goto label_1419a0;
        case 0x1419a4u: goto label_1419a4;
        case 0x1419a8u: goto label_1419a8;
        case 0x1419acu: goto label_1419ac;
        case 0x1419b0u: goto label_1419b0;
        case 0x1419b4u: goto label_1419b4;
        case 0x1419b8u: goto label_1419b8;
        case 0x1419bcu: goto label_1419bc;
        case 0x1419c0u: goto label_1419c0;
        case 0x1419c4u: goto label_1419c4;
        case 0x1419c8u: goto label_1419c8;
        case 0x1419ccu: goto label_1419cc;
        case 0x1419d0u: goto label_1419d0;
        case 0x1419d4u: goto label_1419d4;
        case 0x1419d8u: goto label_1419d8;
        case 0x1419dcu: goto label_1419dc;
        case 0x1419e0u: goto label_1419e0;
        case 0x1419e4u: goto label_1419e4;
        case 0x1419e8u: goto label_1419e8;
        case 0x1419ecu: goto label_1419ec;
        case 0x1419f0u: goto label_1419f0;
        case 0x1419f4u: goto label_1419f4;
        case 0x1419f8u: goto label_1419f8;
        case 0x1419fcu: goto label_1419fc;
        case 0x141a00u: goto label_141a00;
        case 0x141a04u: goto label_141a04;
        case 0x141a08u: goto label_141a08;
        case 0x141a0cu: goto label_141a0c;
        case 0x141a10u: goto label_141a10;
        case 0x141a14u: goto label_141a14;
        case 0x141a18u: goto label_141a18;
        case 0x141a1cu: goto label_141a1c;
        case 0x141a20u: goto label_141a20;
        case 0x141a24u: goto label_141a24;
        case 0x141a28u: goto label_141a28;
        case 0x141a2cu: goto label_141a2c;
        case 0x141a30u: goto label_141a30;
        case 0x141a34u: goto label_141a34;
        case 0x141a38u: goto label_141a38;
        case 0x141a3cu: goto label_141a3c;
        case 0x141a40u: goto label_141a40;
        case 0x141a44u: goto label_141a44;
        case 0x141a48u: goto label_141a48;
        case 0x141a4cu: goto label_141a4c;
        case 0x141a50u: goto label_141a50;
        case 0x141a54u: goto label_141a54;
        case 0x141a58u: goto label_141a58;
        case 0x141a5cu: goto label_141a5c;
        case 0x141a60u: goto label_141a60;
        case 0x141a64u: goto label_141a64;
        case 0x141a68u: goto label_141a68;
        case 0x141a6cu: goto label_141a6c;
        case 0x141a70u: goto label_141a70;
        case 0x141a74u: goto label_141a74;
        case 0x141a78u: goto label_141a78;
        case 0x141a7cu: goto label_141a7c;
        case 0x141a80u: goto label_141a80;
        case 0x141a84u: goto label_141a84;
        case 0x141a88u: goto label_141a88;
        case 0x141a8cu: goto label_141a8c;
        case 0x141a90u: goto label_141a90;
        case 0x141a94u: goto label_141a94;
        case 0x141a98u: goto label_141a98;
        case 0x141a9cu: goto label_141a9c;
        case 0x141aa0u: goto label_141aa0;
        case 0x141aa4u: goto label_141aa4;
        case 0x141aa8u: goto label_141aa8;
        case 0x141aacu: goto label_141aac;
        case 0x141ab0u: goto label_141ab0;
        case 0x141ab4u: goto label_141ab4;
        case 0x141ab8u: goto label_141ab8;
        case 0x141abcu: goto label_141abc;
        case 0x141ac0u: goto label_141ac0;
        case 0x141ac4u: goto label_141ac4;
        case 0x141ac8u: goto label_141ac8;
        case 0x141accu: goto label_141acc;
        case 0x141ad0u: goto label_141ad0;
        case 0x141ad4u: goto label_141ad4;
        case 0x141ad8u: goto label_141ad8;
        case 0x141adcu: goto label_141adc;
        case 0x141ae0u: goto label_141ae0;
        case 0x141ae4u: goto label_141ae4;
        case 0x141ae8u: goto label_141ae8;
        case 0x141aecu: goto label_141aec;
        case 0x141af0u: goto label_141af0;
        case 0x141af4u: goto label_141af4;
        case 0x141af8u: goto label_141af8;
        case 0x141afcu: goto label_141afc;
        case 0x141b00u: goto label_141b00;
        case 0x141b04u: goto label_141b04;
        case 0x141b08u: goto label_141b08;
        case 0x141b0cu: goto label_141b0c;
        case 0x141b10u: goto label_141b10;
        case 0x141b14u: goto label_141b14;
        case 0x141b18u: goto label_141b18;
        case 0x141b1cu: goto label_141b1c;
        case 0x141b20u: goto label_141b20;
        case 0x141b24u: goto label_141b24;
        case 0x141b28u: goto label_141b28;
        case 0x141b2cu: goto label_141b2c;
        case 0x141b30u: goto label_141b30;
        case 0x141b34u: goto label_141b34;
        case 0x141b38u: goto label_141b38;
        case 0x141b3cu: goto label_141b3c;
        case 0x141b40u: goto label_141b40;
        case 0x141b44u: goto label_141b44;
        case 0x141b48u: goto label_141b48;
        case 0x141b4cu: goto label_141b4c;
        case 0x141b50u: goto label_141b50;
        case 0x141b54u: goto label_141b54;
        case 0x141b58u: goto label_141b58;
        case 0x141b5cu: goto label_141b5c;
        default: break;
    }

    ctx->pc = 0x141930u;

label_141930:
    // 0x141930: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x141930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_141934:
    // 0x141934: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x141934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_141938:
    // 0x141938: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x141938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_14193c:
    // 0x14193c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x14193cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_141940:
    // 0x141940: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x141940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_141944:
    // 0x141944: 0xc050aee  jal         func_142BB8
label_141948:
    if (ctx->pc == 0x141948u) {
        ctx->pc = 0x141948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141944u;
        // 0x141948: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14194Cu;
        goto label_14194c;
    }
    ctx->pc = 0x141944u;
    SET_GPR_U32(ctx, 31, 0x14194Cu);
    ctx->pc = 0x141948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141944u;
    // 0x141948: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x142BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x142BB8u, 0x141944u, 0x14194Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14194Cu;
label_14194c:
    // 0x14194c: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
label_141950:
    if (ctx->pc == 0x141950u) {
        ctx->pc = 0x141950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14194Cu;
        // 0x141950: 0x3c030049  lui         $v1, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141954u;
        goto label_141954;
    }
    ctx->pc = 0x14194Cu;
    {
        const bool branch_taken_0x14194c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x141950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14194Cu;
        // 0x141950: 0x3c030049  lui         $v1, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14194c) {
            ctx->pc = 0x1419A0u;
            goto label_1419a0;
        }
    }
    ctx->pc = 0x141954u;
label_141954:
    // 0x141954: 0xc050b0c  jal         func_142C30
label_141958:
    if (ctx->pc == 0x141958u) {
        ctx->pc = 0x141958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141954u;
        // 0x141958: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14195Cu;
        goto label_14195c;
    }
    ctx->pc = 0x141954u;
    SET_GPR_U32(ctx, 31, 0x14195Cu);
    ctx->pc = 0x141958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141954u;
    // 0x141958: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x142C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x142C30u, 0x141954u, 0x14195Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14195Cu;
label_14195c:
    // 0x14195c: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
label_141960:
    if (ctx->pc == 0x141960u) {
        ctx->pc = 0x141960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14195Cu;
        // 0x141960: 0x3c030049  lui         $v1, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141964u;
        goto label_141964;
    }
    ctx->pc = 0x14195Cu;
    {
        const bool branch_taken_0x14195c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x141960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14195Cu;
        // 0x141960: 0x3c030049  lui         $v1, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14195c) {
            ctx->pc = 0x1419A0u;
            goto label_1419a0;
        }
    }
    ctx->pc = 0x141964u;
label_141964:
    // 0x141964: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x141964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_141968:
    // 0x141968: 0xc04da9c  jal         func_136A70
label_14196c:
    if (ctx->pc == 0x14196Cu) {
        ctx->pc = 0x14196Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141968u;
        // 0x14196c: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141970u;
        goto label_141970;
    }
    ctx->pc = 0x141968u;
    SET_GPR_U32(ctx, 31, 0x141970u);
    ctx->pc = 0x14196Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141968u;
    // 0x14196c: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136A70u, 0x141968u, 0x141970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141970u;
label_141970:
    // 0x141970: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x141970u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_141974:
    // 0x141974: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x141974u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_141978:
    // 0x141978: 0xc0462e4  jal         func_118B90
label_14197c:
    if (ctx->pc == 0x14197Cu) {
        ctx->pc = 0x14197Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141978u;
        // 0x14197c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141980u;
        goto label_141980;
    }
    ctx->pc = 0x141978u;
    SET_GPR_U32(ctx, 31, 0x141980u);
    ctx->pc = 0x14197Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141978u;
    // 0x14197c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118B90u, 0x141978u, 0x141980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141980u;
label_141980:
    // 0x141980: 0x8e220464  lw          $v0, 0x464($s1)
    ctx->pc = 0x141980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1124)));
label_141984:
    // 0x141984: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x141984u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_141988:
    // 0x141988: 0x8e260ab0  lw          $a2, 0xAB0($s1)
    ctx->pc = 0x141988u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2736)));
label_14198c:
    // 0x14198c: 0x2484b060  addiu       $a0, $a0, -0x4FA0
    ctx->pc = 0x14198cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946912));
label_141990:
    // 0x141990: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x141990u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_141994:
    // 0x141994: 0xc04adbe  jal         func_12B6F8
label_141998:
    if (ctx->pc == 0x141998u) {
        ctx->pc = 0x141998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141994u;
        // 0x141998: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14199Cu;
        goto label_14199c;
    }
    ctx->pc = 0x141994u;
    SET_GPR_U32(ctx, 31, 0x14199Cu);
    ctx->pc = 0x141998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141994u;
    // 0x141998: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B6F8u, 0x141994u, 0x14199Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14199Cu;
label_14199c:
    // 0x14199c: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x14199cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
label_1419a0:
    // 0x1419a0: 0x8e240ab0  lw          $a0, 0xAB0($s1)
    ctx->pc = 0x1419a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2736)));
label_1419a4:
    // 0x1419a4: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x1419a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1419a8:
    // 0x1419a8: 0xae200bf0  sw          $zero, 0xBF0($s1)
    ctx->pc = 0x1419a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3056), GPR_U32(ctx, 0));
label_1419ac:
    // 0x1419ac: 0x24639a08  addiu       $v1, $v1, -0x65F8
    ctx->pc = 0x1419acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
label_1419b0:
    // 0x1419b0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1419b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1419b4:
    // 0x1419b4: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1419b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1419b8:
    // 0x1419b8: 0x8c90020c  lw          $s0, 0x20C($a0)
    ctx->pc = 0x1419b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
label_1419bc:
    // 0x1419bc: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1419bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1419c0:
    // 0x1419c0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1419c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1419c4:
    // 0x1419c4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1419c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1419c8:
    // 0x1419c8: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x1419c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_1419cc:
    // 0x1419cc: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_1419d0:
    if (ctx->pc == 0x1419D0u) {
        ctx->pc = 0x1419D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1419CCu;
        // 0x1419d0: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1419D4u;
        goto label_1419d4;
    }
    ctx->pc = 0x1419CCu;
    {
        const bool branch_taken_0x1419cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1419cc) {
            ctx->pc = 0x1419D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1419CCu;
            // 0x1419d0: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1419DCu;
            goto label_1419dc;
        }
    }
    ctx->pc = 0x1419D4u;
label_1419d4:
    // 0x1419d4: 0x10000003  b           . + 4 + (0x3 << 2)
label_1419d8:
    if (ctx->pc == 0x1419D8u) {
        ctx->pc = 0x1419D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1419D4u;
        // 0x1419d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1419DCu;
        goto label_1419dc;
    }
    ctx->pc = 0x1419D4u;
    {
        const bool branch_taken_0x1419d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1419D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1419D4u;
        // 0x1419d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1419d4) {
            ctx->pc = 0x1419E4u;
            goto label_1419e4;
        }
    }
    ctx->pc = 0x1419DCu;
label_1419dc:
    // 0x1419dc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1419dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1419e0:
    // 0x1419e0: 0x24660070  addiu       $a2, $v1, 0x70
    ctx->pc = 0x1419e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_1419e4:
    // 0x1419e4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1419e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1419e8:
    // 0x1419e8: 0xc0f6a9a  jal         func_3DAA68
label_1419ec:
    if (ctx->pc == 0x1419ECu) {
        ctx->pc = 0x1419ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1419E8u;
        // 0x1419ec: 0x26250be0  addiu       $a1, $s1, 0xBE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 3040));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1419F0u;
        goto label_1419f0;
    }
    ctx->pc = 0x1419E8u;
    SET_GPR_U32(ctx, 31, 0x1419F0u);
    ctx->pc = 0x1419ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1419E8u;
    // 0x1419ec: 0x26250be0  addiu       $a1, $s1, 0xBE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 3040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x1419E8u, 0x1419F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1419F0u;
label_1419f0:
    // 0x1419f0: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x1419f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1419f4:
    // 0x1419f4: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x1419f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1419f8:
    // 0x1419f8: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x1419f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1419fc:
    // 0x1419fc: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1419fcu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_141a00:
    // 0x141a00: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x141a00u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_141a04:
    // 0x141a04: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x141a04u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_141a08:
    // 0x141a08: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x141a08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_141a0c:
    // 0x141a0c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x141a0cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_141a10:
    // 0x141a10: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x141a10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_141a14:
    // 0x141a14: 0x0  nop
    ctx->pc = 0x141a14u;
    // NOP
label_141a18:
    // 0x141a18: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x141a18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_141a1c:
    // 0x141a1c: 0x0  nop
    ctx->pc = 0x141a1cu;
    // NOP
label_141a20:
    // 0x141a20: 0x45000013  bc1f        . + 4 + (0x13 << 2)
label_141a24:
    if (ctx->pc == 0x141A24u) {
        ctx->pc = 0x141A28u;
        goto label_141a28;
    }
    ctx->pc = 0x141A20u;
    {
        const bool branch_taken_0x141a20 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x141a20) {
            ctx->pc = 0x141A70u;
            goto label_141a70;
        }
    }
    ctx->pc = 0x141A28u;
label_141a28:
    // 0x141a28: 0xc04393c  jal         func_10E4F0
label_141a2c:
    if (ctx->pc == 0x141A2Cu) {
        ctx->pc = 0x141A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141A28u;
        // 0x141a2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141A30u;
        goto label_141a30;
    }
    ctx->pc = 0x141A28u;
    SET_GPR_U32(ctx, 31, 0x141A30u);
    ctx->pc = 0x141A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141A28u;
    // 0x141a2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E4F0u, 0x141A28u, 0x141A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141A30u;
label_141a30:
    // 0x141a30: 0xae220bd0  sw          $v0, 0xBD0($s1)
    ctx->pc = 0x141a30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3024), GPR_U32(ctx, 2));
label_141a34:
    // 0x141a34: 0x26439a08  addiu       $v1, $s2, -0x65F8
    ctx->pc = 0x141a34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294941192));
label_141a38:
    // 0x141a38: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x141a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_141a3c:
    // 0x141a3c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x141a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_141a40:
    // 0x141a40: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x141a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_141a44:
    // 0x141a44: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x141a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_141a48:
    // 0x141a48: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_141a4c:
    if (ctx->pc == 0x141A4Cu) {
        ctx->pc = 0x141A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141A48u;
        // 0x141a4c: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141A50u;
        goto label_141a50;
    }
    ctx->pc = 0x141A48u;
    {
        const bool branch_taken_0x141a48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x141a48) {
            ctx->pc = 0x141A4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x141A48u;
            // 0x141a4c: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x141A58u;
            goto label_141a58;
        }
    }
    ctx->pc = 0x141A50u;
label_141a50:
    // 0x141a50: 0x10000003  b           . + 4 + (0x3 << 2)
label_141a54:
    if (ctx->pc == 0x141A54u) {
        ctx->pc = 0x141A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141A50u;
        // 0x141a54: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141A58u;
        goto label_141a58;
    }
    ctx->pc = 0x141A50u;
    {
        const bool branch_taken_0x141a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x141A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141A50u;
        // 0x141a54: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141a50) {
            ctx->pc = 0x141A60u;
            goto label_141a60;
        }
    }
    ctx->pc = 0x141A58u;
label_141a58:
    // 0x141a58: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x141a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_141a5c:
    // 0x141a5c: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x141a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_141a60:
    // 0x141a60: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x141a60u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_141a64:
    // 0x141a64: 0xfa210be0  sqc2        $vf1, 0xBE0($s1)
    ctx->pc = 0x141a64u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 3040), _mm_castps_si128(ctx->vu0_vf[1]));
label_141a68:
    // 0x141a68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x141a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_141a6c:
    // 0x141a6c: 0xae220bf0  sw          $v0, 0xBF0($s1)
    ctx->pc = 0x141a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3056), GPR_U32(ctx, 2));
label_141a70:
    // 0x141a70: 0xc043996  jal         func_10E658
label_141a74:
    if (ctx->pc == 0x141A74u) {
        ctx->pc = 0x141A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141A70u;
        // 0x141a74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141A78u;
        goto label_141a78;
    }
    ctx->pc = 0x141A70u;
    SET_GPR_U32(ctx, 31, 0x141A78u);
    ctx->pc = 0x141A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141A70u;
    // 0x141a74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E658u, 0x141A70u, 0x141A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141A78u;
label_141a78:
    // 0x141a78: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
label_141a7c:
    if (ctx->pc == 0x141A7Cu) {
        ctx->pc = 0x141A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141A78u;
        // 0x141a7c: 0x8e220bf8  lw          $v0, 0xBF8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3064)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141A80u;
        goto label_141a80;
    }
    ctx->pc = 0x141A78u;
    {
        const bool branch_taken_0x141a78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x141A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141A78u;
        // 0x141a7c: 0x8e220bf8  lw          $v0, 0xBF8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3064)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141a78) {
            ctx->pc = 0x141B34u;
            goto label_141b34;
        }
    }
    ctx->pc = 0x141A80u;
label_141a80:
    // 0x141a80: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_141a84:
    if (ctx->pc == 0x141A84u) {
        ctx->pc = 0x141A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141A80u;
        // 0x141a84: 0x8e240ab0  lw          $a0, 0xAB0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2736)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141A88u;
        goto label_141a88;
    }
    ctx->pc = 0x141A80u;
    {
        const bool branch_taken_0x141a80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x141a80) {
            ctx->pc = 0x141A84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x141A80u;
            // 0x141a84: 0x8e240ab0  lw          $a0, 0xAB0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2736)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x141A98u;
            goto label_141a98;
        }
    }
    ctx->pc = 0x141A88u;
label_141a88:
    // 0x141a88: 0x8e220bfc  lw          $v0, 0xBFC($s1)
    ctx->pc = 0x141a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3068)));
label_141a8c:
    // 0x141a8c: 0x5440002f  bnel        $v0, $zero, . + 4 + (0x2F << 2)
label_141a90:
    if (ctx->pc == 0x141A90u) {
        ctx->pc = 0x141A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141A8Cu;
        // 0x141a90: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141A94u;
        goto label_141a94;
    }
    ctx->pc = 0x141A8Cu;
    {
        const bool branch_taken_0x141a8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x141a8c) {
            ctx->pc = 0x141A90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x141A8Cu;
            // 0x141a90: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x141B4Cu;
            goto label_141b4c;
        }
    }
    ctx->pc = 0x141A94u;
label_141a94:
    // 0x141a94: 0x8e240ab0  lw          $a0, 0xAB0($s1)
    ctx->pc = 0x141a94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2736)));
label_141a98:
    // 0x141a98: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x141a98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_141a9c:
    // 0x141a9c: 0xae260bf8  sw          $a2, 0xBF8($s1)
    ctx->pc = 0x141a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3064), GPR_U32(ctx, 6));
label_141aa0:
    // 0x141aa0: 0x26429a08  addiu       $v0, $s2, -0x65F8
    ctx->pc = 0x141aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294941192));
label_141aa4:
    // 0x141aa4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x141aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_141aa8:
    // 0x141aa8: 0x3c050080  lui         $a1, 0x80
    ctx->pc = 0x141aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)128 << 16));
label_141aac:
    // 0x141aac: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x141aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_141ab0:
    // 0x141ab0: 0x8c430108  lw          $v1, 0x108($v0)
    ctx->pc = 0x141ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
label_141ab4:
    // 0x141ab4: 0x8c640ff8  lw          $a0, 0xFF8($v1)
    ctx->pc = 0x141ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4088)));
label_141ab8:
    // 0x141ab8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x141ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_141abc:
    // 0x141abc: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x141abcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_141ac0:
    // 0x141ac0: 0x14450022  bne         $v0, $a1, . + 4 + (0x22 << 2)
label_141ac4:
    if (ctx->pc == 0x141AC4u) {
        ctx->pc = 0x141AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141AC0u;
        // 0x141ac4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141AC8u;
        goto label_141ac8;
    }
    ctx->pc = 0x141AC0u;
    {
        const bool branch_taken_0x141ac0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x141AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141AC0u;
        // 0x141ac4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141ac0) {
            ctx->pc = 0x141B4Cu;
            goto label_141b4c;
        }
    }
    ctx->pc = 0x141AC8u;
label_141ac8:
    // 0x141ac8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x141ac8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_141acc:
    // 0x141acc: 0x92220009  lbu         $v0, 0x9($s1)
    ctx->pc = 0x141accu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
label_141ad0:
    // 0x141ad0: 0xae260bfc  sw          $a2, 0xBFC($s1)
    ctx->pc = 0x141ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3068), GPR_U32(ctx, 6));
label_141ad4:
    // 0x141ad4: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_141ad8:
    if (ctx->pc == 0x141AD8u) {
        ctx->pc = 0x141AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141AD4u;
        // 0x141ad8: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141ADCu;
        goto label_141adc;
    }
    ctx->pc = 0x141AD4u;
    {
        const bool branch_taken_0x141ad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x141AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141AD4u;
        // 0x141ad8: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141ad4) {
            ctx->pc = 0x141B48u;
            goto label_141b48;
        }
    }
    ctx->pc = 0x141ADCu;
label_141adc:
    // 0x141adc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x141adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_141ae0:
    // 0x141ae0: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x141ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_141ae4:
    // 0x141ae4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x141ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_141ae8:
    // 0x141ae8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x141ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_141aec:
    // 0x141aec: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_141af0:
    if (ctx->pc == 0x141AF0u) {
        ctx->pc = 0x141AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141AECu;
        // 0x141af0: 0x26430001  addiu       $v1, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141AF4u;
        goto label_141af4;
    }
    ctx->pc = 0x141AECu;
    {
        const bool branch_taken_0x141aec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x141AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141AECu;
        // 0x141af0: 0x26430001  addiu       $v1, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141aec) {
            ctx->pc = 0x141B0Cu;
            goto label_141b0c;
        }
    }
    ctx->pc = 0x141AF4u;
label_141af4:
    // 0x141af4: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x141af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_141af8:
    // 0x141af8: 0x307200ff  andi        $s2, $v1, 0xFF
    ctx->pc = 0x141af8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_141afc:
    // 0x141afc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x141afcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_141b00:
    // 0x141b00: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x141b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_141b04:
    // 0x141b04: 0x60f809  jalr        $v1
label_141b08:
    if (ctx->pc == 0x141B08u) {
        ctx->pc = 0x141B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141B04u;
        // 0x141b08: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141B0Cu;
        goto label_141b0c;
    }
    ctx->pc = 0x141B04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x141B0Cu);
        ctx->pc = 0x141B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141B04u;
        // 0x141b08: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x141B04u, 0x141B0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x141B0Cu;
label_141b0c:
    // 0x141b0c: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x141b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_141b10:
    // 0x141b10: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x141b10u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_141b14:
    // 0x141b14: 0x2e030010  sltiu       $v1, $s0, 0x10
    ctx->pc = 0x141b14u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_141b18:
    // 0x141b18: 0x5060000c  beql        $v1, $zero, . + 4 + (0xC << 2)
label_141b1c:
    if (ctx->pc == 0x141B1Cu) {
        ctx->pc = 0x141B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141B18u;
        // 0x141b1c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141B20u;
        goto label_141b20;
    }
    ctx->pc = 0x141B18u;
    {
        const bool branch_taken_0x141b18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x141b18) {
            ctx->pc = 0x141B1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x141B18u;
            // 0x141b1c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x141B4Cu;
            goto label_141b4c;
        }
    }
    ctx->pc = 0x141B20u;
label_141b20:
    // 0x141b20: 0x92220009  lbu         $v0, 0x9($s1)
    ctx->pc = 0x141b20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
label_141b24:
    // 0x141b24: 0x5642ffee  bnel        $s2, $v0, . + 4 + (-0x12 << 2)
label_141b28:
    if (ctx->pc == 0x141B28u) {
        ctx->pc = 0x141B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141B24u;
        // 0x141b28: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141B2Cu;
        goto label_141b2c;
    }
    ctx->pc = 0x141B24u;
    {
        const bool branch_taken_0x141b24 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x141b24) {
            ctx->pc = 0x141B28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x141B24u;
            // 0x141b28: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x141AE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_141ae0;
        }
    }
    ctx->pc = 0x141B2Cu;
label_141b2c:
    // 0x141b2c: 0x10000007  b           . + 4 + (0x7 << 2)
label_141b30:
    if (ctx->pc == 0x141B30u) {
        ctx->pc = 0x141B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141B2Cu;
        // 0x141b30: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141B34u;
        goto label_141b34;
    }
    ctx->pc = 0x141B2Cu;
    {
        const bool branch_taken_0x141b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x141B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141B2Cu;
        // 0x141b30: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141b2c) {
            ctx->pc = 0x141B4Cu;
            goto label_141b4c;
        }
    }
    ctx->pc = 0x141B34u;
label_141b34:
    // 0x141b34: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_141b38:
    if (ctx->pc == 0x141B38u) {
        ctx->pc = 0x141B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141B34u;
        // 0x141b38: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141B3Cu;
        goto label_141b3c;
    }
    ctx->pc = 0x141B34u;
    {
        const bool branch_taken_0x141b34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x141B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141B34u;
        // 0x141b38: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141b34) {
            ctx->pc = 0x141B4Cu;
            goto label_141b4c;
        }
    }
    ctx->pc = 0x141B3Cu;
label_141b3c:
    // 0x141b3c: 0x8e220bfc  lw          $v0, 0xBFC($s1)
    ctx->pc = 0x141b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3068)));
label_141b40:
    // 0x141b40: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
label_141b44:
    if (ctx->pc == 0x141B44u) {
        ctx->pc = 0x141B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141B40u;
        // 0x141b44: 0xae200bf8  sw          $zero, 0xBF8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3064), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141B48u;
        goto label_141b48;
    }
    ctx->pc = 0x141B40u;
    {
        const bool branch_taken_0x141b40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x141b40) {
            ctx->pc = 0x141B44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x141B40u;
            // 0x141b44: 0xae200bf8  sw          $zero, 0xBF8($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 3064), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x141B4Cu;
            goto label_141b4c;
        }
    }
    ctx->pc = 0x141B48u;
label_141b48:
    // 0x141b48: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x141b48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_141b4c:
    // 0x141b4c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x141b4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_141b50:
    // 0x141b50: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x141b50u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_141b54:
    // 0x141b54: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x141b54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_141b58:
    // 0x141b58: 0x3e00008  jr          $ra
label_141b5c:
    if (ctx->pc == 0x141B5Cu) {
        ctx->pc = 0x141B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141B58u;
        // 0x141b5c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141B60u;
        goto label_fallthrough_0x141b58;
    }
    ctx->pc = 0x141B58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x141B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141B58u;
        // 0x141b5c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x141B58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x141b58:
    ctx->pc = 0x141B60u;
}
