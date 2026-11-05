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

// Function: sub_00194A70
// Address: 0x194a70 - 0x194c28
void sub_00194A70_0x194a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00194A70_0x194a70");
#endif

    switch (ctx->pc) {
        case 0x194a70u: goto label_194a70;
        case 0x194a74u: goto label_194a74;
        case 0x194a78u: goto label_194a78;
        case 0x194a7cu: goto label_194a7c;
        case 0x194a80u: goto label_194a80;
        case 0x194a84u: goto label_194a84;
        case 0x194a88u: goto label_194a88;
        case 0x194a8cu: goto label_194a8c;
        case 0x194a90u: goto label_194a90;
        case 0x194a94u: goto label_194a94;
        case 0x194a98u: goto label_194a98;
        case 0x194a9cu: goto label_194a9c;
        case 0x194aa0u: goto label_194aa0;
        case 0x194aa4u: goto label_194aa4;
        case 0x194aa8u: goto label_194aa8;
        case 0x194aacu: goto label_194aac;
        case 0x194ab0u: goto label_194ab0;
        case 0x194ab4u: goto label_194ab4;
        case 0x194ab8u: goto label_194ab8;
        case 0x194abcu: goto label_194abc;
        case 0x194ac0u: goto label_194ac0;
        case 0x194ac4u: goto label_194ac4;
        case 0x194ac8u: goto label_194ac8;
        case 0x194accu: goto label_194acc;
        case 0x194ad0u: goto label_194ad0;
        case 0x194ad4u: goto label_194ad4;
        case 0x194ad8u: goto label_194ad8;
        case 0x194adcu: goto label_194adc;
        case 0x194ae0u: goto label_194ae0;
        case 0x194ae4u: goto label_194ae4;
        case 0x194ae8u: goto label_194ae8;
        case 0x194aecu: goto label_194aec;
        case 0x194af0u: goto label_194af0;
        case 0x194af4u: goto label_194af4;
        case 0x194af8u: goto label_194af8;
        case 0x194afcu: goto label_194afc;
        case 0x194b00u: goto label_194b00;
        case 0x194b04u: goto label_194b04;
        case 0x194b08u: goto label_194b08;
        case 0x194b0cu: goto label_194b0c;
        case 0x194b10u: goto label_194b10;
        case 0x194b14u: goto label_194b14;
        case 0x194b18u: goto label_194b18;
        case 0x194b1cu: goto label_194b1c;
        case 0x194b20u: goto label_194b20;
        case 0x194b24u: goto label_194b24;
        case 0x194b28u: goto label_194b28;
        case 0x194b2cu: goto label_194b2c;
        case 0x194b30u: goto label_194b30;
        case 0x194b34u: goto label_194b34;
        case 0x194b38u: goto label_194b38;
        case 0x194b3cu: goto label_194b3c;
        case 0x194b40u: goto label_194b40;
        case 0x194b44u: goto label_194b44;
        case 0x194b48u: goto label_194b48;
        case 0x194b4cu: goto label_194b4c;
        case 0x194b50u: goto label_194b50;
        case 0x194b54u: goto label_194b54;
        case 0x194b58u: goto label_194b58;
        case 0x194b5cu: goto label_194b5c;
        case 0x194b60u: goto label_194b60;
        case 0x194b64u: goto label_194b64;
        case 0x194b68u: goto label_194b68;
        case 0x194b6cu: goto label_194b6c;
        case 0x194b70u: goto label_194b70;
        case 0x194b74u: goto label_194b74;
        case 0x194b78u: goto label_194b78;
        case 0x194b7cu: goto label_194b7c;
        case 0x194b80u: goto label_194b80;
        case 0x194b84u: goto label_194b84;
        case 0x194b88u: goto label_194b88;
        case 0x194b8cu: goto label_194b8c;
        case 0x194b90u: goto label_194b90;
        case 0x194b94u: goto label_194b94;
        case 0x194b98u: goto label_194b98;
        case 0x194b9cu: goto label_194b9c;
        case 0x194ba0u: goto label_194ba0;
        case 0x194ba4u: goto label_194ba4;
        case 0x194ba8u: goto label_194ba8;
        case 0x194bacu: goto label_194bac;
        case 0x194bb0u: goto label_194bb0;
        case 0x194bb4u: goto label_194bb4;
        case 0x194bb8u: goto label_194bb8;
        case 0x194bbcu: goto label_194bbc;
        case 0x194bc0u: goto label_194bc0;
        case 0x194bc4u: goto label_194bc4;
        case 0x194bc8u: goto label_194bc8;
        case 0x194bccu: goto label_194bcc;
        case 0x194bd0u: goto label_194bd0;
        case 0x194bd4u: goto label_194bd4;
        case 0x194bd8u: goto label_194bd8;
        case 0x194bdcu: goto label_194bdc;
        case 0x194be0u: goto label_194be0;
        case 0x194be4u: goto label_194be4;
        case 0x194be8u: goto label_194be8;
        case 0x194becu: goto label_194bec;
        case 0x194bf0u: goto label_194bf0;
        case 0x194bf4u: goto label_194bf4;
        case 0x194bf8u: goto label_194bf8;
        case 0x194bfcu: goto label_194bfc;
        case 0x194c00u: goto label_194c00;
        case 0x194c04u: goto label_194c04;
        case 0x194c08u: goto label_194c08;
        case 0x194c0cu: goto label_194c0c;
        case 0x194c10u: goto label_194c10;
        case 0x194c14u: goto label_194c14;
        case 0x194c18u: goto label_194c18;
        case 0x194c1cu: goto label_194c1c;
        case 0x194c20u: goto label_194c20;
        case 0x194c24u: goto label_194c24;
        default: break;
    }

    ctx->pc = 0x194a70u;

label_194a70:
    // 0x194a70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x194a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_194a74:
    // 0x194a74: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x194a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_194a78:
    // 0x194a78: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x194a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_194a7c:
    // 0x194a7c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x194a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_194a80:
    // 0x194a80: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x194a80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_194a84:
    // 0x194a84: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x194a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_194a88:
    // 0x194a88: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x194a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_194a8c:
    // 0x194a8c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x194a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_194a90:
    // 0x194a90: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x194a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_194a94:
    // 0x194a94: 0x1043005e  beq         $v0, $v1, . + 4 + (0x5E << 2)
label_194a98:
    if (ctx->pc == 0x194A98u) {
        ctx->pc = 0x194A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194A94u;
        // 0x194a98: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194A9Cu;
        goto label_194a9c;
    }
    ctx->pc = 0x194A94u;
    {
        const bool branch_taken_0x194a94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x194A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194A94u;
        // 0x194a98: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194a94) {
            ctx->pc = 0x194C10u;
            goto label_194c10;
        }
    }
    ctx->pc = 0x194A9Cu;
label_194a9c:
    // 0x194a9c: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x194a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_194aa0:
    // 0x194aa0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_194aa4:
    if (ctx->pc == 0x194AA4u) {
        ctx->pc = 0x194AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194AA0u;
        // 0x194aa4: 0xae430014  sw          $v1, 0x14($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194AA8u;
        goto label_194aa8;
    }
    ctx->pc = 0x194AA0u;
    {
        const bool branch_taken_0x194aa0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x194AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194AA0u;
        // 0x194aa4: 0xae430014  sw          $v1, 0x14($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194aa0) {
            ctx->pc = 0x194AB8u;
            goto label_194ab8;
        }
    }
    ctx->pc = 0x194AA8u;
label_194aa8:
    // 0x194aa8: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x194aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_194aac:
    // 0x194aac: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x194aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_194ab0:
    // 0x194ab0: 0x40f809  jalr        $v0
label_194ab4:
    if (ctx->pc == 0x194AB4u) {
        ctx->pc = 0x194AB8u;
        goto label_194ab8;
    }
    ctx->pc = 0x194AB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x194AB8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194AB0u, 0x194AB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x194AB8u;
label_194ab8:
    // 0x194ab8: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x194ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_194abc:
    // 0x194abc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x194abcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_194ac0:
    // 0x194ac0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x194ac0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_194ac4:
    // 0x194ac4: 0xc061a16  jal         func_186858
label_194ac8:
    if (ctx->pc == 0x194AC8u) {
        ctx->pc = 0x194AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194AC4u;
        // 0x194ac8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194ACCu;
        goto label_194acc;
    }
    ctx->pc = 0x194AC4u;
    SET_GPR_U32(ctx, 31, 0x194ACCu);
    ctx->pc = 0x194AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194AC4u;
    // 0x194ac8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x194AC4u, 0x194ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194ACCu;
label_194acc:
    // 0x194acc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x194accu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_194ad0:
    // 0x194ad0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x194ad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_194ad4:
    // 0x194ad4: 0xc061a16  jal         func_186858
label_194ad8:
    if (ctx->pc == 0x194AD8u) {
        ctx->pc = 0x194AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194AD4u;
        // 0x194ad8: 0xac430040  sw          $v1, 0x40($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194ADCu;
        goto label_194adc;
    }
    ctx->pc = 0x194AD4u;
    SET_GPR_U32(ctx, 31, 0x194ADCu);
    ctx->pc = 0x194AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194AD4u;
    // 0x194ad8: 0xac430040  sw          $v1, 0x40($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x194AD4u, 0x194ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194ADCu;
label_194adc:
    // 0x194adc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x194adcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_194ae0:
    // 0x194ae0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x194ae0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_194ae4:
    // 0x194ae4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x194ae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_194ae8:
    // 0x194ae8: 0xc061a12  jal         func_186848
label_194aec:
    if (ctx->pc == 0x194AECu) {
        ctx->pc = 0x194AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194AE8u;
        // 0x194aec: 0xe4400024  swc1        $f0, 0x24($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x194AF0u;
        goto label_194af0;
    }
    ctx->pc = 0x194AE8u;
    SET_GPR_U32(ctx, 31, 0x194AF0u);
    ctx->pc = 0x194AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194AE8u;
    // 0x194aec: 0xe4400024  swc1        $f0, 0x24($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x194AE8u, 0x194AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194AF0u;
label_194af0:
    // 0x194af0: 0x8c500030  lw          $s0, 0x30($v0)
    ctx->pc = 0x194af0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_194af4:
    // 0x194af4: 0x92020022  lbu         $v0, 0x22($s0)
    ctx->pc = 0x194af4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 34)));
label_194af8:
    // 0x194af8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_194afc:
    if (ctx->pc == 0x194AFCu) {
        ctx->pc = 0x194AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194AF8u;
        // 0x194afc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194B00u;
        goto label_194b00;
    }
    ctx->pc = 0x194AF8u;
    {
        const bool branch_taken_0x194af8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x194AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194AF8u;
        // 0x194afc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194af8) {
            ctx->pc = 0x194B38u;
            goto label_194b38;
        }
    }
    ctx->pc = 0x194B00u;
label_194b00:
    // 0x194b00: 0xc04147a  jal         func_1051E8
label_194b04:
    if (ctx->pc == 0x194B04u) {
        ctx->pc = 0x194B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194B00u;
        // 0x194b04: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194B08u;
        goto label_194b08;
    }
    ctx->pc = 0x194B00u;
    SET_GPR_U32(ctx, 31, 0x194B08u);
    ctx->pc = 0x194B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194B00u;
    // 0x194b04: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051E8u, 0x194B00u, 0x194B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194B08u;
label_194b08:
    // 0x194b08: 0xc0414a2  jal         func_105288
label_194b0c:
    if (ctx->pc == 0x194B0Cu) {
        ctx->pc = 0x194B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194B08u;
        // 0x194b0c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194B10u;
        goto label_194b10;
    }
    ctx->pc = 0x194B08u;
    SET_GPR_U32(ctx, 31, 0x194B10u);
    ctx->pc = 0x194B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194B08u;
    // 0x194b0c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105288u, 0x194B08u, 0x194B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194B10u;
label_194b10:
    // 0x194b10: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_194b14:
    if (ctx->pc == 0x194B14u) {
        ctx->pc = 0x194B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194B10u;
        // 0x194b14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194B18u;
        goto label_194b18;
    }
    ctx->pc = 0x194B10u;
    {
        const bool branch_taken_0x194b10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x194B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194B10u;
        // 0x194b14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194b10) {
            ctx->pc = 0x194B24u;
            goto label_194b24;
        }
    }
    ctx->pc = 0x194B18u;
label_194b18:
    // 0x194b18: 0xc04147a  jal         func_1051E8
label_194b1c:
    if (ctx->pc == 0x194B1Cu) {
        ctx->pc = 0x194B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194B18u;
        // 0x194b1c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194B20u;
        goto label_194b20;
    }
    ctx->pc = 0x194B18u;
    SET_GPR_U32(ctx, 31, 0x194B20u);
    ctx->pc = 0x194B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194B18u;
    // 0x194b1c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051E8u, 0x194B18u, 0x194B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194B20u;
label_194b20:
    // 0x194b20: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x194b20u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_194b24:
    // 0x194b24: 0x92020022  lbu         $v0, 0x22($s0)
    ctx->pc = 0x194b24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 34)));
label_194b28:
    // 0x194b28: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x194b28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_194b2c:
    // 0x194b2c: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x194b2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_194b30:
    // 0x194b30: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
label_194b34:
    if (ctx->pc == 0x194B34u) {
        ctx->pc = 0x194B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194B30u;
        // 0x194b34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194B38u;
        goto label_194b38;
    }
    ctx->pc = 0x194B30u;
    {
        const bool branch_taken_0x194b30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x194B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194B30u;
        // 0x194b34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194b30) {
            ctx->pc = 0x194B00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_194b00;
        }
    }
    ctx->pc = 0x194B38u;
label_194b38:
    // 0x194b38: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
label_194b3c:
    if (ctx->pc == 0x194B3Cu) {
        ctx->pc = 0x194B40u;
        goto label_194b40;
    }
    ctx->pc = 0x194B38u;
    {
        const bool branch_taken_0x194b38 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x194b38) {
            ctx->pc = 0x194B60u;
            goto label_194b60;
        }
    }
    ctx->pc = 0x194B40u;
label_194b40:
    // 0x194b40: 0xc061a12  jal         func_186848
label_194b44:
    if (ctx->pc == 0x194B44u) {
        ctx->pc = 0x194B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194B40u;
        // 0x194b44: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194B48u;
        goto label_194b48;
    }
    ctx->pc = 0x194B40u;
    SET_GPR_U32(ctx, 31, 0x194B48u);
    ctx->pc = 0x194B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194B40u;
    // 0x194b44: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x194B40u, 0x194B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194B48u;
label_194b48:
    // 0x194b48: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x194b48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_194b4c:
    // 0x194b4c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x194b4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_194b50:
    // 0x194b50: 0xc07023a  jal         func_1C08E8
label_194b54:
    if (ctx->pc == 0x194B54u) {
        ctx->pc = 0x194B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194B50u;
        // 0x194b54: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194B58u;
        goto label_194b58;
    }
    ctx->pc = 0x194B50u;
    SET_GPR_U32(ctx, 31, 0x194B58u);
    ctx->pc = 0x194B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194B50u;
    // 0x194b54: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C08E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C08E8u, 0x194B50u, 0x194B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194B58u;
label_194b58:
    // 0x194b58: 0x10000022  b           . + 4 + (0x22 << 2)
label_194b5c:
    if (ctx->pc == 0x194B5Cu) {
        ctx->pc = 0x194B60u;
        goto label_194b60;
    }
    ctx->pc = 0x194B58u;
    {
        const bool branch_taken_0x194b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x194b58) {
            ctx->pc = 0x194BE4u;
            goto label_194be4;
        }
    }
    ctx->pc = 0x194B60u;
label_194b60:
    // 0x194b60: 0xc061a12  jal         func_186848
label_194b64:
    if (ctx->pc == 0x194B64u) {
        ctx->pc = 0x194B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194B60u;
        // 0x194b64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194B68u;
        goto label_194b68;
    }
    ctx->pc = 0x194B60u;
    SET_GPR_U32(ctx, 31, 0x194B68u);
    ctx->pc = 0x194B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194B60u;
    // 0x194b64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x194B60u, 0x194B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194B68u;
label_194b68:
    // 0x194b68: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x194b68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_194b6c:
    // 0x194b6c: 0xc4400240  lwc1        $f0, 0x240($v0)
    ctx->pc = 0x194b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_194b70:
    // 0x194b70: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x194b70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_194b74:
    // 0x194b74: 0x0  nop
    ctx->pc = 0x194b74u;
    // NOP
label_194b78:
    // 0x194b78: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_194b7c:
    if (ctx->pc == 0x194B7Cu) {
        ctx->pc = 0x194B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194B78u;
        // 0x194b7c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194B80u;
        goto label_194b80;
    }
    ctx->pc = 0x194B78u;
    {
        const bool branch_taken_0x194b78 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x194B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194B78u;
        // 0x194b7c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194b78) {
            ctx->pc = 0x194B84u;
            goto label_194b84;
        }
    }
    ctx->pc = 0x194B80u;
label_194b80:
    // 0x194b80: 0x24430220  addiu       $v1, $v0, 0x220
    ctx->pc = 0x194b80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 544));
label_194b84:
    // 0x194b84: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x194b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_194b88:
    // 0x194b88: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x194b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_194b8c:
    // 0x194b8c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x194b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_194b90:
    // 0x194b90: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x194b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_194b94:
    // 0x194b94: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x194b94u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
label_194b98:
    // 0x194b98: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x194b98u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_194b9c:
    // 0x194b9c: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x194b9cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_194ba0:
    // 0x194ba0: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x194ba0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_194ba4:
    // 0x194ba4: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x194ba4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_194ba8:
    // 0x194ba8: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x194ba8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_194bac:
    // 0x194bac: 0xc061a12  jal         func_186848
label_194bb0:
    if (ctx->pc == 0x194BB0u) {
        ctx->pc = 0x194BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194BACu;
        // 0x194bb0: 0xe7a10004  swc1        $f1, 0x4($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x194BB4u;
        goto label_194bb4;
    }
    ctx->pc = 0x194BACu;
    SET_GPR_U32(ctx, 31, 0x194BB4u);
    ctx->pc = 0x194BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194BACu;
    // 0x194bb0: 0xe7a10004  swc1        $f1, 0x4($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x194BACu, 0x194BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194BB4u;
label_194bb4:
    // 0x194bb4: 0x244201e0  addiu       $v0, $v0, 0x1E0
    ctx->pc = 0x194bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 480));
label_194bb8:
    // 0x194bb8: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x194bb8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_194bbc:
    // 0x194bbc: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x194bbcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_194bc0:
    // 0x194bc0: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x194bc0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_194bc4:
    // 0x194bc4: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x194bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_194bc8:
    // 0x194bc8: 0xc061a12  jal         func_186848
label_194bcc:
    if (ctx->pc == 0x194BCCu) {
        ctx->pc = 0x194BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194BC8u;
        // 0x194bcc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194BD0u;
        goto label_194bd0;
    }
    ctx->pc = 0x194BC8u;
    SET_GPR_U32(ctx, 31, 0x194BD0u);
    ctx->pc = 0x194BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194BC8u;
    // 0x194bcc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x194BC8u, 0x194BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194BD0u;
label_194bd0:
    // 0x194bd0: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x194bd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
label_194bd4:
    // 0x194bd4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x194bd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_194bd8:
    // 0x194bd8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x194bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_194bdc:
    // 0x194bdc: 0xc07072c  jal         func_1C1CB0
label_194be0:
    if (ctx->pc == 0x194BE0u) {
        ctx->pc = 0x194BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194BDCu;
        // 0x194be0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194BE4u;
        goto label_194be4;
    }
    ctx->pc = 0x194BDCu;
    SET_GPR_U32(ctx, 31, 0x194BE4u);
    ctx->pc = 0x194BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194BDCu;
    // 0x194be0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1CB0u, 0x194BDCu, 0x194BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194BE4u;
label_194be4:
    // 0x194be4: 0xc061a16  jal         func_186858
label_194be8:
    if (ctx->pc == 0x194BE8u) {
        ctx->pc = 0x194BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194BE4u;
        // 0x194be8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194BECu;
        goto label_194bec;
    }
    ctx->pc = 0x194BE4u;
    SET_GPR_U32(ctx, 31, 0x194BECu);
    ctx->pc = 0x194BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194BE4u;
    // 0x194be8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x194BE4u, 0x194BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194BECu;
label_194bec:
    // 0x194bec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x194becu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_194bf0:
    // 0x194bf0: 0xc06ee66  jal         func_1BB998
label_194bf4:
    if (ctx->pc == 0x194BF4u) {
        ctx->pc = 0x194BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194BF0u;
        // 0x194bf4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194BF8u;
        goto label_194bf8;
    }
    ctx->pc = 0x194BF0u;
    SET_GPR_U32(ctx, 31, 0x194BF8u);
    ctx->pc = 0x194BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194BF0u;
    // 0x194bf4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB998u, 0x194BF0u, 0x194BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194BF8u;
label_194bf8:
    // 0x194bf8: 0xc061a16  jal         func_186858
label_194bfc:
    if (ctx->pc == 0x194BFCu) {
        ctx->pc = 0x194BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194BF8u;
        // 0x194bfc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194C00u;
        goto label_194c00;
    }
    ctx->pc = 0x194BF8u;
    SET_GPR_U32(ctx, 31, 0x194C00u);
    ctx->pc = 0x194BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194BF8u;
    // 0x194bfc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x194BF8u, 0x194C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194C00u;
label_194c00:
    // 0x194c00: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x194c00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_194c04:
    // 0x194c04: 0xc06eebe  jal         func_1BBAF8
label_194c08:
    if (ctx->pc == 0x194C08u) {
        ctx->pc = 0x194C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194C04u;
        // 0x194c08: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194C0Cu;
        goto label_194c0c;
    }
    ctx->pc = 0x194C04u;
    SET_GPR_U32(ctx, 31, 0x194C0Cu);
    ctx->pc = 0x194C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194C04u;
    // 0x194c08: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBAF8u, 0x194C04u, 0x194C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194C0Cu;
label_194c0c:
    // 0x194c0c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x194c0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_194c10:
    // 0x194c10: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x194c10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_194c14:
    // 0x194c14: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x194c14u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_194c18:
    // 0x194c18: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x194c18u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_194c1c:
    // 0x194c1c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x194c1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_194c20:
    // 0x194c20: 0x3e00008  jr          $ra
label_194c24:
    if (ctx->pc == 0x194C24u) {
        ctx->pc = 0x194C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194C20u;
        // 0x194c24: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194C28u;
        goto label_fallthrough_0x194c20;
    }
    ctx->pc = 0x194C20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x194C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194C20u;
        // 0x194c24: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194C20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x194c20:
    ctx->pc = 0x194C28u;
}
