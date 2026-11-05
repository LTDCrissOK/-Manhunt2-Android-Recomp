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

// Function: sub_001C4B48
// Address: 0x1c4b48 - 0x1c4c98
void sub_001C4B48_0x1c4b48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C4B48_0x1c4b48");
#endif

    switch (ctx->pc) {
        case 0x1c4bd4u: goto label_1c4bd4;
        case 0x1c4bdcu: goto label_1c4bdc;
        case 0x1c4be4u: goto label_1c4be4;
        case 0x1c4becu: goto label_1c4bec;
        case 0x1c4bf4u: goto label_1c4bf4;
        case 0x1c4bfcu: goto label_1c4bfc;
        case 0x1c4c04u: goto label_1c4c04;
        case 0x1c4c0cu: goto label_1c4c0c;
        case 0x1c4c14u: goto label_1c4c14;
        case 0x1c4c2cu: goto label_1c4c2c;
        case 0x1c4c34u: goto label_1c4c34;
        case 0x1c4c5cu: goto label_1c4c5c;
        case 0x1c4c68u: goto label_1c4c68;
        case 0x1c4c70u: goto label_1c4c70;
        case 0x1c4c7cu: goto label_1c4c7c;
        default: break;
    }

    ctx->pc = 0x1c4b48u;

    // 0x1c4b48: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1c4b48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1c4b4c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1c4b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1c4b50: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x1c4b50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x1c4b54: 0x24421478  addiu       $v0, $v0, 0x1478
    ctx->pc = 0x1c4b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5240));
    // 0x1c4b58: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c4b58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4b5c: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x1c4b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
    // 0x1c4b60: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1c4b60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1c4b64: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1c4b64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4b68: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1c4b68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1c4b6c: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x1c4b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x1c4b70: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1c4b70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1c4b74: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1c4b74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x1c4b78: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1c4b78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x1c4b7c: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1c4b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1c4b80: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x1c4b80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x1c4b84: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1c4b84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1c4b88: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x1c4b88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x1c4b8c: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x1c4b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x1c4b90: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x1c4b90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x1c4b94: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x1c4b94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x1c4b98: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x1c4b98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x1c4b9c: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x1c4b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x1c4ba0: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x1c4ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
    // 0x1c4ba4: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x1c4ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x1c4ba8: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x1c4ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x1c4bac: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x1c4bacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
    // 0x1c4bb0: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x1c4bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x1c4bb4: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x1c4bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x1c4bb8: 0xae00006c  sw          $zero, 0x6C($s0)
    ctx->pc = 0x1c4bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 0));
    // 0x1c4bbc: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x1c4bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
    // 0x1c4bc0: 0xae000074  sw          $zero, 0x74($s0)
    ctx->pc = 0x1c4bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 0));
    // 0x1c4bc4: 0xae00007c  sw          $zero, 0x7C($s0)
    ctx->pc = 0x1c4bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 0));
    // 0x1c4bc8: 0xae000080  sw          $zero, 0x80($s0)
    ctx->pc = 0x1c4bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
    // 0x1c4bcc: 0xc07a8b2  jal         func_1EA2C8
    ctx->pc = 0x1C4BCCu;
    SET_GPR_U32(ctx, 31, 0x1C4BD4u);
    ctx->pc = 0x1C4BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4BCCu;
    // 0x1c4bd0: 0xae020350  sw          $v0, 0x350($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 848), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA2C8u, 0x1C4BCCu, 0x1C4BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4BD4u;
label_1c4bd4:
    // 0x1c4bd4: 0xc07a8b2  jal         func_1EA2C8
    ctx->pc = 0x1C4BD4u;
    SET_GPR_U32(ctx, 31, 0x1C4BDCu);
    ctx->pc = 0x1C4BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4BD4u;
    // 0x1c4bd8: 0x260400f0  addiu       $a0, $s0, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA2C8u, 0x1C4BD4u, 0x1C4BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4BDCu;
label_1c4bdc:
    // 0x1c4bdc: 0xc07a8b2  jal         func_1EA2C8
    ctx->pc = 0x1C4BDCu;
    SET_GPR_U32(ctx, 31, 0x1C4BE4u);
    ctx->pc = 0x1C4BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4BDCu;
    // 0x1c4be0: 0x26040150  addiu       $a0, $s0, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA2C8u, 0x1C4BDCu, 0x1C4BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4BE4u;
label_1c4be4:
    // 0x1c4be4: 0xc07a8b2  jal         func_1EA2C8
    ctx->pc = 0x1C4BE4u;
    SET_GPR_U32(ctx, 31, 0x1C4BECu);
    ctx->pc = 0x1C4BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4BE4u;
    // 0x1c4be8: 0x260401b0  addiu       $a0, $s0, 0x1B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA2C8u, 0x1C4BE4u, 0x1C4BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4BECu;
label_1c4bec:
    // 0x1c4bec: 0xc07a8b2  jal         func_1EA2C8
    ctx->pc = 0x1C4BECu;
    SET_GPR_U32(ctx, 31, 0x1C4BF4u);
    ctx->pc = 0x1C4BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4BECu;
    // 0x1c4bf0: 0x26040210  addiu       $a0, $s0, 0x210 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA2C8u, 0x1C4BECu, 0x1C4BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4BF4u;
label_1c4bf4:
    // 0x1c4bf4: 0xc07a8b2  jal         func_1EA2C8
    ctx->pc = 0x1C4BF4u;
    SET_GPR_U32(ctx, 31, 0x1C4BFCu);
    ctx->pc = 0x1C4BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4BF4u;
    // 0x1c4bf8: 0x26040270  addiu       $a0, $s0, 0x270 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA2C8u, 0x1C4BF4u, 0x1C4BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4BFCu;
label_1c4bfc:
    // 0x1c4bfc: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1C4BFCu;
    SET_GPR_U32(ctx, 31, 0x1C4C04u);
    ctx->pc = 0x1C4C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4BFCu;
    // 0x1c4c00: 0x260402d0  addiu       $a0, $s0, 0x2D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1C4BFCu, 0x1C4C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4C04u;
label_1c4c04:
    // 0x1c4c04: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1C4C04u;
    SET_GPR_U32(ctx, 31, 0x1C4C0Cu);
    ctx->pc = 0x1C4C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4C04u;
    // 0x1c4c08: 0x260402e0  addiu       $a0, $s0, 0x2E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1C4C04u, 0x1C4C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4C0Cu;
label_1c4c0c:
    // 0x1c4c0c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1C4C0Cu;
    SET_GPR_U32(ctx, 31, 0x1C4C14u);
    ctx->pc = 0x1C4C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4C0Cu;
    // 0x1c4c10: 0x26040300  addiu       $a0, $s0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1C4C0Cu, 0x1C4C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4C14u;
label_1c4c14:
    // 0x1c4c14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c4c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c4c18: 0xae110318  sw          $s1, 0x318($s0)
    ctx->pc = 0x1c4c18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 792), GPR_U32(ctx, 17));
    // 0x1c4c1c: 0xae000310  sw          $zero, 0x310($s0)
    ctx->pc = 0x1c4c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 784), GPR_U32(ctx, 0));
    // 0x1c4c20: 0x26040320  addiu       $a0, $s0, 0x320
    ctx->pc = 0x1c4c20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 800));
    // 0x1c4c24: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1C4C24u;
    SET_GPR_U32(ctx, 31, 0x1C4C2Cu);
    ctx->pc = 0x1C4C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4C24u;
    // 0x1c4c28: 0xae020314  sw          $v0, 0x314($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 788), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1C4C24u, 0x1C4C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4C2Cu;
label_1c4c2c:
    // 0x1c4c2c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1C4C2Cu;
    SET_GPR_U32(ctx, 31, 0x1C4C34u);
    ctx->pc = 0x1C4C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4C2Cu;
    // 0x1c4c30: 0x26040330  addiu       $a0, $s0, 0x330 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1C4C2Cu, 0x1C4C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4C34u;
label_1c4c34:
    // 0x1c4c34: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x1c4c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
    // 0x1c4c38: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1c4c38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x1c4c3c: 0xae000348  sw          $zero, 0x348($s0)
    ctx->pc = 0x1c4c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 840), GPR_U32(ctx, 0));
    // 0x1c4c40: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x1c4c40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1c4c44: 0x3042020f  andi        $v0, $v0, 0x20F
    ctx->pc = 0x1c4c44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)527);
    // 0x1c4c48: 0x24845ad0  addiu       $a0, $a0, 0x5AD0
    ctx->pc = 0x1c4c48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23248));
    // 0x1c4c4c: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x1c4c4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x1c4c50: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1c4c50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1c4c54: 0xc0b2af0  jal         func_2CABC0
    ctx->pc = 0x1C4C54u;
    SET_GPR_U32(ctx, 31, 0x1C4C5Cu);
    ctx->pc = 0x1C4C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4C54u;
    // 0x1c4c58: 0xae0202f8  sw          $v0, 0x2F8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 760), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CABC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CABC0u, 0x1C4C54u, 0x1C4C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4C5Cu;
label_1c4c5c:
    // 0x1c4c5c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c4c5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4c60: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x1C4C60u;
    SET_GPR_U32(ctx, 31, 0x1C4C68u);
    ctx->pc = 0x1C4C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4C60u;
    // 0x1c4c64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x1C4C60u, 0x1C4C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4C68u;
label_1c4c68:
    // 0x1c4c68: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x1C4C68u;
    SET_GPR_U32(ctx, 31, 0x1C4C70u);
    ctx->pc = 0x1C4C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4C68u;
    // 0x1c4c6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x1C4C68u, 0x1C4C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4C70u;
label_1c4c70:
    // 0x1c4c70: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x1c4c70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x1c4c74: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x1C4C74u;
    SET_GPR_U32(ctx, 31, 0x1C4C7Cu);
    ctx->pc = 0x1C4C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4C74u;
    // 0x1c4c78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x1C4C74u, 0x1C4C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4C7Cu;
label_1c4c7c:
    // 0x1c4c7c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1c4c7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4c80: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x1c4c80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1c4c84: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x1c4c84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c4c88: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1c4c88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1c4c8c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C4C8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C4C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4C8Cu;
        // 0x1c4c90: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C4C8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C4C94u;
    // 0x1c4c94: 0x0  nop
    ctx->pc = 0x1c4c94u;
    // NOP
    ctx->pc = 0x1c4c98u;
}
