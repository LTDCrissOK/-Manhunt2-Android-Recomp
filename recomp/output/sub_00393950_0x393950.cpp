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

// Function: sub_00393950
// Address: 0x393950 - 0x393b58
void sub_00393950_0x393950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00393950_0x393950");
#endif

    switch (ctx->pc) {
        case 0x393a14u: goto label_393a14;
        case 0x393a20u: goto label_393a20;
        case 0x393ab4u: goto label_393ab4;
        case 0x393b24u: goto label_393b24;
        case 0x393b30u: goto label_393b30;
        default: break;
    }

    ctx->pc = 0x393950u;

    // 0x393950: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x393950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x393954: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x393954u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x393958: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x393958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x39395c: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x39395cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x393960: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x393960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x393964: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x393964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x393968: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x393968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x39396c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x39396cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x393970: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x393970u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x393974: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x393974u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x393978: 0x2303f  dsra32      $a2, $v0, 0
    ctx->pc = 0x393978u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x39397c: 0x61503  sra         $v0, $a2, 20
    ctx->pc = 0x39397cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 20));
    // 0x393980: 0x304307ff  andi        $v1, $v0, 0x7FF
    ctx->pc = 0x393980u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x393984: 0x2468fc01  addiu       $t0, $v1, -0x3FF
    ctx->pc = 0x393984u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966273));
    // 0x393988: 0x29020014  slti        $v0, $t0, 0x14
    ctx->pc = 0x393988u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x39398c: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x39398Cu;
    {
        const bool branch_taken_0x39398c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x393990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39398Cu;
        // 0x393990: 0x69fc2  srl         $s3, $a2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39398c) {
            ctx->pc = 0x393A94u;
            goto label_393a94;
        }
    }
    ctx->pc = 0x393994u;
    // 0x393994: 0x501002c  bgez        $t0, . + 4 + (0x2C << 2)
    ctx->pc = 0x393994u;
    {
        const bool branch_taken_0x393994 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x393998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393994u;
        // 0x393998: 0x3c02000f  lui         $v0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393994) {
            ctx->pc = 0x393A48u;
            goto label_393a48;
        }
    }
    ctx->pc = 0x39399Cu;
    // 0x39399c: 0x3c127fff  lui         $s2, 0x7FFF
    ctx->pc = 0x39399cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)32767 << 16));
    // 0x3939a0: 0x3652ffff  ori         $s2, $s2, 0xFFFF
    ctx->pc = 0x3939a0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x3939a4: 0xd21024  and         $v0, $a2, $s2
    ctx->pc = 0x3939a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 18));
    // 0x3939a8: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x3939a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x3939ac: 0x10400049  beqz        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x3939ACu;
    {
        const bool branch_taken_0x3939ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3939B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3939ACu;
        // 0x3939b0: 0x3c02000f  lui         $v0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3939ac) {
            ctx->pc = 0x393AD4u;
            goto label_393ad4;
        }
    }
    ctx->pc = 0x3939B4u;
    // 0x3939b4: 0x3c03fffe  lui         $v1, 0xFFFE
    ctx->pc = 0x3939b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65534 << 16));
    // 0x3939b8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3939b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3939bc: 0x3c040008  lui         $a0, 0x8
    ctx->pc = 0x3939bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8 << 16));
    // 0x3939c0: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x3939c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x3939c4: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x3939c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x3939c8: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x3939c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x3939cc: 0x71023  negu        $v0, $a3
    ctx->pc = 0x3939ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
    // 0x3939d0: 0xe21025  or          $v0, $a3, $v0
    ctx->pc = 0x3939d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x3939d4: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x3939d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x3939d8: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x3939d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x3939dc: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x3939dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x3939e0: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x3939e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3939e4: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x3939e4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    // 0x3939e8: 0x11883e  dsrl32      $s1, $s1, 0
    ctx->pc = 0x3939e8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) >> (32 + 0));
    // 0x3939ec: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x3939ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x3939f0: 0x711824  and         $v1, $v1, $s1
    ctx->pc = 0x3939f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 17));
    // 0x3939f4: 0x622825  or          $a1, $v1, $v0
    ctx->pc = 0x3939f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3939f8: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3939f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3939fc: 0x2484a480  addiu       $a0, $a0, -0x5B80
    ctx->pc = 0x3939fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943872));
    // 0x393a00: 0x1310c0  sll         $v0, $s3, 3
    ctx->pc = 0x393a00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x393a04: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x393a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x393a08: 0xdc500000  ld          $s0, 0x0($v0)
    ctx->pc = 0x393a08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x393a0c: 0xc0f4f66  jal         func_3D3D98
    ctx->pc = 0x393A0Cu;
    SET_GPR_U32(ctx, 31, 0x393A14u);
    ctx->pc = 0x393A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393A0Cu;
    // 0x393a10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3D98u, 0x393A0Cu, 0x393A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393A14u;
label_393a14:
    // 0x393a14: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x393a14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x393a18: 0xc0f4f7c  jal         func_3D3DF0
    ctx->pc = 0x393A18u;
    SET_GPR_U32(ctx, 31, 0x393A20u);
    ctx->pc = 0x393A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393A18u;
    // 0x393a1c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3DF0u, 0x393A18u, 0x393A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393A20u;
label_393a20:
    // 0x393a20: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x393a20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x393a24: 0x2303f  dsra32      $a2, $v0, 0
    ctx->pc = 0x393a24u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x393a28: 0xd21824  and         $v1, $a2, $s2
    ctx->pc = 0x393a28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 18));
    // 0x393a2c: 0x1317c0  sll         $v0, $s3, 31
    ctx->pc = 0x393a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 31));
    // 0x393a30: 0x912024  and         $a0, $a0, $s1
    ctx->pc = 0x393a30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 17));
    // 0x393a34: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x393a34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x393a38: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x393a38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x393a3c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x393a3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x393a40: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x393A40u;
    {
        const bool branch_taken_0x393a40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x393A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393A40u;
        // 0x393a44: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393a40) {
            ctx->pc = 0x393B30u;
            goto label_393b30;
        }
    }
    ctx->pc = 0x393A48u;
label_393a48:
    // 0x393a48: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x393a48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x393a4c: 0x1022007  srav        $a0, $v0, $t0
    ctx->pc = 0x393a4cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 8) & 0x1F));
    // 0x393a50: 0xc41824  and         $v1, $a2, $a0
    ctx->pc = 0x393a50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x393a54: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x393a54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x393a58: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x393A58u;
    {
        const bool branch_taken_0x393a58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x393A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393A58u;
        // 0x393a5c: 0x42042  srl         $a0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393a58) {
            ctx->pc = 0x393AD4u;
            goto label_393ad4;
        }
    }
    ctx->pc = 0x393A60u;
    // 0x393a60: 0xc41024  and         $v0, $a2, $a0
    ctx->pc = 0x393a60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x393a64: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x393a64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x393a68: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x393A68u;
    {
        const bool branch_taken_0x393a68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x393A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393A68u;
        // 0x393a6c: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393a68) {
            ctx->pc = 0x393AF8u;
            goto label_393af8;
        }
    }
    ctx->pc = 0x393A70u;
    // 0x393a70: 0x15020003  bne         $t0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x393A70u;
    {
        const bool branch_taken_0x393a70 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x393A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393A70u;
        // 0x393a74: 0x41827  nor         $v1, $zero, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393a70) {
            ctx->pc = 0x393A80u;
            goto label_393a80;
        }
    }
    ctx->pc = 0x393A78u;
    // 0x393a78: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x393A78u;
    {
        const bool branch_taken_0x393a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x393A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393A78u;
        // 0x393a7c: 0x3c074000  lui         $a3, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393a78) {
            ctx->pc = 0x393AF8u;
            goto label_393af8;
        }
    }
    ctx->pc = 0x393A80u;
label_393a80:
    // 0x393a80: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x393a80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x393a84: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x393a84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x393a88: 0x1021007  srav        $v0, $v0, $t0
    ctx->pc = 0x393a88u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 8) & 0x1F));
    // 0x393a8c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x393A8Cu;
    {
        const bool branch_taken_0x393a8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x393A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393A8Cu;
        // 0x393a90: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393a8c) {
            ctx->pc = 0x393AF8u;
            goto label_393af8;
        }
    }
    ctx->pc = 0x393A94u;
label_393a94:
    // 0x393a94: 0x29020034  slti        $v0, $t0, 0x34
    ctx->pc = 0x393a94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)52) ? 1 : 0);
    // 0x393a98: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x393A98u;
    {
        const bool branch_taken_0x393a98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x393a98) {
            ctx->pc = 0x393A9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x393A98u;
            // 0x393a9c: 0x2468fbed  addiu       $t0, $v1, -0x413 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966253));
            ctx->in_delay_slot = false;
            ctx->pc = 0x393ABCu;
            goto label_393abc;
        }
    }
    ctx->pc = 0x393AA0u;
    // 0x393aa0: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x393aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x393aa4: 0x15020022  bne         $t0, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x393AA4u;
    {
        const bool branch_taken_0x393aa4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x393AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393AA4u;
        // 0x393aa8: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393aa4) {
            ctx->pc = 0x393B30u;
            goto label_393b30;
        }
    }
    ctx->pc = 0x393AACu;
    // 0x393aac: 0xc0f4f66  jal         func_3D3D98
    ctx->pc = 0x393AACu;
    SET_GPR_U32(ctx, 31, 0x393AB4u);
    ctx->pc = 0x393AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393AACu;
    // 0x393ab0: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3D98u, 0x393AACu, 0x393AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393AB4u;
label_393ab4:
    // 0x393ab4: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x393AB4u;
    {
        const bool branch_taken_0x393ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x393AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393AB4u;
        // 0x393ab8: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393ab4) {
            ctx->pc = 0x393B34u;
            goto label_393b34;
        }
    }
    ctx->pc = 0x393ABCu;
label_393abc:
    // 0x393abc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x393abcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x393ac0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x393ac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x393ac4: 0x1022006  srlv        $a0, $v0, $t0
    ctx->pc = 0x393ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 8) & 0x1F));
    // 0x393ac8: 0xe41824  and         $v1, $a3, $a0
    ctx->pc = 0x393ac8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
    // 0x393acc: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x393ACCu;
    {
        const bool branch_taken_0x393acc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x393AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393ACCu;
        // 0x393ad0: 0x42042  srl         $a0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393acc) {
            ctx->pc = 0x393ADCu;
            goto label_393adc;
        }
    }
    ctx->pc = 0x393AD4u;
label_393ad4:
    // 0x393ad4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x393AD4u;
    {
        const bool branch_taken_0x393ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x393AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393AD4u;
        // 0x393ad8: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393ad4) {
            ctx->pc = 0x393B30u;
            goto label_393b30;
        }
    }
    ctx->pc = 0x393ADCu;
label_393adc:
    // 0x393adc: 0xe41024  and         $v0, $a3, $a0
    ctx->pc = 0x393adcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
    // 0x393ae0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x393AE0u;
    {
        const bool branch_taken_0x393ae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x393AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393AE0u;
        // 0x393ae4: 0x41827  nor         $v1, $zero, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393ae0) {
            ctx->pc = 0x393AF8u;
            goto label_393af8;
        }
    }
    ctx->pc = 0x393AE8u;
    // 0x393ae8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x393ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x393aec: 0xe31824  and         $v1, $a3, $v1
    ctx->pc = 0x393aecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x393af0: 0x1021007  srav        $v0, $v0, $t0
    ctx->pc = 0x393af0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 8) & 0x1F));
    // 0x393af4: 0x623825  or          $a3, $v1, $v0
    ctx->pc = 0x393af4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_393af8:
    // 0x393af8: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x393af8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
    // 0x393afc: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x393afcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x393b00: 0x6483c  dsll32      $t1, $a2, 0
    ctx->pc = 0x393b00u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) << (32 + 0));
    // 0x393b04: 0x1222825  or          $a1, $t1, $v0
    ctx->pc = 0x393b04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x393b08: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x393b08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x393b0c: 0x2463a480  addiu       $v1, $v1, -0x5B80
    ctx->pc = 0x393b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943872));
    // 0x393b10: 0x1310c0  sll         $v0, $s3, 3
    ctx->pc = 0x393b10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x393b14: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x393b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x393b18: 0xdc500000  ld          $s0, 0x0($v0)
    ctx->pc = 0x393b18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x393b1c: 0xc0f4f66  jal         func_3D3D98
    ctx->pc = 0x393B1Cu;
    SET_GPR_U32(ctx, 31, 0x393B24u);
    ctx->pc = 0x393B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393B1Cu;
    // 0x393b20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3D98u, 0x393B1Cu, 0x393B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393B24u;
label_393b24:
    // 0x393b24: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x393b24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x393b28: 0xc0f4f7c  jal         func_3D3DF0
    ctx->pc = 0x393B28u;
    SET_GPR_U32(ctx, 31, 0x393B30u);
    ctx->pc = 0x393B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393B28u;
    // 0x393b2c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3DF0u, 0x393B28u, 0x393B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393B30u;
label_393b30:
    // 0x393b30: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x393b30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_393b34:
    // 0x393b34: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x393b34u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x393b38: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x393b38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x393b3c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x393b3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x393b40: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x393b40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x393b44: 0x3e00008  jr          $ra
    ctx->pc = 0x393B44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x393B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393B44u;
        // 0x393b48: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x393B44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x393B4Cu;
    // 0x393b4c: 0x0  nop
    ctx->pc = 0x393b4cu;
    // NOP
    // 0x393b50: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x393b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x393b54: 0x0  nop
    ctx->pc = 0x393b54u;
    // NOP
    ctx->pc = 0x393b58u;
}
