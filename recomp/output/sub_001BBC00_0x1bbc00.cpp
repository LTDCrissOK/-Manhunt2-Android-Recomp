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

// Function: sub_001BBC00
// Address: 0x1bbc00 - 0x1bc100
void sub_001BBC00_0x1bbc00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BBC00_0x1bbc00");
#endif

    switch (ctx->pc) {
        case 0x1bbc60u: goto label_1bbc60;
        case 0x1bbc70u: goto label_1bbc70;
        case 0x1bbca0u: goto label_1bbca0;
        case 0x1bbcecu: goto label_1bbcec;
        case 0x1bbd10u: goto label_1bbd10;
        case 0x1bbd34u: goto label_1bbd34;
        case 0x1bbd58u: goto label_1bbd58;
        case 0x1bbd7cu: goto label_1bbd7c;
        case 0x1bbda0u: goto label_1bbda0;
        case 0x1bbdc4u: goto label_1bbdc4;
        case 0x1bbe18u: goto label_1bbe18;
        case 0x1bbe20u: goto label_1bbe20;
        case 0x1bbe30u: goto label_1bbe30;
        case 0x1bbe40u: goto label_1bbe40;
        case 0x1bbe48u: goto label_1bbe48;
        case 0x1bbe58u: goto label_1bbe58;
        case 0x1bbe68u: goto label_1bbe68;
        case 0x1bbe70u: goto label_1bbe70;
        case 0x1bbe80u: goto label_1bbe80;
        case 0x1bbebcu: goto label_1bbebc;
        case 0x1bbf88u: goto label_1bbf88;
        case 0x1bbfecu: goto label_1bbfec;
        case 0x1bc050u: goto label_1bc050;
        case 0x1bc0b4u: goto label_1bc0b4;
        default: break;
    }

    ctx->pc = 0x1bbc00u;

    // 0x1bbc00: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1bbc00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1bbc04: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1bbc04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1bbc08: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x1bbc08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
    // 0x1bbc0c: 0x244213c8  addiu       $v0, $v0, 0x13C8
    ctx->pc = 0x1bbc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5064));
    // 0x1bbc10: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x1bbc10u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbc14: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1bbc14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1bbc18: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1bbc18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x1bbc1c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1bbc1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1bbc20: 0x27d000d0  addiu       $s0, $fp, 0xD0
    ctx->pc = 0x1bbc20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 208));
    // 0x1bbc24: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x1bbc24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x1bbc28: 0x27d20110  addiu       $s2, $fp, 0x110
    ctx->pc = 0x1bbc28u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 30), 272));
    // 0x1bbc2c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1bbc2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1bbc30: 0x27d30150  addiu       $s3, $fp, 0x150
    ctx->pc = 0x1bbc30u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 30), 336));
    // 0x1bbc34: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x1bbc34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x1bbc38: 0x27d401e0  addiu       $s4, $fp, 0x1E0
    ctx->pc = 0x1bbc38u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 30), 480));
    // 0x1bbc3c: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x1bbc3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x1bbc40: 0x27d50170  addiu       $s5, $fp, 0x170
    ctx->pc = 0x1bbc40u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 30), 368));
    // 0x1bbc44: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x1bbc44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x1bbc48: 0x27d60130  addiu       $s6, $fp, 0x130
    ctx->pc = 0x1bbc48u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 30), 304));
    // 0x1bbc4c: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x1bbc4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x1bbc50: 0x27d701c0  addiu       $s7, $fp, 0x1C0
    ctx->pc = 0x1bbc50u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 30), 448));
    // 0x1bbc54: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x1bbc54u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1bbc58: 0xc070db0  jal         func_1C36C0
    ctx->pc = 0x1BBC58u;
    SET_GPR_U32(ctx, 31, 0x1BBC60u);
    ctx->pc = 0x1BBC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBC58u;
    // 0x1bbc5c: 0xafc20394  sw          $v0, 0x394($fp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 30), 916), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C36C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C36C0u, 0x1BBC58u, 0x1BBC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBC60u;
label_1bbc60:
    // 0x1bbc60: 0x27c200f0  addiu       $v0, $fp, 0xF0
    ctx->pc = 0x1bbc60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 240));
    // 0x1bbc64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bbc64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbc68: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1BBC68u;
    SET_GPR_U32(ctx, 31, 0x1BBC70u);
    ctx->pc = 0x1BBC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBC68u;
    // 0x1bbc6c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1BBC68u, 0x1BBC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBC70u;
label_1bbc70:
    // 0x1bbc70: 0x3c110043  lui         $s1, 0x43
    ctx->pc = 0x1bbc70u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)67 << 16));
    // 0x1bbc74: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1bbc74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1bbc78: 0x26310f90  addiu       $s1, $s1, 0xF90
    ctx->pc = 0x1bbc78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3984));
    // 0x1bbc7c: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x1bbc7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x1bbc80: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1bbc80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x1bbc84: 0xae110018  sw          $s1, 0x18($s0)
    ctx->pc = 0x1bbc84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 17));
    // 0x1bbc88: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1bbc88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bbc8c: 0xafc000d0  sw          $zero, 0xD0($fp)
    ctx->pc = 0x1bbc8cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 208), GPR_U32(ctx, 0));
    // 0x1bbc90: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1bbc90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1bbc94: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1bbc94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1bbc98: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1BBC98u;
    SET_GPR_U32(ctx, 31, 0x1BBCA0u);
    ctx->pc = 0x1BBC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBC98u;
    // 0x1bbc9c: 0x27d00190  addiu       $s0, $fp, 0x190 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1BBC98u, 0x1BBCA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBCA0u;
label_1bbca0:
    // 0x1bbca0: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1bbca0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bbca4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1bbca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1bbca8: 0x27c30210  addiu       $v1, $fp, 0x210
    ctx->pc = 0x1bbca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 528));
    // 0x1bbcac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bbcacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbcb0: 0xaca20010  sw          $v0, 0x10($a1)
    ctx->pc = 0x1bbcb0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
    // 0x1bbcb4: 0xacb10018  sw          $s1, 0x18($a1)
    ctx->pc = 0x1bbcb4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 17));
    // 0x1bbcb8: 0x27c202b0  addiu       $v0, $fp, 0x2B0
    ctx->pc = 0x1bbcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 688));
    // 0x1bbcbc: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x1bbcbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x1bbcc0: 0xaca00014  sw          $zero, 0x14($a1)
    ctx->pc = 0x1bbcc0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 0));
    // 0x1bbcc4: 0x27c50260  addiu       $a1, $fp, 0x260
    ctx->pc = 0x1bbcc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 608));
    // 0x1bbcc8: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x1bbcc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x1bbccc: 0xafc000f0  sw          $zero, 0xF0($fp)
    ctx->pc = 0x1bbcccu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 240), GPR_U32(ctx, 0));
    // 0x1bbcd0: 0x27c50310  addiu       $a1, $fp, 0x310
    ctx->pc = 0x1bbcd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 784));
    // 0x1bbcd4: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x1bbcd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    // 0x1bbcd8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1bbcd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bbcdc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1bbcdcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1bbce0: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x1bbce0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x1bbce4: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1BBCE4u;
    SET_GPR_U32(ctx, 31, 0x1BBCECu);
    ctx->pc = 0x1BBCE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBCE4u;
    // 0x1bbce8: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1BBCE4u, 0x1BBCECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBCECu;
label_1bbcec:
    // 0x1bbcec: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1bbcecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1bbcf0: 0xae510018  sw          $s1, 0x18($s2)
    ctx->pc = 0x1bbcf0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 17));
    // 0x1bbcf4: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x1bbcf4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
    // 0x1bbcf8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1bbcf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbcfc: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x1bbcfcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
    // 0x1bbd00: 0xafc00110  sw          $zero, 0x110($fp)
    ctx->pc = 0x1bbd00u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 272), GPR_U32(ctx, 0));
    // 0x1bbd04: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x1bbd04u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x1bbd08: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1BBD08u;
    SET_GPR_U32(ctx, 31, 0x1BBD10u);
    ctx->pc = 0x1BBD0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBD08u;
    // 0x1bbd0c: 0xae400008  sw          $zero, 0x8($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1BBD08u, 0x1BBD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBD10u;
label_1bbd10:
    // 0x1bbd10: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1bbd10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1bbd14: 0xaed10018  sw          $s1, 0x18($s6)
    ctx->pc = 0x1bbd14u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 24), GPR_U32(ctx, 17));
    // 0x1bbd18: 0xaec30010  sw          $v1, 0x10($s6)
    ctx->pc = 0x1bbd18u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 16), GPR_U32(ctx, 3));
    // 0x1bbd1c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1bbd1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbd20: 0xaec00014  sw          $zero, 0x14($s6)
    ctx->pc = 0x1bbd20u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 20), GPR_U32(ctx, 0));
    // 0x1bbd24: 0xafc00130  sw          $zero, 0x130($fp)
    ctx->pc = 0x1bbd24u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 304), GPR_U32(ctx, 0));
    // 0x1bbd28: 0xaec00004  sw          $zero, 0x4($s6)
    ctx->pc = 0x1bbd28u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 0));
    // 0x1bbd2c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1BBD2Cu;
    SET_GPR_U32(ctx, 31, 0x1BBD34u);
    ctx->pc = 0x1BBD30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBD2Cu;
    // 0x1bbd30: 0xaec00008  sw          $zero, 0x8($s6) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1BBD2Cu, 0x1BBD34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBD34u;
label_1bbd34:
    // 0x1bbd34: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1bbd34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1bbd38: 0xae710018  sw          $s1, 0x18($s3)
    ctx->pc = 0x1bbd38u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 17));
    // 0x1bbd3c: 0xae650010  sw          $a1, 0x10($s3)
    ctx->pc = 0x1bbd3cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 5));
    // 0x1bbd40: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1bbd40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbd44: 0xae600014  sw          $zero, 0x14($s3)
    ctx->pc = 0x1bbd44u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 0));
    // 0x1bbd48: 0xafc00150  sw          $zero, 0x150($fp)
    ctx->pc = 0x1bbd48u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 336), GPR_U32(ctx, 0));
    // 0x1bbd4c: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x1bbd4cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
    // 0x1bbd50: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1BBD50u;
    SET_GPR_U32(ctx, 31, 0x1BBD58u);
    ctx->pc = 0x1BBD54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBD50u;
    // 0x1bbd54: 0xae600004  sw          $zero, 0x4($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1BBD50u, 0x1BBD58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBD58u;
label_1bbd58:
    // 0x1bbd58: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1bbd58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1bbd5c: 0xaeb10018  sw          $s1, 0x18($s5)
    ctx->pc = 0x1bbd5cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 24), GPR_U32(ctx, 17));
    // 0x1bbd60: 0xaea20010  sw          $v0, 0x10($s5)
    ctx->pc = 0x1bbd60u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 2));
    // 0x1bbd64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bbd64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbd68: 0xaea00014  sw          $zero, 0x14($s5)
    ctx->pc = 0x1bbd68u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 0));
    // 0x1bbd6c: 0xafc00170  sw          $zero, 0x170($fp)
    ctx->pc = 0x1bbd6cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 368), GPR_U32(ctx, 0));
    // 0x1bbd70: 0xaea00008  sw          $zero, 0x8($s5)
    ctx->pc = 0x1bbd70u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 0));
    // 0x1bbd74: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1BBD74u;
    SET_GPR_U32(ctx, 31, 0x1BBD7Cu);
    ctx->pc = 0x1BBD78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBD74u;
    // 0x1bbd78: 0xaea00004  sw          $zero, 0x4($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1BBD74u, 0x1BBD7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBD7Cu;
label_1bbd7c:
    // 0x1bbd7c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1bbd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1bbd80: 0xae110018  sw          $s1, 0x18($s0)
    ctx->pc = 0x1bbd80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 17));
    // 0x1bbd84: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x1bbd84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x1bbd88: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1bbd88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbd8c: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1bbd8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x1bbd90: 0xafc00190  sw          $zero, 0x190($fp)
    ctx->pc = 0x1bbd90u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 400), GPR_U32(ctx, 0));
    // 0x1bbd94: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1bbd94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1bbd98: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1BBD98u;
    SET_GPR_U32(ctx, 31, 0x1BBDA0u);
    ctx->pc = 0x1BBD9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBD98u;
    // 0x1bbd9c: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1BBD98u, 0x1BBDA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBDA0u;
label_1bbda0:
    // 0x1bbda0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1bbda0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1bbda4: 0xaef10018  sw          $s1, 0x18($s7)
    ctx->pc = 0x1bbda4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 24), GPR_U32(ctx, 17));
    // 0x1bbda8: 0xaee50010  sw          $a1, 0x10($s7)
    ctx->pc = 0x1bbda8u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 16), GPR_U32(ctx, 5));
    // 0x1bbdac: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1bbdacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbdb0: 0xaee00014  sw          $zero, 0x14($s7)
    ctx->pc = 0x1bbdb0u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 20), GPR_U32(ctx, 0));
    // 0x1bbdb4: 0xafc001c0  sw          $zero, 0x1C0($fp)
    ctx->pc = 0x1bbdb4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 448), GPR_U32(ctx, 0));
    // 0x1bbdb8: 0xaee00008  sw          $zero, 0x8($s7)
    ctx->pc = 0x1bbdb8u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 8), GPR_U32(ctx, 0));
    // 0x1bbdbc: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1BBDBCu;
    SET_GPR_U32(ctx, 31, 0x1BBDC4u);
    ctx->pc = 0x1BBDC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBDBCu;
    // 0x1bbdc0: 0xaee00004  sw          $zero, 0x4($s7) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 23), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1BBDBCu, 0x1BBDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBDC4u;
label_1bbdc4:
    // 0x1bbdc4: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1bbdc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1bbdc8: 0xae910018  sw          $s1, 0x18($s4)
    ctx->pc = 0x1bbdc8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 17));
    // 0x1bbdcc: 0xae830010  sw          $v1, 0x10($s4)
    ctx->pc = 0x1bbdccu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 3));
    // 0x1bbdd0: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1bbdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1bbdd4: 0xae800014  sw          $zero, 0x14($s4)
    ctx->pc = 0x1bbdd4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 0));
    // 0x1bbdd8: 0x24421408  addiu       $v0, $v0, 0x1408
    ctx->pc = 0x1bbdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5128));
    // 0x1bbddc: 0xafc001e0  sw          $zero, 0x1E0($fp)
    ctx->pc = 0x1bbddcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 480), GPR_U32(ctx, 0));
    // 0x1bbde0: 0x27c30200  addiu       $v1, $fp, 0x200
    ctx->pc = 0x1bbde0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 512));
    // 0x1bbde4: 0xae820018  sw          $v0, 0x18($s4)
    ctx->pc = 0x1bbde4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 2));
    // 0x1bbde8: 0x3c100043  lui         $s0, 0x43
    ctx->pc = 0x1bbde8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)67 << 16));
    // 0x1bbdec: 0xae800004  sw          $zero, 0x4($s4)
    ctx->pc = 0x1bbdecu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
    // 0x1bbdf0: 0x26101380  addiu       $s0, $s0, 0x1380
    ctx->pc = 0x1bbdf0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4992));
    // 0x1bbdf4: 0xae800008  sw          $zero, 0x8($s4)
    ctx->pc = 0x1bbdf4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 0));
    // 0x1bbdf8: 0x27c40220  addiu       $a0, $fp, 0x220
    ctx->pc = 0x1bbdf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 544));
    // 0x1bbdfc: 0xafc00200  sw          $zero, 0x200($fp)
    ctx->pc = 0x1bbdfcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 512), GPR_U32(ctx, 0));
    // 0x1bbe00: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x1bbe00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x1bbe04: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1bbe04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1bbe08: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x1bbe08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x1bbe0c: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x1bbe0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1bbe10: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1BBE10u;
    SET_GPR_U32(ctx, 31, 0x1BBE18u);
    ctx->pc = 0x1BBE14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBE10u;
    // 0x1bbe14: 0xacb00044  sw          $s0, 0x44($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 68), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1BBE10u, 0x1BBE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBE18u;
label_1bbe18:
    // 0x1bbe18: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1BBE18u;
    SET_GPR_U32(ctx, 31, 0x1BBE20u);
    ctx->pc = 0x1BBE1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBE18u;
    // 0x1bbe1c: 0x27c40230  addiu       $a0, $fp, 0x230 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1BBE18u, 0x1BBE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBE20u;
label_1bbe20:
    // 0x1bbe20: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x1bbe20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1bbe24: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x1bbe24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbe28: 0xc06fc2a  jal         func_1BF0A8
    ctx->pc = 0x1BBE28u;
    SET_GPR_U32(ctx, 31, 0x1BBE30u);
    ctx->pc = 0x1BBE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBE28u;
    // 0x1bbe2c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF0A8u, 0x1BBE28u, 0x1BBE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBE30u;
label_1bbe30:
    // 0x1bbe30: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1bbe30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bbe34: 0x27c40270  addiu       $a0, $fp, 0x270
    ctx->pc = 0x1bbe34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 624));
    // 0x1bbe38: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1BBE38u;
    SET_GPR_U32(ctx, 31, 0x1BBE40u);
    ctx->pc = 0x1BBE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBE38u;
    // 0x1bbe3c: 0xac500044  sw          $s0, 0x44($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1BBE38u, 0x1BBE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBE40u;
label_1bbe40:
    // 0x1bbe40: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1BBE40u;
    SET_GPR_U32(ctx, 31, 0x1BBE48u);
    ctx->pc = 0x1BBE44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBE40u;
    // 0x1bbe44: 0x27c40280  addiu       $a0, $fp, 0x280 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1BBE40u, 0x1BBE48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBE48u;
label_1bbe48:
    // 0x1bbe48: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x1bbe48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bbe4c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1bbe4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbe50: 0xc06fc2a  jal         func_1BF0A8
    ctx->pc = 0x1BBE50u;
    SET_GPR_U32(ctx, 31, 0x1BBE58u);
    ctx->pc = 0x1BBE54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBE50u;
    // 0x1bbe54: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF0A8u, 0x1BBE50u, 0x1BBE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBE58u;
label_1bbe58:
    // 0x1bbe58: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x1bbe58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1bbe5c: 0x27c402c0  addiu       $a0, $fp, 0x2C0
    ctx->pc = 0x1bbe5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 704));
    // 0x1bbe60: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1BBE60u;
    SET_GPR_U32(ctx, 31, 0x1BBE68u);
    ctx->pc = 0x1BBE64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBE60u;
    // 0x1bbe64: 0xac700044  sw          $s0, 0x44($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1BBE60u, 0x1BBE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBE68u;
label_1bbe68:
    // 0x1bbe68: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1BBE68u;
    SET_GPR_U32(ctx, 31, 0x1BBE70u);
    ctx->pc = 0x1BBE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBE68u;
    // 0x1bbe6c: 0x27c402d0  addiu       $a0, $fp, 0x2D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1BBE68u, 0x1BBE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBE70u;
label_1bbe70:
    // 0x1bbe70: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x1bbe70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1bbe74: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1bbe74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbe78: 0xc06fc2a  jal         func_1BF0A8
    ctx->pc = 0x1BBE78u;
    SET_GPR_U32(ctx, 31, 0x1BBE80u);
    ctx->pc = 0x1BBE7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBE78u;
    // 0x1bbe7c: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF0A8u, 0x1BBE78u, 0x1BBE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBE80u;
label_1bbe80:
    // 0x1bbe80: 0xafc00300  sw          $zero, 0x300($fp)
    ctx->pc = 0x1bbe80u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 768), GPR_U32(ctx, 0));
    // 0x1bbe84: 0x27c20300  addiu       $v0, $fp, 0x300
    ctx->pc = 0x1bbe84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 768));
    // 0x1bbe88: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1bbe88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x1bbe8c: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x1bbe8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x1bbe90: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1bbe90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1bbe94: 0x246302d8  addiu       $v1, $v1, 0x2D8
    ctx->pc = 0x1bbe94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 728));
    // 0x1bbe98: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1bbe98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x1bbe9c: 0x27c40328  addiu       $a0, $fp, 0x328
    ctx->pc = 0x1bbe9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 808));
    // 0x1bbea0: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x1bbea0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bbea4: 0xaca30024  sw          $v1, 0x24($a1)
    ctx->pc = 0x1bbea4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 3));
    // 0x1bbea8: 0xafc00310  sw          $zero, 0x310($fp)
    ctx->pc = 0x1bbea8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 784), GPR_U32(ctx, 0));
    // 0x1bbeac: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x1bbeacu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x1bbeb0: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x1bbeb0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x1bbeb4: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x1BBEB4u;
    SET_GPR_U32(ctx, 31, 0x1BBEBCu);
    ctx->pc = 0x1BBEB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBEB4u;
    // 0x1bbeb8: 0xaca0000c  sw          $zero, 0xC($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x1BBEB4u, 0x1BBEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBEBCu;
label_1bbebc:
    // 0x1bbebc: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x1bbebcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bbec0: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x1bbec0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x1bbec4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bbec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bbec8: 0xc462c684  lwc1        $f2, -0x397C($v1)
    ctx->pc = 0x1bbec8u;
    { uint32_t bits = FAST_READ32(0x45C684u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1bbecc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1bbeccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1bbed0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1bbed0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bbed4: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1bbed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1bbed8: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x1bbed8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x1bbedc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1bbedcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1bbee0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bbee0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bbee4: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1bbee4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1bbee8: 0xaca00020  sw          $zero, 0x20($a1)
    ctx->pc = 0x1bbee8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 0));
    // 0x1bbeec: 0xaca00014  sw          $zero, 0x14($a1)
    ctx->pc = 0x1bbeecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 0));
    // 0x1bbef0: 0xaca20010  sw          $v0, 0x10($a1)
    ctx->pc = 0x1bbef0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
    // 0x1bbef4: 0xe7c2033c  swc1        $f2, 0x33C($fp)
    ctx->pc = 0x1bbef4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 828), bits); }
    // 0x1bbef8: 0xe7c1034c  swc1        $f1, 0x34C($fp)
    ctx->pc = 0x1bbef8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 844), bits); }
    // 0x1bbefc: 0xe7c00350  swc1        $f0, 0x350($fp)
    ctx->pc = 0x1bbefcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 848), bits); }
    // 0x1bbf00: 0xafc20360  sw          $v0, 0x360($fp)
    ctx->pc = 0x1bbf00u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 864), GPR_U32(ctx, 2));
    // 0x1bbf04: 0xa7c40390  sh          $a0, 0x390($fp)
    ctx->pc = 0x1bbf04u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 912), (uint16_t)GPR_U32(ctx, 4));
    // 0x1bbf08: 0xafc00338  sw          $zero, 0x338($fp)
    ctx->pc = 0x1bbf08u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 824), GPR_U32(ctx, 0));
    // 0x1bbf0c: 0xafc00348  sw          $zero, 0x348($fp)
    ctx->pc = 0x1bbf0cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 840), GPR_U32(ctx, 0));
    // 0x1bbf10: 0xafc00358  sw          $zero, 0x358($fp)
    ctx->pc = 0x1bbf10u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 856), GPR_U32(ctx, 0));
    // 0x1bbf14: 0xafc2035c  sw          $v0, 0x35C($fp)
    ctx->pc = 0x1bbf14u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 860), GPR_U32(ctx, 2));
    // 0x1bbf18: 0xafc00364  sw          $zero, 0x364($fp)
    ctx->pc = 0x1bbf18u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 868), GPR_U32(ctx, 0));
    // 0x1bbf1c: 0xafc00388  sw          $zero, 0x388($fp)
    ctx->pc = 0x1bbf1cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 904), GPR_U32(ctx, 0));
    // 0x1bbf20: 0xafc0038c  sw          $zero, 0x38C($fp)
    ctx->pc = 0x1bbf20u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 908), GPR_U32(ctx, 0));
    // 0x1bbf24: 0xa3c00392  sb          $zero, 0x392($fp)
    ctx->pc = 0x1bbf24u;
    WRITE8(ADD32(GPR_U32(ctx, 30), 914), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bbf28: 0x8c622b00  lw          $v0, 0x2B00($v1)
    ctx->pc = 0x1bbf28u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B00u));
    // 0x1bbf2c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BBF2Cu;
    {
        const bool branch_taken_0x1bbf2c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1BBF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBF2Cu;
        // 0x1bbf30: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbf2c) {
            ctx->pc = 0x1BBF48u;
            goto label_1bbf48;
        }
    }
    ctx->pc = 0x1BBF34u;
    // 0x1bbf34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bbf34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bbf38: 0x0  nop
    ctx->pc = 0x1bbf38u;
    // NOP
    // 0x1bbf3c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1bbf3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1bbf40: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1BBF40u;
    {
        const bool branch_taken_0x1bbf40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bbf40) {
            ctx->pc = 0x1BBF64u;
            goto label_1bbf64;
        }
    }
    ctx->pc = 0x1BBF48u;
label_1bbf48:
    // 0x1bbf48: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1bbf48u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1bbf4c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1bbf4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1bbf50: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1bbf50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1bbf54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bbf54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bbf58: 0x0  nop
    ctx->pc = 0x1bbf58u;
    // NOP
    // 0x1bbf5c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1bbf5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1bbf60: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1bbf60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1bbf64:
    // 0x1bbf64: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1bbf64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1bbf68: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1bbf68u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1bbf6c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1bbf6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1bbf70: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1bbf70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bbf74: 0x3c013e9e  lui         $at, 0x3E9E
    ctx->pc = 0x1bbf74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16030 << 16));
    // 0x1bbf78: 0x3421b852  ori         $at, $at, 0xB852
    ctx->pc = 0x1bbf78u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47186);
    // 0x1bbf7c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1bbf7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1bbf80: 0xc0b12b0  jal         func_2C4AC0
    ctx->pc = 0x1BBF80u;
    SET_GPR_U32(ctx, 31, 0x1BBF88u);
    ctx->pc = 0x1BBF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBF80u;
    // 0x1bbf84: 0x46140502  mul.s       $f20, $f0, $f20 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4AC0u, 0x1BBF80u, 0x1BBF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBF88u;
label_1bbf88:
    // 0x1bbf88: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x1bbf88u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x1bbf8c: 0xe7d40368  swc1        $f20, 0x368($fp)
    ctx->pc = 0x1bbf8cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 872), bits); }
    // 0x1bbf90: 0x8e022b00  lw          $v0, 0x2B00($s0)
    ctx->pc = 0x1bbf90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11008)));
    // 0x1bbf94: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BBF94u;
    {
        const bool branch_taken_0x1bbf94 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1BBF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBF94u;
        // 0x1bbf98: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbf94) {
            ctx->pc = 0x1BBFB0u;
            goto label_1bbfb0;
        }
    }
    ctx->pc = 0x1BBF9Cu;
    // 0x1bbf9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bbf9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bbfa0: 0x0  nop
    ctx->pc = 0x1bbfa0u;
    // NOP
    // 0x1bbfa4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1bbfa4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1bbfa8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1BBFA8u;
    {
        const bool branch_taken_0x1bbfa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bbfa8) {
            ctx->pc = 0x1BBFC8u;
            goto label_1bbfc8;
        }
    }
    ctx->pc = 0x1BBFB0u;
label_1bbfb0:
    // 0x1bbfb0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1bbfb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1bbfb4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1bbfb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1bbfb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bbfb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bbfbc: 0x0  nop
    ctx->pc = 0x1bbfbcu;
    // NOP
    // 0x1bbfc0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1bbfc0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1bbfc4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1bbfc4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1bbfc8:
    // 0x1bbfc8: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1bbfc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1bbfcc: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1bbfccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1bbfd0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1bbfd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1bbfd4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1bbfd4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bbfd8: 0x3c013f38  lui         $at, 0x3F38
    ctx->pc = 0x1bbfd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16184 << 16));
    // 0x1bbfdc: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x1bbfdcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
    // 0x1bbfe0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1bbfe0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1bbfe4: 0xc0b12b0  jal         func_2C4AC0
    ctx->pc = 0x1BBFE4u;
    SET_GPR_U32(ctx, 31, 0x1BBFECu);
    ctx->pc = 0x1BBFE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBFE4u;
    // 0x1bbfe8: 0x46140502  mul.s       $f20, $f0, $f20 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4AC0u, 0x1BBFE4u, 0x1BBFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBFECu;
label_1bbfec:
    // 0x1bbfec: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x1bbfecu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x1bbff0: 0xe7d4036c  swc1        $f20, 0x36C($fp)
    ctx->pc = 0x1bbff0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 876), bits); }
    // 0x1bbff4: 0x8e022b00  lw          $v0, 0x2B00($s0)
    ctx->pc = 0x1bbff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11008)));
    // 0x1bbff8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BBFF8u;
    {
        const bool branch_taken_0x1bbff8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1BBFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBFF8u;
        // 0x1bbffc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbff8) {
            ctx->pc = 0x1BC014u;
            goto label_1bc014;
        }
    }
    ctx->pc = 0x1BC000u;
    // 0x1bc000: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bc000u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bc004: 0x0  nop
    ctx->pc = 0x1bc004u;
    // NOP
    // 0x1bc008: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1bc008u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1bc00c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1BC00Cu;
    {
        const bool branch_taken_0x1bc00c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc00c) {
            ctx->pc = 0x1BC02Cu;
            goto label_1bc02c;
        }
    }
    ctx->pc = 0x1BC014u;
label_1bc014:
    // 0x1bc014: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1bc014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1bc018: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1bc018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1bc01c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bc01cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bc020: 0x0  nop
    ctx->pc = 0x1bc020u;
    // NOP
    // 0x1bc024: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1bc024u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1bc028: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1bc028u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1bc02c:
    // 0x1bc02c: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1bc02cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1bc030: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1bc030u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1bc034: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1bc034u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1bc038: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1bc038u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bc03c: 0x3c013f21  lui         $at, 0x3F21
    ctx->pc = 0x1bc03cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16161 << 16));
    // 0x1bc040: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x1bc040u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
    // 0x1bc044: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1bc044u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1bc048: 0xc0b12b0  jal         func_2C4AC0
    ctx->pc = 0x1BC048u;
    SET_GPR_U32(ctx, 31, 0x1BC050u);
    ctx->pc = 0x1BC04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC048u;
    // 0x1bc04c: 0x46140502  mul.s       $f20, $f0, $f20 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4AC0u, 0x1BC048u, 0x1BC050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC050u;
label_1bc050:
    // 0x1bc050: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x1bc050u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x1bc054: 0xe7d40374  swc1        $f20, 0x374($fp)
    ctx->pc = 0x1bc054u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 884), bits); }
    // 0x1bc058: 0x8e022b00  lw          $v0, 0x2B00($s0)
    ctx->pc = 0x1bc058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11008)));
    // 0x1bc05c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BC05Cu;
    {
        const bool branch_taken_0x1bc05c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1BC060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC05Cu;
        // 0x1bc060: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc05c) {
            ctx->pc = 0x1BC078u;
            goto label_1bc078;
        }
    }
    ctx->pc = 0x1BC064u;
    // 0x1bc064: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bc064u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bc068: 0x0  nop
    ctx->pc = 0x1bc068u;
    // NOP
    // 0x1bc06c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1bc06cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1bc070: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1BC070u;
    {
        const bool branch_taken_0x1bc070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc070) {
            ctx->pc = 0x1BC090u;
            goto label_1bc090;
        }
    }
    ctx->pc = 0x1BC078u;
label_1bc078:
    // 0x1bc078: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1bc078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1bc07c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1bc07cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1bc080: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bc080u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bc084: 0x0  nop
    ctx->pc = 0x1bc084u;
    // NOP
    // 0x1bc088: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1bc088u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1bc08c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1bc08cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1bc090:
    // 0x1bc090: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1bc090u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1bc094: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1bc094u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1bc098: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1bc098u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1bc09c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1bc09cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bc0a0: 0x3c013df5  lui         $at, 0x3DF5
    ctx->pc = 0x1bc0a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15861 << 16));
    // 0x1bc0a4: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1bc0a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x1bc0a8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1bc0a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1bc0ac: 0xc0b12b0  jal         func_2C4AC0
    ctx->pc = 0x1BC0ACu;
    SET_GPR_U32(ctx, 31, 0x1BC0B4u);
    ctx->pc = 0x1BC0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC0ACu;
    // 0x1bc0b0: 0x46140502  mul.s       $f20, $f0, $f20 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4AC0u, 0x1BC0ACu, 0x1BC0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC0B4u;
label_1bc0b4:
    // 0x1bc0b4: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x1bc0b4u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x1bc0b8: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x1bc0b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc0bc: 0xafc00370  sw          $zero, 0x370($fp)
    ctx->pc = 0x1bc0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 880), GPR_U32(ctx, 0));
    // 0x1bc0c0: 0xafc00378  sw          $zero, 0x378($fp)
    ctx->pc = 0x1bc0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 888), GPR_U32(ctx, 0));
    // 0x1bc0c4: 0xe7d4037c  swc1        $f20, 0x37C($fp)
    ctx->pc = 0x1bc0c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 892), bits); }
    // 0x1bc0c8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1bc0c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bc0cc: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1bc0ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1bc0d0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1bc0d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bc0d4: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x1bc0d4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bc0d8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1bc0d8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bc0dc: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x1bc0dcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1bc0e0: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x1bc0e0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1bc0e4: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x1bc0e4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bc0e8: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x1bc0e8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1bc0ec: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x1bc0ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bc0f0: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x1bc0f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1bc0f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1BC0F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BC0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC0F4u;
        // 0x1bc0f8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BC0F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BC0FCu;
    // 0x1bc0fc: 0x0  nop
    ctx->pc = 0x1bc0fcu;
    // NOP
    ctx->pc = 0x1bc100u;
}
