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

// Function: sub_003C6740
// Address: 0x3c6740 - 0x3c68e8
void sub_003C6740_0x3c6740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C6740_0x3c6740");
#endif

    switch (ctx->pc) {
        case 0x3c67c0u: goto label_3c67c0;
        case 0x3c6810u: goto label_3c6810;
        case 0x3c6834u: goto label_3c6834;
        case 0x3c685cu: goto label_3c685c;
        case 0x3c6884u: goto label_3c6884;
        case 0x3c6890u: goto label_3c6890;
        case 0x3c68b4u: goto label_3c68b4;
        case 0x3c68d0u: goto label_3c68d0;
        default: break;
    }

    ctx->pc = 0x3c6740u;

    // 0x3c6740: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3c6740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3c6744: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3c6744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3c6748: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3c6748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3c674c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3c674cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c6750: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3c6750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x3c6754: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3c6754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3c6758: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3c6758u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c675c: 0x2803f  dsra32      $s0, $v0, 0
    ctx->pc = 0x3c675cu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3c6760: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x3c6760u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3c6764: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3c6764u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3c6768: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x3c6768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x3c676c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3c676cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3c6770: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x3c6770u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x3c6774: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x3C6774u;
    {
        const bool branch_taken_0x3c6774 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C6778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6774u;
        // 0x3c6778: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6774) {
            ctx->pc = 0x3C67C8u;
            goto label_3c67c8;
        }
    }
    ctx->pc = 0x3C677Cu;
    // 0x3c677c: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x3c677cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x3c6780: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3c6780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3c6784: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x3c6784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x3c6788: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3c6788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3c678c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C678Cu;
    {
        const bool branch_taken_0x3c678c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C6790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C678Cu;
        // 0x3c6790: 0x3c030048  lui         $v1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c678c) {
            ctx->pc = 0x3C67A0u;
            goto label_3c67a0;
        }
    }
    ctx->pc = 0x3C6794u;
    // 0x3c6794: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x3C6794u;
    {
        const bool branch_taken_0x3c6794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C6798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6794u;
        // 0x3c6798: 0xdc621830  ld          $v0, 0x1830($v1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 6192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6794) {
            ctx->pc = 0x3C68D0u;
            goto label_3c68d0;
        }
    }
    ctx->pc = 0x3C679Cu;
    // 0x3c679c: 0x0  nop
    ctx->pc = 0x3c679cu;
    // NOP
label_3c67a0:
    // 0x3c67a0: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C67A0u;
    {
        const bool branch_taken_0x3c67a0 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x3C67A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C67A0u;
        // 0x3c67a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c67a0) {
            ctx->pc = 0x3C67B0u;
            goto label_3c67b0;
        }
    }
    ctx->pc = 0x3C67A8u;
    // 0x3c67a8: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x3C67A8u;
    {
        const bool branch_taken_0x3c67a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C67ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C67A8u;
        // 0x3c67ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c67a8) {
            ctx->pc = 0x3C68D0u;
            goto label_3c68d0;
        }
    }
    ctx->pc = 0x3C67B0u;
label_3c67b0:
    // 0x3c67b0: 0x340586a0  ori         $a1, $zero, 0x86A0
    ctx->pc = 0x3c67b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34464);
    // 0x3c67b4: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x3c67b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x3c67b8: 0xc0f4f96  jal         func_3D3E58
    ctx->pc = 0x3C67B8u;
    SET_GPR_U32(ctx, 31, 0x3C67C0u);
    ctx->pc = 0x3C67BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C67B8u;
    // 0x3c67bc: 0x2412ffca  addiu       $s2, $zero, -0x36 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967242));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3E58u, 0x3C67B8u, 0x3C67C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C67C0u;
label_3c67c0:
    // 0x3c67c0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3c67c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c67c4: 0x2803f  dsra32      $s0, $v0, 0
    ctx->pc = 0x3c67c4u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 2) >> (32 + 0));
label_3c67c8:
    // 0x3c67c8: 0x3c027fef  lui         $v0, 0x7FEF
    ctx->pc = 0x3c67c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32751 << 16));
    // 0x3c67cc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3c67ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3c67d0: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x3c67d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x3c67d4: 0x5440003a  bnel        $v0, $zero, . + 4 + (0x3A << 2)
    ctx->pc = 0x3C67D4u;
    {
        const bool branch_taken_0x3c67d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c67d4) {
            ctx->pc = 0x3C67D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C67D4u;
            // 0x3c67d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C68C0u;
            goto label_3c68c0;
        }
    }
    ctx->pc = 0x3C67DCu;
    // 0x3c67dc: 0x101503  sra         $v0, $s0, 20
    ctx->pc = 0x3c67dcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 16), 20));
    // 0x3c67e0: 0x2644fc01  addiu       $a0, $s2, -0x3FF
    ctx->pc = 0x3c67e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294966273));
    // 0x3c67e4: 0x829021  addu        $s2, $a0, $v0
    ctx->pc = 0x3c67e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3c67e8: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x3c67e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
    // 0x3c67ec: 0x1227c2  srl         $a0, $s2, 31
    ctx->pc = 0x3c67ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x3c67f0: 0x240203ff  addiu       $v0, $zero, 0x3FF
    ctx->pc = 0x3c67f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x3c67f4: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x3c67f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3c67f8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3c67f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x3c67fc: 0x2031824  and         $v1, $s0, $v1
    ctx->pc = 0x3c67fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x3c6800: 0x21500  sll         $v0, $v0, 20
    ctx->pc = 0x3c6800u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 20));
    // 0x3c6804: 0x628025  or          $s0, $v1, $v0
    ctx->pc = 0x3c6804u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3c6808: 0xc0f50f4  jal         func_3D43D0
    ctx->pc = 0x3C6808u;
    SET_GPR_U32(ctx, 31, 0x3C6810u);
    ctx->pc = 0x3C680Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6808u;
    // 0x3c680c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D43D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D43D0u, 0x3C6808u, 0x3C6810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C6810u;
label_3c6810:
    // 0x3c6810: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x3c6810u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c6814: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x3c6814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3c6818: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x3c6818u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x3c681c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x3c681cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x3c6820: 0x10283c  dsll32      $a1, $s0, 0
    ctx->pc = 0x3c6820u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) << (32 + 0));
    // 0x3c6824: 0x658825  or          $s1, $v1, $a1
    ctx->pc = 0x3c6824u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x3c6828: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3c6828u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c682c: 0xc0f184a  jal         func_3C6128
    ctx->pc = 0x3C682Cu;
    SET_GPR_U32(ctx, 31, 0x3C6834u);
    ctx->pc = 0x3C6830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C682Cu;
    // 0x3c6830: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C6128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C6128u, 0x3C682Cu, 0x3C6834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C6834u;
label_3c6834:
    // 0x3c6834: 0x3405f567  ori         $a1, $zero, 0xF567
    ctx->pc = 0x3c6834u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)62823);
    // 0x3c6838: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x3c6838u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x3c683c: 0x34a5fbcc  ori         $a1, $a1, 0xFBCC
    ctx->pc = 0x3c683cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)64460);
    // 0x3c6840: 0x52c78  dsll        $a1, $a1, 17
    ctx->pc = 0x3c6840u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 17);
    // 0x3c6844: 0x34a58f89  ori         $a1, $a1, 0x8F89
    ctx->pc = 0x3c6844u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)36745);
    // 0x3c6848: 0x52b78  dsll        $a1, $a1, 13
    ctx->pc = 0x3c6848u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 13);
    // 0x3c684c: 0x34a50b36  ori         $a1, $a1, 0xB36
    ctx->pc = 0x3c684cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2870);
    // 0x3c6850: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3c6850u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c6854: 0xc0f4f96  jal         func_3D3E58
    ctx->pc = 0x3C6854u;
    SET_GPR_U32(ctx, 31, 0x3C685Cu);
    ctx->pc = 0x3C6858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6854u;
    // 0x3c6858: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3E58u, 0x3C6854u, 0x3C685Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C685Cu;
label_3c685c:
    // 0x3c685c: 0x3405ff6f  ori         $a1, $zero, 0xFF6F
    ctx->pc = 0x3c685cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65391);
    // 0x3c6860: 0x52cb8  dsll        $a1, $a1, 18
    ctx->pc = 0x3c6860u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 18);
    // 0x3c6864: 0x34a5b7b1  ori         $a1, $a1, 0xB7B1
    ctx->pc = 0x3c6864u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)47025);
    // 0x3c6868: 0x52c78  dsll        $a1, $a1, 17
    ctx->pc = 0x3c6868u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 17);
    // 0x3c686c: 0x34a5a4dc  ori         $a1, $a1, 0xA4DC
    ctx->pc = 0x3c686cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)42204);
    // 0x3c6870: 0x52af8  dsll        $a1, $a1, 11
    ctx->pc = 0x3c6870u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 11);
    // 0x3c6874: 0x34a5050e  ori         $a1, $a1, 0x50E
    ctx->pc = 0x3c6874u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1294);
    // 0x3c6878: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3c6878u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c687c: 0xc0f4f96  jal         func_3D3E58
    ctx->pc = 0x3C687Cu;
    SET_GPR_U32(ctx, 31, 0x3C6884u);
    ctx->pc = 0x3C6880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C687Cu;
    // 0x3c6880: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3E58u, 0x3C687Cu, 0x3C6884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C6884u;
label_3c6884:
    // 0x3c6884: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c6884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c6888: 0xc0f4f66  jal         func_3D3D98
    ctx->pc = 0x3C6888u;
    SET_GPR_U32(ctx, 31, 0x3C6890u);
    ctx->pc = 0x3C688Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6888u;
    // 0x3c688c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3D98u, 0x3C6888u, 0x3C6890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C6890u;
label_3c6890:
    // 0x3c6890: 0x3405ff4d  ori         $a1, $zero, 0xFF4D
    ctx->pc = 0x3c6890u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65357);
    // 0x3c6894: 0x52cf8  dsll        $a1, $a1, 19
    ctx->pc = 0x3c6894u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 19);
    // 0x3c6898: 0x34a5826a  ori         $a1, $a1, 0x826A
    ctx->pc = 0x3c6898u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)33386);
    // 0x3c689c: 0x52cf8  dsll        $a1, $a1, 19
    ctx->pc = 0x3c689cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 19);
    // 0x3c68a0: 0x34a59f60  ori         $a1, $a1, 0x9F60
    ctx->pc = 0x3c68a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)40800);
    // 0x3c68a4: 0x52a38  dsll        $a1, $a1, 8
    ctx->pc = 0x3c68a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 8);
    // 0x3c68a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3c68a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c68ac: 0xc0f4f96  jal         func_3D3E58
    ctx->pc = 0x3C68ACu;
    SET_GPR_U32(ctx, 31, 0x3C68B4u);
    ctx->pc = 0x3C68B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C68ACu;
    // 0x3c68b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3E58u, 0x3C68ACu, 0x3C68B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C68B4u;
label_3c68b4:
    // 0x3c68b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c68b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c68b8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3C68B8u;
    {
        const bool branch_taken_0x3c68b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C68BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C68B8u;
        // 0x3c68bc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c68b8) {
            ctx->pc = 0x3C68C8u;
            goto label_3c68c8;
        }
    }
    ctx->pc = 0x3C68C0u;
label_3c68c0:
    // 0x3c68c0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3c68c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c68c4: 0x0  nop
    ctx->pc = 0x3c68c4u;
    // NOP
label_3c68c8:
    // 0x3c68c8: 0xc0f4f66  jal         func_3D3D98
    ctx->pc = 0x3C68C8u;
    SET_GPR_U32(ctx, 31, 0x3C68D0u);
    ctx->pc = 0x3D3D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3D98u, 0x3C68C8u, 0x3C68D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C68D0u;
label_3c68d0:
    // 0x3c68d0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3c68d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3c68d4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3c68d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3c68d8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3c68d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c68dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3c68dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c68e0: 0x3e00008  jr          $ra
    ctx->pc = 0x3C68E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C68E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C68E0u;
        // 0x3c68e4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C68E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C68E8u;
}
