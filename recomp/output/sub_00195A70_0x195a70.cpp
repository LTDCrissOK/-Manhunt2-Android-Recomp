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

// Function: sub_00195A70
// Address: 0x195a70 - 0x195bd0
void sub_00195A70_0x195a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00195A70_0x195a70");
#endif

    switch (ctx->pc) {
        case 0x195aacu: goto label_195aac;
        case 0x195ac4u: goto label_195ac4;
        case 0x195aecu: goto label_195aec;
        case 0x195b0cu: goto label_195b0c;
        case 0x195b2cu: goto label_195b2c;
        case 0x195b34u: goto label_195b34;
        case 0x195b48u: goto label_195b48;
        case 0x195b5cu: goto label_195b5c;
        case 0x195b7cu: goto label_195b7c;
        case 0x195b84u: goto label_195b84;
        case 0x195b8cu: goto label_195b8c;
        default: break;
    }

    ctx->pc = 0x195a70u;

    // 0x195a70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x195a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x195a74: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x195a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x195a78: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x195a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x195a7c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x195a7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195a80: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x195a80u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195a84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x195a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x195a88: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x195a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x195a8c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x195a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x195a90: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x195a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x195a94: 0x26500030  addiu       $s0, $s2, 0x30
    ctx->pc = 0x195a94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x195a98: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x195a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x195a9c: 0x26510050  addiu       $s1, $s2, 0x50
    ctx->pc = 0x195a9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
    // 0x195aa0: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x195aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x195aa4: 0xc061a32  jal         func_1868C8
    ctx->pc = 0x195AA4u;
    SET_GPR_U32(ctx, 31, 0x195AACu);
    ctx->pc = 0x195AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195AA4u;
    // 0x195aa8: 0x24150006  addiu       $s5, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1868C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1868C8u, 0x195AA4u, 0x195AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195AACu;
label_195aac:
    // 0x195aac: 0x26530070  addiu       $s3, $s2, 0x70
    ctx->pc = 0x195aacu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
    // 0x195ab0: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x195ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x195ab4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x195ab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195ab8: 0x24421220  addiu       $v0, $v0, 0x1220
    ctx->pc = 0x195ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4640));
    // 0x195abc: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x195ABCu;
    SET_GPR_U32(ctx, 31, 0x195AC4u);
    ctx->pc = 0x195AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195ABCu;
    // 0x195ac0: 0xae42000c  sw          $v0, 0xC($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x195ABCu, 0x195AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195AC4u;
label_195ac4:
    // 0x195ac4: 0x3c140043  lui         $s4, 0x43
    ctx->pc = 0x195ac4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)67 << 16));
    // 0x195ac8: 0xae150010  sw          $s5, 0x10($s0)
    ctx->pc = 0x195ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 21));
    // 0x195acc: 0x26940f90  addiu       $s4, $s4, 0xF90
    ctx->pc = 0x195accu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 3984));
    // 0x195ad0: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x195ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x195ad4: 0xae140018  sw          $s4, 0x18($s0)
    ctx->pc = 0x195ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 20));
    // 0x195ad8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x195ad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195adc: 0xae400030  sw          $zero, 0x30($s2)
    ctx->pc = 0x195adcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 0));
    // 0x195ae0: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x195ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x195ae4: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x195AE4u;
    SET_GPR_U32(ctx, 31, 0x195AECu);
    ctx->pc = 0x195AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195AE4u;
    // 0x195ae8: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x195AE4u, 0x195AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195AECu;
label_195aec:
    // 0x195aec: 0xae340018  sw          $s4, 0x18($s1)
    ctx->pc = 0x195aecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 20));
    // 0x195af0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x195af0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195af4: 0xae350010  sw          $s5, 0x10($s1)
    ctx->pc = 0x195af4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 21));
    // 0x195af8: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x195af8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x195afc: 0xae400050  sw          $zero, 0x50($s2)
    ctx->pc = 0x195afcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 0));
    // 0x195b00: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x195b00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x195b04: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x195B04u;
    SET_GPR_U32(ctx, 31, 0x195B0Cu);
    ctx->pc = 0x195B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195B04u;
    // 0x195b08: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x195B04u, 0x195B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195B0Cu;
label_195b0c:
    // 0x195b0c: 0xae740018  sw          $s4, 0x18($s3)
    ctx->pc = 0x195b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 20));
    // 0x195b10: 0x264400a0  addiu       $a0, $s2, 0xA0
    ctx->pc = 0x195b10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
    // 0x195b14: 0xae750010  sw          $s5, 0x10($s3)
    ctx->pc = 0x195b14u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 21));
    // 0x195b18: 0xae600014  sw          $zero, 0x14($s3)
    ctx->pc = 0x195b18u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 0));
    // 0x195b1c: 0xae400070  sw          $zero, 0x70($s2)
    ctx->pc = 0x195b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 0));
    // 0x195b20: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x195b20u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
    // 0x195b24: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x195B24u;
    SET_GPR_U32(ctx, 31, 0x195B2Cu);
    ctx->pc = 0x195B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195B24u;
    // 0x195b28: 0xae600004  sw          $zero, 0x4($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x195B24u, 0x195B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195B2Cu;
label_195b2c:
    // 0x195b2c: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x195B2Cu;
    SET_GPR_U32(ctx, 31, 0x195B34u);
    ctx->pc = 0x195B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195B2Cu;
    // 0x195b30: 0x24040090  addiu       $a0, $zero, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x195B2Cu, 0x195B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195B34u;
label_195b34:
    // 0x195b34: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x195b34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195b38: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x195b38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195b3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x195b3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195b40: 0xc061a32  jal         func_1868C8
    ctx->pc = 0x195B40u;
    SET_GPR_U32(ctx, 31, 0x195B48u);
    ctx->pc = 0x195B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195B40u;
    // 0x195b44: 0x26110030  addiu       $s1, $s0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1868C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1868C8u, 0x195B40u, 0x195B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195B48u;
label_195b48:
    // 0x195b48: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x195b48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x195b4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x195b4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195b50: 0x24631050  addiu       $v1, $v1, 0x1050
    ctx->pc = 0x195b50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4176));
    // 0x195b54: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x195B54u;
    SET_GPR_U32(ctx, 31, 0x195B5Cu);
    ctx->pc = 0x195B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195B54u;
    // 0x195b58: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x195B54u, 0x195B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195B5Cu;
label_195b5c:
    // 0x195b5c: 0xae340018  sw          $s4, 0x18($s1)
    ctx->pc = 0x195b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 20));
    // 0x195b60: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x195b60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x195b64: 0xae350010  sw          $s5, 0x10($s1)
    ctx->pc = 0x195b64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 21));
    // 0x195b68: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x195b68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x195b6c: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x195b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x195b70: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x195b70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x195b74: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x195B74u;
    SET_GPR_U32(ctx, 31, 0x195B7Cu);
    ctx->pc = 0x195B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195B74u;
    // 0x195b78: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x195B74u, 0x195B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195B7Cu;
label_195b7c:
    // 0x195b7c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x195B7Cu;
    SET_GPR_U32(ctx, 31, 0x195B84u);
    ctx->pc = 0x195B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195B7Cu;
    // 0x195b80: 0x26040060  addiu       $a0, $s0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x195B7Cu, 0x195B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195B84u;
label_195b84:
    // 0x195b84: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x195B84u;
    SET_GPR_U32(ctx, 31, 0x195B8Cu);
    ctx->pc = 0x195B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195B84u;
    // 0x195b88: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x195B84u, 0x195B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195B8Cu;
label_195b8c:
    // 0x195b8c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x195b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x195b90: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x195b90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x195b94: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x195b94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x195b98: 0xae5000b0  sw          $s0, 0xB0($s2)
    ctx->pc = 0x195b98u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 16));
    // 0x195b9c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x195b9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195ba0: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x195ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
    // 0x195ba4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x195ba4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x195ba8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x195ba8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x195bac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x195bacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x195bb0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x195bb0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x195bb4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x195bb4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x195bb8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x195bb8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x195bbc: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x195bbcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x195bc0: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x195bc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x195bc4: 0x3e00008  jr          $ra
    ctx->pc = 0x195BC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195BC4u;
        // 0x195bc8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195BC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195BCCu;
    // 0x195bcc: 0x0  nop
    ctx->pc = 0x195bccu;
    // NOP
    ctx->pc = 0x195bd0u;
}
