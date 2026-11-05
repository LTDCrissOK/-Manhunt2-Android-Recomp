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

// Function: sub_00142A70
// Address: 0x142a70 - 0x142bb8
void sub_00142A70_0x142a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00142A70_0x142a70");
#endif

    switch (ctx->pc) {
        case 0x142a70u: goto label_142a70;
        case 0x142a74u: goto label_142a74;
        case 0x142a78u: goto label_142a78;
        case 0x142a7cu: goto label_142a7c;
        case 0x142a80u: goto label_142a80;
        case 0x142a84u: goto label_142a84;
        case 0x142a88u: goto label_142a88;
        case 0x142a8cu: goto label_142a8c;
        case 0x142a90u: goto label_142a90;
        case 0x142a94u: goto label_142a94;
        case 0x142a98u: goto label_142a98;
        case 0x142a9cu: goto label_142a9c;
        case 0x142aa0u: goto label_142aa0;
        case 0x142aa4u: goto label_142aa4;
        case 0x142aa8u: goto label_142aa8;
        case 0x142aacu: goto label_142aac;
        case 0x142ab0u: goto label_142ab0;
        case 0x142ab4u: goto label_142ab4;
        case 0x142ab8u: goto label_142ab8;
        case 0x142abcu: goto label_142abc;
        case 0x142ac0u: goto label_142ac0;
        case 0x142ac4u: goto label_142ac4;
        case 0x142ac8u: goto label_142ac8;
        case 0x142accu: goto label_142acc;
        case 0x142ad0u: goto label_142ad0;
        case 0x142ad4u: goto label_142ad4;
        case 0x142ad8u: goto label_142ad8;
        case 0x142adcu: goto label_142adc;
        case 0x142ae0u: goto label_142ae0;
        case 0x142ae4u: goto label_142ae4;
        case 0x142ae8u: goto label_142ae8;
        case 0x142aecu: goto label_142aec;
        case 0x142af0u: goto label_142af0;
        case 0x142af4u: goto label_142af4;
        case 0x142af8u: goto label_142af8;
        case 0x142afcu: goto label_142afc;
        case 0x142b00u: goto label_142b00;
        case 0x142b04u: goto label_142b04;
        case 0x142b08u: goto label_142b08;
        case 0x142b0cu: goto label_142b0c;
        case 0x142b10u: goto label_142b10;
        case 0x142b14u: goto label_142b14;
        case 0x142b18u: goto label_142b18;
        case 0x142b1cu: goto label_142b1c;
        case 0x142b20u: goto label_142b20;
        case 0x142b24u: goto label_142b24;
        case 0x142b28u: goto label_142b28;
        case 0x142b2cu: goto label_142b2c;
        case 0x142b30u: goto label_142b30;
        case 0x142b34u: goto label_142b34;
        case 0x142b38u: goto label_142b38;
        case 0x142b3cu: goto label_142b3c;
        case 0x142b40u: goto label_142b40;
        case 0x142b44u: goto label_142b44;
        case 0x142b48u: goto label_142b48;
        case 0x142b4cu: goto label_142b4c;
        case 0x142b50u: goto label_142b50;
        case 0x142b54u: goto label_142b54;
        case 0x142b58u: goto label_142b58;
        case 0x142b5cu: goto label_142b5c;
        case 0x142b60u: goto label_142b60;
        case 0x142b64u: goto label_142b64;
        case 0x142b68u: goto label_142b68;
        case 0x142b6cu: goto label_142b6c;
        case 0x142b70u: goto label_142b70;
        case 0x142b74u: goto label_142b74;
        case 0x142b78u: goto label_142b78;
        case 0x142b7cu: goto label_142b7c;
        case 0x142b80u: goto label_142b80;
        case 0x142b84u: goto label_142b84;
        case 0x142b88u: goto label_142b88;
        case 0x142b8cu: goto label_142b8c;
        case 0x142b90u: goto label_142b90;
        case 0x142b94u: goto label_142b94;
        case 0x142b98u: goto label_142b98;
        case 0x142b9cu: goto label_142b9c;
        case 0x142ba0u: goto label_142ba0;
        case 0x142ba4u: goto label_142ba4;
        case 0x142ba8u: goto label_142ba8;
        case 0x142bacu: goto label_142bac;
        case 0x142bb0u: goto label_142bb0;
        case 0x142bb4u: goto label_142bb4;
        default: break;
    }

    ctx->pc = 0x142a70u;

label_142a70:
    // 0x142a70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x142a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_142a74:
    // 0x142a74: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x142a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_142a78:
    // 0x142a78: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x142a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_142a7c:
    // 0x142a7c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x142a7cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_142a80:
    // 0x142a80: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x142a80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_142a84:
    // 0x142a84: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x142a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_142a88:
    // 0x142a88: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x142a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_142a8c:
    // 0x142a8c: 0x8e620c00  lw          $v0, 0xC00($s3)
    ctx->pc = 0x142a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3072)));
label_142a90:
    // 0x142a90: 0x14400042  bnez        $v0, . + 4 + (0x42 << 2)
label_142a94:
    if (ctx->pc == 0x142A94u) {
        ctx->pc = 0x142A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142A90u;
        // 0x142a94: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142A98u;
        goto label_142a98;
    }
    ctx->pc = 0x142A90u;
    {
        const bool branch_taken_0x142a90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x142A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142A90u;
        // 0x142a94: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142a90) {
            ctx->pc = 0x142B9Cu;
            goto label_142b9c;
        }
    }
    ctx->pc = 0x142A98u;
label_142a98:
    // 0x142a98: 0xc04eb10  jal         func_13AC40
label_142a9c:
    if (ctx->pc == 0x142A9Cu) {
        ctx->pc = 0x142AA0u;
        goto label_142aa0;
    }
    ctx->pc = 0x142A98u;
    SET_GPR_U32(ctx, 31, 0x142AA0u);
    ctx->pc = 0x13AC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13AC40u, 0x142A98u, 0x142AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142AA0u;
label_142aa0:
    // 0x142aa0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x142aa0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_142aa4:
    // 0x142aa4: 0x1220003d  beqz        $s1, . + 4 + (0x3D << 2)
label_142aa8:
    if (ctx->pc == 0x142AA8u) {
        ctx->pc = 0x142AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142AA4u;
        // 0x142aa8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142AACu;
        goto label_142aac;
    }
    ctx->pc = 0x142AA4u;
    {
        const bool branch_taken_0x142aa4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x142AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142AA4u;
        // 0x142aa8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142aa4) {
            ctx->pc = 0x142B9Cu;
            goto label_142b9c;
        }
    }
    ctx->pc = 0x142AACu;
label_142aac:
    // 0x142aac: 0x8e220ff8  lw          $v0, 0xFF8($s1)
    ctx->pc = 0x142aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4088)));
label_142ab0:
    // 0x142ab0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x142ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_142ab4:
    // 0x142ab4: 0x30430200  andi        $v1, $v0, 0x200
    ctx->pc = 0x142ab4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
label_142ab8:
    // 0x142ab8: 0x54600039  bnel        $v1, $zero, . + 4 + (0x39 << 2)
label_142abc:
    if (ctx->pc == 0x142ABCu) {
        ctx->pc = 0x142ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142AB8u;
        // 0x142abc: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142AC0u;
        goto label_142ac0;
    }
    ctx->pc = 0x142AB8u;
    {
        const bool branch_taken_0x142ab8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x142ab8) {
            ctx->pc = 0x142ABCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x142AB8u;
            // 0x142abc: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x142BA0u;
            goto label_142ba0;
        }
    }
    ctx->pc = 0x142AC0u;
label_142ac0:
    // 0x142ac0: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x142ac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
label_142ac4:
    // 0x142ac4: 0x54400036  bnel        $v0, $zero, . + 4 + (0x36 << 2)
label_142ac8:
    if (ctx->pc == 0x142AC8u) {
        ctx->pc = 0x142AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142AC4u;
        // 0x142ac8: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142ACCu;
        goto label_142acc;
    }
    ctx->pc = 0x142AC4u;
    {
        const bool branch_taken_0x142ac4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x142ac4) {
            ctx->pc = 0x142AC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x142AC4u;
            // 0x142ac8: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x142BA0u;
            goto label_142ba0;
        }
    }
    ctx->pc = 0x142ACCu;
label_142acc:
    // 0x142acc: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x142accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_142ad0:
    // 0x142ad0: 0x3c100049  lui         $s0, 0x49
    ctx->pc = 0x142ad0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)73 << 16));
label_142ad4:
    // 0x142ad4: 0x2610a080  addiu       $s0, $s0, -0x5F80
    ctx->pc = 0x142ad4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294942848));
label_142ad8:
    // 0x142ad8: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x142ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_142adc:
    // 0x142adc: 0x40f809  jalr        $v0
label_142ae0:
    if (ctx->pc == 0x142AE0u) {
        ctx->pc = 0x142AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142ADCu;
        // 0x142ae0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142AE4u;
        goto label_142ae4;
    }
    ctx->pc = 0x142ADCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x142AE4u);
        ctx->pc = 0x142AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142ADCu;
        // 0x142ae0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142ADCu, 0x142AE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x142AE4u;
label_142ae4:
    // 0x142ae4: 0x8e230104  lw          $v1, 0x104($s1)
    ctx->pc = 0x142ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_142ae8:
    // 0x142ae8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x142ae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_142aec:
    // 0x142aec: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x142aecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_142af0:
    // 0x142af0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x142af0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_142af4:
    // 0x142af4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x142af4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_142af8:
    // 0x142af8: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x142af8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_142afc:
    // 0x142afc: 0xc0495ac  jal         func_1256B0
label_142b00:
    if (ctx->pc == 0x142B00u) {
        ctx->pc = 0x142B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142AFCu;
        // 0x142b00: 0x24c60070  addiu       $a2, $a2, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142B04u;
        goto label_142b04;
    }
    ctx->pc = 0x142AFCu;
    SET_GPR_U32(ctx, 31, 0x142B04u);
    ctx->pc = 0x142B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142AFCu;
    // 0x142b00: 0x24c60070  addiu       $a2, $a2, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1256B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1256B0u, 0x142AFCu, 0x142B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142B04u;
label_142b04:
    // 0x142b04: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
label_142b08:
    if (ctx->pc == 0x142B08u) {
        ctx->pc = 0x142B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142B04u;
        // 0x142b08: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142B0Cu;
        goto label_142b0c;
    }
    ctx->pc = 0x142B04u;
    {
        const bool branch_taken_0x142b04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x142B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142B04u;
        // 0x142b08: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142b04) {
            ctx->pc = 0x142B9Cu;
            goto label_142b9c;
        }
    }
    ctx->pc = 0x142B0Cu;
label_142b0c:
    // 0x142b0c: 0xc04dabc  jal         func_136AF0
label_142b10:
    if (ctx->pc == 0x142B10u) {
        ctx->pc = 0x142B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142B0Cu;
        // 0x142b10: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142B14u;
        goto label_142b14;
    }
    ctx->pc = 0x142B0Cu;
    SET_GPR_U32(ctx, 31, 0x142B14u);
    ctx->pc = 0x142B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142B0Cu;
    // 0x142b10: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136AF0u, 0x142B0Cu, 0x142B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142B14u;
label_142b14:
    // 0x142b14: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x142b14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_142b18:
    // 0x142b18: 0x9263046c  lbu         $v1, 0x46C($s3)
    ctx->pc = 0x142b18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1132)));
label_142b1c:
    // 0x142b1c: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x142b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_142b20:
    // 0x142b20: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x142b20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_142b24:
    // 0x142b24: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x142b24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_142b28:
    // 0x142b28: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x142b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_142b2c:
    // 0x142b2c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x142b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_142b30:
    // 0x142b30: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x142b30u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_142b34:
    // 0x142b34: 0xc045612  jal         func_115848
label_142b38:
    if (ctx->pc == 0x142B38u) {
        ctx->pc = 0x142B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142B34u;
        // 0x142b38: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142B3Cu;
        goto label_142b3c;
    }
    ctx->pc = 0x142B34u;
    SET_GPR_U32(ctx, 31, 0x142B3Cu);
    ctx->pc = 0x142B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142B34u;
    // 0x142b38: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115848u, 0x142B34u, 0x142B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142B3Cu;
label_142b3c:
    // 0x142b3c: 0x118880  sll         $s1, $s1, 2
    ctx->pc = 0x142b3cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_142b40:
    // 0x142b40: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x142b40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_142b44:
    // 0x142b44: 0xc045668  jal         func_1159A0
label_142b48:
    if (ctx->pc == 0x142B48u) {
        ctx->pc = 0x142B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142B44u;
        // 0x142b48: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142B4Cu;
        goto label_142b4c;
    }
    ctx->pc = 0x142B44u;
    SET_GPR_U32(ctx, 31, 0x142B4Cu);
    ctx->pc = 0x142B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142B44u;
    // 0x142b48: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1159A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1159A0u, 0x142B44u, 0x142B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142B4Cu;
label_142b4c:
    // 0x142b4c: 0x3c100049  lui         $s0, 0x49
    ctx->pc = 0x142b4cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)73 << 16));
label_142b50:
    // 0x142b50: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x142b50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_142b54:
    // 0x142b54: 0x26109a08  addiu       $s0, $s0, -0x65F8
    ctx->pc = 0x142b54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941192));
label_142b58:
    // 0x142b58: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x142b58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_142b5c:
    // 0x142b5c: 0x2111021  addu        $v0, $s0, $s1
    ctx->pc = 0x142b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_142b60:
    // 0x142b60: 0x8c52020c  lw          $s2, 0x20C($v0)
    ctx->pc = 0x142b60u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_142b64:
    // 0x142b64: 0xc043f22  jal         func_10FC88
label_142b68:
    if (ctx->pc == 0x142B68u) {
        ctx->pc = 0x142B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142B64u;
        // 0x142b68: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142B6Cu;
        goto label_142b6c;
    }
    ctx->pc = 0x142B64u;
    SET_GPR_U32(ctx, 31, 0x142B6Cu);
    ctx->pc = 0x142B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142B64u;
    // 0x142b68: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC88u, 0x142B64u, 0x142B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142B6Cu;
label_142b6c:
    // 0x142b6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x142b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_142b70:
    // 0x142b70: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x142b70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_142b74:
    // 0x142b74: 0xae620c00  sw          $v0, 0xC00($s3)
    ctx->pc = 0x142b74u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3072), GPR_U32(ctx, 2));
label_142b78:
    // 0x142b78: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x142b78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_142b7c:
    // 0x142b7c: 0x8e670ab0  lw          $a3, 0xAB0($s3)
    ctx->pc = 0x142b7cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2736)));
label_142b80:
    // 0x142b80: 0x248487a0  addiu       $a0, $a0, -0x7860
    ctx->pc = 0x142b80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936480));
label_142b84:
    // 0x142b84: 0x8e060108  lw          $a2, 0x108($s0)
    ctx->pc = 0x142b84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_142b88:
    // 0x142b88: 0xc04668a  jal         func_119A28
label_142b8c:
    if (ctx->pc == 0x142B8Cu) {
        ctx->pc = 0x142B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142B88u;
        // 0x142b8c: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142B90u;
        goto label_142b90;
    }
    ctx->pc = 0x142B88u;
    SET_GPR_U32(ctx, 31, 0x142B90u);
    ctx->pc = 0x142B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142B88u;
    // 0x142b8c: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119A28u, 0x142B88u, 0x142B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142B90u;
label_142b90:
    // 0x142b90: 0xc043e8a  jal         func_10FA28
label_142b94:
    if (ctx->pc == 0x142B94u) {
        ctx->pc = 0x142B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142B90u;
        // 0x142b94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142B98u;
        goto label_142b98;
    }
    ctx->pc = 0x142B90u;
    SET_GPR_U32(ctx, 31, 0x142B98u);
    ctx->pc = 0x142B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142B90u;
    // 0x142b94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FA28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FA28u, 0x142B90u, 0x142B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142B98u;
label_142b98:
    // 0x142b98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x142b98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_142b9c:
    // 0x142b9c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x142b9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_142ba0:
    // 0x142ba0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x142ba0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_142ba4:
    // 0x142ba4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x142ba4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_142ba8:
    // 0x142ba8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x142ba8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_142bac:
    // 0x142bac: 0x3e00008  jr          $ra
label_142bb0:
    if (ctx->pc == 0x142BB0u) {
        ctx->pc = 0x142BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142BACu;
        // 0x142bb0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142BB4u;
        goto label_142bb4;
    }
    ctx->pc = 0x142BACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x142BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142BACu;
        // 0x142bb0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142BACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x142BB4u;
label_142bb4:
    // 0x142bb4: 0x0  nop
    ctx->pc = 0x142bb4u;
    // NOP
    ctx->pc = 0x142bb8u;
}
