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

// Function: sub_00291DD8
// Address: 0x291dd8 - 0x291f80
void sub_00291DD8_0x291dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00291DD8_0x291dd8");
#endif

    switch (ctx->pc) {
        case 0x291dfcu: goto label_291dfc;
        case 0x291e20u: goto label_291e20;
        case 0x291e2cu: goto label_291e2c;
        case 0x291e50u: goto label_291e50;
        case 0x291e5cu: goto label_291e5c;
        case 0x291e80u: goto label_291e80;
        case 0x291e8cu: goto label_291e8c;
        case 0x291ea4u: goto label_291ea4;
        case 0x291eb0u: goto label_291eb0;
        case 0x291eb8u: goto label_291eb8;
        case 0x291ec4u: goto label_291ec4;
        case 0x291eccu: goto label_291ecc;
        case 0x291ed8u: goto label_291ed8;
        case 0x291efcu: goto label_291efc;
        case 0x291f10u: goto label_291f10;
        case 0x291f34u: goto label_291f34;
        case 0x291f48u: goto label_291f48;
        case 0x291f50u: goto label_291f50;
        case 0x291f5cu: goto label_291f5c;
        case 0x291f64u: goto label_291f64;
        default: break;
    }

    ctx->pc = 0x291dd8u;

    // 0x291dd8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x291dd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x291ddc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x291ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x291de0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x291de0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x291de4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x291de4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291de8: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x291de8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x291dec: 0x24040058  addiu       $a0, $zero, 0x58
    ctx->pc = 0x291decu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x291df0: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x291df0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x291df4: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x291DF4u;
    SET_GPR_U32(ctx, 31, 0x291DFCu);
    ctx->pc = 0x291DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291DF4u;
    // 0x291df8: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x291DF4u, 0x291DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291DFCu;
label_291dfc:
    // 0x291dfc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x291dfcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x291e00: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x291e00u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x291e04: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x291e04u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x291e08: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x291e08u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x291e0c: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x291e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x291e10: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x291e10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x291e14: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x291e14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x291e18: 0xc0a3e68  jal         func_28F9A0
    ctx->pc = 0x291E18u;
    SET_GPR_U32(ctx, 31, 0x291E20u);
    ctx->pc = 0x291E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291E18u;
    // 0x291e1c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28F9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F9A0u, 0x291E18u, 0x291E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291E20u;
label_291e20:
    // 0x291e20: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x291e20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x291e24: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x291E24u;
    SET_GPR_U32(ctx, 31, 0x291E2Cu);
    ctx->pc = 0x291E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291E24u;
    // 0x291e28: 0x24040054  addiu       $a0, $zero, 0x54 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x291E24u, 0x291E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291E2Cu;
label_291e2c:
    // 0x291e2c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x291e2cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x291e30: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x291e30u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x291e34: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x291e34u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x291e38: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x291e38u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x291e3c: 0x240500a2  addiu       $a1, $zero, 0xA2
    ctx->pc = 0x291e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 162));
    // 0x291e40: 0x24060096  addiu       $a2, $zero, 0x96
    ctx->pc = 0x291e40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x291e44: 0x24070065  addiu       $a3, $zero, 0x65
    ctx->pc = 0x291e44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    // 0x291e48: 0xc0a3e82  jal         func_28FA08
    ctx->pc = 0x291E48u;
    SET_GPR_U32(ctx, 31, 0x291E50u);
    ctx->pc = 0x291E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291E48u;
    // 0x291e4c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FA08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FA08u, 0x291E48u, 0x291E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291E50u;
label_291e50:
    // 0x291e50: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x291e50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x291e54: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x291E54u;
    SET_GPR_U32(ctx, 31, 0x291E5Cu);
    ctx->pc = 0x291E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291E54u;
    // 0x291e58: 0x24040054  addiu       $a0, $zero, 0x54 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x291E54u, 0x291E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291E5Cu;
label_291e5c:
    // 0x291e5c: 0x240500a2  addiu       $a1, $zero, 0xA2
    ctx->pc = 0x291e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 162));
    // 0x291e60: 0x24060096  addiu       $a2, $zero, 0x96
    ctx->pc = 0x291e60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x291e64: 0x24070065  addiu       $a3, $zero, 0x65
    ctx->pc = 0x291e64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    // 0x291e68: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x291e68u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x291e6c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x291e6cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x291e70: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x291e70u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x291e74: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x291e74u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x291e78: 0xc0a811a  jal         func_2A0468
    ctx->pc = 0x291E78u;
    SET_GPR_U32(ctx, 31, 0x291E80u);
    ctx->pc = 0x291E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291E78u;
    // 0x291e7c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0468u, 0x291E78u, 0x291E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291E80u;
label_291e80:
    // 0x291e80: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x291e80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x291e84: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x291E84u;
    SET_GPR_U32(ctx, 31, 0x291E8Cu);
    ctx->pc = 0x291E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291E84u;
    // 0x291e88: 0x240400fc  addiu       $a0, $zero, 0xFC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x291E84u, 0x291E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291E8Cu;
label_291e8c:
    // 0x291e8c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x291e8cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x291e90: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x291e90u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x291e94: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x291e94u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x291e98: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x291e98u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x291e9c: 0xc0a55bc  jal         func_2956F0
    ctx->pc = 0x291E9Cu;
    SET_GPR_U32(ctx, 31, 0x291EA4u);
    ctx->pc = 0x291EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291E9Cu;
    // 0x291ea0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2956F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2956F0u, 0x291E9Cu, 0x291EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291EA4u;
label_291ea4:
    // 0x291ea4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x291ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x291ea8: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x291EA8u;
    SET_GPR_U32(ctx, 31, 0x291EB0u);
    ctx->pc = 0x291EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291EA8u;
    // 0x291eac: 0x24040054  addiu       $a0, $zero, 0x54 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x291EA8u, 0x291EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291EB0u;
label_291eb0:
    // 0x291eb0: 0xc0a3eb6  jal         func_28FAD8
    ctx->pc = 0x291EB0u;
    SET_GPR_U32(ctx, 31, 0x291EB8u);
    ctx->pc = 0x291EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291EB0u;
    // 0x291eb4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FAD8u, 0x291EB0u, 0x291EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291EB8u;
label_291eb8:
    // 0x291eb8: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x291eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x291ebc: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x291EBCu;
    SET_GPR_U32(ctx, 31, 0x291EC4u);
    ctx->pc = 0x291EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291EBCu;
    // 0x291ec0: 0x24040054  addiu       $a0, $zero, 0x54 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x291EBCu, 0x291EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291EC4u;
label_291ec4:
    // 0x291ec4: 0xc0a3f2a  jal         func_28FCA8
    ctx->pc = 0x291EC4u;
    SET_GPR_U32(ctx, 31, 0x291ECCu);
    ctx->pc = 0x291EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291EC4u;
    // 0x291ec8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FCA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FCA8u, 0x291EC4u, 0x291ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291ECCu;
label_291ecc:
    // 0x291ecc: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x291eccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x291ed0: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x291ED0u;
    SET_GPR_U32(ctx, 31, 0x291ED8u);
    ctx->pc = 0x291ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291ED0u;
    // 0x291ed4: 0x24040058  addiu       $a0, $zero, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x291ED0u, 0x291ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291ED8u;
label_291ed8:
    // 0x291ed8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x291ed8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x291edc: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x291edcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x291ee0: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x291ee0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x291ee4: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x291ee4u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x291ee8: 0x24050053  addiu       $a1, $zero, 0x53
    ctx->pc = 0x291ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x291eec: 0x2406006e  addiu       $a2, $zero, 0x6E
    ctx->pc = 0x291eecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x291ef0: 0x2407002a  addiu       $a3, $zero, 0x2A
    ctx->pc = 0x291ef0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x291ef4: 0xc0a3cde  jal         func_28F378
    ctx->pc = 0x291EF4u;
    SET_GPR_U32(ctx, 31, 0x291EFCu);
    ctx->pc = 0x291EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291EF4u;
    // 0x291ef8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28F378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F378u, 0x291EF4u, 0x291EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291EFCu;
label_291efc:
    // 0x291efc: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x291efcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x291f00: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x291f00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x291f04: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x291f04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x291f08: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x291F08u;
    SET_GPR_U32(ctx, 31, 0x291F10u);
    ctx->pc = 0x291F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291F08u;
    // 0x291f0c: 0x24040058  addiu       $a0, $zero, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x291F08u, 0x291F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291F10u;
label_291f10:
    // 0x291f10: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x291f10u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x291f14: 0x24050053  addiu       $a1, $zero, 0x53
    ctx->pc = 0x291f14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x291f18: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x291f18u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x291f1c: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x291f1cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x291f20: 0x460063c6  mov.s       $f15, $f12
    ctx->pc = 0x291f20u;
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
    // 0x291f24: 0x2406006e  addiu       $a2, $zero, 0x6E
    ctx->pc = 0x291f24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x291f28: 0x2407002a  addiu       $a3, $zero, 0x2A
    ctx->pc = 0x291f28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x291f2c: 0xc0a3cde  jal         func_28F378
    ctx->pc = 0x291F2Cu;
    SET_GPR_U32(ctx, 31, 0x291F34u);
    ctx->pc = 0x291F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291F2Cu;
    // 0x291f30: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28F378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F378u, 0x291F2Cu, 0x291F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291F34u;
label_291f34:
    // 0x291f34: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x291f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x291f38: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x291f38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x291f3c: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x291f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x291f40: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x291F40u;
    SET_GPR_U32(ctx, 31, 0x291F48u);
    ctx->pc = 0x291F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291F40u;
    // 0x291f44: 0x240400f8  addiu       $a0, $zero, 0xF8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x291F40u, 0x291F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291F48u;
label_291f48:
    // 0x291f48: 0xc0a5362  jal         func_294D88
    ctx->pc = 0x291F48u;
    SET_GPR_U32(ctx, 31, 0x291F50u);
    ctx->pc = 0x291F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291F48u;
    // 0x291f4c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294D88u, 0x291F48u, 0x291F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291F50u;
label_291f50:
    // 0x291f50: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x291f50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x291f54: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x291F54u;
    SET_GPR_U32(ctx, 31, 0x291F5Cu);
    ctx->pc = 0x291F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291F54u;
    // 0x291f58: 0x24040094  addiu       $a0, $zero, 0x94 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x291F54u, 0x291F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291F5Cu;
label_291f5c:
    // 0x291f5c: 0xc0aa414  jal         func_2A9050
    ctx->pc = 0x291F5Cu;
    SET_GPR_U32(ctx, 31, 0x291F64u);
    ctx->pc = 0x291F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291F5Cu;
    // 0x291f60: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9050u, 0x291F5Cu, 0x291F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291F64u;
label_291f64:
    // 0x291f64: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x291f64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x291f68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x291f68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x291f6c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x291f6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x291f70: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x291f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x291f74: 0x3e00008  jr          $ra
    ctx->pc = 0x291F74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x291F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291F74u;
        // 0x291f78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291F74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x291F7Cu;
    // 0x291f7c: 0x0  nop
    ctx->pc = 0x291f7cu;
    // NOP
    ctx->pc = 0x291f80u;
}
