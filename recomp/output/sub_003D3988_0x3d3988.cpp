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

// Function: sub_003D3988
// Address: 0x3d3988 - 0x3d3ab8
void sub_003D3988_0x3d3988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D3988_0x3d3988");
#endif

    ctx->pc = 0x3d3988u;

    // 0x3d3988: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3d3988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3d398c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3d398cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d3990: 0x8c880004  lw          $t0, 0x4($a0)
    ctx->pc = 0x3d3990u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3d3994: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x3d3994u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x3d3998: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3D3998u;
    {
        const bool branch_taken_0x3d3998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D399Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3998u;
        // 0x3d399c: 0xdc850010  ld          $a1, 0x10($a0) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3998) {
            ctx->pc = 0x3D39B4u;
            goto label_3d39b4;
        }
    }
    ctx->pc = 0x3D39A0u;
    // 0x3d39a0: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x3d39a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x3d39a4: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x3d39a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x3d39a8: 0x240707ff  addiu       $a3, $zero, 0x7FF
    ctx->pc = 0x3d39a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
    // 0x3d39ac: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x3D39ACu;
    {
        const bool branch_taken_0x3d39ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D39B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D39ACu;
        // 0x3d39b0: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d39ac) {
            ctx->pc = 0x3D3A58u;
            goto label_3d3a58;
        }
    }
    ctx->pc = 0x3D39B4u;
label_3d39b4:
    // 0x3d39b4: 0x38620004  xori        $v0, $v1, 0x4
    ctx->pc = 0x3d39b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
    // 0x3d39b8: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x3D39B8u;
    {
        const bool branch_taken_0x3d39b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d39b8) {
            ctx->pc = 0x3D39BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D39B8u;
            // 0x3d39bc: 0x240707ff  addiu       $a3, $zero, 0x7FF (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D3A14u;
            goto label_3d3a14;
        }
    }
    ctx->pc = 0x3D39C0u;
    // 0x3d39c0: 0x38620002  xori        $v0, $v1, 0x2
    ctx->pc = 0x3d39c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x3d39c4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D39C4u;
    {
        const bool branch_taken_0x3d39c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d39c4) {
            ctx->pc = 0x3D39D4u;
            goto label_3d39d4;
        }
    }
    ctx->pc = 0x3D39CCu;
    // 0x3d39cc: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x3D39CCu;
    {
        const bool branch_taken_0x3d39cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D39D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D39CCu;
        // 0x3d39d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d39cc) {
            ctx->pc = 0x3D3A58u;
            goto label_3d3a58;
        }
    }
    ctx->pc = 0x3D39D4u;
label_3d39d4:
    // 0x3d39d4: 0x10a00020  beqz        $a1, . + 4 + (0x20 << 2)
    ctx->pc = 0x3D39D4u;
    {
        const bool branch_taken_0x3d39d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d39d4) {
            ctx->pc = 0x3D3A58u;
            goto label_3d3a58;
        }
    }
    ctx->pc = 0x3D39DCu;
    // 0x3d39dc: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x3d39dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3d39e0: 0x2862fc02  slti        $v0, $v1, -0x3FE
    ctx->pc = 0x3d39e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294966274) ? 1 : 0);
    // 0x3d39e4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3D39E4u;
    {
        const bool branch_taken_0x3d39e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D39E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D39E4u;
        // 0x3d39e8: 0x2402fc02  addiu       $v0, $zero, -0x3FE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966274));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d39e4) {
            ctx->pc = 0x3D3A04u;
            goto label_3d3a04;
        }
    }
    ctx->pc = 0x3D39ECu;
    // 0x3d39ec: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3d39ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3d39f0: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x3d39f0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x3d39f4: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x3D39F4u;
    {
        const bool branch_taken_0x3d39f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D39F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D39F4u;
        // 0x3d39f8: 0x452816  dsrlv       $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (GPR_U32(ctx, 2) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d39f4) {
            ctx->pc = 0x3D3A54u;
            goto label_3d3a54;
        }
    }
    ctx->pc = 0x3D39FCu;
    // 0x3d39fc: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x3D39FCu;
    {
        const bool branch_taken_0x3d39fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D39FCu;
        // 0x3d3a00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d39fc) {
            ctx->pc = 0x3D3A54u;
            goto label_3d3a54;
        }
    }
    ctx->pc = 0x3D3A04u;
label_3d3a04:
    // 0x3d3a04: 0x28620400  slti        $v0, $v1, 0x400
    ctx->pc = 0x3d3a04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x3d3a08: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D3A08u;
    {
        const bool branch_taken_0x3d3a08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D3A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3A08u;
        // 0x3d3a0c: 0x246703ff  addiu       $a3, $v1, 0x3FF (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 1023));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3a08) {
            ctx->pc = 0x3D3A1Cu;
            goto label_3d3a1c;
        }
    }
    ctx->pc = 0x3D3A10u;
    // 0x3d3a10: 0x240707ff  addiu       $a3, $zero, 0x7FF
    ctx->pc = 0x3d3a10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
label_3d3a14:
    // 0x3d3a14: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3D3A14u;
    {
        const bool branch_taken_0x3d3a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3A14u;
        // 0x3d3a18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3a14) {
            ctx->pc = 0x3D3A58u;
            goto label_3d3a58;
        }
    }
    ctx->pc = 0x3D3A1Cu;
label_3d3a1c:
    // 0x3d3a1c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x3d3a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3d3a20: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x3d3a20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x3d3a24: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D3A24u;
    {
        const bool branch_taken_0x3d3a24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3d3a24) {
            ctx->pc = 0x3D3A28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D3A24u;
            // 0x3d3a28: 0x64a5007f  daddiu      $a1, $a1, 0x7F (Delay Slot)
            SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)127);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D3A38u;
            goto label_3d3a38;
        }
    }
    ctx->pc = 0x3D3A2Cu;
    // 0x3d3a2c: 0x30a30100  andi        $v1, $a1, 0x100
    ctx->pc = 0x3d3a2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)256);
    // 0x3d3a30: 0x64a20080  daddiu      $v0, $a1, 0x80
    ctx->pc = 0x3d3a30u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)128);
    // 0x3d3a34: 0x43280b  movn        $a1, $v0, $v1
    ctx->pc = 0x3d3a34u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
label_3d3a38:
    // 0x3d3a38: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3d3a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3d3a3c: 0x210fa  dsrl        $v0, $v0, 3
    ctx->pc = 0x3d3a3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
    // 0x3d3a40: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x3d3a40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x3d3a44: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D3A44u;
    {
        const bool branch_taken_0x3d3a44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d3a44) {
            ctx->pc = 0x3D3A48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D3A44u;
            // 0x3d3a48: 0x52a3a  dsrl        $a1, $a1, 8 (Delay Slot)
            SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D3A58u;
            goto label_3d3a58;
        }
    }
    ctx->pc = 0x3D3A4Cu;
    // 0x3d3a4c: 0x5287a  dsrl        $a1, $a1, 1
    ctx->pc = 0x3d3a4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 1);
    // 0x3d3a50: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3d3a50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_3d3a54:
    // 0x3d3a54: 0x52a3a  dsrl        $a1, $a1, 8
    ctx->pc = 0x3d3a54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 8);
label_3d3a58:
    // 0x3d3a58: 0x3403fff0  ori         $v1, $zero, 0xFFF0
    ctx->pc = 0x3d3a58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65520);
    // 0x3d3a5c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x3d3a5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x3d3a60: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3d3a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3d3a64: 0x2133a  dsrl        $v0, $v0, 12
    ctx->pc = 0x3d3a64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 12);
    // 0x3d3a68: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x3d3a68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x3d3a6c: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x3d3a6cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x3d3a70: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x3d3a70u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x3d3a74: 0x30e307ff  andi        $v1, $a3, 0x7FF
    ctx->pc = 0x3d3a74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)2047);
    // 0x3d3a78: 0x3c02800f  lui         $v0, 0x800F
    ctx->pc = 0x3d3a78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32783 << 16));
    // 0x3d3a7c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3d3a7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3d3a80: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3d3a80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3d3a84: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3d3a84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3d3a88: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3d3a88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3d3a8c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3d3a8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3d3a90: 0x31d3c  dsll32      $v1, $v1, 20
    ctx->pc = 0x3d3a90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 20));
    // 0x3d3a94: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x3d3a94u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x3d3a98: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x3d3a98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3d3a9c: 0x4207a  dsrl        $a0, $a0, 1
    ctx->pc = 0x3d3a9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 1);
    // 0x3d3aa0: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x3d3aa0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x3d3aa4: 0x817fc  dsll32      $v0, $t0, 31
    ctx->pc = 0x3d3aa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << (32 + 31));
    // 0x3d3aa8: 0xc43024  and         $a2, $a2, $a0
    ctx->pc = 0x3d3aa8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x3d3aac: 0x3e00008  jr          $ra
    ctx->pc = 0x3D3AACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D3AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3AACu;
        // 0x3d3ab0: 0xc21025  or          $v0, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D3AACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D3AB4u;
    // 0x3d3ab4: 0x0  nop
    ctx->pc = 0x3d3ab4u;
    // NOP
    ctx->pc = 0x3d3ab8u;
}
