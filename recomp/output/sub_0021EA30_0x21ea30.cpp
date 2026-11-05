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

// Function: sub_0021EA30
// Address: 0x21ea30 - 0x21eb78
void sub_0021EA30_0x21ea30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021EA30_0x21ea30");
#endif

    switch (ctx->pc) {
        case 0x21ea4cu: goto label_21ea4c;
        case 0x21ea68u: goto label_21ea68;
        case 0x21ead4u: goto label_21ead4;
        case 0x21eadcu: goto label_21eadc;
        case 0x21eae4u: goto label_21eae4;
        case 0x21eb38u: goto label_21eb38;
        default: break;
    }

    ctx->pc = 0x21ea30u;

    // 0x21ea30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21ea30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21ea34: 0x2405020f  addiu       $a1, $zero, 0x20F
    ctx->pc = 0x21ea34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 527));
    // 0x21ea38: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21ea38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21ea3c: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x21ea3cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x21ea40: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x21ea40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x21ea44: 0xc087e84  jal         func_21FA10
    ctx->pc = 0x21EA44u;
    SET_GPR_U32(ctx, 31, 0x21EA4Cu);
    ctx->pc = 0x21EA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EA44u;
    // 0x21ea48: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FA10u, 0x21EA44u, 0x21EA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EA4Cu;
label_21ea4c:
    // 0x21ea4c: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x21ea4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x21ea50: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x21ea50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x21ea54: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x21ea54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x21ea58: 0x26041410  addiu       $a0, $s0, 0x1410
    ctx->pc = 0x21ea58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 5136));
    // 0x21ea5c: 0x24631908  addiu       $v1, $v1, 0x1908
    ctx->pc = 0x21ea5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6408));
    // 0x21ea60: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x21EA60u;
    SET_GPR_U32(ctx, 31, 0x21EA68u);
    ctx->pc = 0x21EA64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EA60u;
    // 0x21ea64: 0xae030190  sw          $v1, 0x190($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 400), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x21EA60u, 0x21EA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EA68u;
label_21ea68:
    // 0x21ea68: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x21ea68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x21ea6c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x21ea6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21ea70: 0x26041500  addiu       $a0, $s0, 0x1500
    ctx->pc = 0x21ea70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 5376));
    // 0x21ea74: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x21ea74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x21ea78: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x21ea78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x21ea7c: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x21ea7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
    // 0x21ea80: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x21ea80u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x21ea84: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x21ea84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21ea88: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x21ea88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x21ea8c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x21ea8cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x21ea90: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x21ea90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x21ea94: 0xe6141434  swc1        $f20, 0x1434($s0)
    ctx->pc = 0x21ea94u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5172), bits); }
    // 0x21ea98: 0xae0014e4  sw          $zero, 0x14E4($s0)
    ctx->pc = 0x21ea98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5348), GPR_U32(ctx, 0));
    // 0x21ea9c: 0xae0014e8  sw          $zero, 0x14E8($s0)
    ctx->pc = 0x21ea9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5352), GPR_U32(ctx, 0));
    // 0x21eaa0: 0xae0014f0  sw          $zero, 0x14F0($s0)
    ctx->pc = 0x21eaa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5360), GPR_U32(ctx, 0));
    // 0x21eaa4: 0xae0014f4  sw          $zero, 0x14F4($s0)
    ctx->pc = 0x21eaa4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5364), GPR_U32(ctx, 0));
    // 0x21eaa8: 0xae0014f8  sw          $zero, 0x14F8($s0)
    ctx->pc = 0x21eaa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5368), GPR_U32(ctx, 0));
    // 0x21eaac: 0xae0014fc  sw          $zero, 0x14FC($s0)
    ctx->pc = 0x21eaacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5372), GPR_U32(ctx, 0));
    // 0x21eab0: 0xe6011428  swc1        $f1, 0x1428($s0)
    ctx->pc = 0x21eab0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5160), bits); }
    // 0x21eab4: 0xe602142c  swc1        $f2, 0x142C($s0)
    ctx->pc = 0x21eab4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5164), bits); }
    // 0x21eab8: 0xe60014dc  swc1        $f0, 0x14DC($s0)
    ctx->pc = 0x21eab8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5340), bits); }
    // 0x21eabc: 0xe6001420  swc1        $f0, 0x1420($s0)
    ctx->pc = 0x21eabcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5152), bits); }
    // 0x21eac0: 0xe6001430  swc1        $f0, 0x1430($s0)
    ctx->pc = 0x21eac0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5168), bits); }
    // 0x21eac4: 0xe60014c0  swc1        $f0, 0x14C0($s0)
    ctx->pc = 0x21eac4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5312), bits); }
    // 0x21eac8: 0xe6031438  swc1        $f3, 0x1438($s0)
    ctx->pc = 0x21eac8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5176), bits); }
    // 0x21eacc: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x21EACCu;
    SET_GPR_U32(ctx, 31, 0x21EAD4u);
    ctx->pc = 0x21EAD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EACCu;
    // 0x21ead0: 0xe6031424  swc1        $f3, 0x1424($s0) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5156), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x21EACCu, 0x21EAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EAD4u;
label_21ead4:
    // 0x21ead4: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x21EAD4u;
    SET_GPR_U32(ctx, 31, 0x21EADCu);
    ctx->pc = 0x21EAD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EAD4u;
    // 0x21ead8: 0x26041520  addiu       $a0, $s0, 0x1520 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 5408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x21EAD4u, 0x21EADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EADCu;
label_21eadc:
    // 0x21eadc: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x21EADCu;
    SET_GPR_U32(ctx, 31, 0x21EAE4u);
    ctx->pc = 0x21EAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EADCu;
    // 0x21eae0: 0x26041530  addiu       $a0, $s0, 0x1530 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 5424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x21EADCu, 0x21EAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EAE4u;
label_21eae4:
    // 0x21eae4: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x21eae4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x21eae8: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x21eae8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x21eaec: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x21eaecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x21eaf0: 0x26021470  addiu       $v0, $s0, 0x1470
    ctx->pc = 0x21eaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 5232));
    // 0x21eaf4: 0x3c013fd9  lui         $at, 0x3FD9
    ctx->pc = 0x21eaf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16345 << 16));
    // 0x21eaf8: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x21eaf8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x21eafc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x21eafcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21eb00: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x21eb00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21eb04: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x21eb04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x21eb08: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x21eb08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21eb0c: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x21eb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x21eb10: 0xe6021540  swc1        $f2, 0x1540($s0)
    ctx->pc = 0x21eb10u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5440), bits); }
    // 0x21eb14: 0xe6011590  swc1        $f1, 0x1590($s0)
    ctx->pc = 0x21eb14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5520), bits); }
    // 0x21eb18: 0xe6001594  swc1        $f0, 0x1594($s0)
    ctx->pc = 0x21eb18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5524), bits); }
    // 0x21eb1c: 0xe61415a0  swc1        $f20, 0x15A0($s0)
    ctx->pc = 0x21eb1cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5536), bits); }
    // 0x21eb20: 0xae00155c  sw          $zero, 0x155C($s0)
    ctx->pc = 0x21eb20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5468), GPR_U32(ctx, 0));
    // 0x21eb24: 0xae001560  sw          $zero, 0x1560($s0)
    ctx->pc = 0x21eb24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5472), GPR_U32(ctx, 0));
    // 0x21eb28: 0xae001588  sw          $zero, 0x1588($s0)
    ctx->pc = 0x21eb28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5512), GPR_U32(ctx, 0));
    // 0x21eb2c: 0xae00158c  sw          $zero, 0x158C($s0)
    ctx->pc = 0x21eb2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5516), GPR_U32(ctx, 0));
    // 0x21eb30: 0xe6141598  swc1        $f20, 0x1598($s0)
    ctx->pc = 0x21eb30u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5528), bits); }
    // 0x21eb34: 0xe614159c  swc1        $f20, 0x159C($s0)
    ctx->pc = 0x21eb34u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5532), bits); }
label_21eb38:
    // 0x21eb38: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x21eb38u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21eb3c: 0x0  nop
    ctx->pc = 0x21eb3cu;
    // NOP
    // 0x21eb40: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x21eb40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x21eb44: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x21eb44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x21eb48: 0x2484000a  addiu       $a0, $a0, 0xA
    ctx->pc = 0x21eb48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10));
    // 0x21eb4c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x21eb4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x21eb50: 0xe440ffd8  swc1        $f0, -0x28($v0)
    ctx->pc = 0x21eb50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967256), bits); }
    // 0x21eb54: 0x461fff8  bgez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x21EB54u;
    {
        const bool branch_taken_0x21eb54 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x21EB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EB54u;
        // 0x21eb58: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21eb54) {
            ctx->pc = 0x21EB38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21eb38;
        }
    }
    ctx->pc = 0x21EB5Cu;
    // 0x21eb5c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x21eb5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21eb60: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x21eb60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21eb64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21eb64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21eb68: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x21eb68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x21eb6c: 0x3e00008  jr          $ra
    ctx->pc = 0x21EB6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21EB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EB6Cu;
        // 0x21eb70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21EB6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21EB74u;
    // 0x21eb74: 0x0  nop
    ctx->pc = 0x21eb74u;
    // NOP
    ctx->pc = 0x21eb78u;
}
