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

// Function: sub_00373CD0
// Address: 0x373cd0 - 0x373f48
void sub_00373CD0_0x373cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00373CD0_0x373cd0");
#endif

    switch (ctx->pc) {
        case 0x373d80u: goto label_373d80;
        case 0x373d98u: goto label_373d98;
        case 0x373da8u: goto label_373da8;
        case 0x373dbcu: goto label_373dbc;
        case 0x373dd0u: goto label_373dd0;
        case 0x373de0u: goto label_373de0;
        case 0x373df4u: goto label_373df4;
        case 0x373e08u: goto label_373e08;
        case 0x373e18u: goto label_373e18;
        case 0x373e2cu: goto label_373e2c;
        case 0x373e40u: goto label_373e40;
        case 0x373e50u: goto label_373e50;
        case 0x373e64u: goto label_373e64;
        case 0x373e78u: goto label_373e78;
        case 0x373e88u: goto label_373e88;
        case 0x373e9cu: goto label_373e9c;
        case 0x373eb0u: goto label_373eb0;
        case 0x373ec0u: goto label_373ec0;
        case 0x373edcu: goto label_373edc;
        default: break;
    }

    ctx->pc = 0x373cd0u;

    // 0x373cd0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x373cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x373cd4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x373cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x373cd8: 0xe7b80090  swc1        $f24, 0x90($sp)
    ctx->pc = 0x373cd8u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x373cdc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x373cdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373ce0: 0xe7b60080  swc1        $f22, 0x80($sp)
    ctx->pc = 0x373ce0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x373ce4: 0x46006606  mov.s       $f24, $f12
    ctx->pc = 0x373ce4u;
    ctx->f[24] = FPU_MOV_S(ctx->f[12]);
    // 0x373ce8: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x373ce8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x373cec: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x373cecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x373cf0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x373cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x373cf4: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x373cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x373cf8: 0x3c100065  lui         $s0, 0x65
    ctx->pc = 0x373cf8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)101 << 16));
    // 0x373cfc: 0xe7ba00a0  swc1        $f26, 0xA0($sp)
    ctx->pc = 0x373cfcu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x373d00: 0x24526028  addiu       $s2, $v0, 0x6028
    ctx->pc = 0x373d00u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 24616));
    // 0x373d04: 0xe7b90098  swc1        $f25, 0x98($sp)
    ctx->pc = 0x373d04u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x373d08: 0x46007e86  mov.s       $f26, $f15
    ctx->pc = 0x373d08u;
    ctx->f[26] = FPU_MOV_S(ctx->f[15]);
    // 0x373d0c: 0xe7b70088  swc1        $f23, 0x88($sp)
    ctx->pc = 0x373d0cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x373d10: 0x46006e46  mov.s       $f25, $f13
    ctx->pc = 0x373d10u;
    ctx->f[25] = FPU_MOV_S(ctx->f[13]);
    // 0x373d14: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x373d14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x373d18: 0x460075c6  mov.s       $f23, $f14
    ctx->pc = 0x373d18u;
    ctx->f[23] = FPU_MOV_S(ctx->f[14]);
    // 0x373d1c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x373d1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x373d20: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x373d20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x373d24: 0x26105c80  addiu       $s0, $s0, 0x5C80
    ctx->pc = 0x373d24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 23680));
    // 0x373d28: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x373d28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x373d2c: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x373d2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x373d30: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x373d30u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x373d34: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x373d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x373d38: 0x4600ab86  mov.s       $f14, $f21
    ctx->pc = 0x373d38u;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
    // 0x373d3c: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x373d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x373d40: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x373d40u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x373d44: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x373d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x373d48: 0x26130010  addiu       $s3, $s0, 0x10
    ctx->pc = 0x373d48u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x373d4c: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x373d4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x373d50: 0x26140020  addiu       $s4, $s0, 0x20
    ctx->pc = 0x373d50u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x373d54: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x373d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x373d58: 0x26150030  addiu       $s5, $s0, 0x30
    ctx->pc = 0x373d58u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x373d5c: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x373d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x373d60: 0x26160040  addiu       $s6, $s0, 0x40
    ctx->pc = 0x373d60u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x373d64: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x373d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x373d68: 0x26170050  addiu       $s7, $s0, 0x50
    ctx->pc = 0x373d68u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x373d6c: 0xe4586028  swc1        $f24, 0x6028($v0)
    ctx->pc = 0x373d6cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6C6028u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6C6028u, _value); } while (0); }
    // 0x373d70: 0xe6590004  swc1        $f25, 0x4($s2)
    ctx->pc = 0x373d70u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6C602Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6C602Cu, _value); } while (0); }
    // 0x373d74: 0xe6570008  swc1        $f23, 0x8($s2)
    ctx->pc = 0x373d74u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6C6030u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6C6030u, _value); } while (0); }
    // 0x373d78: 0xc0df4e2  jal         func_37D388
    ctx->pc = 0x373D78u;
    SET_GPR_U32(ctx, 31, 0x373D80u);
    ctx->pc = 0x373D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373D78u;
    // 0x373d7c: 0xe65a000c  swc1        $f26, 0xC($s2) (Delay Slot)
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D388u, 0x373D78u, 0x373D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373D80u;
label_373d80:
    // 0x373d80: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x373d80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x373d84: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x373d84u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x373d88: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x373d88u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x373d8c: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x373d8cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x373d90: 0xc0df4e2  jal         func_37D388
    ctx->pc = 0x373D90u;
    SET_GPR_U32(ctx, 31, 0x373D98u);
    ctx->pc = 0x373D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373D90u;
    // 0x373d94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D388u, 0x373D90u, 0x373D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373D98u;
label_373d98:
    // 0x373d98: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x373d98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373d9c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x373d9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373da0: 0xc0dedb4  jal         func_37B6D0
    ctx->pc = 0x373DA0u;
    SET_GPR_U32(ctx, 31, 0x373DA8u);
    ctx->pc = 0x373DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373DA0u;
    // 0x373da4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37B6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37B6D0u, 0x373DA0u, 0x373DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373DA8u;
label_373da8:
    // 0x373da8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x373da8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373dac: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x373dacu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x373db0: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x373db0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x373db4: 0xc0df4e2  jal         func_37D388
    ctx->pc = 0x373DB4u;
    SET_GPR_U32(ctx, 31, 0x373DBCu);
    ctx->pc = 0x373DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373DB4u;
    // 0x373db8: 0x4600ab86  mov.s       $f14, $f21 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D388u, 0x373DB4u, 0x373DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373DBCu;
label_373dbc:
    // 0x373dbc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x373dbcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x373dc0: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x373dc0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x373dc4: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x373dc4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x373dc8: 0xc0df4e2  jal         func_37D388
    ctx->pc = 0x373DC8u;
    SET_GPR_U32(ctx, 31, 0x373DD0u);
    ctx->pc = 0x373DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373DC8u;
    // 0x373dcc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D388u, 0x373DC8u, 0x373DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373DD0u;
label_373dd0:
    // 0x373dd0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x373dd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373dd4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x373dd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373dd8: 0xc0dedb4  jal         func_37B6D0
    ctx->pc = 0x373DD8u;
    SET_GPR_U32(ctx, 31, 0x373DE0u);
    ctx->pc = 0x373DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373DD8u;
    // 0x373ddc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37B6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37B6D0u, 0x373DD8u, 0x373DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373DE0u;
label_373de0:
    // 0x373de0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x373de0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373de4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x373de4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x373de8: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x373de8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x373dec: 0xc0df4e2  jal         func_37D388
    ctx->pc = 0x373DECu;
    SET_GPR_U32(ctx, 31, 0x373DF4u);
    ctx->pc = 0x373DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373DECu;
    // 0x373df0: 0x4600ab86  mov.s       $f14, $f21 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D388u, 0x373DECu, 0x373DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373DF4u;
label_373df4:
    // 0x373df4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x373df4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x373df8: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x373df8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x373dfc: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x373dfcu;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x373e00: 0xc0df4e2  jal         func_37D388
    ctx->pc = 0x373E00u;
    SET_GPR_U32(ctx, 31, 0x373E08u);
    ctx->pc = 0x373E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373E00u;
    // 0x373e04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D388u, 0x373E00u, 0x373E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373E08u;
label_373e08:
    // 0x373e08: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x373e08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373e0c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x373e0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373e10: 0xc0dedb4  jal         func_37B6D0
    ctx->pc = 0x373E10u;
    SET_GPR_U32(ctx, 31, 0x373E18u);
    ctx->pc = 0x373E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373E10u;
    // 0x373e14: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37B6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37B6D0u, 0x373E10u, 0x373E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373E18u;
label_373e18:
    // 0x373e18: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x373e18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373e1c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x373e1cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x373e20: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x373e20u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x373e24: 0xc0df4e2  jal         func_37D388
    ctx->pc = 0x373E24u;
    SET_GPR_U32(ctx, 31, 0x373E2Cu);
    ctx->pc = 0x373E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373E24u;
    // 0x373e28: 0x4600ab86  mov.s       $f14, $f21 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D388u, 0x373E24u, 0x373E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373E2Cu;
label_373e2c:
    // 0x373e2c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x373e2cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x373e30: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x373e30u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x373e34: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x373e34u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x373e38: 0xc0df4e2  jal         func_37D388
    ctx->pc = 0x373E38u;
    SET_GPR_U32(ctx, 31, 0x373E40u);
    ctx->pc = 0x373E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373E38u;
    // 0x373e3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D388u, 0x373E38u, 0x373E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373E40u;
label_373e40:
    // 0x373e40: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x373e40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373e44: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x373e44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373e48: 0xc0dedb4  jal         func_37B6D0
    ctx->pc = 0x373E48u;
    SET_GPR_U32(ctx, 31, 0x373E50u);
    ctx->pc = 0x373E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373E48u;
    // 0x373e4c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37B6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37B6D0u, 0x373E48u, 0x373E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373E50u;
label_373e50:
    // 0x373e50: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x373e50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373e54: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x373e54u;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    // 0x373e58: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x373e58u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x373e5c: 0xc0df4e2  jal         func_37D388
    ctx->pc = 0x373E5Cu;
    SET_GPR_U32(ctx, 31, 0x373E64u);
    ctx->pc = 0x373E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373E5Cu;
    // 0x373e60: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D388u, 0x373E5Cu, 0x373E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373E64u;
label_373e64:
    // 0x373e64: 0xc64e000c  lwc1        $f14, 0xC($s2)
    ctx->pc = 0x373e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x373e68: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x373e68u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x373e6c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x373e6cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x373e70: 0xc0df4e2  jal         func_37D388
    ctx->pc = 0x373E70u;
    SET_GPR_U32(ctx, 31, 0x373E78u);
    ctx->pc = 0x373E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373E70u;
    // 0x373e74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D388u, 0x373E70u, 0x373E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373E78u;
label_373e78:
    // 0x373e78: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x373e78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373e7c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x373e7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373e80: 0xc0dedb4  jal         func_37B6D0
    ctx->pc = 0x373E80u;
    SET_GPR_U32(ctx, 31, 0x373E88u);
    ctx->pc = 0x373E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373E80u;
    // 0x373e84: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37B6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37B6D0u, 0x373E80u, 0x373E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373E88u;
label_373e88:
    // 0x373e88: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x373e88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373e8c: 0x4600ab86  mov.s       $f14, $f21
    ctx->pc = 0x373e8cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
    // 0x373e90: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x373e90u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x373e94: 0xc0df4e2  jal         func_37D388
    ctx->pc = 0x373E94u;
    SET_GPR_U32(ctx, 31, 0x373E9Cu);
    ctx->pc = 0x373E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373E94u;
    // 0x373e98: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D388u, 0x373E94u, 0x373E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373E9Cu;
label_373e9c:
    // 0x373e9c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x373e9cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x373ea0: 0xc64e0008  lwc1        $f14, 0x8($s2)
    ctx->pc = 0x373ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x373ea4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x373ea4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x373ea8: 0xc0df4e2  jal         func_37D388
    ctx->pc = 0x373EA8u;
    SET_GPR_U32(ctx, 31, 0x373EB0u);
    ctx->pc = 0x373EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373EA8u;
    // 0x373eac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D388u, 0x373EA8u, 0x373EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373EB0u;
label_373eb0:
    // 0x373eb0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x373eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373eb4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x373eb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373eb8: 0xc0dedb4  jal         func_37B6D0
    ctx->pc = 0x373EB8u;
    SET_GPR_U32(ctx, 31, 0x373EC0u);
    ctx->pc = 0x373EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373EB8u;
    // 0x373ebc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37B6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37B6D0u, 0x373EB8u, 0x373EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373EC0u;
label_373ec0:
    // 0x373ec0: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x373ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
    // 0x373ec4: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x373ec4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x373ec8: 0x4600d346  mov.s       $f13, $f26
    ctx->pc = 0x373ec8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[26]);
    // 0x373ecc: 0x4600c386  mov.s       $f14, $f24
    ctx->pc = 0x373eccu;
    ctx->f[14] = FPU_MOV_S(ctx->f[24]);
    // 0x373ed0: 0x4600cbc6  mov.s       $f15, $f25
    ctx->pc = 0x373ed0u;
    ctx->f[15] = FPU_MOV_S(ctx->f[25]);
    // 0x373ed4: 0xc0dece4  jal         func_37B390
    ctx->pc = 0x373ED4u;
    SET_GPR_U32(ctx, 31, 0x373EDCu);
    ctx->pc = 0x373ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373ED4u;
    // 0x373ed8: 0x24845bc0  addiu       $a0, $a0, 0x5BC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37B390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37B390u, 0x373ED4u, 0x373EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373EDCu;
label_373edc:
    // 0x373edc: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x373edcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x373ee0: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x373ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x373ee4: 0x8c82cd00  lw          $v0, -0x3300($a0)
    ctx->pc = 0x373ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FCD00u));
    // 0x373ee8: 0x8ca3cd34  lw          $v1, -0x32CC($a1)
    ctx->pc = 0x373ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FCD34u));
    // 0x373eec: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x373eecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x373ef0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x373ef0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x373ef4: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x373ef4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x373ef8: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x373ef8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x373efc: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x373efcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x373f00: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x373f00u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x373f04: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x373f04u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x373f08: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x373f08u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x373f0c: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x373f0cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x373f10: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x373f10u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x373f14: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x373f14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x373f18: 0xc7ba00a0  lwc1        $f26, 0xA0($sp)
    ctx->pc = 0x373f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x373f1c: 0xc7b90098  lwc1        $f25, 0x98($sp)
    ctx->pc = 0x373f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x373f20: 0xc7b80090  lwc1        $f24, 0x90($sp)
    ctx->pc = 0x373f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x373f24: 0xc7b70088  lwc1        $f23, 0x88($sp)
    ctx->pc = 0x373f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x373f28: 0xc7b60080  lwc1        $f22, 0x80($sp)
    ctx->pc = 0x373f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x373f2c: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x373f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x373f30: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x373f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x373f34: 0xac82cd00  sw          $v0, -0x3300($a0)
    ctx->pc = 0x373f34u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3FCD00u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FCD00u, _value); } while (0);
    // 0x373f38: 0xaca3cd34  sw          $v1, -0x32CC($a1)
    ctx->pc = 0x373f38u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3FCD34u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FCD34u, _value); } while (0);
    // 0x373f3c: 0x3e00008  jr          $ra
    ctx->pc = 0x373F3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x373F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373F3Cu;
        // 0x373f40: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x373F3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x373F44u;
    // 0x373f44: 0x0  nop
    ctx->pc = 0x373f44u;
    // NOP
    ctx->pc = 0x373f48u;
}
