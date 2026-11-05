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

// Function: sub_001249A0
// Address: 0x1249a0 - 0x124af0
void sub_001249A0_0x1249a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001249A0_0x1249a0");
#endif

    switch (ctx->pc) {
        case 0x124a00u: goto label_124a00;
        case 0x124a28u: goto label_124a28;
        case 0x124a54u: goto label_124a54;
        case 0x124a6cu: goto label_124a6c;
        default: break;
    }

    ctx->pc = 0x1249a0u;

    // 0x1249a0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1249a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1249a4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1249a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1249a8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1249a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1249ac: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1249acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1249b0: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1249b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1249b4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1249b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1249b8: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1249b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x1249bc: 0x140a02d  daddu       $s4, $t2, $zero
    ctx->pc = 0x1249bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1249c0: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x1249c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x1249c4: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1249c4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1249c8: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x1249c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x1249cc: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x1249ccu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1249d0: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x1249d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x1249d4: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x1249d4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1249d8: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x1249d8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x1249dc: 0x120f02d  daddu       $fp, $t1, $zero
    ctx->pc = 0x1249dcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1249e0: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x1249e0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1249e4: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x1249e4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x1249e8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1249e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1249ec: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x1249ecu;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    // 0x1249f0: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1249f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1249f4: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x1249f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x1249f8: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x1249F8u;
    SET_GPR_U32(ctx, 31, 0x124A00u);
    ctx->pc = 0x1249FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1249F8u;
    // 0x1249fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x1249F8u, 0x124A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124A00u;
label_124a00:
    // 0x124a00: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x124A00u;
    {
        const bool branch_taken_0x124a00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x124A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124A00u;
        // 0x124a04: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124a00) {
            ctx->pc = 0x124A10u;
            goto label_124a10;
        }
    }
    ctx->pc = 0x124A08u;
    // 0x124a08: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x124A08u;
    {
        const bool branch_taken_0x124a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124A08u;
        // 0x124a0c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124a08) {
            ctx->pc = 0x124AB8u;
            goto label_124ab8;
        }
    }
    ctx->pc = 0x124A10u;
label_124a10:
    // 0x124a10: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x124a10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124a14: 0x24539a08  addiu       $s3, $v0, -0x65F8
    ctx->pc = 0x124a14u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x124a18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x124a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x124a1c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x124a1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124a20: 0xc04789c  jal         func_11E270
    ctx->pc = 0x124A20u;
    SET_GPR_U32(ctx, 31, 0x124A28u);
    ctx->pc = 0x124A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124A20u;
    // 0x124a24: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E270u, 0x124A20u, 0x124A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124A28u;
label_124a28:
    // 0x124a28: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x124a28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124a2c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x124a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x124a30: 0x5622000a  bnel        $s1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x124A30u;
    {
        const bool branch_taken_0x124a30 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x124a30) {
            ctx->pc = 0x124A34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x124A30u;
            // 0x124a34: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x124A5Cu;
            goto label_124a5c;
        }
    }
    ctx->pc = 0x124A38u;
    // 0x124a38: 0x92420424  lbu         $v0, 0x424($s2)
    ctx->pc = 0x124a38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1060)));
    // 0x124a3c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x124a3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124a40: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x124a40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124a44: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x124a44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x124a48: 0x24420324  addiu       $v0, $v0, 0x324
    ctx->pc = 0x124a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 804));
    // 0x124a4c: 0xc0477ec  jal         func_11DFB0
    ctx->pc = 0x124A4Cu;
    SET_GPR_U32(ctx, 31, 0x124A54u);
    ctx->pc = 0x124A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124A4Cu;
    // 0x124a50: 0x2428021  addu        $s0, $s2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11DFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DFB0u, 0x124A4Cu, 0x124A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124A54u;
label_124a54:
    // 0x124a54: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x124A54u;
    {
        const bool branch_taken_0x124a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124A54u;
        // 0x124a58: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124a54) {
            ctx->pc = 0x124A60u;
            goto label_124a60;
        }
    }
    ctx->pc = 0x124A5Cu;
label_124a5c:
    // 0x124a5c: 0x26500304  addiu       $s0, $s2, 0x304
    ctx->pc = 0x124a5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 772));
label_124a60:
    // 0x124a60: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x124a60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124a64: 0xc049a34  jal         func_1268D0
    ctx->pc = 0x124A64u;
    SET_GPR_U32(ctx, 31, 0x124A6Cu);
    ctx->pc = 0x124A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124A64u;
    // 0x124a68: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1268D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1268D0u, 0x124A64u, 0x124A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124A6Cu;
label_124a6c:
    // 0x124a6c: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x124a6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x124a70: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x124a70u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x124a74: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x124a74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x124a78: 0xae14001c  sw          $s4, 0x1C($s0)
    ctx->pc = 0x124a78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 20));
    // 0x124a7c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x124a7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x124a80: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x124a80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x124a84: 0xe6150004  swc1        $f21, 0x4($s0)
    ctx->pc = 0x124a84u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x124a88: 0xae150008  sw          $s5, 0x8($s0)
    ctx->pc = 0x124a88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 21));
    // 0x124a8c: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x124a8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x124a90: 0xae160010  sw          $s6, 0x10($s0)
    ctx->pc = 0x124a90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 22));
    // 0x124a94: 0xae170014  sw          $s7, 0x14($s0)
    ctx->pc = 0x124a94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 23));
    // 0x124a98: 0xae1e0018  sw          $fp, 0x18($s0)
    ctx->pc = 0x124a98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 30));
    // 0x124a9c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x124a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x124aa0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x124AA0u;
    {
        const bool branch_taken_0x124aa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x124AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124AA0u;
        // 0x124aa4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124aa0) {
            ctx->pc = 0x124AB8u;
            goto label_124ab8;
        }
    }
    ctx->pc = 0x124AA8u;
    // 0x124aa8: 0x92420424  lbu         $v0, 0x424($s2)
    ctx->pc = 0x124aa8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1060)));
    // 0x124aac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x124aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x124ab0: 0xa2420424  sb          $v0, 0x424($s2)
    ctx->pc = 0x124ab0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1060), (uint8_t)GPR_U32(ctx, 2));
    // 0x124ab4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x124ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_124ab8:
    // 0x124ab8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x124ab8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x124abc: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x124abcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x124ac0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x124ac0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x124ac4: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x124ac4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x124ac8: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x124ac8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x124acc: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x124accu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x124ad0: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x124ad0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x124ad4: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x124ad4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x124ad8: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x124ad8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x124adc: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x124adcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x124ae0: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x124ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x124ae4: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x124ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x124ae8: 0x3e00008  jr          $ra
    ctx->pc = 0x124AE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x124AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124AE8u;
        // 0x124aec: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x124AE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x124AF0u;
}
