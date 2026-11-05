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

// Function: sub_001C79A0
// Address: 0x1c79a0 - 0x1c7ac0
void sub_001C79A0_0x1c79a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C79A0_0x1c79a0");
#endif

    switch (ctx->pc) {
        case 0x1c79a0u: goto label_1c79a0;
        case 0x1c79a4u: goto label_1c79a4;
        case 0x1c79a8u: goto label_1c79a8;
        case 0x1c79acu: goto label_1c79ac;
        case 0x1c79b0u: goto label_1c79b0;
        case 0x1c79b4u: goto label_1c79b4;
        case 0x1c79b8u: goto label_1c79b8;
        case 0x1c79bcu: goto label_1c79bc;
        case 0x1c79c0u: goto label_1c79c0;
        case 0x1c79c4u: goto label_1c79c4;
        case 0x1c79c8u: goto label_1c79c8;
        case 0x1c79ccu: goto label_1c79cc;
        case 0x1c79d0u: goto label_1c79d0;
        case 0x1c79d4u: goto label_1c79d4;
        case 0x1c79d8u: goto label_1c79d8;
        case 0x1c79dcu: goto label_1c79dc;
        case 0x1c79e0u: goto label_1c79e0;
        case 0x1c79e4u: goto label_1c79e4;
        case 0x1c79e8u: goto label_1c79e8;
        case 0x1c79ecu: goto label_1c79ec;
        case 0x1c79f0u: goto label_1c79f0;
        case 0x1c79f4u: goto label_1c79f4;
        case 0x1c79f8u: goto label_1c79f8;
        case 0x1c79fcu: goto label_1c79fc;
        case 0x1c7a00u: goto label_1c7a00;
        case 0x1c7a04u: goto label_1c7a04;
        case 0x1c7a08u: goto label_1c7a08;
        case 0x1c7a0cu: goto label_1c7a0c;
        case 0x1c7a10u: goto label_1c7a10;
        case 0x1c7a14u: goto label_1c7a14;
        case 0x1c7a18u: goto label_1c7a18;
        case 0x1c7a1cu: goto label_1c7a1c;
        case 0x1c7a20u: goto label_1c7a20;
        case 0x1c7a24u: goto label_1c7a24;
        case 0x1c7a28u: goto label_1c7a28;
        case 0x1c7a2cu: goto label_1c7a2c;
        case 0x1c7a30u: goto label_1c7a30;
        case 0x1c7a34u: goto label_1c7a34;
        case 0x1c7a38u: goto label_1c7a38;
        case 0x1c7a3cu: goto label_1c7a3c;
        case 0x1c7a40u: goto label_1c7a40;
        case 0x1c7a44u: goto label_1c7a44;
        case 0x1c7a48u: goto label_1c7a48;
        case 0x1c7a4cu: goto label_1c7a4c;
        case 0x1c7a50u: goto label_1c7a50;
        case 0x1c7a54u: goto label_1c7a54;
        case 0x1c7a58u: goto label_1c7a58;
        case 0x1c7a5cu: goto label_1c7a5c;
        case 0x1c7a60u: goto label_1c7a60;
        case 0x1c7a64u: goto label_1c7a64;
        case 0x1c7a68u: goto label_1c7a68;
        case 0x1c7a6cu: goto label_1c7a6c;
        case 0x1c7a70u: goto label_1c7a70;
        case 0x1c7a74u: goto label_1c7a74;
        case 0x1c7a78u: goto label_1c7a78;
        case 0x1c7a7cu: goto label_1c7a7c;
        case 0x1c7a80u: goto label_1c7a80;
        case 0x1c7a84u: goto label_1c7a84;
        case 0x1c7a88u: goto label_1c7a88;
        case 0x1c7a8cu: goto label_1c7a8c;
        case 0x1c7a90u: goto label_1c7a90;
        case 0x1c7a94u: goto label_1c7a94;
        case 0x1c7a98u: goto label_1c7a98;
        case 0x1c7a9cu: goto label_1c7a9c;
        case 0x1c7aa0u: goto label_1c7aa0;
        case 0x1c7aa4u: goto label_1c7aa4;
        case 0x1c7aa8u: goto label_1c7aa8;
        case 0x1c7aacu: goto label_1c7aac;
        case 0x1c7ab0u: goto label_1c7ab0;
        case 0x1c7ab4u: goto label_1c7ab4;
        case 0x1c7ab8u: goto label_1c7ab8;
        case 0x1c7abcu: goto label_1c7abc;
        default: break;
    }

    ctx->pc = 0x1c79a0u;

label_1c79a0:
    // 0x1c79a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c79a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1c79a4:
    // 0x1c79a4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1c79a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1c79a8:
    // 0x1c79a8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c79a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1c79ac:
    // 0x1c79ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c79acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c79b0:
    // 0x1c79b0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1c79b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_1c79b4:
    // 0x1c79b4: 0x8e110318  lw          $s1, 0x318($s0)
    ctx->pc = 0x1c79b4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 792)));
label_1c79b8:
    // 0x1c79b8: 0x92220314  lbu         $v0, 0x314($s1)
    ctx->pc = 0x1c79b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 788)));
label_1c79bc:
    // 0x1c79bc: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
label_1c79c0:
    if (ctx->pc == 0x1C79C0u) {
        ctx->pc = 0x1C79C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C79BCu;
        // 0x1c79c0: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C79C4u;
        goto label_1c79c4;
    }
    ctx->pc = 0x1C79BCu;
    {
        const bool branch_taken_0x1c79bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C79C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C79BCu;
        // 0x1c79c0: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c79bc) {
            ctx->pc = 0x1C7AACu;
            goto label_1c7aac;
        }
    }
    ctx->pc = 0x1C79C4u;
label_1c79c4:
    // 0x1c79c4: 0xa3a00000  sb          $zero, 0x0($sp)
    ctx->pc = 0x1c79c4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
label_1c79c8:
    // 0x1c79c8: 0x8c62bd70  lw          $v0, -0x4290($v1)
    ctx->pc = 0x1c79c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950256)));
label_1c79cc:
    // 0x1c79cc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1c79ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1c79d0:
    // 0x1c79d0: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_1c79d4:
    if (ctx->pc == 0x1C79D4u) {
        ctx->pc = 0x1C79D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C79D0u;
        // 0x1c79d4: 0x8e230218  lw          $v1, 0x218($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C79D8u;
        goto label_1c79d8;
    }
    ctx->pc = 0x1C79D0u;
    {
        const bool branch_taken_0x1c79d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c79d0) {
            ctx->pc = 0x1C79D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C79D0u;
            // 0x1c79d4: 0x8e230218  lw          $v1, 0x218($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C79ECu;
            goto label_1c79ec;
        }
    }
    ctx->pc = 0x1C79D8u;
label_1c79d8:
    // 0x1c79d8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1c79d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_1c79dc:
    // 0x1c79dc: 0x8c43be30  lw          $v1, -0x41D0($v0)
    ctx->pc = 0x1c79dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950448)));
label_1c79e0:
    // 0x1c79e0: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
label_1c79e4:
    if (ctx->pc == 0x1C79E4u) {
        ctx->pc = 0x1C79E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C79E0u;
        // 0x1c79e4: 0x93a20000  lbu         $v0, 0x0($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C79E8u;
        goto label_1c79e8;
    }
    ctx->pc = 0x1C79E0u;
    {
        const bool branch_taken_0x1c79e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C79E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C79E0u;
        // 0x1c79e4: 0x93a20000  lbu         $v0, 0x0($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c79e0) {
            ctx->pc = 0x1C7A28u;
            goto label_1c7a28;
        }
    }
    ctx->pc = 0x1C79E8u;
label_1c79e8:
    // 0x1c79e8: 0x8e230218  lw          $v1, 0x218($s1)
    ctx->pc = 0x1c79e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
label_1c79ec:
    // 0x1c79ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c79ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c79f0:
    // 0x1c79f0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1c79f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1c79f4:
    // 0x1c79f4: 0x8c62007c  lw          $v0, 0x7C($v1)
    ctx->pc = 0x1c79f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
label_1c79f8:
    // 0x1c79f8: 0x40f809  jalr        $v0
label_1c79fc:
    if (ctx->pc == 0x1C79FCu) {
        ctx->pc = 0x1C79FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C79F8u;
        // 0x1c79fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7A00u;
        goto label_1c7a00;
    }
    ctx->pc = 0x1C79F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C7A00u);
        ctx->pc = 0x1C79FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C79F8u;
        // 0x1c79fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C79F8u, 0x1C7A00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C7A00u;
label_1c7a00:
    // 0x1c7a00: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1c7a00u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1c7a04:
    // 0x1c7a04: 0xfa010320  sqc2        $vf1, 0x320($s0)
    ctx->pc = 0x1c7a04u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 800), _mm_castps_si128(ctx->vu0_vf[1]));
label_1c7a08:
    // 0x1c7a08: 0xc6000324  lwc1        $f0, 0x324($s0)
    ctx->pc = 0x1c7a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 804)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c7a0c:
    // 0x1c7a0c: 0x3c013f0c  lui         $at, 0x3F0C
    ctx->pc = 0x1c7a0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16140 << 16));
label_1c7a10:
    // 0x1c7a10: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1c7a10u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1c7a14:
    // 0x1c7a14: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c7a14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1c7a18:
    // 0x1c7a18: 0x0  nop
    ctx->pc = 0x1c7a18u;
    // NOP
label_1c7a1c:
    // 0x1c7a1c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c7a1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1c7a20:
    // 0x1c7a20: 0xe6000324  swc1        $f0, 0x324($s0)
    ctx->pc = 0x1c7a20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 804), bits); }
label_1c7a24:
    // 0x1c7a24: 0x93a20000  lbu         $v0, 0x0($sp)
    ctx->pc = 0x1c7a24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
label_1c7a28:
    // 0x1c7a28: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
label_1c7a2c:
    if (ctx->pc == 0x1C7A2Cu) {
        ctx->pc = 0x1C7A30u;
        goto label_1c7a30;
    }
    ctx->pc = 0x1C7A28u;
    {
        const bool branch_taken_0x1c7a28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c7a28) {
            ctx->pc = 0x1C7A6Cu;
            goto label_1c7a6c;
        }
    }
    ctx->pc = 0x1C7A30u;
label_1c7a30:
    // 0x1c7a30: 0x8e030318  lw          $v1, 0x318($s0)
    ctx->pc = 0x1c7a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 792)));
label_1c7a34:
    // 0x1c7a34: 0x8c640104  lw          $a0, 0x104($v1)
    ctx->pc = 0x1c7a34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
label_1c7a38:
    // 0x1c7a38: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1c7a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1c7a3c:
    // 0x1c7a3c: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x1c7a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_1c7a40:
    // 0x1c7a40: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1c7a40u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1c7a44:
    // 0x1c7a44: 0xfa010320  sqc2        $vf1, 0x320($s0)
    ctx->pc = 0x1c7a44u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 800), _mm_castps_si128(ctx->vu0_vf[1]));
label_1c7a48:
    // 0x1c7a48: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x1c7a48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
label_1c7a4c:
    // 0x1c7a4c: 0x3c013f0c  lui         $at, 0x3F0C
    ctx->pc = 0x1c7a4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16140 << 16));
label_1c7a50:
    // 0x1c7a50: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1c7a50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1c7a54:
    // 0x1c7a54: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1c7a54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1c7a58:
    // 0x1c7a58: 0xc460c6a4  lwc1        $f0, -0x395C($v1)
    ctx->pc = 0x1c7a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294952612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c7a5c:
    // 0x1c7a5c: 0xc6010324  lwc1        $f1, 0x324($s0)
    ctx->pc = 0x1c7a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 804)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c7a60:
    // 0x1c7a60: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1c7a60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1c7a64:
    // 0x1c7a64: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1c7a64u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1c7a68:
    // 0x1c7a68: 0xe6010324  swc1        $f1, 0x324($s0)
    ctx->pc = 0x1c7a68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 804), bits); }
label_1c7a6c:
    // 0x1c7a6c: 0x3c013f0c  lui         $at, 0x3F0C
    ctx->pc = 0x1c7a6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16140 << 16));
label_1c7a70:
    // 0x1c7a70: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1c7a70u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1c7a74:
    // 0x1c7a74: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c7a74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1c7a78:
    // 0x1c7a78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7a78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c7a7c:
    // 0x1c7a7c: 0xc6000324  lwc1        $f0, 0x324($s0)
    ctx->pc = 0x1c7a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 804)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c7a80:
    // 0x1c7a80: 0x46010081  sub.s       $f2, $f0, $f1
    ctx->pc = 0x1c7a80u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1c7a84:
    // 0x1c7a84: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c7a84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1c7a88:
    // 0x1c7a88: 0xe6020344  swc1        $f2, 0x344($s0)
    ctx->pc = 0x1c7a88u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 836), bits); }
label_1c7a8c:
    // 0x1c7a8c: 0xc071eb0  jal         func_1C7AC0
label_1c7a90:
    if (ctx->pc == 0x1C7A90u) {
        ctx->pc = 0x1C7A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7A8Cu;
        // 0x1c7a90: 0xe6000340  swc1        $f0, 0x340($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 832), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7A94u;
        goto label_1c7a94;
    }
    ctx->pc = 0x1C7A8Cu;
    SET_GPR_U32(ctx, 31, 0x1C7A94u);
    ctx->pc = 0x1C7A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7A8Cu;
    // 0x1c7a90: 0xe6000340  swc1        $f0, 0x340($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 832), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7AC0u, 0x1C7A8Cu, 0x1C7A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7A94u;
label_1c7a94:
    // 0x1c7a94: 0xc071c74  jal         func_1C71D0
label_1c7a98:
    if (ctx->pc == 0x1C7A98u) {
        ctx->pc = 0x1C7A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7A94u;
        // 0x1c7a98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7A9Cu;
        goto label_1c7a9c;
    }
    ctx->pc = 0x1C7A94u;
    SET_GPR_U32(ctx, 31, 0x1C7A9Cu);
    ctx->pc = 0x1C7A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7A94u;
    // 0x1c7a98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C71D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C71D0u, 0x1C7A94u, 0x1C7A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7A9Cu;
label_1c7a9c:
    // 0x1c7a9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7a9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c7aa0:
    // 0x1c7aa0: 0xc071d3a  jal         func_1C74E8
label_1c7aa4:
    if (ctx->pc == 0x1C7AA4u) {
        ctx->pc = 0x1C7AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7AA0u;
        // 0x1c7aa4: 0x8c850318  lw          $a1, 0x318($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 792)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7AA8u;
        goto label_1c7aa8;
    }
    ctx->pc = 0x1C7AA0u;
    SET_GPR_U32(ctx, 31, 0x1C7AA8u);
    ctx->pc = 0x1C7AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7AA0u;
    // 0x1c7aa4: 0x8c850318  lw          $a1, 0x318($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 792)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C74E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C74E8u, 0x1C7AA0u, 0x1C7AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7AA8u;
label_1c7aa8:
    // 0x1c7aa8: 0xa2200314  sb          $zero, 0x314($s1)
    ctx->pc = 0x1c7aa8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 788), (uint8_t)GPR_U32(ctx, 0));
label_1c7aac:
    // 0x1c7aac: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1c7aacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c7ab0:
    // 0x1c7ab0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1c7ab0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1c7ab4:
    // 0x1c7ab4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c7ab4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1c7ab8:
    // 0x1c7ab8: 0x3e00008  jr          $ra
label_1c7abc:
    if (ctx->pc == 0x1C7ABCu) {
        ctx->pc = 0x1C7ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7AB8u;
        // 0x1c7abc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7AC0u;
        goto label_fallthrough_0x1c7ab8;
    }
    ctx->pc = 0x1C7AB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C7ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7AB8u;
        // 0x1c7abc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C7AB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1c7ab8:
    ctx->pc = 0x1C7AC0u;
}
