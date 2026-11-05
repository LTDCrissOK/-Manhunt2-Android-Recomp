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

// Function: sub_001069B0
// Address: 0x1069b0 - 0x106b28
void sub_001069B0_0x1069b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001069B0_0x1069b0");
#endif

    switch (ctx->pc) {
        case 0x1069f8u: goto label_1069f8;
        case 0x106a00u: goto label_106a00;
        case 0x106a68u: goto label_106a68;
        case 0x106a74u: goto label_106a74;
        case 0x106a88u: goto label_106a88;
        case 0x106ab0u: goto label_106ab0;
        case 0x106abcu: goto label_106abc;
        case 0x106ad0u: goto label_106ad0;
        default: break;
    }

    ctx->pc = 0x1069b0u;

    // 0x1069b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1069b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1069b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1069b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1069b8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1069b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1069bc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1069bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1069c0: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x1069c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x1069c4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1069c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1069c8: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x1069c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x1069cc: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x1069ccu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1069d0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1069d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1069d4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1069d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1069d8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1069d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1069dc: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1069dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1069e0: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x1069e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x1069e4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1069e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1069e8: 0x92f10022  lbu         $s1, 0x22($s7)
    ctx->pc = 0x1069e8u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 34)));
    // 0x1069ec: 0x12200041  beqz        $s1, . + 4 + (0x41 << 2)
    ctx->pc = 0x1069ECu;
    {
        const bool branch_taken_0x1069ec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1069F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1069ECu;
        // 0x1069f0: 0xa0f02d  daddu       $fp, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1069ec) {
            ctx->pc = 0x106AF4u;
            goto label_106af4;
        }
    }
    ctx->pc = 0x1069F4u;
    // 0x1069f4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1069f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1069f8:
    // 0x1069f8: 0xc04147a  jal         func_1051E8
    ctx->pc = 0x1069F8u;
    SET_GPR_U32(ctx, 31, 0x106A00u);
    ctx->pc = 0x1069FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1069F8u;
    // 0x1069fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051E8u, 0x1069F8u, 0x106A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106A00u;
label_106a00:
    // 0x106a00: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x106a00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106a04: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x106a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x106a08: 0x145e0036  bne         $v0, $fp, . + 4 + (0x36 << 2)
    ctx->pc = 0x106A08u;
    {
        const bool branch_taken_0x106a08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 30));
        ctx->pc = 0x106A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106A08u;
        // 0x106a0c: 0x26020001  addiu       $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106a08) {
            ctx->pc = 0x106AE4u;
            goto label_106ae4;
        }
    }
    ctx->pc = 0x106A10u;
    // 0x106a10: 0x92e30020  lbu         $v1, 0x20($s7)
    ctx->pc = 0x106a10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 32)));
    // 0x106a14: 0x93c20020  lbu         $v0, 0x20($fp)
    ctx->pc = 0x106a14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x106a18: 0x1062002f  beq         $v1, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x106A18u;
    {
        const bool branch_taken_0x106a18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x106A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106A18u;
        // 0x106a1c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106a18) {
            ctx->pc = 0x106AD8u;
            goto label_106ad8;
        }
    }
    ctx->pc = 0x106A20u;
    // 0x106a20: 0x90930014  lbu         $s3, 0x14($a0)
    ctx->pc = 0x106a20u;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x106a24: 0xa0920014  sb          $s2, 0x14($a0)
    ctx->pc = 0x106a24u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 20), (uint8_t)GPR_U32(ctx, 18));
    // 0x106a28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x106a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x106a2c: 0x13a07a  dsrl        $s4, $s3, 1
    ctx->pc = 0x106a2cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 19) >> 1);
    // 0x106a30: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x106a30u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106a34: 0x325000ff  andi        $s0, $s2, 0xFF
    ctx->pc = 0x106a34u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x106a38: 0x32730001  andi        $s3, $s3, 0x1
    ctx->pc = 0x106a38u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x106a3c: 0x10887a  dsrl        $s1, $s0, 1
    ctx->pc = 0x106a3cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) >> 1);
    // 0x106a40: 0x32940001  andi        $s4, $s4, 0x1
    ctx->pc = 0x106a40u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
    // 0x106a44: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x106a44u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x106a48: 0x32310001  andi        $s1, $s1, 0x1
    ctx->pc = 0x106a48u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x106a4c: 0x10180a  movz        $v1, $zero, $s0
    ctx->pc = 0x106a4cu;
    if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x106a50: 0x11100a  movz        $v0, $zero, $s1
    ctx->pc = 0x106a50u;
    if (GPR_U64(ctx, 17) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x106a54: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x106a54u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106a58: 0x73a80a  movz        $s5, $v1, $s3
    ctx->pc = 0x106a58u;
    if (GPR_U64(ctx, 19) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 3));
    // 0x106a5c: 0x54b00a  movz        $s6, $v0, $s4
    ctx->pc = 0x106a5cu;
    if (GPR_U64(ctx, 20) == 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 2));
    // 0x106a60: 0xc041472  jal         func_1051C8
    ctx->pc = 0x106A60u;
    SET_GPR_U32(ctx, 31, 0x106A68u);
    ctx->pc = 0x106A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106A60u;
    // 0x106a64: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x106A60u, 0x106A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106A68u;
label_106a68:
    // 0x106a68: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x106a68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106a6c: 0xc041472  jal         func_1051C8
    ctx->pc = 0x106A6Cu;
    SET_GPR_U32(ctx, 31, 0x106A74u);
    ctx->pc = 0x106A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106A6Cu;
    // 0x106a70: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x106A6Cu, 0x106A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106A74u;
label_106a74:
    // 0x106a74: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x106a74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106a78: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x106a78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106a7c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x106a7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106a80: 0xc0412f8  jal         func_104BE0
    ctx->pc = 0x106A80u;
    SET_GPR_U32(ctx, 31, 0x106A88u);
    ctx->pc = 0x106A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106A80u;
    // 0x106a84: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104BE0u, 0x106A80u, 0x106A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106A88u;
label_106a88:
    // 0x106a88: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x106a88u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106a8c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x106a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x106a90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x106a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x106a94: 0x10100b  movn        $v0, $zero, $s0
    ctx->pc = 0x106a94u;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x106a98: 0x11180b  movn        $v1, $zero, $s1
    ctx->pc = 0x106a98u;
    if (GPR_U64(ctx, 17) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x106a9c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x106a9cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106aa0: 0x53a80b  movn        $s5, $v0, $s3
    ctx->pc = 0x106aa0u;
    if (GPR_U64(ctx, 19) != 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 2));
    // 0x106aa4: 0x74b00b  movn        $s6, $v1, $s4
    ctx->pc = 0x106aa4u;
    if (GPR_U64(ctx, 20) != 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 3));
    // 0x106aa8: 0xc041472  jal         func_1051C8
    ctx->pc = 0x106AA8u;
    SET_GPR_U32(ctx, 31, 0x106AB0u);
    ctx->pc = 0x106AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106AA8u;
    // 0x106aac: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x106AA8u, 0x106AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106AB0u;
label_106ab0:
    // 0x106ab0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x106ab0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106ab4: 0xc041472  jal         func_1051C8
    ctx->pc = 0x106AB4u;
    SET_GPR_U32(ctx, 31, 0x106ABCu);
    ctx->pc = 0x106AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106AB4u;
    // 0x106ab8: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x106AB4u, 0x106ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106ABCu;
label_106abc:
    // 0x106abc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x106abcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106ac0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x106ac0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106ac4: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x106ac4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106ac8: 0xc041316  jal         func_104C58
    ctx->pc = 0x106AC8u;
    SET_GPR_U32(ctx, 31, 0x106AD0u);
    ctx->pc = 0x106ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106AC8u;
    // 0x106acc: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104C58u, 0x106AC8u, 0x106AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106AD0u;
label_106ad0:
    // 0x106ad0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x106AD0u;
    {
        const bool branch_taken_0x106ad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106AD0u;
        // 0x106ad4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106ad0) {
            ctx->pc = 0x106AF8u;
            goto label_106af8;
        }
    }
    ctx->pc = 0x106AD8u;
label_106ad8:
    // 0x106ad8: 0xa0920014  sb          $s2, 0x14($a0)
    ctx->pc = 0x106ad8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 20), (uint8_t)GPR_U32(ctx, 18));
    // 0x106adc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x106ADCu;
    {
        const bool branch_taken_0x106adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106ADCu;
        // 0x106ae0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106adc) {
            ctx->pc = 0x106AF8u;
            goto label_106af8;
        }
    }
    ctx->pc = 0x106AE4u;
label_106ae4:
    // 0x106ae4: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x106ae4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x106ae8: 0x211182b  sltu        $v1, $s0, $s1
    ctx->pc = 0x106ae8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x106aec: 0x1460ffc2  bnez        $v1, . + 4 + (-0x3E << 2)
    ctx->pc = 0x106AECu;
    {
        const bool branch_taken_0x106aec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x106AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106AECu;
        // 0x106af0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106aec) {
            ctx->pc = 0x1069F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1069f8;
        }
    }
    ctx->pc = 0x106AF4u;
label_106af4:
    // 0x106af4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x106af4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_106af8:
    // 0x106af8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x106af8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x106afc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x106afcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x106b00: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x106b00u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x106b04: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x106b04u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x106b08: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x106b08u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x106b0c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x106b0cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x106b10: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x106b10u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x106b14: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x106b14u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x106b18: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x106b18u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x106b1c: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x106b1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x106b20: 0x3e00008  jr          $ra
    ctx->pc = 0x106B20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106B20u;
        // 0x106b24: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106B20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x106B28u;
}
