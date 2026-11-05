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

// Function: sub_0036E9B0
// Address: 0x36e9b0 - 0x36eaf4
void sub_0036E9B0_0x36e9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036E9B0_0x36e9b0");
#endif

    switch (ctx->pc) {
        case 0x36e9f4u: goto label_36e9f4;
        case 0x36ea08u: goto label_36ea08;
        case 0x36ea1cu: goto label_36ea1c;
        case 0x36ea60u: goto label_36ea60;
        case 0x36ea8cu: goto label_36ea8c;
        case 0x36eaa0u: goto label_36eaa0;
        case 0x36ead0u: goto label_36ead0;
        default: break;
    }

    ctx->pc = 0x36e9b0u;

    // 0x36e9b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36e9b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36e9b4: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x36e9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x36e9b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36e9b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36e9bc: 0x2c62000f  sltiu       $v0, $v1, 0xF
    ctx->pc = 0x36e9bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
    // 0x36e9c0: 0x1040004c  beqz        $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x36E9C0u;
    {
        const bool branch_taken_0x36e9c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36E9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E9C0u;
        // 0x36e9c4: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e9c0) {
            ctx->pc = 0x36EAF4u;
            return;
        }
    }
    ctx->pc = 0x36E9C8u;
    // 0x36e9c8: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x36e9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x36e9cc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x36e9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x36e9d0: 0x24427e20  addiu       $v0, $v0, 0x7E20
    ctx->pc = 0x36e9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32288));
    // 0x36e9d4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x36e9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x36e9d8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x36e9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x36e9dc: 0x800008  jr          $a0
    ctx->pc = 0x36E9DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x36E9E4u: goto label_36e9e4;
            case 0x36E9FCu: goto label_36e9fc;
            case 0x36EA10u: goto label_36ea10;
            case 0x36EA24u: goto label_36ea24;
            case 0x36EA68u: goto label_36ea68;
            case 0x36EA94u: goto label_36ea94;
            case 0x36EAA8u: goto label_36eaa8;
            case 0x36EAB4u: goto label_36eab4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E9DCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x36E9E4u;
label_36e9e4:
    // 0x36e9e4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x36e9e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x36e9e8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x36e9e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x36e9ec: 0xc0dbad8  jal         func_36EB60
    ctx->pc = 0x36E9ECu;
    SET_GPR_U32(ctx, 31, 0x36E9F4u);
    ctx->pc = 0x36E9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E9ECu;
    // 0x36e9f0: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36EB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36EB60u, 0x36E9ECu, 0x36E9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E9F4u;
label_36e9f4:
    // 0x36e9f4: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x36E9F4u;
    {
        const bool branch_taken_0x36e9f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36E9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E9F4u;
        // 0x36e9f8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e9f4) {
            ctx->pc = 0x36EAF8u;
            return;
        }
    }
    ctx->pc = 0x36E9FCu;
label_36e9fc:
    // 0x36e9fc: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x36e9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x36ea00: 0xc0db9ca  jal         func_36E728
    ctx->pc = 0x36EA00u;
    SET_GPR_U32(ctx, 31, 0x36EA08u);
    ctx->pc = 0x36EA04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36EA00u;
    // 0x36ea04: 0xac48cc1c  sw          $t0, -0x33E4($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294954012), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36E728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36E728u, 0x36EA00u, 0x36EA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EA08u;
label_36ea08:
    // 0x36ea08: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x36EA08u;
    {
        const bool branch_taken_0x36ea08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36EA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EA08u;
        // 0x36ea0c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ea08) {
            ctx->pc = 0x36EAF8u;
            return;
        }
    }
    ctx->pc = 0x36EA10u;
label_36ea10:
    // 0x36ea10: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x36ea10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x36ea14: 0xc0db9ca  jal         func_36E728
    ctx->pc = 0x36EA14u;
    SET_GPR_U32(ctx, 31, 0x36EA1Cu);
    ctx->pc = 0x36EA18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36EA14u;
    // 0x36ea18: 0xac48cc20  sw          $t0, -0x33E0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294954016), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36E728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36E728u, 0x36EA14u, 0x36EA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EA1Cu;
label_36ea1c:
    // 0x36ea1c: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x36EA1Cu;
    {
        const bool branch_taken_0x36ea1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36EA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EA1Cu;
        // 0x36ea20: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ea1c) {
            ctx->pc = 0x36EAF8u;
            return;
        }
    }
    ctx->pc = 0x36EA24u;
label_36ea24:
    // 0x36ea24: 0x3c07005c  lui         $a3, 0x5C
    ctx->pc = 0x36ea24u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)92 << 16));
    // 0x36ea28: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x36ea28u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
    // 0x36ea2c: 0xdce5f160  ld          $a1, -0xEA0($a3)
    ctx->pc = 0x36ea2cu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x5BF160u));
    // 0x36ea30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x36ea30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36ea34: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x36ea34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36ea38: 0x3c04fff9  lui         $a0, 0xFFF9
    ctx->pc = 0x36ea38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65529 << 16));
    // 0x36ea3c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x36ea3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x36ea40: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x36ea40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x36ea44: 0x68100b  movn        $v0, $v1, $t0
    ctx->pc = 0x36ea44u;
    if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x36ea48: 0xa42824  and         $a1, $a1, $a0
    ctx->pc = 0x36ea48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x36ea4c: 0x21478  dsll        $v0, $v0, 17
    ctx->pc = 0x36ea4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 17);
    // 0x36ea50: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x36ea50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x36ea54: 0x24040047  addiu       $a0, $zero, 0x47
    ctx->pc = 0x36ea54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x36ea58: 0xc0db9c2  jal         func_36E708
    ctx->pc = 0x36EA58u;
    SET_GPR_U32(ctx, 31, 0x36EA60u);
    ctx->pc = 0x36EA5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36EA58u;
    // 0x36ea5c: 0xfce5f160  sd          $a1, -0xEA0($a3) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 7), 4294963552), GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36E708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36E708u, 0x36EA58u, 0x36EA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EA60u;
label_36ea60:
    // 0x36ea60: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x36EA60u;
    {
        const bool branch_taken_0x36ea60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36EA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EA60u;
        // 0x36ea64: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ea60) {
            ctx->pc = 0x36EAF8u;
            return;
        }
    }
    ctx->pc = 0x36EA68u;
label_36ea68:
    // 0x36ea68: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x36ea68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x36ea6c: 0x52c78  dsll        $a1, $a1, 17
    ctx->pc = 0x36ea6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 17);
    // 0x36ea70: 0x3c023100  lui         $v0, 0x3100
    ctx->pc = 0x36ea70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12544 << 16));
    // 0x36ea74: 0x8280b  movn        $a1, $zero, $t0
    ctx->pc = 0x36ea74u;
    if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
    // 0x36ea78: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x36ea78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x36ea7c: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x36ea7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x36ea80: 0x2404004e  addiu       $a0, $zero, 0x4E
    ctx->pc = 0x36ea80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x36ea84: 0xc0db9c2  jal         func_36E708
    ctx->pc = 0x36EA84u;
    SET_GPR_U32(ctx, 31, 0x36EA8Cu);
    ctx->pc = 0x36EA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36EA84u;
    // 0x36ea88: 0xa32825  or          $a1, $a1, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36E708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36E708u, 0x36EA84u, 0x36EA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EA8Cu;
label_36ea8c:
    // 0x36ea8c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x36EA8Cu;
    {
        const bool branch_taken_0x36ea8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36EA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EA8Cu;
        // 0x36ea90: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ea8c) {
            ctx->pc = 0x36EAF8u;
            return;
        }
    }
    ctx->pc = 0x36EA94u;
label_36ea94:
    // 0x36ea94: 0x8282b  sltu        $a1, $zero, $t0
    ctx->pc = 0x36ea94u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x36ea98: 0xc0dd208  jal         func_374820
    ctx->pc = 0x36EA98u;
    SET_GPR_U32(ctx, 31, 0x36EAA0u);
    ctx->pc = 0x36EA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36EA98u;
    // 0x36ea9c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x374820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374820u, 0x36EA98u, 0x36EAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EAA0u;
label_36eaa0:
    // 0x36eaa0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x36EAA0u;
    {
        const bool branch_taken_0x36eaa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36EAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EAA0u;
        // 0x36eaa4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36eaa0) {
            ctx->pc = 0x36EAF8u;
            return;
        }
    }
    ctx->pc = 0x36EAA8u;
label_36eaa8:
    // 0x36eaa8: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x36eaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x36eaac: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x36EAACu;
    {
        const bool branch_taken_0x36eaac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36EAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EAACu;
        // 0x36eab0: 0xac48f158  sw          $t0, -0xEA8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294963544), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36eaac) {
            ctx->pc = 0x36EAF4u;
            return;
        }
    }
    ctx->pc = 0x36EAB4u;
label_36eab4:
    // 0x36eab4: 0x15000008  bnez        $t0, . + 4 + (0x8 << 2)
    ctx->pc = 0x36EAB4u;
    {
        const bool branch_taken_0x36eab4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x36EAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EAB4u;
        // 0x36eab8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36eab4) {
            ctx->pc = 0x36EAD8u;
            goto label_36ead8;
        }
    }
    ctx->pc = 0x36EABCu;
    // 0x36eabc: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x36eabcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
    // 0x36eac0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x36eac0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36eac4: 0x2484f8c8  addiu       $a0, $a0, -0x738
    ctx->pc = 0x36eac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965448));
    // 0x36eac8: 0xc0dc1ea  jal         func_3707A8
    ctx->pc = 0x36EAC8u;
    SET_GPR_U32(ctx, 31, 0x36EAD0u);
    ctx->pc = 0x36EACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36EAC8u;
    // 0x36eacc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3707A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3707A8u, 0x36EAC8u, 0x36EAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EAD0u;
label_36ead0:
    // 0x36ead0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x36EAD0u;
    {
        const bool branch_taken_0x36ead0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36EAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EAD0u;
        // 0x36ead4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ead0) {
            ctx->pc = 0x36EAF8u;
            return;
        }
    }
    ctx->pc = 0x36EAD8u;
label_36ead8:
    // 0x36ead8: 0x15020007  bne         $t0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x36EAD8u;
    {
        const bool branch_taken_0x36ead8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x36EADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EAD8u;
        // 0x36eadc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ead8) {
            ctx->pc = 0x36EAF8u;
            return;
        }
    }
    ctx->pc = 0x36EAE0u;
    // 0x36eae0: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x36eae0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
    // 0x36eae4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36eae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36eae8: 0x2484f8c8  addiu       $a0, $a0, -0x738
    ctx->pc = 0x36eae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965448));
    // 0x36eaec: 0xc0dc1ea  jal         func_3707A8
    ctx->pc = 0x36EAECu;
    SET_GPR_U32(ctx, 31, 0x36EAF4u);
    ctx->pc = 0x36EAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36EAECu;
    // 0x36eaf0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3707A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3707A8u, 0x36EAECu, 0x36EAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EAF4u;
}
