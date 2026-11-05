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

// Function: sub_002D9DA0
// Address: 0x2d9da0 - 0x2da070
void sub_002D9DA0_0x2d9da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D9DA0_0x2d9da0");
#endif

    switch (ctx->pc) {
        case 0x2d9dd4u: goto label_2d9dd4;
        case 0x2d9ddcu: goto label_2d9ddc;
        case 0x2d9df0u: goto label_2d9df0;
        case 0x2d9e60u: goto label_2d9e60;
        case 0x2d9e70u: goto label_2d9e70;
        case 0x2d9e8cu: goto label_2d9e8c;
        case 0x2d9eb8u: goto label_2d9eb8;
        case 0x2d9f38u: goto label_2d9f38;
        case 0x2d9f74u: goto label_2d9f74;
        case 0x2d9fa4u: goto label_2d9fa4;
        case 0x2d9fb4u: goto label_2d9fb4;
        case 0x2da014u: goto label_2da014;
        case 0x2da02cu: goto label_2da02c;
        case 0x2da034u: goto label_2da034;
        case 0x2da03cu: goto label_2da03c;
        default: break;
    }

    ctx->pc = 0x2d9da0u;

    // 0x2d9da0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2d9da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2d9da4: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2d9da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2d9da8: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x2d9da8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x2d9dac: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x2d9dacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x2d9db0: 0x2610b0d8  addiu       $s0, $s0, -0x4F28
    ctx->pc = 0x2d9db0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294947032));
    // 0x2d9db4: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x2d9db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x2d9db8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d9db8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9dbc: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x2d9dbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x2d9dc0: 0xe7b70068  swc1        $f23, 0x68($sp)
    ctx->pc = 0x2d9dc0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2d9dc4: 0xe7b60060  swc1        $f22, 0x60($sp)
    ctx->pc = 0x2d9dc4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2d9dc8: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x2d9dc8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2d9dcc: 0xc09f232  jal         func_27C8C8
    ctx->pc = 0x2D9DCCu;
    SET_GPR_U32(ctx, 31, 0x2D9DD4u);
    ctx->pc = 0x2D9DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9DCCu;
    // 0x2d9dd0: 0xe7b40050  swc1        $f20, 0x50($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x27C8C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27C8C8u, 0x2D9DCCu, 0x2D9DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9DD4u;
label_2d9dd4:
    // 0x2d9dd4: 0xc09f296  jal         func_27CA58
    ctx->pc = 0x2D9DD4u;
    SET_GPR_U32(ctx, 31, 0x2D9DDCu);
    ctx->pc = 0x2D9DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9DD4u;
    // 0x2d9dd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27CA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27CA58u, 0x2D9DD4u, 0x2D9DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9DDCu;
label_2d9ddc:
    // 0x2d9ddc: 0x10400099  beqz        $v0, . + 4 + (0x99 << 2)
    ctx->pc = 0x2D9DDCu;
    {
        const bool branch_taken_0x2d9ddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9DDCu;
        // 0x2d9de0: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9ddc) {
            ctx->pc = 0x2DA044u;
            goto label_2da044;
        }
    }
    ctx->pc = 0x2D9DE4u;
    // 0x2d9de4: 0x2450b0e0  addiu       $s0, $v0, -0x4F20
    ctx->pc = 0x2d9de4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947040));
    // 0x2d9de8: 0xc0b6b0a  jal         func_2DAC28
    ctx->pc = 0x2D9DE8u;
    SET_GPR_U32(ctx, 31, 0x2D9DF0u);
    ctx->pc = 0x2D9DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9DE8u;
    // 0x2d9dec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DAC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DAC28u, 0x2D9DE8u, 0x2D9DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9DF0u;
label_2d9df0:
    // 0x2d9df0: 0x10400094  beqz        $v0, . + 4 + (0x94 << 2)
    ctx->pc = 0x2D9DF0u;
    {
        const bool branch_taken_0x2d9df0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9DF0u;
        // 0x2d9df4: 0x24020fa0  addiu       $v0, $zero, 0xFA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9df0) {
            ctx->pc = 0x2DA044u;
            goto label_2da044;
        }
    }
    ctx->pc = 0x2D9DF8u;
    // 0x2d9df8: 0x3c013f35  lui         $at, 0x3F35
    ctx->pc = 0x2d9df8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16181 << 16));
    // 0x2d9dfc: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x2d9dfcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x2d9e00: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2d9e00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d9e04: 0x3c013f59  lui         $at, 0x3F59
    ctx->pc = 0x2d9e04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16217 << 16));
    // 0x2d9e08: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2d9e08u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x2d9e0c: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x2d9e0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x2d9e10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d9e10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9e14: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x2d9e14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x2d9e18: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2d9e18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2d9e1c: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x2d9e1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x2d9e20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d9e20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9e24: 0x3c013d97  lui         $at, 0x3D97
    ctx->pc = 0x2d9e24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15767 << 16));
    // 0x2d9e28: 0x34218d50  ori         $at, $at, 0x8D50
    ctx->pc = 0x2d9e28u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36176);
    // 0x2d9e2c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d9e2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d9e30: 0x3c013db8  lui         $at, 0x3DB8
    ctx->pc = 0x2d9e30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15800 << 16));
    // 0x2d9e34: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x2d9e34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
    // 0x2d9e38: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2d9e38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2d9e3c: 0x4600bb86  mov.s       $f14, $f23
    ctx->pc = 0x2d9e3cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[23]);
    // 0x2d9e40: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2d9e40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x2d9e44: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x2d9e44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2d9e48: 0xe60063cc  swc1        $f0, 0x63CC($s0)
    ctx->pc = 0x2d9e48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 25548), bits); }
    // 0x2d9e4c: 0xae0263e8  sw          $v0, 0x63E8($s0)
    ctx->pc = 0x2d9e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 25576), GPR_U32(ctx, 2));
    // 0x2d9e50: 0xa20063e4  sb          $zero, 0x63E4($s0)
    ctx->pc = 0x2d9e50u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 25572), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d9e54: 0xe60063c8  swc1        $f0, 0x63C8($s0)
    ctx->pc = 0x2d9e54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 25544), bits); }
    // 0x2d9e58: 0xc0b6b86  jal         func_2DAE18
    ctx->pc = 0x2D9E58u;
    SET_GPR_U32(ctx, 31, 0x2D9E60u);
    ctx->pc = 0x2D9E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9E58u;
    // 0x2d9e5c: 0xe61663f4  swc1        $f22, 0x63F4($s0) (Delay Slot)
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 25588), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DAE18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DAE18u, 0x2D9E58u, 0x2D9E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9E60u;
label_2d9e60:
    // 0x2d9e60: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x2d9e60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
    // 0x2d9e64: 0x247114e0  addiu       $s1, $v1, 0x14E0
    ctx->pc = 0x2d9e64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 5344));
    // 0x2d9e68: 0xc0b6b0a  jal         func_2DAC28
    ctx->pc = 0x2D9E68u;
    SET_GPR_U32(ctx, 31, 0x2D9E70u);
    ctx->pc = 0x2D9E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9E68u;
    // 0x2d9e6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DAC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DAC28u, 0x2D9E68u, 0x2D9E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9E70u;
label_2d9e70:
    // 0x2d9e70: 0x10400074  beqz        $v0, . + 4 + (0x74 << 2)
    ctx->pc = 0x2D9E70u;
    {
        const bool branch_taken_0x2d9e70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9E70u;
        // 0x2d9e74: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9e70) {
            ctx->pc = 0x2DA044u;
            goto label_2da044;
        }
    }
    ctx->pc = 0x2D9E78u;
    // 0x2d9e78: 0x240309c4  addiu       $v1, $zero, 0x9C4
    ctx->pc = 0x2d9e78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2500));
    // 0x2d9e7c: 0x245078e0  addiu       $s0, $v0, 0x78E0
    ctx->pc = 0x2d9e7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 30944));
    // 0x2d9e80: 0xae2363b0  sw          $v1, 0x63B0($s1)
    ctx->pc = 0x2d9e80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 25520), GPR_U32(ctx, 3));
    // 0x2d9e84: 0xc0b6b0a  jal         func_2DAC28
    ctx->pc = 0x2D9E84u;
    SET_GPR_U32(ctx, 31, 0x2D9E8Cu);
    ctx->pc = 0x2D9E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9E84u;
    // 0x2d9e88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DAC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DAC28u, 0x2D9E84u, 0x2D9E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9E8Cu;
label_2d9e8c:
    // 0x2d9e8c: 0x1040006d  beqz        $v0, . + 4 + (0x6D << 2)
    ctx->pc = 0x2D9E8Cu;
    {
        const bool branch_taken_0x2d9e8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9E8Cu;
        // 0x2d9e90: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9e8c) {
            ctx->pc = 0x2DA044u;
            goto label_2da044;
        }
    }
    ctx->pc = 0x2D9E94u;
    // 0x2d9e94: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d9e94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d9e98: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2d9e98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2d9e9c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2d9e9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9ea0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d9ea0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9ea4: 0xe6000434  swc1        $f0, 0x434($s0)
    ctx->pc = 0x2d9ea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1076), bits); }
    // 0x2d9ea8: 0xe6000438  swc1        $f0, 0x438($s0)
    ctx->pc = 0x2d9ea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1080), bits); }
    // 0x2d9eac: 0xa21263e4  sb          $s2, 0x63E4($s0)
    ctx->pc = 0x2d9eacu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 25572), (uint8_t)GPR_U32(ctx, 18));
    // 0x2d9eb0: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x2D9EB0u;
    SET_GPR_U32(ctx, 31, 0x2D9EB8u);
    ctx->pc = 0x2D9EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9EB0u;
    // 0x2d9eb4: 0xa200043c  sb          $zero, 0x43C($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1084), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x2D9EB0u, 0x2D9EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9EB8u;
label_2d9eb8:
    // 0x2d9eb8: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x2d9eb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x2d9ebc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2d9ebcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2d9ec0: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2d9ec0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2d9ec4: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x2d9ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x2d9ec8: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x2d9ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
    // 0x2d9ecc: 0xa3a20003  sb          $v0, 0x3($sp)
    ctx->pc = 0x2d9eccu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x2d9ed0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d9ed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9ed4: 0x3c013e8a  lui         $at, 0x3E8A
    ctx->pc = 0x2d9ed4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16010 << 16));
    // 0x2d9ed8: 0x34213d71  ori         $at, $at, 0x3D71
    ctx->pc = 0x2d9ed8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)15729);
    // 0x2d9edc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d9edcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d9ee0: 0x4600abc6  mov.s       $f15, $f21
    ctx->pc = 0x2d9ee0u;
    ctx->f[15] = FPU_MOV_S(ctx->f[21]);
    // 0x2d9ee4: 0x8ba20003  lwl         $v0, 0x3($sp)
    ctx->pc = 0x2d9ee4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x2d9ee8: 0x9ba20000  lwr         $v0, 0x0($sp)
    ctx->pc = 0x2d9ee8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x2d9eec: 0xaa0263d3  swl         $v0, 0x63D3($s0)
    ctx->pc = 0x2d9eecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 25555); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2d9ef0: 0xba0263d0  swr         $v0, 0x63D0($s0)
    ctx->pc = 0x2d9ef0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 25552); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2d9ef4: 0x246714b8  addiu       $a3, $v1, 0x14B8
    ctx->pc = 0x2d9ef4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 5304));
    // 0x2d9ef8: 0x88e80003  lwl         $t0, 0x3($a3)
    ctx->pc = 0x2d9ef8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 8) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 8, (int32_t)merged); }
    // 0x2d9efc: 0x98e80000  lwr         $t0, 0x0($a3)
    ctx->pc = 0x2d9efcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 8) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 8) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 8, merged64); }
    // 0x2d9f00: 0xaba80013  swl         $t0, 0x13($sp)
    ctx->pc = 0x2d9f00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2d9f04: 0xbba80010  swr         $t0, 0x10($sp)
    ctx->pc = 0x2d9f04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2d9f08: 0x3c013f34  lui         $at, 0x3F34
    ctx->pc = 0x2d9f08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16180 << 16));
    // 0x2d9f0c: 0x3421fdf4  ori         $at, $at, 0xFDF4
    ctx->pc = 0x2d9f0cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65012);
    // 0x2d9f10: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2d9f10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2d9f14: 0x3c013edc  lui         $at, 0x3EDC
    ctx->pc = 0x2d9f14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16092 << 16));
    // 0x2d9f18: 0x342128f6  ori         $at, $at, 0x28F6
    ctx->pc = 0x2d9f18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)10486);
    // 0x2d9f1c: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x2d9f1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2d9f20: 0x8ba80013  lwl         $t0, 0x13($sp)
    ctx->pc = 0x2d9f20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 8) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 8, (int32_t)merged); }
    // 0x2d9f24: 0x9ba80010  lwr         $t0, 0x10($sp)
    ctx->pc = 0x2d9f24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 8) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 8) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 8, merged64); }
    // 0x2d9f28: 0xaa0863d7  swl         $t0, 0x63D7($s0)
    ctx->pc = 0x2d9f28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 25559); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2d9f2c: 0xba0863d4  swr         $t0, 0x63D4($s0)
    ctx->pc = 0x2d9f2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 25556); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2d9f30: 0xc0b6b86  jal         func_2DAE18
    ctx->pc = 0x2D9F30u;
    SET_GPR_U32(ctx, 31, 0x2D9F38u);
    ctx->pc = 0x2D9F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9F30u;
    // 0x2d9f34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DAE18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DAE18u, 0x2D9F30u, 0x2D9F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9F38u;
label_2d9f38:
    // 0x2d9f38: 0x3c013f38  lui         $at, 0x3F38
    ctx->pc = 0x2d9f38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16184 << 16));
    // 0x2d9f3c: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x2d9f3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
    // 0x2d9f40: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2d9f40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2d9f44: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x2d9f44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x2d9f48: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2d9f48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d9f4c: 0x2451dce0  addiu       $s1, $v0, -0x2320
    ctx->pc = 0x2d9f4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2d9f50: 0x24032710  addiu       $v1, $zero, 0x2710
    ctx->pc = 0x2d9f50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    // 0x2d9f54: 0xe61663f4  swc1        $f22, 0x63F4($s0)
    ctx->pc = 0x2d9f54u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 25588), bits); }
    // 0x2d9f58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d9f58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9f5c: 0xae0363b0  sw          $v1, 0x63B0($s0)
    ctx->pc = 0x2d9f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 25520), GPR_U32(ctx, 3));
    // 0x2d9f60: 0xae0563f0  sw          $a1, 0x63F0($s0)
    ctx->pc = 0x2d9f60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 25584), GPR_U32(ctx, 5));
    // 0x2d9f64: 0xae0563c4  sw          $a1, 0x63C4($s0)
    ctx->pc = 0x2d9f64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 25540), GPR_U32(ctx, 5));
    // 0x2d9f68: 0xe61463c8  swc1        $f20, 0x63C8($s0)
    ctx->pc = 0x2d9f68u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 25544), bits); }
    // 0x2d9f6c: 0xc0b6b0a  jal         func_2DAC28
    ctx->pc = 0x2D9F6Cu;
    SET_GPR_U32(ctx, 31, 0x2D9F74u);
    ctx->pc = 0x2D9F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9F6Cu;
    // 0x2d9f70: 0xe61463cc  swc1        $f20, 0x63CC($s0) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 25548), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DAC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DAC28u, 0x2D9F6Cu, 0x2D9F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9F74u;
label_2d9f74:
    // 0x2d9f74: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x2D9F74u;
    {
        const bool branch_taken_0x2d9f74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9F74u;
        // 0x2d9f78: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9f74) {
            ctx->pc = 0x2DA044u;
            goto label_2da044;
        }
    }
    ctx->pc = 0x2D9F7Cu;
    // 0x2d9f7c: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x2d9f7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x2d9f80: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2d9f80u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x2d9f84: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2d9f84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2d9f88: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x2d9f88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
    // 0x2d9f8c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2d9f8cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x2d9f90: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x2d9f90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2d9f94: 0x4600bbc6  mov.s       $f15, $f23
    ctx->pc = 0x2d9f94u;
    ctx->f[15] = FPU_MOV_S(ctx->f[23]);
    // 0x2d9f98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d9f98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9f9c: 0xc0b6b86  jal         func_2DAE18
    ctx->pc = 0x2D9F9Cu;
    SET_GPR_U32(ctx, 31, 0x2D9FA4u);
    ctx->pc = 0x2D9FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9F9Cu;
    // 0x2d9fa0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DAE18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DAE18u, 0x2D9F9Cu, 0x2D9FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9FA4u;
label_2d9fa4:
    // 0x2d9fa4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2d9fa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9fa8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d9fa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9fac: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x2D9FACu;
    SET_GPR_U32(ctx, 31, 0x2D9FB4u);
    ctx->pc = 0x2D9FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9FACu;
    // 0x2d9fb0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x2D9FACu, 0x2D9FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9FB4u;
label_2d9fb4:
    // 0x2d9fb4: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x2d9fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2d9fb8: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x2d9fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x2d9fbc: 0xa3a30003  sb          $v1, 0x3($sp)
    ctx->pc = 0x2d9fbcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d9fc0: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x2d9fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x2d9fc4: 0x248440e0  addiu       $a0, $a0, 0x40E0
    ctx->pc = 0x2d9fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16608));
    // 0x2d9fc8: 0x8ba70003  lwl         $a3, 0x3($sp)
    ctx->pc = 0x2d9fc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 7) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 7, (int32_t)merged); }
    // 0x2d9fcc: 0x9ba70000  lwr         $a3, 0x0($sp)
    ctx->pc = 0x2d9fccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 7) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 7) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 7, merged64); }
    // 0x2d9fd0: 0xaa2763d3  swl         $a3, 0x63D3($s1)
    ctx->pc = 0x2d9fd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 25555); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2d9fd4: 0xba2763d0  swr         $a3, 0x63D0($s1)
    ctx->pc = 0x2d9fd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 25552); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2d9fd8: 0x244314c0  addiu       $v1, $v0, 0x14C0
    ctx->pc = 0x2d9fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 5312));
    // 0x2d9fdc: 0x88660003  lwl         $a2, 0x3($v1)
    ctx->pc = 0x2d9fdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 6) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 6, (int32_t)merged); }
    // 0x2d9fe0: 0x98660000  lwr         $a2, 0x0($v1)
    ctx->pc = 0x2d9fe0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 6) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 6) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 6, merged64); }
    // 0x2d9fe4: 0xaba60023  swl         $a2, 0x23($sp)
    ctx->pc = 0x2d9fe4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 35); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2d9fe8: 0xbba60020  swr         $a2, 0x20($sp)
    ctx->pc = 0x2d9fe8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2d9fec: 0xa23263e4  sb          $s2, 0x63E4($s1)
    ctx->pc = 0x2d9fecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 25572), (uint8_t)GPR_U32(ctx, 18));
    // 0x2d9ff0: 0xa23263e5  sb          $s2, 0x63E5($s1)
    ctx->pc = 0x2d9ff0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 25573), (uint8_t)GPR_U32(ctx, 18));
    // 0x2d9ff4: 0x8ba50023  lwl         $a1, 0x23($sp)
    ctx->pc = 0x2d9ff4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 35); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 5) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 5, (int32_t)merged); }
    // 0x2d9ff8: 0x9ba50020  lwr         $a1, 0x20($sp)
    ctx->pc = 0x2d9ff8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 5) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 5) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 5, merged64); }
    // 0x2d9ffc: 0xaa2563d7  swl         $a1, 0x63D7($s1)
    ctx->pc = 0x2d9ffcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 25559); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 5); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2da000: 0xba2563d4  swr         $a1, 0x63D4($s1)
    ctx->pc = 0x2da000u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 25556); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 5); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2da004: 0xae3263c4  sw          $s2, 0x63C4($s1)
    ctx->pc = 0x2da004u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 25540), GPR_U32(ctx, 18));
    // 0x2da008: 0xe63463cc  swc1        $f20, 0x63CC($s1)
    ctx->pc = 0x2da008u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 25548), bits); }
    // 0x2da00c: 0xc0b6b04  jal         func_2DAC10
    ctx->pc = 0x2DA00Cu;
    SET_GPR_U32(ctx, 31, 0x2DA014u);
    ctx->pc = 0x2DA010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA00Cu;
    // 0x2da010: 0xe63463c8  swc1        $f20, 0x63C8($s1) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 25544), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DAC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DAC10u, 0x2DA00Cu, 0x2DA014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA014u;
label_2da014:
    // 0x2da014: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2DA014u;
    {
        const bool branch_taken_0x2da014 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA014u;
        // 0x2da018: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da014) {
            ctx->pc = 0x2DA044u;
            goto label_2da044;
        }
    }
    ctx->pc = 0x2DA01Cu;
    // 0x2da01c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2da01cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da020: 0x24842c40  addiu       $a0, $a0, 0x2C40
    ctx->pc = 0x2da020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11328));
    // 0x2da024: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x2DA024u;
    SET_GPR_U32(ctx, 31, 0x2DA02Cu);
    ctx->pc = 0x2DA028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA024u;
    // 0x2da028: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x2DA024u, 0x2DA02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA02Cu;
label_2da02c:
    // 0x2da02c: 0xc07f400  jal         func_1FD000
    ctx->pc = 0x2DA02Cu;
    SET_GPR_U32(ctx, 31, 0x2DA034u);
    ctx->pc = 0x1FD000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD000u, 0x2DA02Cu, 0x2DA034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA034u;
label_2da034:
    // 0x2da034: 0xc0b6848  jal         func_2DA120
    ctx->pc = 0x2DA034u;
    SET_GPR_U32(ctx, 31, 0x2DA03Cu);
    ctx->pc = 0x2DA120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA120u, 0x2DA034u, 0x2DA03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA03Cu;
label_2da03c:
    // 0x2da03c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2DA03Cu;
    {
        const bool branch_taken_0x2da03c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA03Cu;
        // 0x2da040: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da03c) {
            ctx->pc = 0x2DA048u;
            goto label_2da048;
        }
    }
    ctx->pc = 0x2DA044u;
label_2da044:
    // 0x2da044: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2da044u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2da048:
    // 0x2da048: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2da048u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2da04c: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x2da04cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2da050: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x2da050u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2da054: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x2da054u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2da058: 0xc7b70068  lwc1        $f23, 0x68($sp)
    ctx->pc = 0x2da058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2da05c: 0xc7b60060  lwc1        $f22, 0x60($sp)
    ctx->pc = 0x2da05cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2da060: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x2da060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2da064: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x2da064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2da068: 0x3e00008  jr          $ra
    ctx->pc = 0x2DA068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DA06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA068u;
        // 0x2da06c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DA068u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DA070u;
}
