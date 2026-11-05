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

// Function: sub_00282B00
// Address: 0x282b00 - 0x283078
void sub_00282B00_0x282b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00282B00_0x282b00");
#endif

    switch (ctx->pc) {
        case 0x282ba8u: goto label_282ba8;
        case 0x282bd4u: goto label_282bd4;
        case 0x282c18u: goto label_282c18;
        case 0x282c48u: goto label_282c48;
        case 0x282c78u: goto label_282c78;
        case 0x282cb4u: goto label_282cb4;
        case 0x282cd8u: goto label_282cd8;
        case 0x282ce0u: goto label_282ce0;
        case 0x282cf4u: goto label_282cf4;
        case 0x282d00u: goto label_282d00;
        case 0x282d1cu: goto label_282d1c;
        case 0x282d30u: goto label_282d30;
        case 0x282d88u: goto label_282d88;
        case 0x282de0u: goto label_282de0;
        case 0x282e34u: goto label_282e34;
        case 0x282e9cu: goto label_282e9c;
        case 0x282f54u: goto label_282f54;
        case 0x282fa4u: goto label_282fa4;
        case 0x282fb4u: goto label_282fb4;
        case 0x283010u: goto label_283010;
        default: break;
    }

    ctx->pc = 0x282b00u;

    // 0x282b00: 0x27bdfd30  addiu       $sp, $sp, -0x2D0
    ctx->pc = 0x282b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966576));
    // 0x282b04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x282b04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282b08: 0xffb10228  sd          $s1, 0x228($sp)
    ctx->pc = 0x282b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 552), GPR_U64(ctx, 17));
    // 0x282b0c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x282b0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x282b10: 0xffb30238  sd          $s3, 0x238($sp)
    ctx->pc = 0x282b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 568), GPR_U64(ctx, 19));
    // 0x282b14: 0x27b10200  addiu       $s1, $sp, 0x200
    ctx->pc = 0x282b14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x282b18: 0xe7bd02b8  swc1        $f29, 0x2B8($sp)
    ctx->pc = 0x282b18u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 696), bits); }
    // 0x282b1c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x282b1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282b20: 0xe7bc02b0  swc1        $f28, 0x2B0($sp)
    ctx->pc = 0x282b20u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 688), bits); }
    // 0x282b24: 0x46008746  mov.s       $f29, $f16
    ctx->pc = 0x282b24u;
    ctx->f[29] = FPU_MOV_S(ctx->f[16]);
    // 0x282b28: 0xe7bb02a8  swc1        $f27, 0x2A8($sp)
    ctx->pc = 0x282b28u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 680), bits); }
    // 0x282b2c: 0x46006f06  mov.s       $f28, $f13
    ctx->pc = 0x282b2cu;
    ctx->f[28] = FPU_MOV_S(ctx->f[13]);
    // 0x282b30: 0xe7b90298  swc1        $f25, 0x298($sp)
    ctx->pc = 0x282b30u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 664), bits); }
    // 0x282b34: 0x46007ec6  mov.s       $f27, $f15
    ctx->pc = 0x282b34u;
    ctx->f[27] = FPU_MOV_S(ctx->f[15]);
    // 0x282b38: 0xe7b70288  swc1        $f23, 0x288($sp)
    ctx->pc = 0x282b38u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 648), bits); }
    // 0x282b3c: 0x46007646  mov.s       $f25, $f14
    ctx->pc = 0x282b3cu;
    ctx->f[25] = FPU_MOV_S(ctx->f[14]);
    // 0x282b40: 0xe7b40270  swc1        $f20, 0x270($sp)
    ctx->pc = 0x282b40u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 624), bits); }
    // 0x282b44: 0x460065c6  mov.s       $f23, $f12
    ctx->pc = 0x282b44u;
    ctx->f[23] = FPU_MOV_S(ctx->f[12]);
    // 0x282b48: 0xffb00220  sd          $s0, 0x220($sp)
    ctx->pc = 0x282b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 544), GPR_U64(ctx, 16));
    // 0x282b4c: 0x46009506  mov.s       $f20, $f18
    ctx->pc = 0x282b4cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[18]);
    // 0x282b50: 0xffb20230  sd          $s2, 0x230($sp)
    ctx->pc = 0x282b50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 560), GPR_U64(ctx, 18));
    // 0x282b54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x282b54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282b58: 0xffb40240  sd          $s4, 0x240($sp)
    ctx->pc = 0x282b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 576), GPR_U64(ctx, 20));
    // 0x282b5c: 0x3c10006c  lui         $s0, 0x6C
    ctx->pc = 0x282b5cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)108 << 16));
    // 0x282b60: 0xffb50248  sd          $s5, 0x248($sp)
    ctx->pc = 0x282b60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 584), GPR_U64(ctx, 21));
    // 0x282b64: 0x241403e8  addiu       $s4, $zero, 0x3E8
    ctx->pc = 0x282b64u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x282b68: 0xffb60250  sd          $s6, 0x250($sp)
    ctx->pc = 0x282b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 592), GPR_U64(ctx, 22));
    // 0x282b6c: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x282b6cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x282b70: 0xffb70258  sd          $s7, 0x258($sp)
    ctx->pc = 0x282b70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 600), GPR_U64(ctx, 23));
    // 0x282b74: 0x200b02d  daddu       $s6, $s0, $zero
    ctx->pc = 0x282b74u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282b78: 0xffbe0260  sd          $fp, 0x260($sp)
    ctx->pc = 0x282b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 608), GPR_U64(ctx, 30));
    // 0x282b7c: 0x2610b768  addiu       $s0, $s0, -0x4898
    ctx->pc = 0x282b7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294948712));
    // 0x282b80: 0xe7bf02c8  swc1        $f31, 0x2C8($sp)
    ctx->pc = 0x282b80u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 712), bits); }
    // 0x282b84: 0xe7be02c0  swc1        $f30, 0x2C0($sp)
    ctx->pc = 0x282b84u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 704), bits); }
    // 0x282b88: 0xe7ba02a0  swc1        $f26, 0x2A0($sp)
    ctx->pc = 0x282b88u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 672), bits); }
    // 0x282b8c: 0xe7b80290  swc1        $f24, 0x290($sp)
    ctx->pc = 0x282b8cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 656), bits); }
    // 0x282b90: 0xe7b60280  swc1        $f22, 0x280($sp)
    ctx->pc = 0x282b90u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 640), bits); }
    // 0x282b94: 0xe7b50278  swc1        $f21, 0x278($sp)
    ctx->pc = 0x282b94u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 632), bits); }
    // 0x282b98: 0xe7b10210  swc1        $f17, 0x210($sp)
    ctx->pc = 0x282b98u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 528), bits); }
    // 0x282b9c: 0xffbf0268  sd          $ra, 0x268($sp)
    ctx->pc = 0x282b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 616), GPR_U64(ctx, 31));
    // 0x282ba0: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x282BA0u;
    SET_GPR_U32(ctx, 31, 0x282BA8u);
    ctx->pc = 0x282BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282BA0u;
    // 0x282ba4: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x282BA0u, 0x282BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282BA8u;
label_282ba8:
    // 0x282ba8: 0x3c013ba3  lui         $at, 0x3BA3
    ctx->pc = 0x282ba8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15267 << 16));
    // 0x282bac: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x282bacu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x282bb0: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x282bb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x282bb4: 0x4614e500  add.s       $f20, $f28, $f20
    ctx->pc = 0x282bb4u;
    ctx->f[20] = FPU_ADD_S(ctx->f[28], ctx->f[20]);
    // 0x282bb8: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x282bb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
    // 0x282bbc: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x282bbcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x282bc0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x282bc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x282bc4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x282bc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282bc8: 0x8e1207d8  lw          $s2, 0x7D8($s0)
    ctx->pc = 0x282bc8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2008)));
    // 0x282bcc: 0xc0da81e  jal         func_36A078
    ctx->pc = 0x282BCCu;
    SET_GPR_U32(ctx, 31, 0x282BD4u);
    ctx->pc = 0x282BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282BCCu;
    // 0x282bd0: 0x4600a7c1  sub.s       $f31, $f20, $f0 (Delay Slot)
    ctx->f[31] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A078u, 0x282BCCu, 0x282BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282BD4u;
label_282bd4:
    // 0x282bd4: 0x3c013bf0  lui         $at, 0x3BF0
    ctx->pc = 0x282bd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15344 << 16));
    // 0x282bd8: 0x3421f0f1  ori         $at, $at, 0xF0F1
    ctx->pc = 0x282bd8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61681);
    // 0x282bdc: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x282bdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x282be0: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x282be0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x282be4: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x282be4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x282be8: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x282be8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x282bec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x282becu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x282bf0: 0x4600e346  mov.s       $f13, $f28
    ctx->pc = 0x282bf0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[28]);
    // 0x282bf4: 0x460fdbc0  add.s       $f15, $f27, $f15
    ctx->pc = 0x282bf4u;
    ctx->f[15] = FPU_ADD_S(ctx->f[27], ctx->f[15]);
    // 0x282bf8: 0x4600cb86  mov.s       $f14, $f25
    ctx->pc = 0x282bf8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[25]);
    // 0x282bfc: 0x4600e541  sub.s       $f21, $f28, $f0
    ctx->pc = 0x282bfcu;
    ctx->f[21] = FPU_SUB_S(ctx->f[28], ctx->f[0]);
    // 0x282c00: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x282c00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x282c04: 0x4600bf80  add.s       $f30, $f23, $f0
    ctx->pc = 0x282c04u;
    ctx->f[30] = FPU_ADD_S(ctx->f[23], ctx->f[0]);
    // 0x282c08: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x282c08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x282c0c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x282c0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x282c10: 0xc0da830  jal         func_36A0C0
    ctx->pc = 0x282C10u;
    SET_GPR_U32(ctx, 31, 0x282C18u);
    ctx->pc = 0x282C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282C10u;
    // 0x282c14: 0x240700b4  addiu       $a3, $zero, 0xB4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A0C0u, 0x282C10u, 0x282C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282C18u;
label_282c18:
    // 0x282c18: 0x4600fe86  mov.s       $f26, $f31
    ctx->pc = 0x282c18u;
    ctx->f[26] = FPU_MOV_S(ctx->f[31]);
    // 0x282c1c: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x282c1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x282c20: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x282c20u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x282c24: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x282c24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x282c28: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x282c28u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x282c2c: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x282c2cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x282c30: 0x4600cb86  mov.s       $f14, $f25
    ctx->pc = 0x282c30u;
    ctx->f[14] = FPU_MOV_S(ctx->f[25]);
    // 0x282c34: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x282c34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x282c38: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x282c38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x282c3c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x282c3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x282c40: 0xc0da830  jal         func_36A0C0
    ctx->pc = 0x282C40u;
    SET_GPR_U32(ctx, 31, 0x282C48u);
    ctx->pc = 0x282C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282C40u;
    // 0x282c44: 0x240700b4  addiu       $a3, $zero, 0xB4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A0C0u, 0x282C40u, 0x282C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282C48u;
label_282c48:
    // 0x282c48: 0x4600f606  mov.s       $f24, $f30
    ctx->pc = 0x282c48u;
    ctx->f[24] = FPU_MOV_S(ctx->f[30]);
    // 0x282c4c: 0x461be340  add.s       $f13, $f28, $f27
    ctx->pc = 0x282c4cu;
    ctx->f[13] = FPU_ADD_S(ctx->f[28], ctx->f[27]);
    // 0x282c50: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x282c50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x282c54: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x282c54u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x282c58: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x282c58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x282c5c: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x282c5cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x282c60: 0x4600cb86  mov.s       $f14, $f25
    ctx->pc = 0x282c60u;
    ctx->f[14] = FPU_MOV_S(ctx->f[25]);
    // 0x282c64: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x282c64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x282c68: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x282c68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x282c6c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x282c6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x282c70: 0xc0da830  jal         func_36A0C0
    ctx->pc = 0x282C70u;
    SET_GPR_U32(ctx, 31, 0x282C78u);
    ctx->pc = 0x282C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282C70u;
    // 0x282c74: 0x240700b4  addiu       $a3, $zero, 0xB4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A0C0u, 0x282C70u, 0x282C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282C78u;
label_282c78:
    // 0x282c78: 0x3c013d75  lui         $at, 0x3D75
    ctx->pc = 0x282c78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15733 << 16));
    // 0x282c7c: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x282c7cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x282c80: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x282c80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x282c84: 0x4616bb01  sub.s       $f12, $f23, $f22
    ctx->pc = 0x282c84u;
    ctx->f[12] = FPU_SUB_S(ctx->f[23], ctx->f[22]);
    // 0x282c88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x282c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x282c8c: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x282c8cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x282c90: 0x4614dd00  add.s       $f20, $f27, $f20
    ctx->pc = 0x282c90u;
    ctx->f[20] = FPU_ADD_S(ctx->f[27], ctx->f[20]);
    // 0x282c94: 0xafa20214  sw          $v0, 0x214($sp)
    ctx->pc = 0x282c94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 532), GPR_U32(ctx, 2));
    // 0x282c98: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x282c98u;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    // 0x282c9c: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x282c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x282ca0: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x282ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x282ca4: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x282ca4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x282ca8: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x282ca8u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x282cac: 0xc0da830  jal         func_36A0C0
    ctx->pc = 0x282CACu;
    SET_GPR_U32(ctx, 31, 0x282CB4u);
    ctx->pc = 0x282CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282CACu;
    // 0x282cb0: 0x240700b4  addiu       $a3, $zero, 0xB4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A0C0u, 0x282CACu, 0x282CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282CB4u;
label_282cb4:
    // 0x282cb4: 0x4619bb00  add.s       $f12, $f23, $f25
    ctx->pc = 0x282cb4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[23], ctx->f[25]);
    // 0x282cb8: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x282cb8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x282cbc: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x282cbcu;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x282cc0: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x282cc0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    // 0x282cc4: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x282cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x282cc8: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x282cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x282ccc: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x282cccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x282cd0: 0xc0da830  jal         func_36A0C0
    ctx->pc = 0x282CD0u;
    SET_GPR_U32(ctx, 31, 0x282CD8u);
    ctx->pc = 0x282CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282CD0u;
    // 0x282cd4: 0x240700b4  addiu       $a3, $zero, 0xB4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A0C0u, 0x282CD0u, 0x282CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282CD8u;
label_282cd8:
    // 0x282cd8: 0xc0da828  jal         func_36A0A0
    ctx->pc = 0x282CD8u;
    SET_GPR_U32(ctx, 31, 0x282CE0u);
    ctx->pc = 0x36A0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A0A0u, 0x282CD8u, 0x282CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282CE0u;
label_282ce0:
    // 0x282ce0: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x282ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x282ce4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x282ce4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x282ce8: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x282ce8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x282cec: 0xc0a177c  jal         func_285DF0
    ctx->pc = 0x282CECu;
    SET_GPR_U32(ctx, 31, 0x282CF4u);
    ctx->pc = 0x282CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282CECu;
    // 0x282cf0: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285DF0u, 0x282CECu, 0x282CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282CF4u;
label_282cf4:
    // 0x282cf4: 0xc7ac0210  lwc1        $f12, 0x210($sp)
    ctx->pc = 0x282cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x282cf8: 0xc0a0c30  jal         func_2830C0
    ctx->pc = 0x282CF8u;
    SET_GPR_U32(ctx, 31, 0x282D00u);
    ctx->pc = 0x282CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282CF8u;
    // 0x282cfc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2830C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2830C0u, 0x282CF8u, 0x282D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282D00u;
label_282d00:
    // 0x282d00: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x282d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x282d04: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x282d04u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x282d08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x282d08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282d0c: 0xa7a20200  sh          $v0, 0x200($sp)
    ctx->pc = 0x282d0cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 512), (uint16_t)GPR_U32(ctx, 2));
    // 0x282d10: 0x4600eb06  mov.s       $f12, $f29
    ctx->pc = 0x282d10u;
    ctx->f[12] = FPU_MOV_S(ctx->f[29]);
    // 0x282d14: 0xc09f60e  jal         func_27D838
    ctx->pc = 0x282D14u;
    SET_GPR_U32(ctx, 31, 0x282D1Cu);
    ctx->pc = 0x282D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282D14u;
    // 0x282d18: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D838u, 0x282D14u, 0x282D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282D1Cu;
label_282d1c:
    // 0x282d1c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x282d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x282d20: 0xe61407f0  swc1        $f20, 0x7F0($s0)
    ctx->pc = 0x282d20u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2032), bits); }
    // 0x282d24: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x282d24u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x282d28: 0x247eaf50  addiu       $fp, $v1, -0x50B0
    ctx->pc = 0x282d28u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946640));
    // 0x282d2c: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x282d2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_282d30:
    // 0x282d30: 0x8ec3b768  lw          $v1, -0x4898($s6)
    ctx->pc = 0x282d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294948712)));
    // 0x282d34: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x282d34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x282d38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x282d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x282d3c: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x282d3cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x282d40: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x282D40u;
    {
        const bool branch_taken_0x282d40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x282d40) {
            ctx->pc = 0x282D44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x282D40u;
            // 0x282d44: 0xa6220000  sh          $v0, 0x0($s1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x282D50u;
            goto label_282d50;
        }
    }
    ctx->pc = 0x282D48u;
    // 0x282d48: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x282D48u;
    {
        const bool branch_taken_0x282d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282D48u;
        // 0x282d4c: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282d48) {
            ctx->pc = 0x282D70u;
            goto label_282d70;
        }
    }
    ctx->pc = 0x282D50u;
label_282d50:
    // 0x282d50: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x282d50u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x282d54: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x282d54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x282d58: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x282d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x282d5c: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x282d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x282d60: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x282d60u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x282d64: 0x1464fff2  bne         $v1, $a0, . + 4 + (-0xE << 2)
    ctx->pc = 0x282D64u;
    {
        const bool branch_taken_0x282d64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x282D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282D64u;
        // 0x282d68: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282d64) {
            ctx->pc = 0x282D30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_282d30;
        }
    }
    ctx->pc = 0x282D6Cu;
    // 0x282d6c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x282d6cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_282d70:
    // 0x282d70: 0xa6200000  sh          $zero, 0x0($s1)
    ctx->pc = 0x282d70u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x282d74: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x282d74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282d78: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x282d78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282d7c: 0x4600eb06  mov.s       $f12, $f29
    ctx->pc = 0x282d7cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[29]);
    // 0x282d80: 0xc09f60e  jal         func_27D838
    ctx->pc = 0x282D80u;
    SET_GPR_U32(ctx, 31, 0x282D88u);
    ctx->pc = 0x282D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282D80u;
    // 0x282d84: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D838u, 0x282D80u, 0x282D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282D88u;
label_282d88:
    // 0x282d88: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x282d88u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x282d8c: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x282d8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x282d90: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x282d90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x282d94: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x282d94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x282d98: 0x0  nop
    ctx->pc = 0x282d98u;
    // NOP
    // 0x282d9c: 0x4600c881  sub.s       $f2, $f25, $f0
    ctx->pc = 0x282d9cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[25], ctx->f[0]);
    // 0x282da0: 0x4601c000  add.s       $f0, $f24, $f1
    ctx->pc = 0x282da0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[24], ctx->f[1]);
    // 0x282da4: 0x46170001  sub.s       $f0, $f0, $f23
    ctx->pc = 0x282da4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[23]);
    // 0x282da8: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x282da8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x282dac: 0x0  nop
    ctx->pc = 0x282dacu;
    // NOP
    // 0x282db0: 0x45000025  bc1f        . + 4 + (0x25 << 2)
    ctx->pc = 0x282DB0u;
    {
        const bool branch_taken_0x282db0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x282DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282DB0u;
        // 0x282db4: 0x240203e9  addiu       $v0, $zero, 0x3E9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1001));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282db0) {
            ctx->pc = 0x282E48u;
            goto label_282e48;
        }
    }
    ctx->pc = 0x282DB8u;
    // 0x282db8: 0x4601f000  add.s       $f0, $f30, $f1
    ctx->pc = 0x282db8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[30], ctx->f[1]);
    // 0x282dbc: 0x46170001  sub.s       $f0, $f0, $f23
    ctx->pc = 0x282dbcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[23]);
    // 0x282dc0: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x282dc0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x282dc4: 0x0  nop
    ctx->pc = 0x282dc4u;
    // NOP
    // 0x282dc8: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
    ctx->pc = 0x282DC8u;
    {
        const bool branch_taken_0x282dc8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x282DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282DC8u;
        // 0x282dcc: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282dc8) {
            ctx->pc = 0x282E34u;
            goto label_282e34;
        }
    }
    ctx->pc = 0x282DD0u;
    // 0x282dd0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x282dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x282dd4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x282dd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x282dd8: 0xc0a177c  jal         func_285DF0
    ctx->pc = 0x282DD8u;
    SET_GPR_U32(ctx, 31, 0x282DE0u);
    ctx->pc = 0x282DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282DD8u;
    // 0x282ddc: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285DF0u, 0x282DD8u, 0x282DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282DE0u;
label_282de0:
    // 0x282de0: 0x4619b800  add.s       $f0, $f23, $f25
    ctx->pc = 0x282de0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[23], ctx->f[25]);
    // 0x282de4: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x282de4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x282de8: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x282de8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x282dec: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x282decu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x282df0: 0x461be040  add.s       $f1, $f28, $f27
    ctx->pc = 0x282df0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[28], ctx->f[27]);
    // 0x282df4: 0x3c013ce5  lui         $at, 0x3CE5
    ctx->pc = 0x282df4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15589 << 16));
    // 0x282df8: 0x34216042  ori         $at, $at, 0x6042
    ctx->pc = 0x282df8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)24642);
    // 0x282dfc: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x282dfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x282e00: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x282e00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x282e04: 0x3c013f0c  lui         $at, 0x3F0C
    ctx->pc = 0x282e04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16140 << 16));
    // 0x282e08: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x282e08u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x282e0c: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x282e0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x282e10: 0x460c0300  add.s       $f12, $f0, $f12
    ctx->pc = 0x282e10u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x282e14: 0x3c013fa6  lui         $at, 0x3FA6
    ctx->pc = 0x282e14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16294 << 16));
    // 0x282e18: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x282e18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x282e1c: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x282e1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x282e20: 0x460d0b40  add.s       $f13, $f1, $f13
    ctx->pc = 0x282e20u;
    ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[13]);
    // 0x282e24: 0x2444a400  addiu       $a0, $v0, -0x5C00
    ctx->pc = 0x282e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943744));
    // 0x282e28: 0x44808000  mtc1        $zero, $f16
    ctx->pc = 0x282e28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x282e2c: 0xc09f5b6  jal         func_27D6D8
    ctx->pc = 0x282E2Cu;
    SET_GPR_U32(ctx, 31, 0x282E34u);
    ctx->pc = 0x282E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282E2Cu;
    // 0x282e30: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D6D8u, 0x282E2Cu, 0x282E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282E34u;
label_282e34:
    // 0x282e34: 0x4614d680  add.s       $f26, $f26, $f20
    ctx->pc = 0x282e34u;
    ctx->f[26] = FPU_ADD_S(ctx->f[26], ctx->f[20]);
    // 0x282e38: 0x26820001  addiu       $v0, $s4, 0x1
    ctx->pc = 0x282e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x282e3c: 0x54a00b  movn        $s4, $v0, $s4
    ctx->pc = 0x282e3cu;
    if (GPR_U64(ctx, 20) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 2));
    // 0x282e40: 0x4600f606  mov.s       $f24, $f30
    ctx->pc = 0x282e40u;
    ctx->f[24] = FPU_MOV_S(ctx->f[30]);
    // 0x282e44: 0x240203e9  addiu       $v0, $zero, 0x3E9
    ctx->pc = 0x282e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1001));
label_282e48:
    // 0x282e48: 0x1682001b  bne         $s4, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x282E48u;
    {
        const bool branch_taken_0x282e48 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x282E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282E48u;
        // 0x282e4c: 0x8fa20214  lw          $v0, 0x214($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 532)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282e48) {
            ctx->pc = 0x282EB8u;
            goto label_282eb8;
        }
    }
    ctx->pc = 0x282E50u;
    // 0x282e50: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x282e50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x282e54: 0x2463cb28  addiu       $v1, $v1, -0x34D8
    ctx->pc = 0x282e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953768));
    // 0x282e58: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x282e58u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x66CB34u));
    // 0x282e5c: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x282E5Cu;
    {
        const bool branch_taken_0x282e5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x282E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282E5Cu;
        // 0x282e60: 0x8fa20214  lw          $v0, 0x214($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 532)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282e5c) {
            ctx->pc = 0x282EB8u;
            goto label_282eb8;
        }
    }
    ctx->pc = 0x282E64u;
    // 0x282e64: 0x8fc2007c  lw          $v0, 0x7C($fp)
    ctx->pc = 0x282e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 124)));
    // 0x282e68: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x282E68u;
    {
        const bool branch_taken_0x282e68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x282E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282E68u;
        // 0x282e6c: 0x8fa20214  lw          $v0, 0x214($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 532)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282e68) {
            ctx->pc = 0x282EB8u;
            goto label_282eb8;
        }
    }
    ctx->pc = 0x282E70u;
    // 0x282e70: 0x16e00011  bnez        $s7, . + 4 + (0x11 << 2)
    ctx->pc = 0x282E70u;
    {
        const bool branch_taken_0x282e70 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x282E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282E70u;
        // 0x282e74: 0x26d0b768  addiu       $s0, $s6, -0x4898 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 4294948712));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282e70) {
            ctx->pc = 0x282EB8u;
            goto label_282eb8;
        }
    }
    ctx->pc = 0x282E78u;
    // 0x282e78: 0x8e0207e8  lw          $v0, 0x7E8($s0)
    ctx->pc = 0x282e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2024)));
    // 0x282e7c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x282E7Cu;
    {
        const bool branch_taken_0x282e7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x282E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282E7Cu;
        // 0x282e80: 0x8fa20214  lw          $v0, 0x214($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 532)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282e7c) {
            ctx->pc = 0x282EB8u;
            goto label_282eb8;
        }
    }
    ctx->pc = 0x282E84u;
    // 0x282e84: 0x8e0207e0  lw          $v0, 0x7E0($s0)
    ctx->pc = 0x282e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2016)));
    // 0x282e88: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x282E88u;
    {
        const bool branch_taken_0x282e88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x282E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282E88u;
        // 0x282e8c: 0x8fa20214  lw          $v0, 0x214($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 532)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282e88) {
            ctx->pc = 0x282EB8u;
            goto label_282eb8;
        }
    }
    ctx->pc = 0x282E90u;
    // 0x282e90: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x282e90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282e94: 0xc0a0c40  jal         func_283100
    ctx->pc = 0x282E94u;
    SET_GPR_U32(ctx, 31, 0x282E9Cu);
    ctx->pc = 0x282E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282E94u;
    // 0x282e98: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x283100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283100u, 0x282E94u, 0x282E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282E9Cu;
label_282e9c:
    // 0x282e9c: 0x2421023  subu        $v0, $s2, $v0
    ctx->pc = 0x282e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x282ea0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x282ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x282ea4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x282ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x282ea8: 0xae0307e0  sw          $v1, 0x7E0($s0)
    ctx->pc = 0x282ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2016), GPR_U32(ctx, 3));
    // 0x282eac: 0xae0207dc  sw          $v0, 0x7DC($s0)
    ctx->pc = 0x282eacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2012), GPR_U32(ctx, 2));
    // 0x282eb0: 0xae1507e8  sw          $s5, 0x7E8($s0)
    ctx->pc = 0x282eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2024), GPR_U32(ctx, 21));
    // 0x282eb4: 0x8fa20214  lw          $v0, 0x214($sp)
    ctx->pc = 0x282eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 532)));
label_282eb8:
    // 0x282eb8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x282EB8u;
    {
        const bool branch_taken_0x282eb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x282EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282EB8u;
        // 0x282ebc: 0x3c030067  lui         $v1, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282eb8) {
            ctx->pc = 0x282EF0u;
            goto label_282ef0;
        }
    }
    ctx->pc = 0x282EC0u;
    // 0x282ec0: 0x2463cb28  addiu       $v1, $v1, -0x34D8
    ctx->pc = 0x282ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953768));
    // 0x282ec4: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x282ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x282ec8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x282EC8u;
    {
        const bool branch_taken_0x282ec8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x282ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282EC8u;
        // 0x282ecc: 0x26d0b768  addiu       $s0, $s6, -0x4898 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 4294948712));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282ec8) {
            ctx->pc = 0x282EF4u;
            goto label_282ef4;
        }
    }
    ctx->pc = 0x282ED0u;
    // 0x282ed0: 0x8fc20074  lw          $v0, 0x74($fp)
    ctx->pc = 0x282ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 116)));
    // 0x282ed4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x282ED4u;
    {
        const bool branch_taken_0x282ed4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x282ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282ED4u;
        // 0x282ed8: 0x26c3b768  addiu       $v1, $s6, -0x4898 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294948712));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282ed4) {
            ctx->pc = 0x282EF4u;
            goto label_282ef4;
        }
    }
    ctx->pc = 0x282EDCu;
    // 0x282edc: 0x8c6207e0  lw          $v0, 0x7E0($v1)
    ctx->pc = 0x282edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2016)));
    // 0x282ee0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x282EE0u;
    {
        const bool branch_taken_0x282ee0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x282ee0) {
            ctx->pc = 0x282EE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x282EE0u;
            // 0x282ee4: 0x461bf840  add.s       $f1, $f31, $f27 (Delay Slot)
            ctx->f[1] = FPU_ADD_S(ctx->f[31], ctx->f[27]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x282EF8u;
            goto label_282ef8;
        }
    }
    ctx->pc = 0x282EE8u;
    // 0x282ee8: 0xac7507e0  sw          $s5, 0x7E0($v1)
    ctx->pc = 0x282ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2016), GPR_U32(ctx, 21));
    // 0x282eec: 0xafa00214  sw          $zero, 0x214($sp)
    ctx->pc = 0x282eecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 532), GPR_U32(ctx, 0));
label_282ef0:
    // 0x282ef0: 0x26d0b768  addiu       $s0, $s6, -0x4898
    ctx->pc = 0x282ef0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 4294948712));
label_282ef4:
    // 0x282ef4: 0x461bf840  add.s       $f1, $f31, $f27
    ctx->pc = 0x282ef4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], ctx->f[27]);
label_282ef8:
    // 0x282ef8: 0xc60007ec  lwc1        $f0, 0x7EC($s0)
    ctx->pc = 0x282ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2028)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x282efc: 0x4600d000  add.s       $f0, $f26, $f0
    ctx->pc = 0x282efcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[26], ctx->f[0]);
    // 0x282f00: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x282f00u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x282f04: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x282f04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x282f08: 0x0  nop
    ctx->pc = 0x282f08u;
    // NOP
    // 0x282f0c: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x282F0Cu;
    {
        const bool branch_taken_0x282f0c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x282F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282F0Cu;
        // 0x282f10: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282f0c) {
            ctx->pc = 0x282F5Cu;
            goto label_282f5c;
        }
    }
    ctx->pc = 0x282F14u;
    // 0x282f14: 0x4619b800  add.s       $f0, $f23, $f25
    ctx->pc = 0x282f14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[23], ctx->f[25]);
    // 0x282f18: 0x3c013cf5  lui         $at, 0x3CF5
    ctx->pc = 0x282f18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15605 << 16));
    // 0x282f1c: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x282f1cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x282f20: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x282f20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x282f24: 0x461be340  add.s       $f13, $f28, $f27
    ctx->pc = 0x282f24u;
    ctx->f[13] = FPU_ADD_S(ctx->f[28], ctx->f[27]);
    // 0x282f28: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x282f28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x282f2c: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x282f2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x282f30: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x282f30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x282f34: 0x460c0301  sub.s       $f12, $f0, $f12
    ctx->pc = 0x282f34u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x282f38: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x282f38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
    // 0x282f3c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x282f3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x282f40: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x282f40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x282f44: 0x44808000  mtc1        $zero, $f16
    ctx->pc = 0x282f44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x282f48: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x282f48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x282f4c: 0xc09f662  jal         func_27D988
    ctx->pc = 0x282F4Cu;
    SET_GPR_U32(ctx, 31, 0x282F54u);
    ctx->pc = 0x282F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282F4Cu;
    // 0x282f50: 0xa7a20200  sh          $v0, 0x200($sp) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 29), 512), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D988u, 0x282F4Cu, 0x282F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282F54u;
label_282f54:
    // 0x282f54: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x282F54u;
    {
        const bool branch_taken_0x282f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282F54u;
        // 0x282f58: 0xae0007e8  sw          $zero, 0x7E8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2024), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282f54) {
            ctx->pc = 0x282FC0u;
            goto label_282fc0;
        }
    }
    ctx->pc = 0x282F5Cu;
label_282f5c:
    // 0x282f5c: 0x56e00001  bnel        $s7, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x282F5Cu;
    {
        const bool branch_taken_0x282f5c = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x282f5c) {
            ctx->pc = 0x282F60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x282F5Cu;
            // 0x282f60: 0xae1507e8  sw          $s5, 0x7E8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 2024), GPR_U32(ctx, 21));
            ctx->in_delay_slot = false;
            ctx->pc = 0x282F64u;
            goto label_282f64;
        }
    }
    ctx->pc = 0x282F64u;
label_282f64:
    // 0x282f64: 0xc60107ec  lwc1        $f1, 0x7EC($s0)
    ctx->pc = 0x282f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2028)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x282f68: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x282f68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x282f6c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x282f6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x282f70: 0x4601d340  add.s       $f13, $f26, $f1
    ctx->pc = 0x282f70u;
    ctx->f[13] = FPU_ADD_S(ctx->f[26], ctx->f[1]);
    // 0x282f74: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x282f74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x282f78: 0x46006800  add.s       $f0, $f13, $f0
    ctx->pc = 0x282f78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
    // 0x282f7c: 0x4600f834  c.lt.s      $f31, $f0
    ctx->pc = 0x282f7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[31], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x282f80: 0x0  nop
    ctx->pc = 0x282f80u;
    // NOP
    // 0x282f84: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x282F84u;
    {
        const bool branch_taken_0x282f84 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x282F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282F84u;
        // 0x282f88: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282f84) {
            ctx->pc = 0x282FA4u;
            goto label_282fa4;
        }
    }
    ctx->pc = 0x282F8Cu;
    // 0x282f8c: 0x44808000  mtc1        $zero, $f16
    ctx->pc = 0x282f8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x282f90: 0xc7af0210  lwc1        $f15, 0x210($sp)
    ctx->pc = 0x282f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x282f94: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x282f94u;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    // 0x282f98: 0x4600eb86  mov.s       $f14, $f29
    ctx->pc = 0x282f98u;
    ctx->f[14] = FPU_MOV_S(ctx->f[29]);
    // 0x282f9c: 0xc09f662  jal         func_27D988
    ctx->pc = 0x282F9Cu;
    SET_GPR_U32(ctx, 31, 0x282FA4u);
    ctx->pc = 0x282FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282F9Cu;
    // 0x282fa0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D988u, 0x282F9Cu, 0x282FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282FA4u;
label_282fa4:
    // 0x282fa4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x282fa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282fa8: 0x4600eb06  mov.s       $f12, $f29
    ctx->pc = 0x282fa8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[29]);
    // 0x282fac: 0xc09f60e  jal         func_27D838
    ctx->pc = 0x282FACu;
    SET_GPR_U32(ctx, 31, 0x282FB4u);
    ctx->pc = 0x282FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282FACu;
    // 0x282fb0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D838u, 0x282FACu, 0x282FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282FB4u;
label_282fb4:
    // 0x282fb4: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x282fb4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x282fb8: 0x16f5ff5d  bne         $s7, $s5, . + 4 + (-0xA3 << 2)
    ctx->pc = 0x282FB8u;
    {
        const bool branch_taken_0x282fb8 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 21));
        ctx->pc = 0x282FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282FB8u;
        // 0x282fbc: 0x4600c600  add.s       $f24, $f24, $f0 (Delay Slot)
        ctx->f[24] = FPU_ADD_S(ctx->f[24], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x282fb8) {
            ctx->pc = 0x282D30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_282d30;
        }
    }
    ctx->pc = 0x282FC0u;
label_282fc0:
    // 0x282fc0: 0x26c2b768  addiu       $v0, $s6, -0x4898
    ctx->pc = 0x282fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294948712));
    // 0x282fc4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x282fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x282fc8: 0x18600011  blez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x282FC8u;
    {
        const bool branch_taken_0x282fc8 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x282FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282FC8u;
        // 0x282fcc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282fc8) {
            ctx->pc = 0x283010u;
            goto label_283010;
        }
    }
    ctx->pc = 0x282FD0u;
    // 0x282fd0: 0x4619b800  add.s       $f0, $f23, $f25
    ctx->pc = 0x282fd0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[23], ctx->f[25]);
    // 0x282fd4: 0x3c013d75  lui         $at, 0x3D75
    ctx->pc = 0x282fd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15733 << 16));
    // 0x282fd8: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x282fd8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x282fdc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x282fdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x282fe0: 0x461be340  add.s       $f13, $f28, $f27
    ctx->pc = 0x282fe0u;
    ctx->f[13] = FPU_ADD_S(ctx->f[28], ctx->f[27]);
    // 0x282fe4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x282fe4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x282fe8: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x282fe8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x282fec: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x282fecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x282ff0: 0x460c0301  sub.s       $f12, $f0, $f12
    ctx->pc = 0x282ff0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x282ff4: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x282ff4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
    // 0x282ff8: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x282ff8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x282ffc: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x282ffcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x283000: 0x44808000  mtc1        $zero, $f16
    ctx->pc = 0x283000u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x283004: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x283004u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x283008: 0xc09f662  jal         func_27D988
    ctx->pc = 0x283008u;
    SET_GPR_U32(ctx, 31, 0x283010u);
    ctx->pc = 0x28300Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283008u;
    // 0x28300c: 0xa7a20200  sh          $v0, 0x200($sp) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 29), 512), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D988u, 0x283008u, 0x283010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283010u;
label_283010:
    // 0x283010: 0xdfb00220  ld          $s0, 0x220($sp)
    ctx->pc = 0x283010u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x283014: 0xdfb10228  ld          $s1, 0x228($sp)
    ctx->pc = 0x283014u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 552)));
    // 0x283018: 0xdfb20230  ld          $s2, 0x230($sp)
    ctx->pc = 0x283018u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x28301c: 0xdfb30238  ld          $s3, 0x238($sp)
    ctx->pc = 0x28301cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 568)));
    // 0x283020: 0xdfb40240  ld          $s4, 0x240($sp)
    ctx->pc = 0x283020u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x283024: 0xdfb50248  ld          $s5, 0x248($sp)
    ctx->pc = 0x283024u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x283028: 0xdfb60250  ld          $s6, 0x250($sp)
    ctx->pc = 0x283028u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x28302c: 0xdfb70258  ld          $s7, 0x258($sp)
    ctx->pc = 0x28302cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 600)));
    // 0x283030: 0xdfbe0260  ld          $fp, 0x260($sp)
    ctx->pc = 0x283030u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x283034: 0xdfbf0268  ld          $ra, 0x268($sp)
    ctx->pc = 0x283034u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 616)));
    // 0x283038: 0xc7bf02c8  lwc1        $f31, 0x2C8($sp)
    ctx->pc = 0x283038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
    // 0x28303c: 0xc7be02c0  lwc1        $f30, 0x2C0($sp)
    ctx->pc = 0x28303cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
    // 0x283040: 0xc7bd02b8  lwc1        $f29, 0x2B8($sp)
    ctx->pc = 0x283040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
    // 0x283044: 0xc7bc02b0  lwc1        $f28, 0x2B0($sp)
    ctx->pc = 0x283044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x283048: 0xc7bb02a8  lwc1        $f27, 0x2A8($sp)
    ctx->pc = 0x283048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x28304c: 0xc7ba02a0  lwc1        $f26, 0x2A0($sp)
    ctx->pc = 0x28304cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x283050: 0xc7b90298  lwc1        $f25, 0x298($sp)
    ctx->pc = 0x283050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x283054: 0xc7b80290  lwc1        $f24, 0x290($sp)
    ctx->pc = 0x283054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x283058: 0xc7b70288  lwc1        $f23, 0x288($sp)
    ctx->pc = 0x283058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x28305c: 0xc7b60280  lwc1        $f22, 0x280($sp)
    ctx->pc = 0x28305cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x283060: 0xc7b50278  lwc1        $f21, 0x278($sp)
    ctx->pc = 0x283060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x283064: 0xc7b40270  lwc1        $f20, 0x270($sp)
    ctx->pc = 0x283064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x283068: 0x3e00008  jr          $ra
    ctx->pc = 0x283068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28306Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283068u;
        // 0x28306c: 0x27bd02d0  addiu       $sp, $sp, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283068u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x283070u;
    // 0x283070: 0x0  nop
    ctx->pc = 0x283070u;
    // NOP
    // 0x283074: 0x0  nop
    ctx->pc = 0x283074u;
    // NOP
    ctx->pc = 0x283078u;
}
