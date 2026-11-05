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

// Function: sub_00294D88
// Address: 0x294d88 - 0x294ed0
void sub_00294D88_0x294d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00294D88_0x294d88");
#endif

    switch (ctx->pc) {
        case 0x294dd0u: goto label_294dd0;
        case 0x294de0u: goto label_294de0;
        case 0x294decu: goto label_294dec;
        case 0x294e18u: goto label_294e18;
        case 0x294e34u: goto label_294e34;
        case 0x294e44u: goto label_294e44;
        case 0x294e54u: goto label_294e54;
        case 0x294e64u: goto label_294e64;
        case 0x294e78u: goto label_294e78;
        case 0x294e8cu: goto label_294e8c;
        default: break;
    }

    ctx->pc = 0x294d88u;

    // 0x294d88: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x294d88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x294d8c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x294d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x294d90: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x294d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x294d94: 0x24422d20  addiu       $v0, $v0, 0x2D20
    ctx->pc = 0x294d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11552));
    // 0x294d98: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x294d98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294d9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x294d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x294da0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x294da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x294da4: 0x26240048  addiu       $a0, $s1, 0x48
    ctx->pc = 0x294da4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
    // 0x294da8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x294da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x294dac: 0x26300054  addiu       $s0, $s1, 0x54
    ctx->pc = 0x294dacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 84));
    // 0x294db0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x294db0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x294db4: 0x24120004  addiu       $s2, $zero, 0x4
    ctx->pc = 0x294db4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x294db8: 0xe7b60040  swc1        $f22, 0x40($sp)
    ctx->pc = 0x294db8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x294dbc: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x294dbcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x294dc0: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x294dc0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x294dc4: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x294dc4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x294dc8: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x294DC8u;
    SET_GPR_U32(ctx, 31, 0x294DD0u);
    ctx->pc = 0x294DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294DC8u;
    // 0x294dcc: 0xae220050  sw          $v0, 0x50($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x294DC8u, 0x294DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294DD0u;
label_294dd0:
    // 0x294dd0: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x294dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x294dd4: 0x24422f88  addiu       $v0, $v0, 0x2F88
    ctx->pc = 0x294dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12168));
    // 0x294dd8: 0xae220050  sw          $v0, 0x50($s1)
    ctx->pc = 0x294dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
    // 0x294ddc: 0x0  nop
    ctx->pc = 0x294ddcu;
    // NOP
label_294de0:
    // 0x294de0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x294de0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294de4: 0xc0a5354  jal         func_294D50
    ctx->pc = 0x294DE4u;
    SET_GPR_U32(ctx, 31, 0x294DECu);
    ctx->pc = 0x294DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294DE4u;
    // 0x294de8: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294D50u, 0x294DE4u, 0x294DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294DECu;
label_294dec:
    // 0x294dec: 0x0  nop
    ctx->pc = 0x294decu;
    // NOP
    // 0x294df0: 0x1653fffb  bne         $s2, $s3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x294DF0u;
    {
        const bool branch_taken_0x294df0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x294DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294DF0u;
        // 0x294df4: 0x2610001c  addiu       $s0, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294df0) {
            ctx->pc = 0x294DE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_294de0;
        }
    }
    ctx->pc = 0x294DF8u;
    // 0x294df8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x294df8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x294dfc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x294dfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x294e00: 0x26240054  addiu       $a0, $s1, 0x54
    ctx->pc = 0x294e00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 84));
    // 0x294e04: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x294e04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x294e08: 0x3c10004c  lui         $s0, 0x4C
    ctx->pc = 0x294e08u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)76 << 16));
    // 0x294e0c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x294e0cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x294e10: 0xc0a535c  jal         func_294D70
    ctx->pc = 0x294E10u;
    SET_GPR_U32(ctx, 31, 0x294E18u);
    ctx->pc = 0x294E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294E10u;
    // 0x294e14: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x294D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294D70u, 0x294E10u, 0x294E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294E18u;
label_294e18:
    // 0x294e18: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x294e18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x294e1c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x294e1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x294e20: 0x26240070  addiu       $a0, $s1, 0x70
    ctx->pc = 0x294e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    // 0x294e24: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x294e24u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x294e28: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x294e28u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x294e2c: 0xc0a535c  jal         func_294D70
    ctx->pc = 0x294E2Cu;
    SET_GPR_U32(ctx, 31, 0x294E34u);
    ctx->pc = 0x294E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294E2Cu;
    // 0x294e30: 0x2610f250  addiu       $s0, $s0, -0xDB0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294D70u, 0x294E2Cu, 0x294E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294E34u;
label_294e34:
    // 0x294e34: 0x2624008c  addiu       $a0, $s1, 0x8C
    ctx->pc = 0x294e34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 140));
    // 0x294e38: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x294e38u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x294e3c: 0xc0a535c  jal         func_294D70
    ctx->pc = 0x294E3Cu;
    SET_GPR_U32(ctx, 31, 0x294E44u);
    ctx->pc = 0x294E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294E3Cu;
    // 0x294e40: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x294D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294D70u, 0x294E3Cu, 0x294E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294E44u;
label_294e44:
    // 0x294e44: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x294e44u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x294e48: 0x262400a8  addiu       $a0, $s1, 0xA8
    ctx->pc = 0x294e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 168));
    // 0x294e4c: 0xc0a535c  jal         func_294D70
    ctx->pc = 0x294E4Cu;
    SET_GPR_U32(ctx, 31, 0x294E54u);
    ctx->pc = 0x294E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294E4Cu;
    // 0x294e50: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x294D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294D70u, 0x294E4Cu, 0x294E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294E54u;
label_294e54:
    // 0x294e54: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x294e54u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x294e58: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x294e58u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x294e5c: 0xc0a535c  jal         func_294D70
    ctx->pc = 0x294E5Cu;
    SET_GPR_U32(ctx, 31, 0x294E64u);
    ctx->pc = 0x294E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294E5Cu;
    // 0x294e60: 0x262400c4  addiu       $a0, $s1, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294D70u, 0x294E5Cu, 0x294E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294E64u;
label_294e64:
    // 0x294e64: 0xae2000e0  sw          $zero, 0xE0($s1)
    ctx->pc = 0x294e64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 224), GPR_U32(ctx, 0));
    // 0x294e68: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x294e68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x294e6c: 0x24a5b890  addiu       $a1, $a1, -0x4770
    ctx->pc = 0x294e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949008));
    // 0x294e70: 0xc0a8e12  jal         func_2A3848
    ctx->pc = 0x294E70u;
    SET_GPR_U32(ctx, 31, 0x294E78u);
    ctx->pc = 0x294E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294E70u;
    // 0x294e74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3848u, 0x294E70u, 0x294E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294E78u;
label_294e78:
    // 0x294e78: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x294e78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x294e7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x294e7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294e80: 0xae2200e4  sw          $v0, 0xE4($s1)
    ctx->pc = 0x294e80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 228), GPR_U32(ctx, 2));
    // 0x294e84: 0xc0a8e12  jal         func_2A3848
    ctx->pc = 0x294E84u;
    SET_GPR_U32(ctx, 31, 0x294E8Cu);
    ctx->pc = 0x294E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294E84u;
    // 0x294e88: 0x24a5b8a0  addiu       $a1, $a1, -0x4760 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3848u, 0x294E84u, 0x294E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294E8Cu;
label_294e8c:
    // 0x294e8c: 0xae2200e8  sw          $v0, 0xE8($s1)
    ctx->pc = 0x294e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 2));
    // 0x294e90: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x294e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x294e94: 0xae2000ec  sw          $zero, 0xEC($s1)
    ctx->pc = 0x294e94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 236), GPR_U32(ctx, 0));
    // 0x294e98: 0xae2200f4  sw          $v0, 0xF4($s1)
    ctx->pc = 0x294e98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 2));
    // 0x294e9c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x294e9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294ea0: 0xae2000f0  sw          $zero, 0xF0($s1)
    ctx->pc = 0x294ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 0));
    // 0x294ea4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x294ea4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x294ea8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x294ea8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x294eac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x294eacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x294eb0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x294eb0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x294eb4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x294eb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x294eb8: 0xc7b60040  lwc1        $f22, 0x40($sp)
    ctx->pc = 0x294eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x294ebc: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x294ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x294ec0: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x294ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x294ec4: 0x3e00008  jr          $ra
    ctx->pc = 0x294EC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x294EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294EC4u;
        // 0x294ec8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294EC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x294ECCu;
    // 0x294ecc: 0x0  nop
    ctx->pc = 0x294eccu;
    // NOP
    ctx->pc = 0x294ed0u;
}
