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

// Function: sub_00358B80
// Address: 0x358b80 - 0x358db8
void sub_00358B80_0x358b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00358B80_0x358b80");
#endif

    switch (ctx->pc) {
        case 0x358bc0u: goto label_358bc0;
        case 0x358bc8u: goto label_358bc8;
        case 0x358be0u: goto label_358be0;
        case 0x358bf0u: goto label_358bf0;
        case 0x358c88u: goto label_358c88;
        case 0x358cb0u: goto label_358cb0;
        case 0x358d10u: goto label_358d10;
        case 0x358d50u: goto label_358d50;
        case 0x358d78u: goto label_358d78;
        default: break;
    }

    ctx->pc = 0x358b80u;

    // 0x358b80: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x358b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x358b84: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x358b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x358b88: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x358b88u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x358b8c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x358b8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358b90: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x358b90u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x358b94: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x358b94u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x358b98: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x358b98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x358b9c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x358b9cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x358ba0: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x358ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x358ba4: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x358ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x358ba8: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x358ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x358bac: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x358bacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x358bb0: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x358bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x358bb4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x358bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x358bb8: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x358BB8u;
    SET_GPR_U32(ctx, 31, 0x358BC0u);
    ctx->pc = 0x358BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358BB8u;
    // 0x358bbc: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x358BB8u, 0x358BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358BC0u;
label_358bc0:
    // 0x358bc0: 0xc0d5f30  jal         func_357CC0
    ctx->pc = 0x358BC0u;
    SET_GPR_U32(ctx, 31, 0x358BC8u);
    ctx->pc = 0x358BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358BC0u;
    // 0x358bc4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x357CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357CC0u, 0x358BC0u, 0x358BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358BC8u;
label_358bc8:
    // 0x358bc8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x358bc8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358bcc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x358bccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358bd0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x358bd0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x358bd4: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x358bd4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x358bd8: 0xc0d6026  jal         func_358098
    ctx->pc = 0x358BD8u;
    SET_GPR_U32(ctx, 31, 0x358BE0u);
    ctx->pc = 0x358BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358BD8u;
    // 0x358bdc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x358098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x358098u, 0x358BD8u, 0x358BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358BE0u;
label_358be0:
    // 0x358be0: 0x3c10005c  lui         $s0, 0x5C
    ctx->pc = 0x358be0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)92 << 16));
    // 0x358be4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x358be4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x358be8: 0xc0d5f28  jal         func_357CA0
    ctx->pc = 0x358BE8u;
    SET_GPR_U32(ctx, 31, 0x358BF0u);
    ctx->pc = 0x358BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358BE8u;
    // 0x358bec: 0x2610d3c0  addiu       $s0, $s0, -0x2C40 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294955968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x357CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357CA0u, 0x358BE8u, 0x358BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358BF0u;
label_358bf0:
    // 0x358bf0: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x358BF0u;
    {
        const bool branch_taken_0x358bf0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x358bf0) {
            ctx->pc = 0x358BF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x358BF0u;
            // 0x358bf4: 0x21023  negu        $v0, $v0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x358BF8u;
            goto label_358bf8;
        }
    }
    ctx->pc = 0x358BF8u;
label_358bf8:
    // 0x358bf8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x358bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x358bfc: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x358bfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x358c00: 0xafb20000  sw          $s2, 0x0($sp)
    ctx->pc = 0x358c00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
    // 0x358c04: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x358c04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x358c08: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x358c08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x358c0c: 0x508821  addu        $s1, $v0, $s0
    ctx->pc = 0x358c0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x358c10: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x358c10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x358c14: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x358c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x358c18: 0x1082000a  beq         $a0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x358C18u;
    {
        const bool branch_taken_0x358c18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x358C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358C18u;
        // 0x358c1c: 0x3a0982d  daddu       $s3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358c18) {
            ctx->pc = 0x358C44u;
            goto label_358c44;
        }
    }
    ctx->pc = 0x358C20u;
    // 0x358c20: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x358C20u;
    {
        const bool branch_taken_0x358c20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x358c20) {
            ctx->pc = 0x358C24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x358C20u;
            // 0x358c24: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x358C38u;
            goto label_358c38;
        }
    }
    ctx->pc = 0x358C28u;
    // 0x358c28: 0xac920000  sw          $s2, 0x0($a0)
    ctx->pc = 0x358c28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 18));
    // 0x358c2c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x358c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x358c30: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x358c30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x358c34: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x358c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_358c38:
    // 0x358c38: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x358c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x358c3c: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x358C3Cu;
    {
        const bool branch_taken_0x358c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x358C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358C3Cu;
        // 0x358c40: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358c3c) {
            ctx->pc = 0x358D88u;
            goto label_358d88;
        }
    }
    ctx->pc = 0x358C44u;
label_358c44:
    // 0x358c44: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x358c44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x358c48: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x358c48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358c4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x358c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x358c50: 0x27a50014  addiu       $a1, $sp, 0x14
    ctx->pc = 0x358c50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x358c54: 0x2431823  subu        $v1, $s2, $v1
    ctx->pc = 0x358c54u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x358c58: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x358c58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x358c5c: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x358c5cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
    // 0x358c60: 0x27a20018  addiu       $v0, $sp, 0x18
    ctx->pc = 0x358c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x358c64: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x358c64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x358c68: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x358c68u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x358c6c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x358c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x358c70: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x358c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x358c74: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x358C74u;
    {
        const bool branch_taken_0x358c74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x358C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358C74u;
        // 0x358c78: 0x210c0  sll         $v0, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358c74) {
            ctx->pc = 0x358C90u;
            goto label_358c90;
        }
    }
    ctx->pc = 0x358C7Cu;
    // 0x358c7c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x358c7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358c80: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x358C80u;
    SET_GPR_U32(ctx, 31, 0x358C88u);
    ctx->pc = 0x358C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358C80u;
    // 0x358c84: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x358C80u, 0x358C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358C88u;
label_358c88:
    // 0x358c88: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x358C88u;
    {
        const bool branch_taken_0x358c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x358C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358C88u;
        // 0x358c8c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358c88) {
            ctx->pc = 0x358C9Cu;
            goto label_358c9c;
        }
    }
    ctx->pc = 0x358C90u;
label_358c90:
    // 0x358c90: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x358c90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358c94: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x358c94u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358c98: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x358c98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_358c9c:
    // 0x358c9c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x358c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x358ca0: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x358ca0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358ca4: 0x1092000b  beq         $a0, $s2, . + 4 + (0xB << 2)
    ctx->pc = 0x358CA4u;
    {
        const bool branch_taken_0x358ca4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 18));
        ctx->pc = 0x358CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358CA4u;
        // 0x358ca8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358ca4) {
            ctx->pc = 0x358CD4u;
            goto label_358cd4;
        }
    }
    ctx->pc = 0x358CACu;
    // 0x358cac: 0x0  nop
    ctx->pc = 0x358cacu;
    // NOP
label_358cb0:
    // 0x358cb0: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x358CB0u;
    {
        const bool branch_taken_0x358cb0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x358cb0) {
            ctx->pc = 0x358CB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x358CB0u;
            // 0x358cb4: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x358CCCu;
            goto label_358ccc;
        }
    }
    ctx->pc = 0x358CB8u;
    // 0x358cb8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x358cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x358cbc: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x358cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x358cc0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x358cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x358cc4: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x358cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x358cc8: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x358cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_358ccc:
    // 0x358ccc: 0x1492fff8  bne         $a0, $s2, . + 4 + (-0x8 << 2)
    ctx->pc = 0x358CCCu;
    {
        const bool branch_taken_0x358ccc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 18));
        ctx->pc = 0x358CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358CCCu;
        // 0x358cd0: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358ccc) {
            ctx->pc = 0x358CB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_358cb0;
        }
    }
    ctx->pc = 0x358CD4u;
label_358cd4:
    // 0x358cd4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x358cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x358cd8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x358cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x358cdc: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x358CDCu;
    {
        const bool branch_taken_0x358cdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x358CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358CDCu;
        // 0x358ce0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358cdc) {
            ctx->pc = 0x358D04u;
            goto label_358d04;
        }
    }
    ctx->pc = 0x358CE4u;
    // 0x358ce4: 0x52000014  beql        $s0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x358CE4u;
    {
        const bool branch_taken_0x358ce4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x358ce4) {
            ctx->pc = 0x358CE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x358CE4u;
            // 0x358ce8: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x358D38u;
            goto label_358d38;
        }
    }
    ctx->pc = 0x358CECu;
    // 0x358cec: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x358cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x358cf0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x358cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x358cf4: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x358cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x358cf8: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x358cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x358cfc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x358CFCu;
    {
        const bool branch_taken_0x358cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x358D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358CFCu;
        // 0x358d00: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358cfc) {
            ctx->pc = 0x358D38u;
            goto label_358d38;
        }
    }
    ctx->pc = 0x358D04u;
label_358d04:
    // 0x358d04: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x358d04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358d08: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x358D08u;
    {
        const bool branch_taken_0x358d08 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x358D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358D08u;
        // 0x358d0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358d08) {
            ctx->pc = 0x358D30u;
            goto label_358d30;
        }
    }
    ctx->pc = 0x358D10u;
label_358d10:
    // 0x358d10: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x358D10u;
    {
        const bool branch_taken_0x358d10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x358D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358D10u;
        // 0x358d14: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358d10) {
            ctx->pc = 0x358D28u;
            goto label_358d28;
        }
    }
    ctx->pc = 0x358D18u;
    // 0x358d18: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x358d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x358d1c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x358d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x358d20: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x358d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x358d24: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x358d24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_358d28:
    // 0x358d28: 0x14a0fff9  bnez        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x358D28u;
    {
        const bool branch_taken_0x358d28 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x358D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358D28u;
        // 0x358d2c: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358d28) {
            ctx->pc = 0x358D10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_358d10;
        }
    }
    ctx->pc = 0x358D30u;
label_358d30:
    // 0x358d30: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x358d30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358d34: 0x0  nop
    ctx->pc = 0x358d34u;
    // NOP
label_358d38:
    // 0x358d38: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x358d38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x358d3c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x358d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x358d40: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x358D40u;
    {
        const bool branch_taken_0x358d40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x358D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358D40u;
        // 0x358d44: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358d40) {
            ctx->pc = 0x358D68u;
            goto label_358d68;
        }
    }
    ctx->pc = 0x358D48u;
    // 0x358d48: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x358d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x358d4c: 0x0  nop
    ctx->pc = 0x358d4cu;
    // NOP
label_358d50:
    // 0x358d50: 0x0  nop
    ctx->pc = 0x358d50u;
    // NOP
    // 0x358d54: 0x0  nop
    ctx->pc = 0x358d54u;
    // NOP
    // 0x358d58: 0x0  nop
    ctx->pc = 0x358d58u;
    // NOP
    // 0x358d5c: 0x0  nop
    ctx->pc = 0x358d5cu;
    // NOP
    // 0x358d60: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x358D60u;
    {
        const bool branch_taken_0x358d60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x358D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358D60u;
        // 0x358d64: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358d60) {
            ctx->pc = 0x358D50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_358d50;
        }
    }
    ctx->pc = 0x358D68u;
label_358d68:
    // 0x358d68: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x358D68u;
    {
        const bool branch_taken_0x358d68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x358D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358D68u;
        // 0x358d6c: 0x2b41021  addu        $v0, $s5, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358d68) {
            ctx->pc = 0x358D7Cu;
            goto label_358d7c;
        }
    }
    ctx->pc = 0x358D70u;
    // 0x358d70: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x358D70u;
    SET_GPR_U32(ctx, 31, 0x358D78u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x358D70u, 0x358D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358D78u;
label_358d78:
    // 0x358d78: 0x2b41021  addu        $v0, $s5, $s4
    ctx->pc = 0x358d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
label_358d7c:
    // 0x358d7c: 0xae340000  sw          $s4, 0x0($s1)
    ctx->pc = 0x358d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 20));
    // 0x358d80: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x358d80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x358d84: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x358d84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
label_358d88:
    // 0x358d88: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x358d88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x358d8c: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x358d8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x358d90: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x358d90u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x358d94: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x358d94u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x358d98: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x358d98u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x358d9c: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x358d9cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x358da0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x358da0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x358da4: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x358da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x358da8: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x358da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x358dac: 0x3e00008  jr          $ra
    ctx->pc = 0x358DACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x358DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358DACu;
        // 0x358db0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x358DACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x358DB4u;
    // 0x358db4: 0x0  nop
    ctx->pc = 0x358db4u;
    // NOP
    ctx->pc = 0x358db8u;
}
