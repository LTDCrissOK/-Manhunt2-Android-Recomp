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

// Function: sub_0018BF70
// Address: 0x18bf70 - 0x18c0d0
void sub_0018BF70_0x18bf70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018BF70_0x18bf70");
#endif

    switch (ctx->pc) {
        case 0x18bfacu: goto label_18bfac;
        case 0x18bfc4u: goto label_18bfc4;
        case 0x18bfecu: goto label_18bfec;
        case 0x18c00cu: goto label_18c00c;
        case 0x18c014u: goto label_18c014;
        case 0x18c034u: goto label_18c034;
        case 0x18c048u: goto label_18c048;
        case 0x18c05cu: goto label_18c05c;
        case 0x18c07cu: goto label_18c07c;
        case 0x18c084u: goto label_18c084;
        case 0x18c08cu: goto label_18c08c;
        default: break;
    }

    ctx->pc = 0x18bf70u;

    // 0x18bf70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x18bf70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x18bf74: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x18bf74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x18bf78: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x18bf78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x18bf7c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x18bf7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bf80: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x18bf80u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bf84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18bf84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x18bf88: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x18bf88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x18bf8c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x18bf8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x18bf90: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x18bf90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x18bf94: 0x26500020  addiu       $s0, $s2, 0x20
    ctx->pc = 0x18bf94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x18bf98: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x18bf98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x18bf9c: 0x26510040  addiu       $s1, $s2, 0x40
    ctx->pc = 0x18bf9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x18bfa0: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x18bfa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x18bfa4: 0xc061a32  jal         func_1868C8
    ctx->pc = 0x18BFA4u;
    SET_GPR_U32(ctx, 31, 0x18BFACu);
    ctx->pc = 0x18BFA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BFA4u;
    // 0x18bfa8: 0x24150006  addiu       $s5, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1868C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1868C8u, 0x18BFA4u, 0x18BFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BFACu;
label_18bfac:
    // 0x18bfac: 0x26530080  addiu       $s3, $s2, 0x80
    ctx->pc = 0x18bfacu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
    // 0x18bfb0: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x18bfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x18bfb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18bfb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bfb8: 0x244211a0  addiu       $v0, $v0, 0x11A0
    ctx->pc = 0x18bfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4512));
    // 0x18bfbc: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x18BFBCu;
    SET_GPR_U32(ctx, 31, 0x18BFC4u);
    ctx->pc = 0x18BFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BFBCu;
    // 0x18bfc0: 0xae42000c  sw          $v0, 0xC($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x18BFBCu, 0x18BFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BFC4u;
label_18bfc4:
    // 0x18bfc4: 0x3c140043  lui         $s4, 0x43
    ctx->pc = 0x18bfc4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)67 << 16));
    // 0x18bfc8: 0xae150010  sw          $s5, 0x10($s0)
    ctx->pc = 0x18bfc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 21));
    // 0x18bfcc: 0x26940f90  addiu       $s4, $s4, 0xF90
    ctx->pc = 0x18bfccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 3984));
    // 0x18bfd0: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x18bfd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x18bfd4: 0xae140018  sw          $s4, 0x18($s0)
    ctx->pc = 0x18bfd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 20));
    // 0x18bfd8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18bfd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bfdc: 0xae400020  sw          $zero, 0x20($s2)
    ctx->pc = 0x18bfdcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 0));
    // 0x18bfe0: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x18bfe0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x18bfe4: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x18BFE4u;
    SET_GPR_U32(ctx, 31, 0x18BFECu);
    ctx->pc = 0x18BFE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BFE4u;
    // 0x18bfe8: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x18BFE4u, 0x18BFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BFECu;
label_18bfec:
    // 0x18bfec: 0xae340018  sw          $s4, 0x18($s1)
    ctx->pc = 0x18bfecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 20));
    // 0x18bff0: 0x26440060  addiu       $a0, $s2, 0x60
    ctx->pc = 0x18bff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
    // 0x18bff4: 0xae350010  sw          $s5, 0x10($s1)
    ctx->pc = 0x18bff4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 21));
    // 0x18bff8: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x18bff8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x18bffc: 0xae400040  sw          $zero, 0x40($s2)
    ctx->pc = 0x18bffcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 0));
    // 0x18c000: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x18c000u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x18c004: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x18C004u;
    SET_GPR_U32(ctx, 31, 0x18C00Cu);
    ctx->pc = 0x18C008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C004u;
    // 0x18c008: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x18C004u, 0x18C00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C00Cu;
label_18c00c:
    // 0x18c00c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x18C00Cu;
    SET_GPR_U32(ctx, 31, 0x18C014u);
    ctx->pc = 0x18C010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C00Cu;
    // 0x18c010: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x18C00Cu, 0x18C014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C014u;
label_18c014:
    // 0x18c014: 0xae740018  sw          $s4, 0x18($s3)
    ctx->pc = 0x18c014u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 20));
    // 0x18c018: 0x24040090  addiu       $a0, $zero, 0x90
    ctx->pc = 0x18c018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x18c01c: 0xae750010  sw          $s5, 0x10($s3)
    ctx->pc = 0x18c01cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 21));
    // 0x18c020: 0xae600014  sw          $zero, 0x14($s3)
    ctx->pc = 0x18c020u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 0));
    // 0x18c024: 0xae400080  sw          $zero, 0x80($s2)
    ctx->pc = 0x18c024u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 0));
    // 0x18c028: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x18c028u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
    // 0x18c02c: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x18C02Cu;
    SET_GPR_U32(ctx, 31, 0x18C034u);
    ctx->pc = 0x18C030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C02Cu;
    // 0x18c030: 0xae600004  sw          $zero, 0x4($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x18C02Cu, 0x18C034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C034u;
label_18c034:
    // 0x18c034: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18c034u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c038: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x18c038u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c03c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18c03cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c040: 0xc061a32  jal         func_1868C8
    ctx->pc = 0x18C040u;
    SET_GPR_U32(ctx, 31, 0x18C048u);
    ctx->pc = 0x18C044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C040u;
    // 0x18c044: 0x26110030  addiu       $s1, $s0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1868C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1868C8u, 0x18C040u, 0x18C048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C048u;
label_18c048:
    // 0x18c048: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x18c048u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x18c04c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18c04cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c050: 0x24631050  addiu       $v1, $v1, 0x1050
    ctx->pc = 0x18c050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4176));
    // 0x18c054: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x18C054u;
    SET_GPR_U32(ctx, 31, 0x18C05Cu);
    ctx->pc = 0x18C058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C054u;
    // 0x18c058: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x18C054u, 0x18C05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C05Cu;
label_18c05c:
    // 0x18c05c: 0xae340018  sw          $s4, 0x18($s1)
    ctx->pc = 0x18c05cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 20));
    // 0x18c060: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x18c060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x18c064: 0xae350010  sw          $s5, 0x10($s1)
    ctx->pc = 0x18c064u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 21));
    // 0x18c068: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x18c068u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x18c06c: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x18c06cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x18c070: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x18c070u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x18c074: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x18C074u;
    SET_GPR_U32(ctx, 31, 0x18C07Cu);
    ctx->pc = 0x18C078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C074u;
    // 0x18c078: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x18C074u, 0x18C07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C07Cu;
label_18c07c:
    // 0x18c07c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x18C07Cu;
    SET_GPR_U32(ctx, 31, 0x18C084u);
    ctx->pc = 0x18C080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C07Cu;
    // 0x18c080: 0x26040060  addiu       $a0, $s0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x18C07Cu, 0x18C084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C084u;
label_18c084:
    // 0x18c084: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x18C084u;
    SET_GPR_U32(ctx, 31, 0x18C08Cu);
    ctx->pc = 0x18C088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C084u;
    // 0x18c088: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x18C084u, 0x18C08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C08Cu;
label_18c08c:
    // 0x18c08c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x18c08cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x18c090: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x18c090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x18c094: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x18c094u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x18c098: 0xae5000a4  sw          $s0, 0xA4($s2)
    ctx->pc = 0x18c098u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 164), GPR_U32(ctx, 16));
    // 0x18c09c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x18c09cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c0a0: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x18c0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
    // 0x18c0a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18c0a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18c0a8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x18c0a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x18c0ac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x18c0acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18c0b0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x18c0b0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18c0b4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x18c0b4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18c0b8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x18c0b8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x18c0bc: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x18c0bcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18c0c0: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x18c0c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x18c0c4: 0x3e00008  jr          $ra
    ctx->pc = 0x18C0C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18C0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C0C4u;
        // 0x18c0c8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C0C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18C0CCu;
    // 0x18c0cc: 0x0  nop
    ctx->pc = 0x18c0ccu;
    // NOP
    ctx->pc = 0x18c0d0u;
}
