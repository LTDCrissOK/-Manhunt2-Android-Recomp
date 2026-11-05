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

// Function: sub_001C3AD8
// Address: 0x1c3ad8 - 0x1c3d30
void sub_001C3AD8_0x1c3ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C3AD8_0x1c3ad8");
#endif

    switch (ctx->pc) {
        case 0x1c3b30u: goto label_1c3b30;
        case 0x1c3b38u: goto label_1c3b38;
        case 0x1c3b7cu: goto label_1c3b7c;
        case 0x1c3bb0u: goto label_1c3bb0;
        case 0x1c3bf0u: goto label_1c3bf0;
        case 0x1c3bf8u: goto label_1c3bf8;
        case 0x1c3c3cu: goto label_1c3c3c;
        case 0x1c3c4cu: goto label_1c3c4c;
        default: break;
    }

    ctx->pc = 0x1c3ad8u;

    // 0x1c3ad8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1c3ad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1c3adc: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x1c3adcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x1c3ae0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1c3ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1c3ae4: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1c3ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x1c3ae8: 0x2450f180  addiu       $s0, $v0, -0xE80
    ctx->pc = 0x1c3ae8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963584));
    // 0x1c3aec: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1c3aecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1c3af0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c3af0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3af4: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x1c3af4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1c3af8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1c3af8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3afc: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x1c3afcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x1c3b00: 0x460c6502  mul.s       $f20, $f12, $f12
    ctx->pc = 0x1c3b00u;
    ctx->f[20] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x1c3b04: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1c3b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1c3b08: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x1c3b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x1c3b0c: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x1c3b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x1c3b10: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x1c3b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x1c3b14: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x1c3b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
    // 0x1c3b18: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x1c3b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x1c3b1c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1c3b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x48F184u));
    // 0x1c3b20: 0xafa60010  sw          $a2, 0x10($sp)
    ctx->pc = 0x1c3b20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
    // 0x1c3b24: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C3B24u;
    {
        const bool branch_taken_0x1c3b24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3B24u;
        // 0x1c3b28: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3b24) {
            ctx->pc = 0x1C3B48u;
            goto label_1c3b48;
        }
    }
    ctx->pc = 0x1C3B2Cu;
    // 0x1c3b2c: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1c3b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1c3b30:
    // 0x1c3b30: 0xc0f61e8  jal         func_3D87A0
    ctx->pc = 0x1C3B30u;
    SET_GPR_U32(ctx, 31, 0x1C3B38u);
    ctx->pc = 0x1C3B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3B30u;
    // 0x1c3b34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D87A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D87A0u, 0x1C3B30u, 0x1C3B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3B38u;
label_1c3b38:
    // 0x1c3b38: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1c3b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1c3b3c: 0x0  nop
    ctx->pc = 0x1c3b3cu;
    // NOP
    // 0x1c3b40: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1C3B40u;
    {
        const bool branch_taken_0x1c3b40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c3b40) {
            ctx->pc = 0x1C3B44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C3B40u;
            // 0x1c3b44: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C3B30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c3b30;
        }
    }
    ctx->pc = 0x1C3B48u;
label_1c3b48:
    // 0x1c3b48: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1c3b48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1c3b4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c3b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c3b50: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1c3b50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1c3b54: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x1c3b54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x1c3b58: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1c3b58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1c3b5c: 0x2464f180  addiu       $a0, $v1, -0xE80
    ctx->pc = 0x1c3b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963584));
    // 0x1c3b60: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1c3b60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1c3b64: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1c3b64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3b68: 0xae320044  sw          $s2, 0x44($s1)
    ctx->pc = 0x1c3b68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 18));
    // 0x1c3b6c: 0xae200084  sw          $zero, 0x84($s1)
    ctx->pc = 0x1c3b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 0));
    // 0x1c3b70: 0xae2200c4  sw          $v0, 0xC4($s1)
    ctx->pc = 0x1c3b70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 2));
    // 0x1c3b74: 0xc0f620c  jal         func_3D8830
    ctx->pc = 0x1C3B74u;
    SET_GPR_U32(ctx, 31, 0x1C3B7Cu);
    ctx->pc = 0x1C3B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3B74u;
    // 0x1c3b78: 0xa2420021  sb          $v0, 0x21($s2) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 18), 33), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D8830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D8830u, 0x1C3B74u, 0x1C3B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3B7Cu;
label_1c3b7c:
    // 0x1c3b7c: 0xae2000c8  sw          $zero, 0xC8($s1)
    ctx->pc = 0x1c3b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 200), GPR_U32(ctx, 0));
    // 0x1c3b80: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c3b80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3b84: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x1c3b84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1c3b88: 0x8e2500c4  lw          $a1, 0xC4($s1)
    ctx->pc = 0x1c3b88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
    // 0x1c3b8c: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x1c3b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
    // 0x1c3b90: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x1c3b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x1c3b94: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1c3b94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1c3b98: 0x10a00057  beqz        $a1, . + 4 + (0x57 << 2)
    ctx->pc = 0x1C3B98u;
    {
        const bool branch_taken_0x1c3b98 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3B98u;
        // 0x1c3b9c: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3b98) {
            ctx->pc = 0x1C3CF8u;
            goto label_1c3cf8;
        }
    }
    ctx->pc = 0x1C3BA0u;
    // 0x1c3ba0: 0x26370044  addiu       $s7, $s1, 0x44
    ctx->pc = 0x1c3ba0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
    // 0x1c3ba4: 0x263e0084  addiu       $fp, $s1, 0x84
    ctx->pc = 0x1c3ba4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
    // 0x1c3ba8: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1c3ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1c3bac: 0x0  nop
    ctx->pc = 0x1c3bacu;
    // NOP
label_1c3bb0:
    // 0x1c3bb0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1c3bb0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3bb4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1c3bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1c3bb8: 0x2e21821  addu        $v1, $s7, $v0
    ctx->pc = 0x1c3bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x1c3bbc: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x1c3bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x1c3bc0: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x1c3bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x1c3bc4: 0x8c730000  lw          $s3, 0x0($v1)
    ctx->pc = 0x1c3bc4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c3bc8: 0x92630022  lbu         $v1, 0x22($s3)
    ctx->pc = 0x1c3bc8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 34)));
    // 0x1c3bcc: 0x10600045  beqz        $v1, . + 4 + (0x45 << 2)
    ctx->pc = 0x1C3BCCu;
    {
        const bool branch_taken_0x1c3bcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3BCCu;
        // 0x1c3bd0: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3bcc) {
            ctx->pc = 0x1C3CE4u;
            goto label_1c3ce4;
        }
    }
    ctx->pc = 0x1C3BD4u;
    // 0x1c3bd4: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1c3bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1c3bd8: 0x50a30043  beql        $a1, $v1, . + 4 + (0x43 << 2)
    ctx->pc = 0x1C3BD8u;
    {
        const bool branch_taken_0x1c3bd8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c3bd8) {
            ctx->pc = 0x1C3BDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C3BD8u;
            // 0x1c3bdc: 0x8e2500c4  lw          $a1, 0xC4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C3CE8u;
            goto label_1c3ce8;
        }
    }
    ctx->pc = 0x1C3BE0u;
    // 0x1c3be0: 0x24560001  addiu       $s6, $v0, 0x1
    ctx->pc = 0x1c3be0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c3be4: 0x3c0a02d  daddu       $s4, $fp, $zero
    ctx->pc = 0x1c3be4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3be8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c3be8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3bec: 0x0  nop
    ctx->pc = 0x1c3becu;
    // NOP
label_1c3bf0:
    // 0x1c3bf0: 0xc04147a  jal         func_1051E8
    ctx->pc = 0x1C3BF0u;
    SET_GPR_U32(ctx, 31, 0x1C3BF8u);
    ctx->pc = 0x1C3BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3BF0u;
    // 0x1c3bf4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051E8u, 0x1C3BF0u, 0x1C3BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3BF8u;
label_1c3bf8:
    // 0x1c3bf8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1c3bf8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3bfc: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x1c3bfcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c3c00: 0x92020021  lbu         $v0, 0x21($s0)
    ctx->pc = 0x1c3c00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 33)));
    // 0x1c3c04: 0x54400030  bnel        $v0, $zero, . + 4 + (0x30 << 2)
    ctx->pc = 0x1C3C04u;
    {
        const bool branch_taken_0x1c3c04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c3c04) {
            ctx->pc = 0x1C3C08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C3C04u;
            // 0x1c3c08: 0x92620022  lbu         $v0, 0x22($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 34)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C3CC8u;
            goto label_1c3cc8;
        }
    }
    ctx->pc = 0x1C3C0Cu;
    // 0x1c3c0c: 0x90620014  lbu         $v0, 0x14($v1)
    ctx->pc = 0x1c3c0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x1c3c10: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x1c3c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1c3c14: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C3C14u;
    {
        const bool branch_taken_0x1c3c14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C3C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3C14u;
        // 0x1c3c18: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3c14) {
            ctx->pc = 0x1C3C24u;
            goto label_1c3c24;
        }
    }
    ctx->pc = 0x1C3C1Cu;
    // 0x1c3c1c: 0x5040002a  beql        $v0, $zero, . + 4 + (0x2A << 2)
    ctx->pc = 0x1C3C1Cu;
    {
        const bool branch_taken_0x1c3c1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3c1c) {
            ctx->pc = 0x1C3C20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C3C1Cu;
            // 0x1c3c20: 0x92620022  lbu         $v0, 0x22($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 34)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C3CC8u;
            goto label_1c3cc8;
        }
    }
    ctx->pc = 0x1C3C24u;
label_1c3c24:
    // 0x1c3c24: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x1c3c24u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c3c28: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x1c3c28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x1c3c2c: 0xa2150021  sb          $s5, 0x21($s0)
    ctx->pc = 0x1c3c2cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 33), (uint8_t)GPR_U32(ctx, 21));
    // 0x1c3c30: 0x2444f180  addiu       $a0, $v0, -0xE80
    ctx->pc = 0x1c3c30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963584));
    // 0x1c3c34: 0xc0f620c  jal         func_3D8830
    ctx->pc = 0x1C3C34u;
    SET_GPR_U32(ctx, 31, 0x1C3C3Cu);
    ctx->pc = 0x1C3C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3C34u;
    // 0x1c3c38: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D8830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D8830u, 0x1C3C34u, 0x1C3C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3C3Cu;
label_1c3c3c:
    // 0x1c3c3c: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x1c3c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c3c40: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c3c40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3c44: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x1C3C44u;
    SET_GPR_U32(ctx, 31, 0x1C3C4Cu);
    ctx->pc = 0x1C3C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3C44u;
    // 0x1c3c48: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x1C3C44u, 0x1C3C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3C4Cu;
label_1c3c4c:
    // 0x1c3c4c: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x1c3c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c3c50: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x1c3c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c3c54: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x1c3c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1c3c58: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1c3c58u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1c3c5c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1c3c5cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1c3c60: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x1c3c60u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1c3c64: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x1c3c64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c3c68: 0x0  nop
    ctx->pc = 0x1c3c68u;
    // NOP
    // 0x1c3c6c: 0x45020016  bc1fl       . + 4 + (0x16 << 2)
    ctx->pc = 0x1C3C6Cu;
    {
        const bool branch_taken_0x1c3c6c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c3c6c) {
            ctx->pc = 0x1C3C70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C3C6Cu;
            // 0x1c3c70: 0x92620022  lbu         $v0, 0x22($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 34)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C3CC8u;
            goto label_1c3cc8;
        }
    }
    ctx->pc = 0x1C3C74u;
    // 0x1c3c74: 0x8e2200c4  lw          $v0, 0xC4($s1)
    ctx->pc = 0x1c3c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
    // 0x1c3c78: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1c3c78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1c3c7c: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x1c3c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x1c3c80: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x1c3c80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x1c3c84: 0x8e2300c4  lw          $v1, 0xC4($s1)
    ctx->pc = 0x1c3c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
    // 0x1c3c88: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1c3c88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c3c8c: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x1c3c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1c3c90: 0xac760000  sw          $s6, 0x0($v1)
    ctx->pc = 0x1c3c90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 22));
    // 0x1c3c94: 0x8e2200c4  lw          $v0, 0xC4($s1)
    ctx->pc = 0x1c3c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
    // 0x1c3c98: 0x8e2300c8  lw          $v1, 0xC8($s1)
    ctx->pc = 0x1c3c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 200)));
    // 0x1c3c9c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1c3c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1c3ca0: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1c3ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1c3ca4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1c3ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c3ca8: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x1c3ca8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1c3cac: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1C3CACu;
    {
        const bool branch_taken_0x1c3cac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c3cac) {
            ctx->pc = 0x1C3CB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C3CACu;
            // 0x1c3cb0: 0xae2200c8  sw          $v0, 0xC8($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 200), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C3CB4u;
            goto label_1c3cb4;
        }
    }
    ctx->pc = 0x1C3CB4u;
label_1c3cb4:
    // 0x1c3cb4: 0x8e2200c4  lw          $v0, 0xC4($s1)
    ctx->pc = 0x1c3cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
    // 0x1c3cb8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c3cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c3cbc: 0xae2200c4  sw          $v0, 0xC4($s1)
    ctx->pc = 0x1c3cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 2));
    // 0x1c3cc0: 0xa2150021  sb          $s5, 0x21($s0)
    ctx->pc = 0x1c3cc0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 33), (uint8_t)GPR_U32(ctx, 21));
    // 0x1c3cc4: 0x92620022  lbu         $v0, 0x22($s3)
    ctx->pc = 0x1c3cc4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 34)));
label_1c3cc8:
    // 0x1c3cc8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1c3cc8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1c3ccc: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x1c3cccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1c3cd0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C3CD0u;
    {
        const bool branch_taken_0x1c3cd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3CD0u;
        // 0x1c3cd4: 0x24030010  addiu       $v1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3cd0) {
            ctx->pc = 0x1C3CE4u;
            goto label_1c3ce4;
        }
    }
    ctx->pc = 0x1C3CD8u;
    // 0x1c3cd8: 0x8e2200c4  lw          $v0, 0xC4($s1)
    ctx->pc = 0x1c3cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
    // 0x1c3cdc: 0x1443ffc4  bne         $v0, $v1, . + 4 + (-0x3C << 2)
    ctx->pc = 0x1C3CDCu;
    {
        const bool branch_taken_0x1c3cdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1C3CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3CDCu;
        // 0x1c3ce0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3cdc) {
            ctx->pc = 0x1C3BF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c3bf0;
        }
    }
    ctx->pc = 0x1C3CE4u;
label_1c3ce4:
    // 0x1c3ce4: 0x8e2500c4  lw          $a1, 0xC4($s1)
    ctx->pc = 0x1c3ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
label_1c3ce8:
    // 0x1c3ce8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1c3ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c3cec: 0x85102b  sltu        $v0, $a0, $a1
    ctx->pc = 0x1c3cecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1c3cf0: 0x1440ffaf  bnez        $v0, . + 4 + (-0x51 << 2)
    ctx->pc = 0x1C3CF0u;
    {
        const bool branch_taken_0x1c3cf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C3CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3CF0u;
        // 0x1c3cf4: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3cf0) {
            ctx->pc = 0x1C3BB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c3bb0;
        }
    }
    ctx->pc = 0x1C3CF8u;
label_1c3cf8:
    // 0x1c3cf8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1c3cf8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c3cfc: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1c3cfcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c3d00: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1c3d00u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c3d04: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x1c3d04u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3d08: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1c3d08u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c3d0c: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x1c3d0cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c3d10: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x1c3d10u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c3d14: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x1c3d14u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1c3d18: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x1c3d18u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c3d1c: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x1c3d1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c3d20: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x1c3d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c3d24: 0x3e00008  jr          $ra
    ctx->pc = 0x1C3D24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C3D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3D24u;
        // 0x1c3d28: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C3D24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C3D2Cu;
    // 0x1c3d2c: 0x0  nop
    ctx->pc = 0x1c3d2cu;
    // NOP
    ctx->pc = 0x1c3d30u;
}
