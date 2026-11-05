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

// Function: sub_003D69F0
// Address: 0x3d69f0 - 0x3d6d64
void sub_003D69F0_0x3d69f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D69F0_0x3d69f0");
#endif

    switch (ctx->pc) {
        case 0x3d6b00u: goto label_3d6b00;
        case 0x3d6b0cu: goto label_3d6b0c;
        case 0x3d6b50u: goto label_3d6b50;
        case 0x3d6b70u: goto label_3d6b70;
        case 0x3d6b7cu: goto label_3d6b7c;
        case 0x3d6bb8u: goto label_3d6bb8;
        case 0x3d6bc4u: goto label_3d6bc4;
        case 0x3d6be8u: goto label_3d6be8;
        case 0x3d6c04u: goto label_3d6c04;
        case 0x3d6c1cu: goto label_3d6c1c;
        case 0x3d6c28u: goto label_3d6c28;
        case 0x3d6c8cu: goto label_3d6c8c;
        case 0x3d6cdcu: goto label_3d6cdc;
        case 0x3d6d00u: goto label_3d6d00;
        case 0x3d6d54u: goto label_3d6d54;
        default: break;
    }

    ctx->pc = 0x3d69f0u;

    // 0x3d69f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3d69f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3d69f4: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x3d69f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x3d69f8: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x3d69f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x3d69fc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3d69fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d6a00: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x3d6a00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x3d6a04: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3d6a04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d6a08: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3d6a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3d6a0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3d6a0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d6a10: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x3d6a10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3d6a14: 0x30620040  andi        $v0, $v1, 0x40
    ctx->pc = 0x3d6a14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x3d6a18: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3D6A18u;
    {
        const bool branch_taken_0x3d6a18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D6A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6A18u;
        // 0x3d6a1c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6a18) {
            ctx->pc = 0x3D6A34u;
            goto label_3d6a34;
        }
    }
    ctx->pc = 0x3D6A20u;
    // 0x3d6a20: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x3d6a20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x3d6a24: 0x3062003f  andi        $v0, $v1, 0x3F
    ctx->pc = 0x3d6a24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x3d6a28: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x3d6a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3d6a2c: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x3D6A2Cu;
    {
        const bool branch_taken_0x3d6a2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D6A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6A2Cu;
        // 0x3d6a30: 0x441018  mult        $v0, $v0, $a0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6a2c) {
            ctx->pc = 0x3D6ACCu;
            goto label_3d6acc;
        }
    }
    ctx->pc = 0x3D6A34u;
label_3d6a34:
    // 0x3d6a34: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x3d6a34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x3d6a38: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D6A38u;
    {
        const bool branch_taken_0x3d6a38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D6A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6A38u;
        // 0x3d6a3c: 0x3062003f  andi        $v0, $v1, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6a38) {
            ctx->pc = 0x3D6A4Cu;
            goto label_3d6a4c;
        }
    }
    ctx->pc = 0x3D6A40u;
    // 0x3d6a40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d6a40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d6a44: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x3D6A44u;
    {
        const bool branch_taken_0x3d6a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D6A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6A44u;
        // 0x3d6a48: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6a44) {
            ctx->pc = 0x3D6B04u;
            goto label_3d6b04;
        }
    }
    ctx->pc = 0x3D6A4Cu;
label_3d6a4c:
    // 0x3d6a4c: 0x306200c0  andi        $v0, $v1, 0xC0
    ctx->pc = 0x3d6a4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)192);
    // 0x3d6a50: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3D6A50u;
    {
        const bool branch_taken_0x3d6a50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D6A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6A50u;
        // 0x3d6a54: 0x3062003f  andi        $v0, $v1, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6a50) {
            ctx->pc = 0x3D6A68u;
            goto label_3d6a68;
        }
    }
    ctx->pc = 0x3D6A58u;
    // 0x3d6a58: 0x2221821  addu        $v1, $s1, $v0
    ctx->pc = 0x3d6a58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x3d6a5c: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x3d6a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x3d6a60: 0x100000c2  b           . + 4 + (0xC2 << 2)
    ctx->pc = 0x3D6A60u;
    {
        const bool branch_taken_0x3d6a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D6A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6A60u;
        // 0x3d6a64: 0xa060029c  sb          $zero, 0x29C($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 668), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6a60) {
            ctx->pc = 0x3D6D6Cu;
            return;
        }
    }
    ctx->pc = 0x3D6A68u;
label_3d6a68:
    // 0x3d6a68: 0x2c62002f  sltiu       $v0, $v1, 0x2F
    ctx->pc = 0x3d6a68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)47) ? 1 : 0);
    // 0x3d6a6c: 0x104000bd  beqz        $v0, . + 4 + (0xBD << 2)
    ctx->pc = 0x3D6A6Cu;
    {
        const bool branch_taken_0x3d6a6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D6A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6A6Cu;
        // 0x3d6a70: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6a6c) {
            ctx->pc = 0x3D6D64u;
            return;
        }
    }
    ctx->pc = 0x3D6A74u;
    // 0x3d6a74: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3d6a74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3d6a78: 0x244224c0  addiu       $v0, $v0, 0x24C0
    ctx->pc = 0x3d6a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9408));
    // 0x3d6a7c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3d6a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3d6a80: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3d6a80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3d6a84: 0x800008  jr          $a0
    ctx->pc = 0x3D6A84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3D6A8Cu: goto label_3d6a8c;
            case 0x3D6AA0u: goto label_3d6aa0;
            case 0x3D6AB0u: goto label_3d6ab0;
            case 0x3D6AD8u: goto label_3d6ad8;
            case 0x3D6AF4u: goto label_3d6af4;
            case 0x3D6B44u: goto label_3d6b44;
            case 0x3D6B64u: goto label_3d6b64;
            case 0x3D6BACu: goto label_3d6bac;
            case 0x3D6BDCu: goto label_3d6bdc;
            case 0x3D6BF8u: goto label_3d6bf8;
            case 0x3D6C14u: goto label_3d6c14;
            case 0x3D6C7Cu: goto label_3d6c7c;
            case 0x3D6CE4u: goto label_3d6ce4;
            case 0x3D6D48u: goto label_3d6d48;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D6A84u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3D6A8Cu;
label_3d6a8c:
    // 0x3d6a8c: 0x8a020003  lwl         $v0, 0x3($s0)
    ctx->pc = 0x3d6a8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x3d6a90: 0x9a020000  lwr         $v0, 0x0($s0)
    ctx->pc = 0x3d6a90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x3d6a94: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x3d6a94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x3d6a98: 0x100000b4  b           . + 4 + (0xB4 << 2)
    ctx->pc = 0x3D6A98u;
    {
        const bool branch_taken_0x3d6a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D6A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6A98u;
        // 0x3d6a9c: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6a98) {
            ctx->pc = 0x3D6D6Cu;
            return;
        }
    }
    ctx->pc = 0x3D6AA0u;
label_3d6aa0:
    // 0x3d6aa0: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x3d6aa0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3d6aa4: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3d6aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3d6aa8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3D6AA8u;
    {
        const bool branch_taken_0x3d6aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D6AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6AA8u;
        // 0x3d6aac: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6aa8) {
            ctx->pc = 0x3D6AE8u;
            goto label_3d6ae8;
        }
    }
    ctx->pc = 0x3D6AB0u;
label_3d6ab0:
    // 0x3d6ab0: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x3d6ab0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x3d6ab4: 0x92040000  lbu         $a0, 0x0($s0)
    ctx->pc = 0x3d6ab4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3d6ab8: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x3d6ab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x3d6abc: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x3d6abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3d6ac0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x3d6ac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x3d6ac4: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x3d6ac4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x3d6ac8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3d6ac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_3d6acc:
    // 0x3d6acc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3d6accu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3d6ad0: 0x100000a6  b           . + 4 + (0xA6 << 2)
    ctx->pc = 0x3D6AD0u;
    {
        const bool branch_taken_0x3d6ad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D6AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6AD0u;
        // 0x3d6ad4: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6ad0) {
            ctx->pc = 0x3D6D6Cu;
            return;
        }
    }
    ctx->pc = 0x3D6AD8u;
label_3d6ad8:
    // 0x3d6ad8: 0x8a030003  lwl         $v1, 0x3($s0)
    ctx->pc = 0x3d6ad8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x3d6adc: 0x9a030000  lwr         $v1, 0x0($s0)
    ctx->pc = 0x3d6adcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x3d6ae0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3d6ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3d6ae4: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x3d6ae4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_3d6ae8:
    // 0x3d6ae8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3d6ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3d6aec: 0x1000009f  b           . + 4 + (0x9F << 2)
    ctx->pc = 0x3D6AECu;
    {
        const bool branch_taken_0x3d6aec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D6AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6AECu;
        // 0x3d6af0: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6aec) {
            ctx->pc = 0x3D6D6Cu;
            return;
        }
    }
    ctx->pc = 0x3D6AF4u;
label_3d6af4:
    // 0x3d6af4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d6af4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d6af8: 0xc0f587c  jal         func_3D61F0
    ctx->pc = 0x3D6AF8u;
    SET_GPR_U32(ctx, 31, 0x3D6B00u);
    ctx->pc = 0x3D6AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6AF8u;
    // 0x3d6afc: 0x37a50004  ori         $a1, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D61F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D61F0u, 0x3D6AF8u, 0x3D6B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6B00u;
label_3d6b00:
    // 0x3d6b00: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3d6b00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d6b04:
    // 0x3d6b04: 0xc0f587c  jal         func_3D61F0
    ctx->pc = 0x3D6B04u;
    SET_GPR_U32(ctx, 31, 0x3D6B0Cu);
    ctx->pc = 0x3D6B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6B04u;
    // 0x3d6b08: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D61F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D61F0u, 0x3D6B04u, 0x3D6B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6B0Cu;
label_3d6b0c:
    // 0x3d6b0c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x3d6b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d6b10: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3d6b10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d6b14: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x3d6b14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x3d6b18: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3d6b18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d6b1c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x3d6b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3d6b20: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x3d6b20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x3d6b24: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x3d6b24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3d6b28: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x3d6b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x3d6b2c: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x3d6b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x3d6b30: 0xa046029c  sb          $a2, 0x29C($v0)
    ctx->pc = 0x3d6b30u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 668), (uint8_t)GPR_U32(ctx, 6));
    // 0x3d6b34: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x3d6b34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x3d6b38: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3d6b38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d6b3c: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x3D6B3Cu;
    {
        const bool branch_taken_0x3d6b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D6B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6B3Cu;
        // 0x3d6b40: 0xfc620018  sd          $v0, 0x18($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6b3c) {
            ctx->pc = 0x3D6D6Cu;
            return;
        }
    }
    ctx->pc = 0x3D6B44u;
label_3d6b44:
    // 0x3d6b44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d6b44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d6b48: 0xc0f587c  jal         func_3D61F0
    ctx->pc = 0x3D6B48u;
    SET_GPR_U32(ctx, 31, 0x3D6B50u);
    ctx->pc = 0x3D6B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6B48u;
    // 0x3d6b4c: 0x37a50004  ori         $a1, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D61F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D61F0u, 0x3D6B48u, 0x3D6B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6B50u;
label_3d6b50:
    // 0x3d6b50: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x3d6b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3d6b54: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3d6b54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d6b58: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x3d6b58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x3d6b5c: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x3D6B5Cu;
    {
        const bool branch_taken_0x3d6b5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D6B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6B5Cu;
        // 0x3d6b60: 0xa060029c  sb          $zero, 0x29C($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 668), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6b5c) {
            ctx->pc = 0x3D6D6Cu;
            return;
        }
    }
    ctx->pc = 0x3D6B64u;
label_3d6b64:
    // 0x3d6b64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d6b64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d6b68: 0xc0f587c  jal         func_3D61F0
    ctx->pc = 0x3D6B68u;
    SET_GPR_U32(ctx, 31, 0x3D6B70u);
    ctx->pc = 0x3D6B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6B68u;
    // 0x3d6b6c: 0x37a50004  ori         $a1, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D61F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D61F0u, 0x3D6B68u, 0x3D6B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6B70u;
label_3d6b70:
    // 0x3d6b70: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3d6b70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d6b74: 0xc0f587c  jal         func_3D61F0
    ctx->pc = 0x3D6B74u;
    SET_GPR_U32(ctx, 31, 0x3D6B7Cu);
    ctx->pc = 0x3D6B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6B74u;
    // 0x3d6b78: 0x37a50008  ori         $a1, $sp, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D61F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D61F0u, 0x3D6B74u, 0x3D6B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6B7Cu;
label_3d6b7c:
    // 0x3d6b7c: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x3d6b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3d6b80: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3d6b80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d6b84: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x3d6b84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3d6b88: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3d6b88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3d6b8c: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x3d6b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x3d6b90: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x3d6b90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x3d6b94: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3d6b94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3d6b98: 0xa085029c  sb          $a1, 0x29C($a0)
    ctx->pc = 0x3d6b98u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 668), (uint8_t)GPR_U32(ctx, 5));
    // 0x3d6b9c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x3d6b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x3d6ba0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3d6ba0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3d6ba4: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x3D6BA4u;
    {
        const bool branch_taken_0x3d6ba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D6BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6BA4u;
        // 0x3d6ba8: 0xfc430018  sd          $v1, 0x18($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6ba4) {
            ctx->pc = 0x3D6D6Cu;
            return;
        }
    }
    ctx->pc = 0x3D6BACu;
label_3d6bac:
    // 0x3d6bac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d6bacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d6bb0: 0xc0f587c  jal         func_3D61F0
    ctx->pc = 0x3D6BB0u;
    SET_GPR_U32(ctx, 31, 0x3D6BB8u);
    ctx->pc = 0x3D6BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6BB0u;
    // 0x3d6bb4: 0x37a50004  ori         $a1, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D61F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D61F0u, 0x3D6BB0u, 0x3D6BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6BB8u;
label_3d6bb8:
    // 0x3d6bb8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3d6bb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d6bbc: 0xc0f587c  jal         func_3D61F0
    ctx->pc = 0x3D6BBCu;
    SET_GPR_U32(ctx, 31, 0x3D6BC4u);
    ctx->pc = 0x3D6BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6BBCu;
    // 0x3d6bc0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D61F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D61F0u, 0x3D6BBCu, 0x3D6BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6BC4u;
label_3d6bc4:
    // 0x3d6bc4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3d6bc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d6bc8: 0x97a30004  lhu         $v1, 0x4($sp)
    ctx->pc = 0x3d6bc8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3d6bcc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x3d6bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d6bd0: 0xa6230298  sh          $v1, 0x298($s1)
    ctx->pc = 0x3d6bd0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 664), (uint16_t)GPR_U32(ctx, 3));
    // 0x3d6bd4: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x3D6BD4u;
    {
        const bool branch_taken_0x3d6bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D6BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6BD4u;
        // 0x3d6bd8: 0xfe220008  sd          $v0, 0x8($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6bd4) {
            ctx->pc = 0x3D6D6Cu;
            return;
        }
    }
    ctx->pc = 0x3D6BDCu;
label_3d6bdc:
    // 0x3d6bdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d6bdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d6be0: 0xc0f587c  jal         func_3D61F0
    ctx->pc = 0x3D6BE0u;
    SET_GPR_U32(ctx, 31, 0x3D6BE8u);
    ctx->pc = 0x3D6BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6BE0u;
    // 0x3d6be4: 0x37a50004  ori         $a1, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D61F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D61F0u, 0x3D6BE0u, 0x3D6BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6BE8u;
label_3d6be8:
    // 0x3d6be8: 0x97a30004  lhu         $v1, 0x4($sp)
    ctx->pc = 0x3d6be8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3d6bec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3d6becu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d6bf0: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x3D6BF0u;
    {
        const bool branch_taken_0x3d6bf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D6BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6BF0u;
        // 0x3d6bf4: 0xa6230298  sh          $v1, 0x298($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 664), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6bf0) {
            ctx->pc = 0x3D6D6Cu;
            return;
        }
    }
    ctx->pc = 0x3D6BF8u;
label_3d6bf8:
    // 0x3d6bf8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d6bf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d6bfc: 0xc0f587c  jal         func_3D61F0
    ctx->pc = 0x3D6BFCu;
    SET_GPR_U32(ctx, 31, 0x3D6C04u);
    ctx->pc = 0x3D6C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6BFCu;
    // 0x3d6c00: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D61F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D61F0u, 0x3D6BFCu, 0x3D6C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6C04u;
label_3d6c04:
    // 0x3d6c04: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x3d6c04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d6c08: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3d6c08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d6c0c: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x3D6C0Cu;
    {
        const bool branch_taken_0x3d6c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D6C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6C0Cu;
        // 0x3d6c10: 0xfe230008  sd          $v1, 0x8($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6c0c) {
            ctx->pc = 0x3D6D6Cu;
            return;
        }
    }
    ctx->pc = 0x3D6C14u;
label_3d6c14:
    // 0x3d6c14: 0xc0b241a  jal         func_2C9068
    ctx->pc = 0x3D6C14u;
    SET_GPR_U32(ctx, 31, 0x3D6C1Cu);
    ctx->pc = 0x3D6C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6C14u;
    // 0x3d6c18: 0x240402f8  addiu       $a0, $zero, 0x2F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9068u, 0x3D6C14u, 0x3D6C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6C1Cu;
label_3d6c1c:
    // 0x3d6c1c: 0x262502e0  addiu       $a1, $s1, 0x2E0
    ctx->pc = 0x3d6c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 736));
    // 0x3d6c20: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3d6c20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d6c24: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x3d6c24u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d6c28:
    // 0x3d6c28: 0xdc660000  ld          $a2, 0x0($v1)
    ctx->pc = 0x3d6c28u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3d6c2c: 0xdc670008  ld          $a3, 0x8($v1)
    ctx->pc = 0x3d6c2cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x3d6c30: 0xdc680010  ld          $t0, 0x10($v1)
    ctx->pc = 0x3d6c30u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x3d6c34: 0xdc690018  ld          $t1, 0x18($v1)
    ctx->pc = 0x3d6c34u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x3d6c38: 0xfc860000  sd          $a2, 0x0($a0)
    ctx->pc = 0x3d6c38u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 6));
    // 0x3d6c3c: 0xfc870008  sd          $a3, 0x8($a0)
    ctx->pc = 0x3d6c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 7));
    // 0x3d6c40: 0xfc880010  sd          $t0, 0x10($a0)
    ctx->pc = 0x3d6c40u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 8));
    // 0x3d6c44: 0xfc890018  sd          $t1, 0x18($a0)
    ctx->pc = 0x3d6c44u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 9));
    // 0x3d6c48: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x3d6c48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x3d6c4c: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x3d6c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x3d6c50: 0x0  nop
    ctx->pc = 0x3d6c50u;
    // NOP
    // 0x3d6c54: 0x1465fff4  bne         $v1, $a1, . + 4 + (-0xC << 2)
    ctx->pc = 0x3D6C54u;
    {
        const bool branch_taken_0x3d6c54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x3d6c54) {
            ctx->pc = 0x3D6C28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d6c28;
        }
    }
    ctx->pc = 0x3D6C5Cu;
    // 0x3d6c5c: 0xdc650000  ld          $a1, 0x0($v1)
    ctx->pc = 0x3d6c5cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3d6c60: 0xdc660008  ld          $a2, 0x8($v1)
    ctx->pc = 0x3d6c60u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x3d6c64: 0xdc670010  ld          $a3, 0x10($v1)
    ctx->pc = 0x3d6c64u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x3d6c68: 0xfc850000  sd          $a1, 0x0($a0)
    ctx->pc = 0x3d6c68u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 5));
    // 0x3d6c6c: 0xfc860008  sd          $a2, 0x8($a0)
    ctx->pc = 0x3d6c6cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 6));
    // 0x3d6c70: 0xfc870010  sd          $a3, 0x10($a0)
    ctx->pc = 0x3d6c70u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 7));
    // 0x3d6c74: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x3D6C74u;
    {
        const bool branch_taken_0x3d6c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D6C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6C74u;
        // 0x3d6c78: 0xae2202f0  sw          $v0, 0x2F0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 752), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6c74) {
            ctx->pc = 0x3D6D6Cu;
            return;
        }
    }
    ctx->pc = 0x3D6C7Cu;
label_3d6c7c:
    // 0x3d6c7c: 0x8e2402f0  lw          $a0, 0x2F0($s1)
    ctx->pc = 0x3d6c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 752)));
    // 0x3d6c80: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3d6c80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d6c84: 0x248202e0  addiu       $v0, $a0, 0x2E0
    ctx->pc = 0x3d6c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 736));
    // 0x3d6c88: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x3d6c88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d6c8c:
    // 0x3d6c8c: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x3d6c8cu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3d6c90: 0xdcc30008  ld          $v1, 0x8($a2)
    ctx->pc = 0x3d6c90u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x3d6c94: 0xdcc70010  ld          $a3, 0x10($a2)
    ctx->pc = 0x3d6c94u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x3d6c98: 0xdcc80018  ld          $t0, 0x18($a2)
    ctx->pc = 0x3d6c98u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x3d6c9c: 0xfca90000  sd          $t1, 0x0($a1)
    ctx->pc = 0x3d6c9cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 9));
    // 0x3d6ca0: 0xfca30008  sd          $v1, 0x8($a1)
    ctx->pc = 0x3d6ca0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 3));
    // 0x3d6ca4: 0xfca70010  sd          $a3, 0x10($a1)
    ctx->pc = 0x3d6ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 7));
    // 0x3d6ca8: 0xfca80018  sd          $t0, 0x18($a1)
    ctx->pc = 0x3d6ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 8));
    // 0x3d6cac: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x3d6cacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x3d6cb0: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x3d6cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x3d6cb4: 0x0  nop
    ctx->pc = 0x3d6cb4u;
    // NOP
    // 0x3d6cb8: 0x14c2fff4  bne         $a2, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x3D6CB8u;
    {
        const bool branch_taken_0x3d6cb8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x3d6cb8) {
            ctx->pc = 0x3D6C8Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d6c8c;
        }
    }
    ctx->pc = 0x3D6CC0u;
    // 0x3d6cc0: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x3d6cc0u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3d6cc4: 0xdcc20008  ld          $v0, 0x8($a2)
    ctx->pc = 0x3d6cc4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x3d6cc8: 0xdcc30010  ld          $v1, 0x10($a2)
    ctx->pc = 0x3d6cc8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x3d6ccc: 0xfca90000  sd          $t1, 0x0($a1)
    ctx->pc = 0x3d6cccu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 9));
    // 0x3d6cd0: 0xfca20008  sd          $v0, 0x8($a1)
    ctx->pc = 0x3d6cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 2));
    // 0x3d6cd4: 0xc0b2524  jal         func_2C9490
    ctx->pc = 0x3D6CD4u;
    SET_GPR_U32(ctx, 31, 0x3D6CDCu);
    ctx->pc = 0x3D6CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6CD4u;
    // 0x3d6cd8: 0xfca30010  sd          $v1, 0x10($a1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9490u, 0x3D6CD4u, 0x3D6CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6CDCu;
label_3d6cdc:
    // 0x3d6cdc: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x3D6CDCu;
    {
        const bool branch_taken_0x3d6cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D6CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6CDCu;
        // 0x3d6ce0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6cdc) {
            ctx->pc = 0x3D6D70u;
            return;
        }
    }
    ctx->pc = 0x3D6CE4u;
label_3d6ce4:
    // 0x3d6ce4: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x3d6ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3d6ce8: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x3d6ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3d6cec: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x3d6cecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x3d6cf0: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x3d6cf0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3d6cf4: 0x2629029c  addiu       $t1, $s1, 0x29C
    ctx->pc = 0x3d6cf4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 668));
    // 0x3d6cf8: 0x26280018  addiu       $t0, $s1, 0x18
    ctx->pc = 0x3d6cf8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x3d6cfc: 0x0  nop
    ctx->pc = 0x3d6cfcu;
    // NOP
label_3d6d00:
    // 0x3d6d00: 0x2482fff0  addiu       $v0, $a0, -0x10
    ctx->pc = 0x3d6d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    // 0x3d6d04: 0x24860001  addiu       $a2, $a0, 0x1
    ctx->pc = 0x3d6d04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3d6d08: 0x1272821  addu        $a1, $t1, $a3
    ctx->pc = 0x3d6d08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x3d6d0c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3d6d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3d6d10: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3d6d10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d6d14: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x3d6d14u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x3d6d18: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x3d6d18u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d6d1c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3d6d1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3d6d20: 0x1042021  addu        $a0, $t0, $a0
    ctx->pc = 0x3d6d20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x3d6d24: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x3d6d24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x3d6d28: 0xafa60004  sw          $a2, 0x4($sp)
    ctx->pc = 0x3d6d28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    // 0x3d6d2c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x3d6d2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d6d30: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x3d6d30u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
    // 0x3d6d34: 0x2ce20020  sltiu       $v0, $a3, 0x20
    ctx->pc = 0x3d6d34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x3d6d38: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x3D6D38u;
    {
        const bool branch_taken_0x3d6d38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D6D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6D38u;
        // 0x3d6d3c: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6d38) {
            ctx->pc = 0x3D6D00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d6d00;
        }
    }
    ctx->pc = 0x3D6D40u;
    // 0x3d6d40: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3D6D40u;
    {
        const bool branch_taken_0x3d6d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D6D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6D40u;
        // 0x3d6d44: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6d40) {
            ctx->pc = 0x3D6D70u;
            return;
        }
    }
    ctx->pc = 0x3D6D48u;
label_3d6d48:
    // 0x3d6d48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d6d48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d6d4c: 0xc0f587c  jal         func_3D61F0
    ctx->pc = 0x3D6D4Cu;
    SET_GPR_U32(ctx, 31, 0x3D6D54u);
    ctx->pc = 0x3D6D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6D4Cu;
    // 0x3d6d50: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D61F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D61F0u, 0x3D6D4Cu, 0x3D6D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6D54u;
label_3d6d54:
    // 0x3d6d54: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x3d6d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d6d58: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3d6d58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d6d5c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3D6D5Cu;
    {
        const bool branch_taken_0x3d6d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D6D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6D5Cu;
        // 0x3d6d60: 0xfe230010  sd          $v1, 0x10($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 16), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6d5c) {
            ctx->pc = 0x3D6D6Cu;
            return;
        }
    }
    ctx->pc = 0x3D6D64u;
}
