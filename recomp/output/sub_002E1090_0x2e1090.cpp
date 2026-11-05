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

// Function: sub_002E1090
// Address: 0x2e1090 - 0x2e1148
void sub_002E1090_0x2e1090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E1090_0x2e1090");
#endif

    switch (ctx->pc) {
        case 0x2e10a8u: goto label_2e10a8;
        case 0x2e10bcu: goto label_2e10bc;
        case 0x2e10d4u: goto label_2e10d4;
        case 0x2e10fcu: goto label_2e10fc;
        case 0x2e1104u: goto label_2e1104;
        case 0x2e1118u: goto label_2e1118;
        case 0x2e1120u: goto label_2e1120;
        default: break;
    }

    ctx->pc = 0x2e1090u;

    // 0x2e1090: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e1090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e1094: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e1094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e1098: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e1098u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e109c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2e109cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2e10a0: 0xc0b7aee  jal         func_2DEBB8
    ctx->pc = 0x2E10A0u;
    SET_GPR_U32(ctx, 31, 0x2E10A8u);
    ctx->pc = 0x2E10A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E10A0u;
    // 0x2e10a4: 0xe7b40010  swc1        $f20, 0x10($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DEBB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DEBB8u, 0x2E10A0u, 0x2E10A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E10A8u;
label_2e10a8:
    // 0x2e10a8: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x2e10a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x2e10ac: 0x50400021  beql        $v0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x2E10ACu;
    {
        const bool branch_taken_0x2e10ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e10ac) {
            ctx->pc = 0x2E10B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E10ACu;
            // 0x2e10b0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E1134u;
            goto label_2e1134;
        }
    }
    ctx->pc = 0x2E10B4u;
    // 0x2e10b4: 0xc083ba8  jal         func_20EEA0
    ctx->pc = 0x2E10B4u;
    SET_GPR_U32(ctx, 31, 0x2E10BCu);
    ctx->pc = 0x2E10B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E10B4u;
    // 0x2e10b8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20EEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20EEA0u, 0x2E10B4u, 0x2E10BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E10BCu;
label_2e10bc:
    // 0x2e10bc: 0x3c030006  lui         $v1, 0x6
    ctx->pc = 0x2e10bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)6 << 16));
    // 0x2e10c0: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x2e10c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x2e10c4: 0x5443001b  bnel        $v0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x2E10C4u;
    {
        const bool branch_taken_0x2e10c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2e10c4) {
            ctx->pc = 0x2E10C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E10C4u;
            // 0x2e10c8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E1134u;
            goto label_2e1134;
        }
    }
    ctx->pc = 0x2E10CCu;
    // 0x2e10cc: 0xc0b849c  jal         func_2E1270
    ctx->pc = 0x2E10CCu;
    SET_GPR_U32(ctx, 31, 0x2E10D4u);
    ctx->pc = 0x2E10D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E10CCu;
    // 0x2e10d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1270u, 0x2E10CCu, 0x2E10D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E10D4u;
label_2e10d4:
    // 0x2e10d4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2e10d4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2e10d8: 0xc60000f4  lwc1        $f0, 0xF4($s0)
    ctx->pc = 0x2e10d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e10dc: 0x4600a045  abs.s       $f1, $f20
    ctx->pc = 0x2e10dcu;
    ctx->f[1] = FPU_ABS_S(ctx->f[20]);
    // 0x2e10e0: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x2e10e0u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x2e10e4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2e10e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e10e8: 0x0  nop
    ctx->pc = 0x2e10e8u;
    // NOP
    // 0x2e10ec: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x2E10ECu;
    {
        const bool branch_taken_0x2e10ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e10ec) {
            ctx->pc = 0x2E1110u;
            goto label_2e1110;
        }
    }
    ctx->pc = 0x2E10F4u;
    // 0x2e10f4: 0xc09997a  jal         func_2665E8
    ctx->pc = 0x2E10F4u;
    SET_GPR_U32(ctx, 31, 0x2E10FCu);
    ctx->pc = 0x2E10F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E10F4u;
    // 0x2e10f8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2665E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2665E8u, 0x2E10F4u, 0x2E10FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E10FCu;
label_2e10fc:
    // 0x2e10fc: 0xc099984  jal         func_266610
    ctx->pc = 0x2E10FCu;
    SET_GPR_U32(ctx, 31, 0x2E1104u);
    ctx->pc = 0x2E1100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E10FCu;
    // 0x2e1100: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x266610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266610u, 0x2E10FCu, 0x2E1104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1104u;
label_2e1104:
    // 0x2e1104: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2e1104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e1108: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2E1108u;
    {
        const bool branch_taken_0x2e1108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E110Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1108u;
        // 0x2e110c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1108) {
            ctx->pc = 0x2E1128u;
            goto label_2e1128;
        }
    }
    ctx->pc = 0x2E1110u;
label_2e1110:
    // 0x2e1110: 0xc099990  jal         func_266640
    ctx->pc = 0x2E1110u;
    SET_GPR_U32(ctx, 31, 0x2E1118u);
    ctx->pc = 0x2E1114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1110u;
    // 0x2e1114: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x266640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266640u, 0x2E1110u, 0x2E1118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1118u;
label_2e1118:
    // 0x2e1118: 0xc09998a  jal         func_266628
    ctx->pc = 0x2E1118u;
    SET_GPR_U32(ctx, 31, 0x2E1120u);
    ctx->pc = 0x2E111Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1118u;
    // 0x2e111c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x266628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266628u, 0x2E1118u, 0x2E1120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1120u;
label_2e1120:
    // 0x2e1120: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2e1120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e1124: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2e1124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2e1128:
    // 0x2e1128: 0xac6202b4  sw          $v0, 0x2B4($v1)
    ctx->pc = 0x2e1128u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 692), GPR_U32(ctx, 2));
    // 0x2e112c: 0xe61400f4  swc1        $f20, 0xF4($s0)
    ctx->pc = 0x2e112cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
    // 0x2e1130: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e1130u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2e1134:
    // 0x2e1134: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2e1134u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e1138: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x2e1138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e113c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E113Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E1140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E113Cu;
        // 0x2e1140: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E113Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E1144u;
    // 0x2e1144: 0x0  nop
    ctx->pc = 0x2e1144u;
    // NOP
    ctx->pc = 0x2e1148u;
}
