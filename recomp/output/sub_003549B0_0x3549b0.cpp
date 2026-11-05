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

// Function: sub_003549B0
// Address: 0x3549b0 - 0x354d78
void sub_003549B0_0x3549b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003549B0_0x3549b0");
#endif

    switch (ctx->pc) {
        case 0x354a1cu: goto label_354a1c;
        case 0x354a60u: goto label_354a60;
        case 0x354a78u: goto label_354a78;
        case 0x354aa4u: goto label_354aa4;
        case 0x354ab0u: goto label_354ab0;
        case 0x354ab8u: goto label_354ab8;
        case 0x354ac0u: goto label_354ac0;
        case 0x354ae0u: goto label_354ae0;
        case 0x354af4u: goto label_354af4;
        case 0x354b58u: goto label_354b58;
        case 0x354b68u: goto label_354b68;
        case 0x354b8cu: goto label_354b8c;
        case 0x354b94u: goto label_354b94;
        case 0x354b9cu: goto label_354b9c;
        case 0x354d34u: goto label_354d34;
        default: break;
    }

    ctx->pc = 0x3549b0u;

    // 0x3549b0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x3549b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x3549b4: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x3549b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x3549b8: 0x3c10005c  lui         $s0, 0x5C
    ctx->pc = 0x3549b8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)92 << 16));
    // 0x3549bc: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x3549bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
    // 0x3549c0: 0x8e02beac  lw          $v0, -0x4154($s0)
    ctx->pc = 0x3549c0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5BBEACu));
    // 0x3549c4: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x3549c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x3549c8: 0xffb30088  sd          $s3, 0x88($sp)
    ctx->pc = 0x3549c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 19));
    // 0x3549cc: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x3549ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x3549d0: 0xffb50098  sd          $s5, 0x98($sp)
    ctx->pc = 0x3549d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 21));
    // 0x3549d4: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x3549d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x3549d8: 0xffb700a8  sd          $s7, 0xA8($sp)
    ctx->pc = 0x3549d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 23));
    // 0x3549dc: 0xffbe00b0  sd          $fp, 0xB0($sp)
    ctx->pc = 0x3549dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
    // 0x3549e0: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3549E0u;
    {
        const bool branch_taken_0x3549e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3549E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3549E0u;
        // 0x3549e4: 0xffbf00b8  sd          $ra, 0xB8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3549e0) {
            ctx->pc = 0x354A24u;
            goto label_354a24;
        }
    }
    ctx->pc = 0x3549E8u;
    // 0x3549e8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3549e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3549ec: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3549ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3549f0: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x3549f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
    // 0x3549f4: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x3549f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
    // 0x3549f8: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3549f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x3549fc: 0x44818000  mtc1        $at, $f16
    ctx->pc = 0x3549fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x354a00: 0x2484be90  addiu       $a0, $a0, -0x4170
    ctx->pc = 0x354a00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950544));
    // 0x354a04: 0x44808800  mtc1        $zero, $f17
    ctx->pc = 0x354a04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
    // 0x354a08: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x354a08u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x354a0c: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x354a0cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x354a10: 0x460063c6  mov.s       $f15, $f12
    ctx->pc = 0x354a10u;
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
    // 0x354a14: 0xc0b11c6  jal         func_2C4718
    ctx->pc = 0x354A14u;
    SET_GPR_U32(ctx, 31, 0x354A1Cu);
    ctx->pc = 0x354A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354A14u;
    // 0x354a18: 0x46006486  mov.s       $f18, $f12 (Delay Slot)
    ctx->f[18] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4718u, 0x354A14u, 0x354A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354A1Cu;
label_354a1c:
    // 0x354a1c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x354a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x354a20: 0xae03beac  sw          $v1, -0x4154($s0)
    ctx->pc = 0x354a20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294950572), GPR_U32(ctx, 3));
label_354a24:
    // 0x354a24: 0x3c06005c  lui         $a2, 0x5C
    ctx->pc = 0x354a24u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)92 << 16));
    // 0x354a28: 0x8cc2bec0  lw          $v0, -0x4140($a2)
    ctx->pc = 0x354a28u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5BBEC0u));
    // 0x354a2c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x354A2Cu;
    {
        const bool branch_taken_0x354a2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x354A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354A2Cu;
        // 0x354a30: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354a2c) {
            ctx->pc = 0x354A64u;
            goto label_354a64;
        }
    }
    ctx->pc = 0x354A34u;
    // 0x354a34: 0x3c05005c  lui         $a1, 0x5C
    ctx->pc = 0x354a34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)92 << 16));
    // 0x354a38: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x354a38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x354a3c: 0x24a2beb0  addiu       $v0, $a1, -0x4150
    ctx->pc = 0x354a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950576));
    // 0x354a40: 0xacc3bec0  sw          $v1, -0x4140($a2)
    ctx->pc = 0x354a40u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294950592), GPR_U32(ctx, 3));
    // 0x354a44: 0xaca0beb0  sw          $zero, -0x4150($a1)
    ctx->pc = 0x354a44u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5BBEB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5BBEB0u, _value); } while (0);
    // 0x354a48: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x354a48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x354a4c: 0x248449a8  addiu       $a0, $a0, 0x49A8
    ctx->pc = 0x354a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18856));
    // 0x354a50: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x354a50u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5BBEBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5BBEBCu, _value); } while (0);
    // 0x354a54: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x354a54u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5BBEB4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5BBEB4u, _value); } while (0);
    // 0x354a58: 0xc0f0278  jal         func_3C09E0
    ctx->pc = 0x354A58u;
    SET_GPR_U32(ctx, 31, 0x354A60u);
    ctx->pc = 0x354A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354A58u;
    // 0x354a5c: 0xac400008  sw          $zero, 0x8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C09E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C09E0u, 0x354A58u, 0x354A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354A60u;
label_354a60:
    // 0x354a60: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x354a60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_354a64:
    // 0x354a64: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x354a64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x354a68: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x354a68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x354a6c: 0xc44c2d14  lwc1        $f12, 0x2D14($v0)
    ctx->pc = 0x354a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x354a70: 0xc0dde53  jal         func_37794C
    ctx->pc = 0x354A70u;
    SET_GPR_U32(ctx, 31, 0x354A78u);
    ctx->pc = 0x354A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354A70u;
    // 0x354a74: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x37794Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37794Cu, 0x354A70u, 0x354A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354A78u;
label_354a78:
    // 0x354a78: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x354a78u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354a7c: 0x12c000b1  beqz        $s6, . + 4 + (0xB1 << 2)
    ctx->pc = 0x354A7Cu;
    {
        const bool branch_taken_0x354a7c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x354A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354A7Cu;
        // 0x354a80: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354a7c) {
            ctx->pc = 0x354D44u;
            goto label_354d44;
        }
    }
    ctx->pc = 0x354A84u;
    // 0x354a84: 0x8c62c8d0  lw          $v0, -0x3730($v1)
    ctx->pc = 0x354a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294953168)));
    // 0x354a88: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x354A88u;
    {
        const bool branch_taken_0x354a88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x354A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354A88u;
        // 0x354a8c: 0x60b82d  daddu       $s7, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354a88) {
            ctx->pc = 0x354B00u;
            goto label_354b00;
        }
    }
    ctx->pc = 0x354A90u;
    // 0x354a90: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x354a90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x354a94: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x354a94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x354a98: 0x24515ad0  addiu       $s1, $v0, 0x5AD0
    ctx->pc = 0x354a98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 23248));
    // 0x354a9c: 0xc0b2af0  jal         func_2CABC0
    ctx->pc = 0x354A9Cu;
    SET_GPR_U32(ctx, 31, 0x354AA4u);
    ctx->pc = 0x354AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354A9Cu;
    // 0x354aa0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CABC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CABC0u, 0x354A9Cu, 0x354AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354AA4u;
label_354aa4:
    // 0x354aa4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x354aa4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354aa8: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x354AA8u;
    SET_GPR_U32(ctx, 31, 0x354AB0u);
    ctx->pc = 0x354AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354AA8u;
    // 0x354aac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x354AA8u, 0x354AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354AB0u;
label_354ab0:
    // 0x354ab0: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x354AB0u;
    SET_GPR_U32(ctx, 31, 0x354AB8u);
    ctx->pc = 0x354AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354AB0u;
    // 0x354ab4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x354AB0u, 0x354AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354AB8u;
label_354ab8:
    // 0x354ab8: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x354AB8u;
    SET_GPR_U32(ctx, 31, 0x354AC0u);
    ctx->pc = 0x354ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354AB8u;
    // 0x354abc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x354AB8u, 0x354AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354AC0u;
label_354ac0:
    // 0x354ac0: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x354ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x354ac4: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x354ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x354ac8: 0x8c45bec8  lw          $a1, -0x4138($v0)
    ctx->pc = 0x354ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5BBEC8u));
    // 0x354acc: 0x24844f20  addiu       $a0, $a0, 0x4F20
    ctx->pc = 0x354accu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20256));
    // 0x354ad0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x354ad0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354ad4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x354ad4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354ad8: 0xc0b0a1c  jal         func_2C2870
    ctx->pc = 0x354AD8u;
    SET_GPR_U32(ctx, 31, 0x354AE0u);
    ctx->pc = 0x354ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354AD8u;
    // 0x354adc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2870u, 0x354AD8u, 0x354AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354AE0u;
label_354ae0:
    // 0x354ae0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x354AE0u;
    {
        const bool branch_taken_0x354ae0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x354AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354AE0u;
        // 0x354ae4: 0xaee2c8d0  sw          $v0, -0x3730($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 4294953168), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354ae0) {
            ctx->pc = 0x354AF4u;
            goto label_354af4;
        }
    }
    ctx->pc = 0x354AE8u;
    // 0x354ae8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x354ae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354aec: 0xc0b2b08  jal         func_2CAC20
    ctx->pc = 0x354AECu;
    SET_GPR_U32(ctx, 31, 0x354AF4u);
    ctx->pc = 0x354AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354AECu;
    // 0x354af0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CAC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAC20u, 0x354AECu, 0x354AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354AF4u;
label_354af4:
    // 0x354af4: 0x8ee2c8d0  lw          $v0, -0x3730($s7)
    ctx->pc = 0x354af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294953168)));
    // 0x354af8: 0x50400093  beql        $v0, $zero, . + 4 + (0x93 << 2)
    ctx->pc = 0x354AF8u;
    {
        const bool branch_taken_0x354af8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x354af8) {
            ctx->pc = 0x354AFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x354AF8u;
            // 0x354afc: 0xdfb00070  ld          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x354D48u;
            goto label_354d48;
        }
    }
    ctx->pc = 0x354B00u;
label_354b00:
    // 0x354b00: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x354b00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x354b04: 0x3c04aaaa  lui         $a0, 0xAAAA
    ctx->pc = 0x354b04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43690 << 16));
    // 0x354b08: 0x8c43bd50  lw          $v1, -0x42B0($v0)
    ctx->pc = 0x354b08u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FBD50u));
    // 0x354b0c: 0x3484aaab  ori         $a0, $a0, 0xAAAB
    ctx->pc = 0x354b0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)43691);
    // 0x354b10: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x354b10u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354b14: 0x8c750ffc  lw          $s5, 0xFFC($v1)
    ctx->pc = 0x354b14u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4092)));
    // 0x354b18: 0x8ea20028  lw          $v0, 0x28($s5)
    ctx->pc = 0x354b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 40)));
    // 0x354b1c: 0x8ea30024  lw          $v1, 0x24($s5)
    ctx->pc = 0x354b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
    // 0x354b20: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x354b20u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x354b24: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x354b24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x354b28: 0x29903  sra         $s3, $v0, 4
    ctx->pc = 0x354b28u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 2), 4));
    // 0x354b2c: 0x12c00085  beqz        $s6, . + 4 + (0x85 << 2)
    ctx->pc = 0x354B2Cu;
    {
        const bool branch_taken_0x354b2c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x354B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354B2Cu;
        // 0x354b30: 0xafb30060  sw          $s3, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354b2c) {
            ctx->pc = 0x354D44u;
            goto label_354d44;
        }
    }
    ctx->pc = 0x354B34u;
    // 0x354b34: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x354b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x354b38: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x354b38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x354b3c: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x354b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
    // 0x354b40: 0x27be0010  addiu       $fp, $sp, 0x10
    ctx->pc = 0x354b40u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x354b44: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x354b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x354b48: 0xafa30068  sw          $v1, 0x68($sp)
    ctx->pc = 0x354b48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 3));
    // 0x354b4c: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x354b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
    // 0x354b50: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x354b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x354b54: 0x0  nop
    ctx->pc = 0x354b54u;
    // NOP
label_354b58:
    // 0x354b58: 0x50600077  beql        $v1, $zero, . + 4 + (0x77 << 2)
    ctx->pc = 0x354B58u;
    {
        const bool branch_taken_0x354b58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x354b58) {
            ctx->pc = 0x354B5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x354B58u;
            // 0x354b5c: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x354D38u;
            goto label_354d38;
        }
    }
    ctx->pc = 0x354B60u;
    // 0x354b60: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x354B60u;
    SET_GPR_U32(ctx, 31, 0x354B68u);
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x354B60u, 0x354B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354B68u;
label_354b68:
    // 0x354b68: 0x53001b  divu        $zero, $v0, $s3
    ctx->pc = 0x354b68u;
    { uint32_t divisor = GPR_U32(ctx, 19); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x354b6c: 0x52600001  beql        $s3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x354B6Cu;
    {
        const bool branch_taken_0x354b6c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x354b6c) {
            ctx->pc = 0x354B70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x354B6Cu;
            // 0x354b70: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x354B74u;
            goto label_354b74;
        }
    }
    ctx->pc = 0x354B74u;
label_354b74:
    // 0x354b74: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x354b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x354b78: 0x8eb20024  lw          $s2, 0x24($s5)
    ctx->pc = 0x354b78u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
    // 0x354b7c: 0x1810  mfhi        $v1
    ctx->pc = 0x354b7cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x354b80: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x354b80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x354b84: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x354B84u;
    SET_GPR_U32(ctx, 31, 0x354B8Cu);
    ctx->pc = 0x354B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354B84u;
    // 0x354b88: 0x2439021  addu        $s2, $s2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x354B84u, 0x354B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354B8Cu;
label_354b8c:
    // 0x354b8c: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x354B8Cu;
    SET_GPR_U32(ctx, 31, 0x354B94u);
    ctx->pc = 0x354B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354B8Cu;
    // 0x354b90: 0x305000ff  andi        $s0, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x354B8Cu, 0x354B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354B94u;
label_354b94:
    // 0x354b94: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x354B94u;
    SET_GPR_U32(ctx, 31, 0x354B9Cu);
    ctx->pc = 0x354B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354B94u;
    // 0x354b98: 0x305100ff  andi        $s1, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x354B94u, 0x354B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354B9Cu;
label_354b9c:
    // 0x354b9c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x354b9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x354ba0: 0x2111821  addu        $v1, $s0, $s1
    ctx->pc = 0x354ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x354ba4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x354ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x354ba8: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x354ba8u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x354bac: 0x0  nop
    ctx->pc = 0x354bacu;
    // NOP
    // 0x354bb0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x354bb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x354bb4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x354bb4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x354bb8: 0x0  nop
    ctx->pc = 0x354bb8u;
    // NOP
    // 0x354bbc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x354bbcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x354bc0: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x354bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x354bc4: 0x44912000  mtc1        $s1, $f4
    ctx->pc = 0x354bc4u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x354bc8: 0x0  nop
    ctx->pc = 0x354bc8u;
    // NOP
    // 0x354bcc: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x354bccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x354bd0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x354bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x354bd4: 0xc485000c  lwc1        $f5, 0xC($a0)
    ctx->pc = 0x354bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x354bd8: 0x44823800  mtc1        $v0, $f7
    ctx->pc = 0x354bd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x354bdc: 0x0  nop
    ctx->pc = 0x354bdcu;
    // NOP
    // 0x354be0: 0x468039e0  cvt.s.w     $f7, $f7
    ctx->pc = 0x354be0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[7], sizeof(tmp)); ctx->f[7] = FPU_CVT_S_W(tmp); }
    // 0x354be4: 0x0  nop
    ctx->pc = 0x354be4u;
    // NOP
    // 0x354be8: 0x0  nop
    ctx->pc = 0x354be8u;
    // NOP
    // 0x354bec: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x354becu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x354bf0: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x354bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x354bf4: 0xc4830004  lwc1        $f3, 0x4($a0)
    ctx->pc = 0x354bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x354bf8: 0x0  nop
    ctx->pc = 0x354bf8u;
    // NOP
    // 0x354bfc: 0x0  nop
    ctx->pc = 0x354bfcu;
    // NOP
    // 0x354c00: 0x46012103  div.s       $f4, $f4, $f1
    ctx->pc = 0x354c00u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[4], ctx->f[1]); }
    // 0x354c04: 0xc4860008  lwc1        $f6, 0x8($a0)
    ctx->pc = 0x354c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x354c08: 0x0  nop
    ctx->pc = 0x354c08u;
    // NOP
    // 0x354c0c: 0x0  nop
    ctx->pc = 0x354c0cu;
    // NOP
    // 0x354c10: 0x460139c3  div.s       $f7, $f7, $f1
    ctx->pc = 0x354c10u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[7] = FPU_DIV_S(ctx->f[7], ctx->f[1]); }
    // 0x354c14: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x354c14u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x354c18: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x354c18u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x354c1c: 0x46050142  mul.s       $f5, $f0, $f5
    ctx->pc = 0x354c1cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x354c20: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x354c20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x354c24: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x354c24u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x354c28: 0xe7a30024  swc1        $f3, 0x24($sp)
    ctx->pc = 0x354c28u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x354c2c: 0xe7a5002c  swc1        $f5, 0x2C($sp)
    ctx->pc = 0x354c2cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x354c30: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x354c30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x354c34: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x354c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x354c38: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x354c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x354c3c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x354c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x354c40: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x354c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x354c44: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x354c44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x354c48: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x354c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x354c4c: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x354c4cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x354c50: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x354c50u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x354c54: 0x8fa20064  lw          $v0, 0x64($sp)
    ctx->pc = 0x354c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x354c58: 0x46032102  mul.s       $f4, $f4, $f3
    ctx->pc = 0x354c58u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x354c5c: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x354c5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x354c60: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x354c60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x354c64: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x354c64u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x354c68: 0xe7a40038  swc1        $f4, 0x38($sp)
    ctx->pc = 0x354c68u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x354c6c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x354c6cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x354c70: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x354c70u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x354c74: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x354c74u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x354c78: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x354c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x354c7c: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x354c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x354c80: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x354c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x354c84: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x354c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x354c88: 0xc7a3004c  lwc1        $f3, 0x4C($sp)
    ctx->pc = 0x354c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x354c8c: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x354c8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x354c90: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x354c90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x354c94: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x354c94u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x354c98: 0xe7a3001c  swc1        $f3, 0x1C($sp)
    ctx->pc = 0x354c98u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x354c9c: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x354c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x354ca0: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x354ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x354ca4: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x354ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x354ca8: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x354ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x354cac: 0x46003802  mul.s       $f0, $f7, $f0
    ctx->pc = 0x354cacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x354cb0: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x354cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x354cb4: 0x46013842  mul.s       $f1, $f7, $f1
    ctx->pc = 0x354cb4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
    // 0x354cb8: 0x46023882  mul.s       $f2, $f7, $f2
    ctx->pc = 0x354cb8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[2]);
    // 0x354cbc: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x354cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x354cc0: 0x460339c2  mul.s       $f7, $f7, $f3
    ctx->pc = 0x354cc0u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[3]);
    // 0x354cc4: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x354cc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x354cc8: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x354cc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x354ccc: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x354cccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x354cd0: 0xe7a70048  swc1        $f7, 0x48($sp)
    ctx->pc = 0x354cd0u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x354cd4: 0xdbc10000  lqc2        $vf1, 0x0($fp)
    ctx->pc = 0x354cd4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x354cd8: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x354cd8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x354cdc: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x354cdcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x354ce0: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x354ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x354ce4: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x354ce4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x354ce8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x354ce8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x354cec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x354cecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x354cf0: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x354cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x354cf4: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x354cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x354cf8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x354cf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354cfc: 0xc7a30050  lwc1        $f3, 0x50($sp)
    ctx->pc = 0x354cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x354d00: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x354d00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354d04: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x354d04u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x354d08: 0xc7a20058  lwc1        $f2, 0x58($sp)
    ctx->pc = 0x354d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x354d0c: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x354d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x354d10: 0x2467be90  addiu       $a3, $v1, -0x4170
    ctx->pc = 0x354d10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950544));
    // 0x354d14: 0x8ee4c8d0  lw          $a0, -0x3730($s7)
    ctx->pc = 0x354d14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294953168)));
    // 0x354d18: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x354d18u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354d1c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x354d1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x354d20: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x354d20u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x354d24: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x354d24u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x354d28: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x354d28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x354d2c: 0xc0b0f28  jal         func_2C3CA0
    ctx->pc = 0x354D2Cu;
    SET_GPR_U32(ctx, 31, 0x354D34u);
    ctx->pc = 0x354D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354D2Cu;
    // 0x354d30: 0xe7a10004  swc1        $f1, 0x4($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3CA0u, 0x354D2Cu, 0x354D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354D34u;
label_354d34:
    // 0x354d34: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x354d34u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_354d38:
    // 0x354d38: 0x296102b  sltu        $v0, $s4, $s6
    ctx->pc = 0x354d38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x354d3c: 0x1440ff86  bnez        $v0, . + 4 + (-0x7A << 2)
    ctx->pc = 0x354D3Cu;
    {
        const bool branch_taken_0x354d3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x354D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354D3Cu;
        // 0x354d40: 0x8fa30060  lw          $v1, 0x60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354d3c) {
            ctx->pc = 0x354B58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_354b58;
        }
    }
    ctx->pc = 0x354D44u;
label_354d44:
    // 0x354d44: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x354d44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_354d48:
    // 0x354d48: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x354d48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x354d4c: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x354d4cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x354d50: 0xdfb30088  ld          $s3, 0x88($sp)
    ctx->pc = 0x354d50u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x354d54: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x354d54u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x354d58: 0xdfb50098  ld          $s5, 0x98($sp)
    ctx->pc = 0x354d58u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x354d5c: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x354d5cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x354d60: 0xdfb700a8  ld          $s7, 0xA8($sp)
    ctx->pc = 0x354d60u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x354d64: 0xdfbe00b0  ld          $fp, 0xB0($sp)
    ctx->pc = 0x354d64u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x354d68: 0xdfbf00b8  ld          $ra, 0xB8($sp)
    ctx->pc = 0x354d68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x354d6c: 0x3e00008  jr          $ra
    ctx->pc = 0x354D6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x354D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354D6Cu;
        // 0x354d70: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x354D6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x354D74u;
    // 0x354d74: 0x0  nop
    ctx->pc = 0x354d74u;
    // NOP
    ctx->pc = 0x354d78u;
}
